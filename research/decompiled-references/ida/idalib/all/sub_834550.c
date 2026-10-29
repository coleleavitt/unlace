__int64 __fastcall sub_834550(void **a1)
{
  void *v2; // rbx
  const void *v3; // rbp
  void *v4; // rdi
  unsigned int v5; // ebx
  const char *v7; // rax
  int v8; // r9d
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // r13
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // [rsp+8h] [rbp-1040h] BYREF
  char s[4104]; // [rsp+10h] [rbp-1038h] BYREF
  unsigned __int64 v16; // [rsp+1018h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_842D10(&v14);
  v2 = (void *)xmmword_2CD4EA8;
  if ( (unsigned __int64)xmmword_2CD4EA8 <= 1 )
  {
    v7 = sub_834420();
    qstrncpy(s, v7, 4096);
    if ( s[0] )
    {
      qmakepath((unsigned int)s, 4096, (unsigned int)s, (unsigned int)".idapro", 0, v8);
      if ( (unsigned __int8)qfileexist(s, 4096) )
      {
        v9 = strlen(s);
        v10 = v9;
        if ( !v9 )
        {
LABEL_11:
          *(_QWORD *)&xmmword_2CD4EA8 = 0;
          v5 = 0;
          goto LABEL_7;
        }
      }
      else
      {
        qmkdir(s, 511);
        v9 = strlen(s);
        v10 = v9;
        if ( !v9 )
          goto LABEL_11;
      }
      v11 = v9 + 1;
      v12 = qword_2CD4EA0;
      if ( *((_QWORD *)&xmmword_2CD4EA8 + 1) < v9 + 1 )
      {
        qword_2CD4EA0 = (void *)qvector_reserve(&qword_2CD4EA0, qword_2CD4EA0, v9 + 1, 1);
        v12 = qword_2CD4EA0;
      }
      *(_QWORD *)&xmmword_2CD4EA8 = v11;
      memmove(v12, s, v10);
      *((_BYTE *)qword_2CD4EA0 + v10) = 0;
    }
    v2 = (void *)xmmword_2CD4EA8;
    if ( (unsigned __int64)xmmword_2CD4EA8 <= 1 )
    {
      v5 = 0;
      goto LABEL_7;
    }
  }
  if ( a1 != &qword_2CD4EA0 )
  {
    v3 = qword_2CD4EA0;
    v4 = *a1;
    if ( a1[2] < v2 )
    {
      v13 = qvector_reserve(a1, *a1, v2, 1);
      *a1 = (void *)v13;
      v4 = (void *)v13;
    }
    a1[1] = v2;
    memmove(v4, v3, (size_t)v2 - 1);
    *((_BYTE *)v2 + (_QWORD)*a1 - 1) = 0;
  }
  v5 = 1;
LABEL_7:
  qmutex_unlock(v14);
  return v5;
}
