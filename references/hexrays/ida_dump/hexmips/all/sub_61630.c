__int64 __fastcall sub_61630(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ecx
  _DWORD *v5; // rax
  _DWORD *v6; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  size_t v11; // r15
  unsigned int *v12; // r13
  unsigned int *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r15
  char *v17; // [rsp+8h] [rbp-40h]

  sub_60140(a1 + 7, a2);
  v3 = a1[4];
  v4 = *(_DWORD *)(v3 + 64);
  if ( a2 >= v4 )
    sub_61260();
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
    if ( v4 - 1 == a2 )
      return 0;
    v8 = *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2);
    v9 = *(_QWORD *)(v8 + 352);
    if ( *(_QWORD *)(v8 + 48) )
    {
      if ( v9 )
        return 0;
      if ( *(_DWORD *)(v8 + 76) == 2 )
      {
        if ( !under_debugger )
          sub_37E160(51770);
        BUG();
      }
LABEL_12:
      sub_5FF90(a1 + 7, a2);
      return 0;
    }
    v10 = *(_DWORD *)(v8 + 76);
    if ( v10 == 6 )
    {
      if ( v9 )
        return 0;
      goto LABEL_12;
    }
    if ( v10 == 2 )
    {
      if ( !v9 )
        goto LABEL_12;
      v11 = 4 * v9;
      v17 = (char *)qalloc_or_throw(v11);
      memcpy(v17, *(const void **)(v8 + 344), v11);
      v12 = (unsigned int *)&v17[v11];
      if ( v11 )
      {
        v13 = (unsigned int *)v17;
        do
        {
          v14 = *(_QWORD *)(v8 + 64);
          v15 = *v13;
          if ( (unsigned int)v15 >= *(_DWORD *)(v14 + 64) )
            sub_61260();
          sub_A4120(*(_QWORD *)(*(_QWORD *)(v14 + 528) + 8 * v15));
          ++v13;
        }
        while ( v12 != v13 );
      }
      v16 = *(_QWORD *)(v8 + 352);
      if ( v17 )
        qfree(v17);
      if ( v16 )
        return 0;
      v9 = *(_QWORD *)(v8 + 352);
    }
    if ( v9 )
    {
      sub_5FF90(a1 + 5, a2);
      return 0;
    }
    goto LABEL_12;
  }
  return 0;
}
