void __fastcall sub_11D7C00(__int64 a1)
{
  int v2; // eax
  char *v3; // rdi
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  __int64 v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi

  *(_QWORD *)a1 = off_2C38758;
  v2 = *(_DWORD *)(a1 + 2540);
  v3 = *(char **)(a1 + 2528);
  if ( v2 )
  {
    v4 = *(_DWORD *)(a1 + 2536);
    if ( v4 )
    {
      v5 = 0;
      v6 = 8LL * (unsigned int)(v4 - 1) + 8;
      do
      {
        v7 = *(_QWORD **)&v3[v5];
        if ( v7 != (_QWORD *)-8LL && v7 )
        {
          v8 = (_QWORD *)v7[1];
          v9 = *v7 + 41LL;
          if ( v8 != v7 + 3 )
            operator delete(v8);
          operator delete(v7, v9, 8);
          v3 = *(char **)(a1 + 2528);
        }
        v5 += 8;
      }
      while ( v6 != v5 );
    }
  }
  free(v3);
  v10 = *(void **)(a1 + 2496);
  if ( v10 != (void *)(a1 + 2512) )
    operator delete(v10);
  v11 = *(void **)(a1 + 2464);
  if ( v11 != (void *)(a1 + 2480) )
    operator delete(v11);
  v12 = *(void **)(a1 + 2432);
  if ( v12 != (void *)(a1 + 2448) )
    operator delete(v12);
  v13 = *(void **)(a1 + 2400);
  if ( v13 != (void *)(a1 + 2416) )
    operator delete(v13);
  sub_112BEE0(a1);
}
