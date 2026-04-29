__int64 __fastcall sub_65830(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ecx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r14
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // r15
  unsigned int *v14; // r13
  unsigned int *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r15
  char *v19; // [rsp+8h] [rbp-40h]

  sub_64340(a1 + 7, a2);
  v3 = a1[4];
  v4 = *(_DWORD *)(v3 + 64);
  if ( a2 >= v4 )
    sub_65460();
  v5 = (_DWORD *)a1[9];
  v6 = &v5[a1[10]];
  if ( v5 == v6 )
    goto LABEL_8;
  while ( *v5 != a2 )
  {
    if ( v6 == ++v5 )
      goto LABEL_8;
  }
  if ( v6 == v5 )
  {
LABEL_8:
    v8 = v4 - 1;
    if ( (_DWORD)v8 == a2 )
      return 0;
    v9 = *(_QWORD *)(v3 + 528);
    v10 = *(_QWORD *)(v9 + 8LL * a2);
    v11 = *(_QWORD *)(v10 + 352);
    if ( *(_QWORD *)(v10 + 48) )
    {
      if ( v11 )
        return 0;
      if ( *(_DWORD *)(v10 + 76) == 2 )
      {
        if ( !under_debugger )
          sub_383060(51770);
        BUG();
      }
LABEL_12:
      sub_64190(a1 + 7, a2);
      return 0;
    }
    v12 = *(_DWORD *)(v10 + 76);
    if ( v12 == 6 )
    {
      if ( v11 )
        return 0;
      goto LABEL_12;
    }
    if ( v12 == 2 )
    {
      if ( !v11 )
        goto LABEL_12;
      v13 = 4 * v11;
      v19 = (char *)qalloc_or_throw(v13, v3, v9, v8);
      memcpy(v19, *(const void **)(v10 + 344), v13);
      v14 = (unsigned int *)&v19[v13];
      if ( v13 )
      {
        v15 = (unsigned int *)v19;
        do
        {
          v16 = *(_QWORD *)(v10 + 64);
          v17 = *v15;
          if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 64) )
            sub_65460();
          sub_A8320(*(_QWORD *)(*(_QWORD *)(v16 + 528) + 8 * v17));
          ++v15;
        }
        while ( v14 != v15 );
      }
      v18 = *(_QWORD *)(v10 + 352);
      if ( v19 )
        qfree((__int64)v19);
      if ( v18 )
        return 0;
      v11 = *(_QWORD *)(v10 + 352);
    }
    if ( v11 )
    {
      sub_64190(a1 + 5, a2);
      return 0;
    }
    goto LABEL_12;
  }
  return 0;
}
