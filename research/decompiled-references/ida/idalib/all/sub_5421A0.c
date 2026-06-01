void __fastcall sub_5421A0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rdi
  unsigned __int64 v6; // rbx
  void *v7; // rdi
  __int64 v8; // rbx
  void *v9; // rdi
  __int64 v10; // rbx
  void *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r14
  __int64 i; // r13
  char *v15; // r12
  __int64 v16; // rbx
  void *v17; // rdi
  void *v18; // rdi

  v1 = a1 + 472;
  v3 = a1 + 224;
  do
  {
    v4 = v3;
    v3 += 8;
    clear_tinfo_t(v4);
  }
  while ( v3 != v1 );
  *(_DWORD *)(a1 + 128) = 1;
  clear_tinfo_t(a1 + 216);
  v5 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD *)(a1 + 152) )
  {
    v6 = 0;
    do
    {
      if ( v5[v6] && !errorexit )
        sub_368890();
      ++v6;
    }
    while ( v6 < *(_QWORD *)(a1 + 152) );
  }
  if ( v5 )
  {
    *(_QWORD *)(a1 + 152) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 144) = 0;
    *(_QWORD *)(a1 + 160) = 0;
  }
  v7 = *(void **)(a1 + 168);
  if ( v7 )
  {
    *(_QWORD *)(a1 + 176) = 0;
    qfree(v7);
    *(_QWORD *)(a1 + 168) = 0;
    *(_QWORD *)(a1 + 184) = 0;
  }
  v8 = *(_QWORD *)(a1 + 96);
  while ( v8 )
  {
    sub_532F40(*(_QWORD **)(v8 + 24));
    v9 = (void *)v8;
    v8 = *(_QWORD *)(v8 + 16);
    operator delete(v9, 0x30u);
  }
  v10 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = a1 + 88;
  *(_QWORD *)(a1 + 112) = a1 + 88;
  *(_QWORD *)(a1 + 120) = 0;
  while ( v10 )
  {
    sub_533290(*(_QWORD **)(v10 + 24));
    v11 = (void *)v10;
    v10 = *(_QWORD *)(v10 + 16);
    operator delete(v11, 0x38u);
  }
  v12 = *(char **)(a1 + 56);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a1 + 16;
  *(_QWORD *)(a1 + 40) = a1 + 16;
  *(_QWORD *)(a1 + 48) = 0;
  if ( v12 )
  {
    v13 = *(_QWORD *)(a1 + 64);
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = &v12[80 * i];
        v16 = *((_QWORD *)v15 + 6);
        while ( v16 )
        {
          sub_533530(*(_QWORD **)(v16 + 24));
          v17 = (void *)v16;
          v16 = *(_QWORD *)(v16 + 16);
          operator delete(v17, 0x30u);
        }
        v18 = *((void **)v15 + 1);
        if ( v18 )
        {
          *((_QWORD *)v15 + 2) = 0;
          qfree(v18);
        }
        v12 = *(char **)(a1 + 56);
      }
    }
    *(_QWORD *)(a1 + 64) = 0;
    qfree(v12);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 72) = 0;
  }
  *(_DWORD *)(a1 + 136) = 1000;
  *(_BYTE *)(a1 + 134) = 0;
  *(_DWORD *)(a1 + 128) = 2;
}
