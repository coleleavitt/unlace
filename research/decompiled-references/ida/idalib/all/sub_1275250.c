void __fastcall sub_1275250(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // r12
  __int64 v18; // r14
  _QWORD *v19; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // r13
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi

  *(_QWORD *)a1 = off_2C3DA58;
  v2 = *(_QWORD *)(a1 + 4112);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 4104);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(void **)(a1 + 4072);
  if ( v4 != (void *)(a1 + 4088) )
    operator delete(v4);
  v5 = *(void **)(a1 + 4040);
  if ( v5 != (void *)(a1 + 4056) )
    operator delete(v5);
  v6 = *(void **)(a1 + 4008);
  if ( v6 != (void *)(a1 + 4024) )
    operator delete(v6);
  v7 = *(void **)(a1 + 3976);
  if ( v7 != (void *)(a1 + 3992) )
    operator delete(v7);
  v8 = *(void **)(a1 + 3944);
  if ( v8 != (void *)(a1 + 3960) )
    operator delete(v8);
  v9 = *(void **)(a1 + 3912);
  if ( v9 != (void *)(a1 + 3928) )
    operator delete(v9);
  v10 = *(void **)(a1 + 3864);
  if ( v10 != (void *)(a1 + 3880) )
    operator delete(v10);
  v11 = *(void **)(a1 + 3832);
  if ( v11 != (void *)(a1 + 3848) )
    operator delete(v11);
  v12 = *(void **)(a1 + 3800);
  if ( v12 != (void *)(a1 + 3816) )
    operator delete(v12);
  if ( *(_BYTE *)(a1 + 3792) )
    sub_11F0AD0(a1 + 2720);
  v13 = *(void **)(a1 + 2656);
  if ( v13 != (void *)(a1 + 2672) )
    operator delete(v13);
  if ( *(_BYTE *)(a1 + 2640) )
  {
    v15 = *(char **)(a1 + 2600);
    if ( *(_DWORD *)(a1 + 2612) )
    {
      v16 = *(_DWORD *)(a1 + 2608);
      if ( v16 )
      {
        v17 = 0;
        v18 = 8LL * (unsigned int)(v16 - 1) + 8;
        do
        {
          v19 = *(_QWORD **)&v15[v17];
          if ( v19 != (_QWORD *)-8LL && v19 )
          {
            v20 = (_QWORD *)v19[1];
            v21 = *v19 + 41LL;
            if ( v20 != v19 + 3 )
              operator delete(v20);
            operator delete(v19, v21, 8);
            v15 = *(char **)(a1 + 2600);
          }
          v17 += 8;
        }
        while ( v18 != v17 );
      }
    }
    free(v15);
    v22 = *(void **)(a1 + 2568);
    if ( v22 != (void *)(a1 + 2584) )
      operator delete(v22);
    v23 = *(void **)(a1 + 2536);
    if ( v23 != (void *)(a1 + 2552) )
      operator delete(v23);
    v24 = *(void **)(a1 + 2504);
    if ( v24 != (void *)(a1 + 2520) )
      operator delete(v24);
    v25 = *(void **)(a1 + 2472);
    if ( v25 != (void *)(a1 + 2488) )
      operator delete(v25);
  }
  v14 = *(void **)(a1 + 2392);
  if ( v14 != (void *)(a1 + 2408) )
    operator delete(v14);
  sub_112BEE0(a1);
}
