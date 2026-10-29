void __fastcall sub_1FFA5E0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  __int64 *v6; // rbp
  __int64 *v7; // r12
  __int64 i; // rax
  __int64 v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 *v12; // rbp
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rdi
  void *v16; // rdi
  void **v17; // r12
  void **v18; // rbp
  __int64 v19; // rdi

  *(_QWORD *)a1 = &off_2BE4DB0;
  v2 = *(void **)(a1 + 216);
  if ( v2 )
    operator delete(v2);
  v3 = *(void **)(a1 + 192);
  if ( v3 )
    operator delete(v3);
  v4 = *(void **)(a1 + 168);
  if ( v4 )
    operator delete(v4);
  v5 = *(void **)(a1 + 144);
  if ( v5 )
    operator delete(v5);
  v6 = *(__int64 **)(a1 + 56);
  v7 = &v6[*(unsigned int *)(a1 + 64)];
  if ( v6 != v7 )
  {
    for ( i = *(_QWORD *)(a1 + 56); ; i = *(_QWORD *)(a1 + 56) )
    {
      v9 = 0x40000000000LL;
      v10 = (unsigned int)(((__int64)v6 - i) >> 3) >> 7;
      if ( v10 <= 0x1D )
        v9 = 4096LL << v10;
      v11 = *v6++;
      operator delete(v11, v9, 16);
      if ( v7 == v6 )
        break;
    }
  }
  v12 = *(__int64 **)(a1 + 104);
  v13 = &v12[2 * *(unsigned int *)(a1 + 112)];
  if ( v12 != v13 )
  {
    do
    {
      v14 = v12[1];
      v15 = *v12;
      v12 += 2;
      operator delete(v15, v14, 16);
    }
    while ( v13 != v12 );
    v13 = *(__int64 **)(a1 + 104);
  }
  if ( v13 != (__int64 *)(a1 + 120) )
    free(v13);
  v16 = *(void **)(a1 + 56);
  if ( v16 != (void *)(a1 + 72) )
    free(v16);
  v17 = *(void ***)(a1 + 24);
  v18 = *(void ***)(a1 + 16);
  if ( v17 != v18 )
  {
    do
    {
      while ( *v18 != v18 + 2 )
      {
        operator delete(*v18);
        v18 += 4;
        if ( v17 == v18 )
          goto LABEL_25;
      }
      v18 += 4;
    }
    while ( v17 != v18 );
LABEL_25:
    v18 = *(void ***)(a1 + 16);
  }
  if ( v18 )
    operator delete(v18);
  v19 = *(_QWORD *)(a1 + 8);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  nullsub_1254();
}
