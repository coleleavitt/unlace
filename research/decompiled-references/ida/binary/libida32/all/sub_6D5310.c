void __fastcall sub_6D5310(__int64 a1)
{
  _QWORD *v2; // rbp
  _QWORD *v3; // r12
  void *v4; // rdi
  _QWORD *v5; // rbp
  void *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rdi
  char *v9; // rdi
  __int64 v10; // r13
  __int64 i; // r12
  char *v12; // rbp
  void *v13; // rdi
  void *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  void *v18; // rdi
  char *v19; // rdi
  __int64 v20; // r13
  __int64 j; // r12
  char *v22; // rbp
  void *v23; // rdi
  void *v24; // rdi

  v2 = *(_QWORD **)(a1 + 144);
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  while ( v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = (void *)v3[1];
    if ( v4 )
    {
      v3[2] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x30u);
  }
  memset(*(void **)(a1 + 128), 0, 8LL * *(_QWORD *)(a1 + 136));
  v5 = *(_QWORD **)(a1 + 200);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  while ( v5 )
  {
    v6 = v5;
    v5 = (_QWORD *)*v5;
    operator delete(v6, 0x10u);
  }
  memset(*(void **)(a1 + 184), 0, 8LL * *(_QWORD *)(a1 + 192));
  v7 = *(_QWORD **)(a1 + 336);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    sub_6CFAA0(v8);
  }
  memset(*(void **)(a1 + 320), 0, 8LL * *(_QWORD *)(a1 + 328));
  v9 = *(char **)(a1 + 392);
  *(_QWORD *)(a1 + 344) = 0;
  *(_QWORD *)(a1 + 336) = 0;
  *(_QWORD *)(a1 + 376) = 0;
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 400);
    if ( v10 )
    {
      for ( i = 0; i != v10; ++i )
      {
        v12 = &v9[64 * i];
        clear_tinfo_t(v12 + 48);
        v13 = *((void **)v12 + 3);
        if ( v13 )
        {
          *((_QWORD *)v12 + 4) = 0;
          qfree(v13);
        }
        v14 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v14);
        }
        v9 = *(char **)(a1 + 392);
      }
    }
    *(_QWORD *)(a1 + 400) = 0;
    qfree(v9);
    *(_QWORD *)(a1 + 392) = 0;
    *(_QWORD *)(a1 + 408) = 0;
  }
  v15 = *(_QWORD *)(a1 + 424);
  v16 = 0;
  if ( v15 )
  {
    do
    {
      v17 = *(_QWORD *)(a1 + 416) + 24 * v16;
      v18 = *(void **)v17;
      if ( *(_QWORD *)v17 )
      {
        *(_QWORD *)(v17 + 8) = 0;
        qfree(v18);
      }
      ++v16;
    }
    while ( v15 != v16 );
  }
  v19 = *(char **)(a1 + 592);
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 448) = 0;
  if ( v19 )
  {
    v20 = *(_QWORD *)(a1 + 600);
    if ( v20 )
    {
      for ( j = 0; j != v20; ++j )
      {
        v22 = &v19[64 * j];
        v23 = *((void **)v22 + 3);
        if ( v23 )
        {
          *((_QWORD *)v22 + 4) = 0;
          qfree(v23);
        }
        v24 = *(void **)v22;
        if ( *(_QWORD *)v22 )
        {
          *((_QWORD *)v22 + 1) = 0;
          qfree(v24);
        }
        v19 = *(char **)(a1 + 592);
      }
    }
    *(_QWORD *)(a1 + 600) = 0;
    qfree(v19);
    *(_QWORD *)(a1 + 592) = 0;
    *(_QWORD *)(a1 + 608) = 0;
  }
}

