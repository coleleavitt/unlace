__int64 __fastcall sub_606240(_QWORD *a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v7; // r13
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  const char *v16; // rsi
  const char *v17; // rdi
  int v18; // edx
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax

  v4 = (_QWORD *)a1[7];
  if ( !v4 )
    goto LABEL_28;
  v5 = a1 + 6;
  v7 = v5;
  do
  {
    while ( 1 )
    {
      v8 = v4[2];
      v9 = v4[3];
      if ( v4[4] < (unsigned __int64)a3 )
        break;
      v7 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v8 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v9 );
LABEL_6:
  if ( v7 == v5 )
    goto LABEL_28;
  if ( (unsigned __int64)a3 < v7[4] )
    goto LABEL_28;
  v10 = (_QWORD *)a2[7];
  v11 = a2 + 6;
  if ( !v10 )
    goto LABEL_28;
  do
  {
    while ( 1 )
    {
      v12 = v10[2];
      v13 = v10[3];
      if ( v10[4] < (unsigned __int64)a3 )
        break;
      v11 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v12 )
        goto LABEL_13;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v13 );
LABEL_13:
  if ( a2 + 6 == v11 || (unsigned __int64)a3 < v11[4] )
LABEL_28:
    sub_606130();
  result = 1;
  if ( *((_DWORD *)v7 + 10) == *((_DWORD *)v11 + 10) )
  {
    v15 = v7[7];
    if ( v11[7] )
    {
      v16 = (const char *)v11[6];
      v17 = haystack;
      if ( v15 )
        v17 = (const char *)v7[6];
    }
    else
    {
      v16 = haystack;
      if ( !v15 )
      {
LABEL_20:
        v19 = haystack;
        v20 = a2[11] + 24LL * *((unsigned int *)v11 + 18);
        if ( *(_QWORD *)(v20 + 8) )
          v19 = *(const char **)v20;
        v21 = a1[11] + 24LL * *((unsigned int *)v7 + 18);
        if ( *(_QWORD *)(v21 + 8) )
          return strcasecmp(*(const char **)v21, v19) != 0;
        else
          return strcasecmp(haystack, v19) != 0;
      }
      v17 = (const char *)v7[6];
    }
    v18 = strcmp(v17, v16);
    result = 1;
    if ( v18 )
      return result;
    goto LABEL_20;
  }
  return result;
}

