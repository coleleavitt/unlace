__int64 __fastcall sub_BFD20(int *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // eax
  __int16 v7; // dx
  bool v8; // zf
  const char *v9; // rdx
  int v10; // edx
  __int64 result; // rax
  unsigned __int16 v12; // ax
  __int16 v13; // [rsp+0h] [rbp-18h] BYREF
  __int16 v14; // [rsp+2h] [rbp-16h] BYREF
  int v15; // [rsp+4h] [rbp-14h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-10h]

  v6 = a1[1];
  v16 = __readfsqword(0x28u);
  v13 = v6 & 3 ^ 2;
  v15 = *a1;
  v7 = 1;
  if ( (v6 & 4) == 0 )
    v7 = 2 * ((v6 >> 3) & 1);
  v8 = *((_QWORD *)a1 + 2) == 0;
  v14 = v7;
  v9 = s1;
  if ( !v8 )
    v9 = *((const char **)a1 + 1);
  v10 = sub_8F730(
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
          &v15,
          v9,
          &v13,
          &v14,
          a6);
  result = 0;
  if ( v10 )
  {
    v12 = v13 ^ 2;
    v13 ^= 2u;
    if ( v14 == 1 )
    {
      v12 |= 4u;
      v13 = v12;
    }
    else if ( v14 == 2 )
    {
      v12 |= 8u;
      v13 = v12;
    }
    a1[1] = v12;
    if ( dbg )
    {
      if ( (unsigned __int8)netnode_inited() )
        dbg_save_exceptions();
    }
    return 1;
  }
  return result;
}

