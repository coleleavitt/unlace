unsigned __int64 __fastcall sub_508700(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  unsigned __int64 v4; // r13
  char *v5; // rdi
  __int64 v6; // r12
  __int64 j; // rbp
  char *v8; // rbx
  void *v9; // rdi
  __int64 v10; // rax
  void *v11; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v13; // r13
  char *v14; // rdi
  __int64 v15; // r12
  __int64 i; // rbp
  char *v17; // rbx
  void *v18; // rdi
  __int64 v19; // rax
  void *v20; // rdi

  v2 = *(int *)(a1 + 8);
  if ( (_DWORD)v2 == -1 )
    v3 = 0;
  else
    v3 = *(_QWORD *)(switch_dbctx(v2) + 1592);
  v4 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(v3 + 64) == 3 )
  {
    v14 = *(char **)(v3 + 16);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v3 + 24);
      if ( v15 )
      {
        for ( i = 0; i != v15; ++i )
        {
          v17 = &v14[64 * i];
          v18 = *((void **)v17 + 4);
          if ( v18 )
          {
            *((_QWORD *)v17 + 5) = 0;
            qfree(v18);
          }
          v19 = *((_QWORD *)v17 + 3);
          if ( v19 )
            --*(_DWORD *)(v19 + 12);
          v20 = *(void **)v17;
          if ( *(_QWORD *)v17 )
          {
            *((_QWORD *)v17 + 1) = 0;
            qfree(v20);
          }
          v14 = *(char **)(v3 + 16);
        }
      }
      *(_QWORD *)(v3 + 24) = 0;
      qfree(v14);
      *(_QWORD *)(v3 + 16) = 0;
      *(_QWORD *)(v3 + 32) = 0;
    }
  }
  v5 = *(char **)(v3 + 88);
  if ( !v5 )
  {
    result = *(_QWORD *)(v3 + 24);
    if ( result >= v4 )
      goto LABEL_15;
    v13 = v4 - result;
    if ( *(_QWORD *)(v3 + 104) >= v13 )
      goto LABEL_15;
LABEL_31:
    result = qvector_reserve(v3 + 88, 0, v13, 64);
    *(_QWORD *)(v3 + 88) = result;
    goto LABEL_15;
  }
  v6 = *(_QWORD *)(v3 + 96);
  if ( v6 )
  {
    for ( j = 0; j != v6; ++j )
    {
      v8 = &v5[64 * j];
      v9 = *((void **)v8 + 4);
      if ( v9 )
      {
        *((_QWORD *)v8 + 5) = 0;
        qfree(v9);
      }
      v10 = *((_QWORD *)v8 + 3);
      if ( v10 )
        --*(_DWORD *)(v10 + 12);
      v11 = *(void **)v8;
      if ( *(_QWORD *)v8 )
      {
        *((_QWORD *)v8 + 1) = 0;
        qfree(v11);
      }
      v5 = *(char **)(v3 + 88);
    }
  }
  *(_QWORD *)(v3 + 96) = 0;
  qfree(v5);
  result = *(_QWORD *)(v3 + 24);
  *(_QWORD *)(v3 + 88) = 0;
  *(_QWORD *)(v3 + 104) = 0;
  if ( result < v4 )
  {
    v13 = v4 - result;
    goto LABEL_31;
  }
LABEL_15:
  *(_DWORD *)(v3 + 64) = 4;
  return result;
}

