__m128i *__fastcall sub_1A70D0(const __m128i *a1, __m128i *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __m128i *v8; // rbx
  __int64 i; // rbp
  __m128i *result; // rax
  __int64 v11; // r13
  __int128 v12; // xmm1
  __m128i v13; // xmm0
  __m128i v14; // [rsp+40h] [rbp-48h]

  v6 = (char *)a2 - (char *)a1;
  v8 = a2;
  if ( (char *)a2 - (char *)a1 > 40 )
  {
    for ( i = (__int64)(0xCCCCCCCCCCCCCCCDLL * (v6 >> 3) - 2) / 2; ; --i )
    {
      v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i + 16));
      result = sub_190920(
                 (__int64)a1,
                 i,
                 0xCCCCCCCCCCCCCCCDLL * (v6 >> 3),
                 a4,
                 a5,
                 a6,
                 (__int128)_mm_loadu_si128((const __m128i *)((char *)a1 + 40 * i)),
                 v14,
                 v14.m128i_i64[0]);
      if ( !i )
        break;
    }
  }
  if ( (unsigned __int64)a2 < a3 )
  {
    v11 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 3);
    do
    {
      result = (__m128i *)a1[1].m128i_i64[1];
      if ( v8[1].m128i_i64[1] < (__int64)result )
      {
        v12 = (__int128)_mm_loadu_si128(v8);
        v13 = _mm_loadu_si128(v8 + 1);
        *v8 = _mm_loadu_si128(a1);
        v8[1] = _mm_loadu_si128(a1 + 1);
        v8[2].m128i_i8[0] = a1[2].m128i_i8[0];
        result = sub_190920((__int64)a1, 0, v11, a4, a5, a6, v12, v13, v13.m128i_i64[0]);
      }
      v8 = (__m128i *)((char *)v8 + 40);
    }
    while ( (unsigned __int64)v8 < a3 );
  }
  return result;
}
