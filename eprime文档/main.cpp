#include <iostream>

// 宏定义确定题目数量
#define MAX_TOPIC_NUM 10
// 题目计数值
unsigned int TopicCnt;
// 存放正确的题目答案
char CorrectTopicAnswer[MAX_TOPIC_NUM]={'A','C','B','A','D','A','C','B','A','D'};

int main()
{
	char name[10];
	char answer[10];
	// 初始化计数值为0
	TopicCnt = 0;
	
	while(TopicCnt < MAX_TOPIC_NUM)
	{
		// 显示交互代码，显示题目具体内容
		cout << "显示题目内容";
		
		// 显示交互代码，提示用户输入名称
		cout << "请输入您的名称： ";
		
		// 等待用户输入名称，并输入值存放到name数组中
		cin >> name;
		
		// 判定用户输入的值是否是 "WE"
		if( name[0] == 'W' && name[1] == 'E')
		{
			cout << "呈现正确答案";
		}
		else if( name[0] == 'P' && name[1] == 'S')//判定用户输入的值是否是 "PS"
		{
			cout << "请输入正确答案：";
			
			// 等待用户输入答案，并将用户答案存放到answer数组中
			cin >> answer;
			
			// 判定用户输入的答案是否与标准答案匹配
			if( answer[0] == CorrectTopicAnswer[TopicCnt] )
			{
				cout << "恭喜 答案正确";
			}
			else
			{
				cout << "正确答案为：";
				cout << "呈现正确答案";
			}
		}
		// 题目计数递增1
		TopicCnt++;
	}
}
