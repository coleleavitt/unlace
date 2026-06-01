void __fastcall sub_69F5A0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8)
{
  __m128i *v10; // rax
  __int64 v11; // rsi
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __m128i *v14; // r12
  __int64 v15; // rbx
  __m128i *v16; // rbp
  unsigned __int64 v17; // rdx
  const __m128i *v18; // rbx
  __m128i *i; // rax
  __m128 v20; // xmm1
  unsigned __int64 v21; // rdx

  v10 = *(__m128i **)a1;
  v11 = *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8);
  if ( v11 == *(_QWORD *)a1 )
    return;
  v12 = _mm_unpacklo_epi64((__m128i)(a3 - a2), (__m128i)(a3 - a2));
  do
  {
    v13 = _mm_loadu_si128(v10);
    a7 = _mm_movehl_ps(a7, (__m128)v13);
    if ( v13.m128i_i64[0] != a7.m128_u64[0] && a4 && a7.m128_u64[0] - 1 >= a2 && a2 + a4 - 1 >= v13.m128i_i64[0] )
    {
      v13 = _mm_add_epi64(v13, v12);
      *v10 = v13;
    }
    ++v10;
  }
  while ( v10 != (__m128i *)v11 );
  v14 = *(__m128i **)a1;
  v15 = 16LL * *(_QWORD *)(a1 + 8);
  v16 = (__m128i *)(*(_QWORD *)a1 + v15);
  if ( *(__m128i **)a1 == v16 )
    return;
  if ( !(v15 >> 4) )
  {
    sub_699950(*(__m128i **)a1, (unsigned __int64 *)(*(_QWORD *)a1 + v15), -2);
    goto LABEL_23;
  }
  _BitScanReverse64(&v17, v15 >> 4);
  sub_699950(*(__m128i **)a1, (unsigned __int64 *)(*(_QWORD *)a1 + v15), 2LL * (int)v17);
  if ( v15 <= 256 )
  {
LABEL_23:
    sub_698C70(v14, v16, *(double *)v13.m128i_i64, *(double *)v12.m128i_i64, a7);
    return;
  }
  v18 = v14 + 16;
  sub_698C70(v14, v14 + 16, *(double *)v13.m128i_i64, *(double *)v12.m128i_i64, a7);
  do
  {
    v20 = (__m128)_mm_loadu_si128(v18);
    v21 = v18[-1].m128i_u64[0];
    i = (__m128i *)v18;
    if ( v21 >= v20.m128_u64[0] )
    {
      a8 = _mm_movehl_ps(a8, v20);
      for ( i = (__m128i *)&v18[-1]; v20.m128_u64[0] < v21 || a8.m128_u64[0] < i->m128i_i64[1]; --i )
      {
        v21 = i[-1].m128i_u64[0];
        i[1] = _mm_loadu_si128(i);
        if ( v21 < v20.m128_u64[0] )
          goto LABEL_15;
      }
      ++i;
    }
LABEL_15:
    ++v18;
    *i = (__m128i)v20;
  }
  while ( v16 != v18 );
}
