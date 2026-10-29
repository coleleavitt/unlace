void __fastcall sub_F1B20(const __m128i *a1, __int64 *a2)
{
  __int64 v2; // rax
  __m128i v3; // xmm0

  v2 = a1[1].m128i_i64[1];
  v3 = _mm_loadu_si128(a1 + 2);
  a1[1].m128i_i64[1] = *a2;
  a1[2].m128i_i64[0] = a2[1];
  a1[2].m128i_i64[1] = a2[2];
  *a2 = v2;
  *(__m128i *)(a2 + 1) = v3;
  if ( a1[3].m128i_i64[0] )
    nullsub_39();
}

