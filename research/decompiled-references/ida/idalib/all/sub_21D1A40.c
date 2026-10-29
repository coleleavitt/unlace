void __fastcall sub_21D1A40(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbp
  __int64 *v3; // r12
  __int64 i; // rax
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 *v8; // rbp
  __int64 *v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    if ( (*(_BYTE *)(v1 + 944) & 1) == 0 )
      operator delete(*(_QWORD *)(v1 + 952), 16LL * *(unsigned int *)(v1 + 960), 8);
    sub_2222F80(v1 + 904);
    v2 = *(__int64 **)(v1 + 824);
    v3 = &v2[*(unsigned int *)(v1 + 832)];
    if ( v2 != v3 )
    {
      for ( i = *(_QWORD *)(v1 + 824); ; i = *(_QWORD *)(v1 + 824) )
      {
        v5 = 0x40000000000LL;
        v6 = (unsigned int)(((__int64)v2 - i) >> 3) >> 7;
        if ( v6 <= 0x1D )
          v5 = 4096LL << v6;
        v7 = *v2++;
        operator delete(v7, v5, 16);
        if ( v3 == v2 )
          break;
      }
    }
    v8 = *(__int64 **)(v1 + 872);
    v9 = &v8[2 * *(unsigned int *)(v1 + 880)];
    if ( v8 != v9 )
    {
      do
      {
        v10 = v8[1];
        v11 = *v8;
        v8 += 2;
        operator delete(v11, v10, 16);
      }
      while ( v9 != v8 );
      v9 = *(__int64 **)(v1 + 872);
    }
    if ( v9 != (__int64 *)(v1 + 888) )
      free(v9);
    v12 = *(void **)(v1 + 824);
    if ( v12 != (void *)(v1 + 840) )
      free(v12);
    v13 = *(void **)(v1 + 720);
    if ( v13 != (void *)(v1 + 744) )
      free(v13);
    v14 = *(void **)(v1 + 664);
    if ( v14 != (void *)(v1 + 688) )
      free(v14);
    v15 = *(void **)(v1 + 576);
    if ( v15 != (void *)(v1 + 600) )
      free(v15);
    v16 = *(void **)(v1 + 296);
    if ( v16 != (void *)(v1 + 320) )
      free(v16);
    v17 = *(void **)(v1 + 16);
    if ( v17 != (void *)(v1 + 40) )
      free(v17);
    operator delete((void *)v1, 0x5B8u);
  }
}
