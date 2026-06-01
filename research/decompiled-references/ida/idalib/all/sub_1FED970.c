void __fastcall sub_1FED970(__m128 *a1)
{
  void *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // r12
  unsigned __int64 i; // rax
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdi
  __m128 *v9; // rbp
  __m128 *v10; // r12
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  __m128 *v13; // rdi
  __int64 (__fastcall **v14)(); // [rsp+8h] [rbp-30h] BYREF

  v14 = &off_2BE4CE0;
  *a1 = _mm_loadh_ps((const double *)&v14);
  v2 = (void *)a1[9].m128_u64[0];
  if ( v2 )
    operator delete(v2);
  operator delete(a1[7].m128_u64[1], 16LL * a1[8].m128_u32[2], 8);
  v3 = (__int64 *)a1[2].m128_u64[0];
  v4 = &v3[a1[2].m128_u32[2]];
  if ( v3 != v4 )
  {
    for ( i = a1[2].m128_u64[0]; ; i = a1[2].m128_u64[0] )
    {
      v6 = 0x40000000000LL;
      v7 = (unsigned int)((__int64)((__int64)v3 - i) >> 3) >> 7;
      if ( v7 <= 0x1D )
        v6 = 4096LL << v7;
      v8 = *v3++;
      operator delete(v8, v6, 16);
      if ( v4 == v3 )
        break;
    }
  }
  v9 = (__m128 *)a1[5].m128_u64[0];
  v10 = &v9[a1[5].m128_u32[2]];
  if ( v9 != v10 )
  {
    do
    {
      v11 = v9->m128_i64[1];
      v12 = v9->m128_u64[0];
      ++v9;
      operator delete(v12, v11, 16);
    }
    while ( v10 != v9 );
    v10 = (__m128 *)a1[5].m128_u64[0];
  }
  if ( v10 != &a1[6] )
    free(v10);
  v13 = (__m128 *)a1[2].m128_u64[0];
  if ( v13 != &a1[3] )
    free(v13);
  operator delete(a1, 0xD0u);
}
