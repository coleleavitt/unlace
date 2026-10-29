void __fastcall sub_67EEC0(__int64 *a1, unsigned int a2, int a3, int a4)
{
  __m128i *v4; // rax
  bool v6; // r9
  __int64 v7; // rsi
  unsigned int v8; // r10d
  __m128i v9; // xmm1
  __m128i v10; // xmm0
  unsigned int v11; // ecx
  int v12; // edx
  __m128i *v13; // r12
  __int64 v14; // rbx
  __m128i *v15; // rbp
  unsigned __int64 v16; // rdx
  const __m128i *v17; // rbx
  __m128i *v18; // rax
  __m128i v19; // xmm0
  unsigned __int32 v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // edi

  v4 = (__m128i *)*a1;
  v6 = a4 != 0;
  v7 = *a1 + 8 * a1[1];
  if ( v7 == *a1 )
    return;
  v8 = a2 + a4 - 1;
  v9 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3 - a2), 224);
  do
  {
    v10 = _mm_loadl_epi64(v4);
    v11 = _mm_cvtsi128_si32(v10);
    v12 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v10, 229));
    if ( v11 != v12 && v6 && v12 - 1 >= a2 && v8 >= v11 )
      v4->m128i_i64[0] = _mm_add_epi32(v10, v9).m128i_u64[0];
    v4 = (__m128i *)((char *)v4 + 8);
  }
  while ( v4 != (__m128i *)v7 );
  v13 = (__m128i *)*a1;
  v14 = 8 * a1[1];
  v15 = (__m128i *)(*a1 + v14);
  if ( (__m128i *)*a1 == v15 )
    return;
  if ( !(v14 >> 3) )
  {
    sub_679A60(*a1, (__int64 *)(*a1 + v14), -2);
    goto LABEL_23;
  }
  _BitScanReverse64(&v16, v14 >> 3);
  sub_679A60(*a1, (__int64 *)(*a1 + v14), 2LL * (int)v16);
  if ( v14 <= 128 )
  {
LABEL_23:
    sub_678E20((unsigned int *)v13, v15);
    return;
  }
  v17 = v13 + 8;
  sub_678E20((unsigned int *)v13, v13 + 8);
  do
  {
    v19 = _mm_loadl_epi64(v17);
    v20 = v17[-1].m128i_u32[2];
    v18 = (__m128i *)v17;
    v21 = _mm_cvtsi128_si32(v19);
    if ( v20 >= v21 )
    {
      v18 = (__m128i *)&v17[-1].m128i_u64[1];
      v22 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 229));
      while ( v21 < v20 || v22 < v18->m128i_i32[1] )
      {
        v18->m128i_i64[1] = v18->m128i_i64[0];
        v20 = v18[-1].m128i_u32[2];
        if ( v20 < v21 )
          goto LABEL_15;
        v18 = (__m128i *)((char *)v18 - 8);
      }
      v18 = (__m128i *)((char *)v18 + 8);
    }
LABEL_15:
    v17 = (const __m128i *)((char *)v17 + 8);
    v18->m128i_i64[0] = v19.m128i_i64[0];
  }
  while ( v15 != v17 );
}

