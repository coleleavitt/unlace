void __fastcall sub_11F0F60(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  char *v8; // rdi
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // r14
  _QWORD *v12; // rbp
  _QWORD *v13; // rdi
  __int64 v14; // r13
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi

  *(_QWORD *)a1 = off_2C396F8;
  v2 = *(void **)(a1 + 3856);
  if ( v2 != (void *)(a1 + 3872) )
    operator delete(v2);
  if ( *(_BYTE *)(a1 + 3840) )
    sub_11F0AD0(a1 + 2768);
  v3 = *(void **)(a1 + 2704);
  if ( v3 != (void *)(a1 + 2720) )
    operator delete(v3);
  if ( *(_BYTE *)(a1 + 2688) )
  {
    v8 = *(char **)(a1 + 2648);
    if ( *(_DWORD *)(a1 + 2660) )
    {
      v9 = *(_DWORD *)(a1 + 2656);
      if ( v9 )
      {
        v10 = 0;
        v11 = 8LL * (unsigned int)(v9 - 1) + 8;
        do
        {
          v12 = *(_QWORD **)&v8[v10];
          if ( v12 != (_QWORD *)-8LL && v12 )
          {
            v13 = (_QWORD *)v12[1];
            v14 = *v12 + 41LL;
            if ( v13 != v12 + 3 )
              operator delete(v13);
            operator delete(v12, v14, 8);
            v8 = *(char **)(a1 + 2648);
          }
          v10 += 8;
        }
        while ( v11 != v10 );
      }
    }
    free(v8);
    v15 = *(void **)(a1 + 2616);
    if ( v15 != (void *)(a1 + 2632) )
      operator delete(v15);
    v16 = *(void **)(a1 + 2584);
    if ( v16 != (void *)(a1 + 2600) )
      operator delete(v16);
    v17 = *(void **)(a1 + 2552);
    if ( v17 != (void *)(a1 + 2568) )
      operator delete(v17);
    v18 = *(void **)(a1 + 2520);
    if ( v18 != (void *)(a1 + 2536) )
      operator delete(v18);
  }
  v4 = *(void **)(a1 + 2440);
  if ( v4 != (void *)(a1 + 2456) )
    operator delete(v4);
  v5 = *(_QWORD *)(a1 + 2400);
  *(_QWORD *)a1 = off_2C39A48;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  v6 = *(_QWORD *)(a1 + 2392);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  v7 = *(_QWORD *)(a1 + 2384);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  sub_112BEE0(a1);
}
