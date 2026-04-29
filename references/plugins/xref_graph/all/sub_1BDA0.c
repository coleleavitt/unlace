__int64 __fastcall sub_1BDA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int *v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rbx
  __int64 *v10; // r12
  __int64 v11; // r13
  const char *v12; // rsi
  const char *v13; // rdi
  __int64 v14; // rbp
  __int64 v15; // rax

  v7 = (int *)a1[217];
  if ( !v7 || *v7 > 1 )
  {
    sub_1B8E0((__int64)(a1 + 217), 0, 0, 0, a5, a6);
    v7 = (int *)a1[217];
  }
  v8 = (__int64 *)a1[218];
  v9 = v8;
  if ( !v7 || *v7 > 1 )
  {
    sub_1B8E0((__int64)(a1 + 217), 0, 0, 0, a5, a6);
    v8 = (__int64 *)a1[218];
  }
  v10 = &v8[a1[219]];
  if ( v9 != v10 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v14 = *v9;
      v15 = *(_QWORD *)(*v9 + 32);
      if ( !v11 )
        break;
      v12 = *(const char **)a2;
      v13 = s1;
      if ( v15 )
        goto LABEL_15;
LABEL_10:
      if ( !strcmp(v13, v12) )
        return v14;
      if ( v10 == ++v9 )
        return 0;
    }
    if ( !v15 )
      return v14;
    v12 = s1;
LABEL_15:
    v13 = *(const char **)(v14 + 24);
    goto LABEL_10;
  }
  return 0;
}
