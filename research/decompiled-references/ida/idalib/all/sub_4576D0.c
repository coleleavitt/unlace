_QWORD *__fastcall sub_4576D0(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r15
  _QWORD *v3; // r12
  __int64 v4; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbx
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v15; // rdi
  _QWORD *v16; // [rsp+8h] [rbp-40h]

  if ( !a1[34] )
    return nullptr;
  v2 = (_QWORD *)a1[31];
  v3 = a1 + 30;
  v16 = a1 + 30;
  if ( !v2 )
    return v2;
  v4 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = v2[5];
    if ( !v4 )
      break;
    v6 = *(const char **)a2;
    v7 = v2;
    v8 = haystack;
    if ( v11 )
      goto LABEL_5;
LABEL_6:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v2[2];
    v2 = (_QWORD *)v2[3];
    if ( v9 >= 0 )
    {
      v3 = v7;
      v2 = v10;
    }
    if ( !v2 )
      goto LABEL_15;
  }
  if ( v11 )
  {
LABEL_13:
    v6 = haystack;
LABEL_5:
    v8 = (const char *)v2[4];
    v7 = v2;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v12 = v2[2];
    if ( !v12 )
      break;
    v3 = v2;
    v2 = (_QWORD *)v2[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_13;
  }
  v3 = v2;
LABEL_15:
  v2 = nullptr;
  if ( v16 != v3 )
  {
    if ( v3[5] )
    {
      v13 = (const char *)v3[4];
      v15 = haystack;
      if ( v4 )
        goto LABEL_23;
    }
    else
    {
      v13 = haystack;
      if ( !v4 )
        return v3 + 7;
LABEL_23:
      v15 = *(const char **)a2;
    }
    if ( strcmp(v15, v13) >= 0 )
      return v3 + 7;
    else
      return nullptr;
  }
  return v2;
}
