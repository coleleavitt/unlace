_QWORD *__fastcall sub_5394C0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rbp
  const char *v6; // r14
  const char *v7; // r15
  __int64 i; // r12
  __int64 v9; // r12
  unsigned __int64 v10; // rax

  v2 = (_QWORD *)(a1 + 8);
  v3 = *(_QWORD **)(a1 + 16);
  if ( !v3 )
    return v2;
  v4 = *a2;
  while ( 1 )
  {
    while ( v3[4] < v4 )
    {
LABEL_6:
      v3 = (_QWORD *)v3[3];
      if ( !v3 )
        return v2;
    }
    if ( v3[4] == v4 )
    {
      v6 = (const char *)a2[1];
      v7 = (const char *)v3[5];
      if ( strcmp(v7, v6) < 0 )
        goto LABEL_6;
      if ( strcmp(v6, v7) >= 0 )
        break;
    }
    v2 = v3;
    v3 = (_QWORD *)v3[2];
    if ( !v3 )
      return v2;
  }
  for ( i = v3[3]; i; i = *(_QWORD *)(i + 16) )
  {
    while ( v4 >= *(_QWORD *)(i + 32) && (v4 != *(_QWORD *)(i + 32) || strcmp(v6, *(const char **)(i + 40)) >= 0) )
    {
      i = *(_QWORD *)(i + 24);
      if ( !i )
        goto LABEL_16;
    }
  }
LABEL_16:
  v9 = v3[2];
  while ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 < v4 )
    {
LABEL_22:
      v9 = *(_QWORD *)(v9 + 24);
    }
    else
    {
      while ( v4 != v10 || strcmp(*(const char **)(v9 + 40), v6) >= 0 )
      {
        v3 = (_QWORD *)v9;
        v9 = *(_QWORD *)(v9 + 16);
        if ( !v9 )
          return v3;
        v10 = *(_QWORD *)(v9 + 32);
        if ( v10 < v4 )
          goto LABEL_22;
      }
      v9 = *(_QWORD *)(v9 + 24);
    }
  }
  return v3;
}
