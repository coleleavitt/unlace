_BOOL8 __fastcall sub_44FDC0(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, _QWORD *a5)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _BOOL8 result; // rax
  __int64 v10; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  int v13; // edx
  const char *v14; // rsi
  const char *v15; // rdi

  v5 = (_QWORD *)a1[7];
  if ( !v5 )
    goto LABEL_28;
  a5 = a1 + 6;
  v6 = a1 + 6;
  do
  {
    while ( 1 )
    {
      a1 = (_QWORD *)v5[2];
      a4 = v5[3];
      if ( v5[4] < a3 )
        break;
      v6 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !a1 )
        goto LABEL_6;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( a4 );
LABEL_6:
  if ( a5 == v6 )
    goto LABEL_28;
  if ( a3 < v6[4] )
    goto LABEL_28;
  v7 = *(_QWORD **)(a2 + 56);
  a1 = (_QWORD *)(a2 + 48);
  v8 = (_QWORD *)(a2 + 48);
  if ( !v7 )
    goto LABEL_28;
  do
  {
    while ( 1 )
    {
      a2 = v7[2];
      a4 = v7[3];
      if ( v7[4] < a3 )
        break;
      v8 = v7;
      v7 = (_QWORD *)v7[2];
      if ( !a2 )
        goto LABEL_13;
    }
    v7 = (_QWORD *)v7[3];
  }
  while ( a4 );
LABEL_13:
  if ( a1 == v8 || a3 < v8[4] )
LABEL_28:
    sub_44E230(a1, a2, a3, a4, a5);
  result = 1;
  if ( v6[5] == v8[5] )
  {
    v10 = v6[7];
    if ( v8[7] )
    {
      v11 = (const char *)v8[6];
      v12 = haystack;
      if ( !v10 )
        goto LABEL_20;
    }
    else
    {
      v11 = haystack;
      if ( !v10 )
      {
LABEL_21:
        v14 = haystack;
        if ( v8[10] )
          v14 = (const char *)v8[9];
        v15 = haystack;
        if ( v6[10] )
          v15 = (const char *)v6[9];
        return strcmp(v15, v14) != 0;
      }
    }
    v12 = (const char *)v6[6];
LABEL_20:
    v13 = strcmp(v12, v11);
    result = 1;
    if ( v13 )
      return result;
    goto LABEL_21;
  }
  return result;
}

