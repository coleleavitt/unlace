void __fastcall sub_12203A0(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  __int64 v8; // rbp
  void *v9; // rdi
  __int64 v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  char *v14; // rdi
  int v15; // eax
  __int64 v16; // r12
  __int64 v17; // r14
  _QWORD *v18; // rbp
  _QWORD *v19; // rdi
  __int64 v20; // r13
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi

  *(_QWORD *)a1 = off_2C3B030;
  v2 = *(_QWORD *)(a1 + 4976);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = *(_QWORD *)(a1 + 4968);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(void **)(a1 + 4896);
  if ( v4 != (void *)(a1 + 4912) )
    operator delete(v4);
  if ( *(_BYTE *)(a1 + 4880) )
    sub_11F0AD0(a1 + 3808);
  v5 = *(void **)(a1 + 3744);
  if ( v5 != (void *)(a1 + 3760) )
    operator delete(v5);
  if ( *(_BYTE *)(a1 + 3728) )
  {
    v14 = *(char **)(a1 + 3688);
    if ( *(_DWORD *)(a1 + 3700) )
    {
      v15 = *(_DWORD *)(a1 + 3696);
      if ( v15 )
      {
        v16 = 0;
        v17 = 8LL * (unsigned int)(v15 - 1) + 8;
        do
        {
          v18 = *(_QWORD **)&v14[v16];
          if ( v18 != (_QWORD *)-8LL && v18 )
          {
            v19 = (_QWORD *)v18[1];
            v20 = *v18 + 41LL;
            if ( v19 != v18 + 3 )
              operator delete(v19);
            operator delete(v18, v20, 8);
            v14 = *(char **)(a1 + 3688);
          }
          v16 += 8;
        }
        while ( v17 != v16 );
      }
    }
    free(v14);
    v21 = *(void **)(a1 + 3656);
    if ( v21 != (void *)(a1 + 3672) )
      operator delete(v21);
    v22 = *(void **)(a1 + 3624);
    if ( v22 != (void *)(a1 + 3640) )
      operator delete(v22);
    v23 = *(void **)(a1 + 3592);
    if ( v23 != (void *)(a1 + 3608) )
      operator delete(v23);
    v24 = *(void **)(a1 + 3560);
    if ( v24 != (void *)(a1 + 3576) )
      operator delete(v24);
  }
  v6 = *(void **)(a1 + 3480);
  if ( v6 != (void *)(a1 + 3496) )
    operator delete(v6);
  v7 = *(void **)(a1 + 3440);
  if ( v7 != (void *)(a1 + 3456) )
    operator delete(v7);
  sub_117EEA0((__int64 *)(a1 + 3104));
  v8 = *(_QWORD *)(a1 + 3072);
  if ( v8 )
  {
    while ( 1 )
    {
      sub_F7EAE0(a1 + 3056, *(_QWORD **)(v8 + 24));
      v9 = *(void **)(v8 + 32);
      v10 = *(_QWORD *)(v8 + 16);
      if ( v9 == (void *)(v8 + 48) )
      {
        operator delete((void *)v8);
        if ( !v10 )
          break;
      }
      else
      {
        operator delete(v9);
        operator delete((void *)v8);
        if ( !v10 )
          break;
      }
      v8 = v10;
    }
  }
  sub_1213F50(a1 + 2912);
  if ( *(_BYTE *)(a1 + 2904) )
    sub_110AEF0(a1 + 2712);
  sub_110AEF0(a1 + 2520);
  v11 = *(void **)(a1 + 2488);
  if ( v11 != (void *)(a1 + 2504) )
    operator delete(v11);
  v12 = *(void **)(a1 + 2456);
  if ( v12 != (void *)(a1 + 2472) )
    operator delete(v12);
  v13 = *(void **)(a1 + 2392);
  if ( v13 != (void *)(a1 + 2408) )
    operator delete(v13);
  sub_112BEE0(a1);
}
