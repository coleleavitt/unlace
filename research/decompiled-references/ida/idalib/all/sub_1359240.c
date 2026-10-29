__int64 __fastcall sub_1359240(__int64 a1)
{
  void *v1; // r13
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // r12
  _QWORD *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v1 = (void *)(a1 + 120);
  *(_QWORD *)a1 = &off_2C43340;
  v3 = *(_QWORD **)(a1 + 120);
  v4 = *(unsigned int *)(a1 + 136);
  v5 = 40 * v4;
  if ( (_DWORD)v4 )
  {
    v6 = &v3[5 * v4];
    do
    {
      if ( *v3 != -4096 && *v3 != -8192 )
      {
        v7 = (_QWORD *)v3[1];
        if ( v7 != v3 + 3 )
          free(v7);
      }
      v3 += 5;
    }
    while ( v6 != v3 );
    v3 = *(_QWORD **)(a1 + 120);
    v5 = 40LL * *(unsigned int *)(a1 + 136);
  }
  operator delete(v3, v5, 8);
  v8 = *(void **)(a1 + 104);
  if ( v1 != v8 )
    free(v8);
  operator delete(*(_QWORD *)(a1 + 80), 8LL * *(unsigned int *)(a1 + 96), 8);
  v9 = *(void **)(a1 + 48);
  if ( v9 != (void *)(a1 + 64) )
    operator delete(v9);
  v10 = *(void **)(a1 + 16);
  if ( v10 != (void *)(a1 + 32) )
    operator delete(v10);
  return nullsub_670(a1);
}
