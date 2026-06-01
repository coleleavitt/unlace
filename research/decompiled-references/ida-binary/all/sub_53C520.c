__int64 __fastcall sub_53C520(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r15
  __int64 v4; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 result; // rax
  const char *v14; // rsi
  _QWORD *v15; // [rsp+8h] [rbp-40h]

  v2 = (_QWORD *)(a1 + 104);
  v3 = *(_QWORD **)(a1 + 112);
  v15 = (_QWORD *)(a1 + 104);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = v3[5];
    if ( !v4 )
      break;
    v6 = *(const char **)a2;
    v7 = v3;
    v8 = &s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v3[2];
    v3 = (_QWORD *)v3[3];
    if ( v9 >= 0 )
    {
      v2 = v7;
      v3 = v10;
    }
    if ( !v3 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = &s1;
LABEL_4:
    v8 = (const char *)v3[4];
    v7 = v3;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v3[2];
    if ( !v12 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v2 = v3;
LABEL_14:
  result = 0xFFFFFFFFLL;
  if ( v2 == v15 )
    return result;
  if ( v2[5] )
  {
    v14 = (const char *)v2[4];
    if ( v4 )
    {
LABEL_17:
      if ( strcmp(*(const char **)a2, v14) >= 0 )
        return *((unsigned int *)v2 + 14);
    }
    else if ( strcmp(&s1, v14) >= 0 )
    {
      return *((unsigned int *)v2 + 14);
    }
    return 0xFFFFFFFFLL;
  }
  v14 = &s1;
  if ( v4 )
    goto LABEL_17;
  return *((unsigned int *)v2 + 14);
}
