void __fastcall sub_496580(__int64 a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // r12
  char *v5; // rbp
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // r12
  __int64 j; // rbp
  char *v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  void *v18; // rdi
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  void *v26; // rdi

  v2 = *(char **)(a1 + 384);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 392);
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[144 * i];
        clear_tinfo_t(v5 + 64);
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_QWORD *)v5 + 6) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_QWORD *)v5 + 3) = 0;
          qfree(v7);
        }
        v2 = *(char **)(a1 + 384);
      }
    }
    *(_QWORD *)(a1 + 392) = 0;
    qfree(v2);
  }
  v8 = *(void **)(a1 + 360);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 368) = 0;
    qfree(v8);
  }
  v9 = *(_QWORD **)(a1 + 320);
  while ( v9 )
  {
    v10 = v9;
    v9 = (_QWORD *)*v9;
    operator delete(v10, 0x20u);
  }
  memset(*(void **)(a1 + 304), 0, 8LL * *(_QWORD *)(a1 + 312));
  v11 = *(void **)(a1 + 304);
  *(_QWORD *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  if ( v11 != (void *)(a1 + 352) )
    operator delete(v11, 8LL * *(_QWORD *)(a1 + 312));
  v12 = *(char **)(a1 + 280);
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 288);
    if ( v13 )
    {
      for ( j = 0; j != v13; ++j )
      {
        v15 = &v12[32 * j];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = *(char **)(a1 + 280);
        }
      }
    }
    *(_QWORD *)(a1 + 288) = 0;
    qfree(v12);
  }
  v17 = *(void **)(a1 + 240);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 248) = 0;
    qfree(v17);
  }
  v18 = *(void **)(a1 + 216);
  if ( v18 )
  {
    *(_QWORD *)(a1 + 224) = 0;
    qfree(v18);
  }
  v19 = *(void **)(a1 + 192);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 200) = 0;
    qfree(v19);
  }
  v20 = *(void **)(a1 + 152);
  if ( v20 )
  {
    *(_QWORD *)(a1 + 160) = 0;
    qfree(v20);
  }
  v21 = *(void **)(a1 + 128);
  if ( v21 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v21);
  }
  v22 = *(void **)(a1 + 96);
  if ( v22 )
  {
    *(_QWORD *)(a1 + 104) = 0;
    qfree(v22);
  }
  v23 = *(void **)(a1 + 72);
  if ( v23 )
  {
    *(_QWORD *)(a1 + 80) = 0;
    qfree(v23);
  }
  v24 = *(void **)(a1 + 48);
  if ( v24 )
  {
    *(_QWORD *)(a1 + 56) = 0;
    qfree(v24);
  }
  v25 = *(void **)(a1 + 24);
  if ( v25 )
  {
    *(_QWORD *)(a1 + 32) = 0;
    qfree(v25);
  }
  v26 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v26);
  }
}
