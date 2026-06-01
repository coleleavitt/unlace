__int64 __fastcall sub_C0470(unsigned int *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  __int16 v3; // dx
  bool v4; // zf
  const char *v5; // rdx
  int v6; // edx
  __int64 result; // rax
  unsigned __int16 v8; // ax
  __int16 v9; // [rsp+Ch] [rbp-1Ch] BYREF
  __int16 v10; // [rsp+Eh] [rbp-1Ah] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-18h] BYREF

  v1 = a1[1];
  v2 = *a1;
  v11[1] = __readfsqword(0x28u);
  v11[0] = v2;
  v9 = v1 & 3 ^ 2;
  v3 = 1;
  if ( (v1 & 4) == 0 )
    v3 = 2 * ((v1 >> 3) & 1);
  v4 = *((_QWORD *)a1 + 2) == 0;
  v10 = v3;
  v5 = s1;
  if ( !v4 )
    v5 = *((const char **)a1 + 1);
  v6 = sub_8F810(
         (__int64)"@0:1414[]\n"
                  "Exception handling\n"
                  "Code: %N\n"
                  "Name: %A\n"
                  "<#Suspend when the exception occurs#~S~uspend program:C>\n"
                  "<#Let the application handle the exception#~P~ass to application:C>>\n"
                  "Report:\n"
                  "<#Open a warning with the exception that just occurred#~W~arn exception:R>\n"
                  "<#Log exception informations to output window#~L~og exception:R>\n"
                  "<#Do not warn, or log exceptions to output window#Silent, do ~n~ot warn or log:R>>\n",
         v11,
         v5,
         &v9,
         &v10);
  result = 0;
  if ( v6 )
  {
    v8 = v9 ^ 2;
    v9 ^= 2u;
    if ( v10 == 1 )
    {
      v8 |= 4u;
      v9 = v8;
    }
    else if ( v10 == 2 )
    {
      v8 |= 8u;
      v9 = v8;
    }
    a1[1] = v8;
    if ( dbg )
    {
      if ( (unsigned __int8)netnode_inited() )
        dbg_save_exceptions();
    }
    return 1;
  }
  return result;
}

