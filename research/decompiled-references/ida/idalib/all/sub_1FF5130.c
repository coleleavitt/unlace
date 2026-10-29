void __fastcall sub_1FF5130(__int64 a1)
{
  void *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // r12
  __int64 i; // rax
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdi
  __int64 *v9; // rbp
  __int64 *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  void *v13; // rdi

  *(_QWORD *)a1 = &off_2BE4CE0;
  v2 = *(void **)(a1 + 136);
  if ( v2 )
    operator delete(v2);
  operator delete(*(_QWORD *)(a1 + 112), 16LL * *(unsigned int *)(a1 + 128), 8);
  v3 = *(__int64 **)(a1 + 24);
  v4 = &v3[*(unsigned int *)(a1 + 32)];
  if ( v3 != v4 )
  {
    for ( i = *(_QWORD *)(a1 + 24); ; i = *(_QWORD *)(a1 + 24) )
    {
      v6 = 0x40000000000LL;
      v7 = (unsigned int)(((__int64)v3 - i) >> 3) >> 7;
      if ( v7 <= 0x1D )
        v6 = 4096LL << v7;
      v8 = *v3++;
      operator delete(v8, v6, 16);
      if ( v4 == v3 )
        break;
    }
  }
  v9 = *(__int64 **)(a1 + 72);
  v10 = &v9[2 * *(unsigned int *)(a1 + 80)];
  if ( v9 != v10 )
  {
    do
    {
      v11 = v9[1];
      v12 = *v9;
      v9 += 2;
      operator delete(v12, v11, 16);
    }
    while ( v10 != v9 );
    v10 = *(__int64 **)(a1 + 72);
  }
  if ( v10 != (__int64 *)(a1 + 88) )
    free(v10);
  v13 = *(void **)(a1 + 24);
  if ( v13 != (void *)(a1 + 40) )
    free(v13);
}
