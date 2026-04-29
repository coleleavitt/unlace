char *__fastcall sub_3EE630(char *src, char a2)
{
  int v2; // edx
  char *v3; // rbx
  size_t v4; // rax
  size_t v5; // r14
  size_t v6; // r12
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rbp
  char *result; // rax
  unsigned __int64 v11; // r14
  char *v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  char *v15; // rax
  unsigned __int64 v16; // [rsp+8h] [rbp-60h]
  unsigned __int64 v17; // [rsp+8h] [rbp-60h]
  char *s; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v2 = src[2];
  v20 = __readfsqword(0x28u);
  if ( v2 != (a2 == 0 ? 95 : 109) )
    return nullptr;
  v3 = src;
  if ( !(unsigned int)sub_3EA900(src, nullptr, 0) )
    return nullptr;
  s = nullptr;
  v19 = 0;
  if ( src )
  {
    v4 = strlen(src);
    v5 = v4 + 1;
    v6 = v4;
    s = (char *)qvector_reserve((__int64)&s, 0, v4 + 1, 1);
    *(_QWORD *)&v19 = v5;
    memmove(s, src, v6);
    s[v6] = 0;
    v8 = *((_QWORD *)&v19 + 1);
    v7 = v19;
    v3 = s;
    if ( !a2 )
    {
      v9 = 2;
      if ( (_QWORD)v19 )
      {
        v9 = v19 + 1;
        v7 = v19 - 1;
      }
      if ( *((_QWORD *)&v19 + 1) >= v9 )
        goto LABEL_8;
      goto LABEL_26;
    }
    if ( (_QWORD)v19 )
    {
      v16 = v19 - 1;
      v11 = v19 + 1;
      v12 = strrchr(s, 95);
      v13 = v16;
      if ( v12 )
      {
        v11 = v7 + 1;
        v14 = v12 - v3;
        if ( v8 >= v7 + 1 )
          goto LABEL_19;
        goto LABEL_23;
      }
    }
    else
    {
      v13 = 0;
      v11 = 2;
    }
    if ( v8 >= v11 )
    {
      *(_QWORD *)&v19 = v11;
      v3[v13 + 1] = 0;
LABEL_21:
      s[v13] = 105;
      goto LABEL_9;
    }
    v14 = -1;
LABEL_23:
    v17 = v13;
    v15 = (char *)qvector_reserve((__int64)&s, (__int64)v3, v11, 1);
    v13 = v17;
    s = v15;
    v3 = v15;
    v7 = v17 + 1;
LABEL_19:
    *(_QWORD *)&v19 = v11;
    v3[v7] = 0;
    if ( v14 < v13 )
    {
      memmove(&s[v14 + 1], &s[v14], v13 - v14);
      v13 = v14;
    }
    goto LABEL_21;
  }
  if ( a2 )
  {
    v14 = -1;
    v11 = 2;
    v13 = 0;
    goto LABEL_23;
  }
  v9 = 2;
  v7 = 0;
LABEL_26:
  s = (char *)qvector_reserve((__int64)&s, (__int64)v3, v9, 1);
  v3 = s;
LABEL_8:
  *(_QWORD *)&v19 = v9;
  v3[v7] = 105;
  s[v7 + 1] = 0;
LABEL_9:
  result = s;
  if ( (unsigned __int64)v19 < *((_QWORD *)&v19 + 1) && (_QWORD)v19 && s )
  {
    result = (char *)qrealloc();
    if ( !result )
      return s;
  }
  return result;
}
