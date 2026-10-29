_QWORD *__fastcall sub_78FF90(__int64 a1, const char **a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  const char *v4; // r12
  int v5; // eax
  __int64 v6; // rbp
  const char *v7; // rbp
  __int64 i; // r14
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rdx

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return v2;
  v4 = *a2;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = (const char *)v3[4];
      if ( strcmp(v7, v4) >= 0 )
        break;
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        return v2;
    }
    v5 = strcmp(v4, v7);
    v6 = v3[2];
    if ( v5 >= 0 )
      break;
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( !v6 )
      return v2;
  }
  for ( i = v3[3]; i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v10 = strcmp(v4, *(const char **)(i + 32));
      v11 = *(_QWORD *)(i + 24);
      if ( v10 < 0 )
        break;
      i = *(_QWORD *)(i + 24);
      if ( !v11 )
        goto LABEL_13;
    }
  }
LABEL_13:
  while ( v6 )
  {
    while ( 1 )
    {
      v12 = strcmp(*(const char **)(v6 + 32), v4);
      v13 = *(_QWORD *)(v6 + 16);
      if ( v12 < 0 )
        break;
      v3 = (_QWORD *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      if ( !v13 )
        return v3;
    }
    v6 = *(_QWORD *)(v6 + 24);
  }
  return v3;
}

