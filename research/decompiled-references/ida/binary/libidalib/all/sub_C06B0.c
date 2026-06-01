__int64 __fastcall sub_C06B0(unsigned int a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r12
  unsigned __int16 v4; // cx
  const char *v5; // rsi
  const char *v6; // rsi
  unsigned int v7; // ebx
  size_t v9; // r13
  __int16 v10; // [rsp+0h] [rbp-64h] BYREF
  __int16 v11; // [rsp+2h] [rbp-62h] BYREF
  __int64 v12; // [rsp+4h] [rbp-60h] BYREF
  void *v13; // [rsp+Ch] [rbp-58h] BYREF
  __int128 v14; // [rsp+14h] [rbp-50h]
  unsigned __int64 v15; // [rsp+24h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v10 = 3;
  v11 = 0;
  v13 = nullptr;
  v14 = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2;
    if ( v2 )
    {
      v9 = v2 + 1;
      v13 = (void *)qvector_reserve();
      *(_QWORD *)&v14 = v9;
      memmove(v13, a2, v3);
      *((_BYTE *)v13 + v3) = 0;
    }
  }
  v12 = a1;
  while ( 1 )
  {
    if ( !(unsigned int)sub_8F810(
                          (__int64)"@0:1414[]\n"
                                   "New exception\n"
                                   "\n"
                                   "<#Exception mnemonic name#Name:q:256:30::>\n"
                                   "<#Exception code#Code:N::30::>\n"
                                   "<#Suspend when the exception occurs#~S~uspend program:C>\n"
                                   "<#Let the application handle the exception#~P~ass to application:C>>\n"
                                   "Report:\n"
                                   "<#Open a warning with the exception that just occurred#~W~arn exception:R>\n"
                                   "<#Log exception informations to output window#~L~og exception:R>\n"
                                   "<#Do not warn, or log exceptions to output window#Silent, do ~n~ot warn or log:R>>\n",
                          &v13,
                          &v12,
                          &v10,
                          &v11) )
    {
      v7 = 0;
      goto LABEL_15;
    }
    v4 = v10 ^ 2;
    v10 ^= 2u;
    if ( v11 == 1 )
    {
      v4 |= 4u;
      v10 = v4;
    }
    else if ( v11 == 2 )
    {
      v4 |= 8u;
      v10 = v4;
    }
    v5 = s1;
    if ( (_QWORD)v14 )
      v5 = (const char *)v13;
    v6 = sub_BF2D0(v12, v5, nullptr, v4);
    if ( !v6 )
      break;
    sub_92200((__int64)"AUTOHIDE NONE\n%s", v6);
  }
  v7 = 1;
LABEL_15:
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree();
  }
  return v7;
}

