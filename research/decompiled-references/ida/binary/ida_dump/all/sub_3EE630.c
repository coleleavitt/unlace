char *__fastcall sub_3EE630(char *src, char a2)
{
  size_t v2; // rax
  size_t v3; // r14
  size_t v4; // r12
  size_t v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rbp
  char *result; // rax
  __int64 v9; // r14
  char *v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  unsigned __int64 v14; // [rsp+8h] [rbp-60h]
  char *s; // [rsp+10h] [rbp-58h]
  __int128 v16; // [rsp+18h] [rbp-50h]

  if ( src[2] != (a2 == 0 ? 95 : 109) || !(unsigned int)sub_3EA900(src, nullptr, 0) )
    return nullptr;
  v16 = 0;
  if ( src )
  {
    v2 = strlen(src);
    v3 = v2 + 1;
    v4 = v2;
    s = (char *)qvector_reserve();
    *(_QWORD *)&v16 = v3;
    memmove(s, src, v4);
    s[v4] = 0;
    v5 = v3;
    v6 = (__int64)s;
    if ( !a2 )
    {
      v7 = 2;
      if ( v3 )
      {
        v7 = v3 + 1;
        v5 = v3 - 1;
      }
      if ( !v7 )
        goto LABEL_8;
      goto LABEL_26;
    }
    if ( v3 )
    {
      v9 = v3 + 1;
      v10 = strrchr(s, 95);
      v11 = v16 - 1;
      if ( v10 )
      {
        v9 = v16 + 1;
        v12 = v10 - s;
        if ( *((_QWORD *)&v16 + 1) >= (unsigned __int64)(v16 + 1) )
          goto LABEL_19;
        goto LABEL_23;
      }
    }
    else
    {
      v11 = 0;
      v9 = 2;
    }
    if ( !v9 )
    {
      *(_QWORD *)&v16 = 0;
      s[v11 + 1] = 0;
LABEL_21:
      s[v11] = 105;
      goto LABEL_9;
    }
    v12 = -1;
LABEL_23:
    v14 = v11;
    v13 = qvector_reserve();
    v11 = v14;
    s = (char *)v13;
    v6 = v13;
    v5 = v14 + 1;
LABEL_19:
    *(_QWORD *)&v16 = v9;
    *(_BYTE *)(v6 + v5) = 0;
    if ( v12 < v11 )
    {
      memmove(&s[v12 + 1], &s[v12], v11 - v12);
      v11 = v12;
    }
    goto LABEL_21;
  }
  if ( a2 )
  {
    v12 = -1;
    v9 = 2;
    v11 = 0;
    goto LABEL_23;
  }
  v7 = 2;
  v5 = 0;
LABEL_26:
  s = (char *)qvector_reserve();
  v6 = (__int64)s;
LABEL_8:
  *(_QWORD *)&v16 = v7;
  *(_BYTE *)(v6 + v5) = 105;
  s[v5 + 1] = 0;
LABEL_9:
  result = s;
  if ( (unsigned __int64)v16 < *((_QWORD *)&v16 + 1) && (_QWORD)v16 && s )
  {
    result = (char *)qrealloc();
    if ( !result )
      return s;
  }
  return result;
}
