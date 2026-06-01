__int64 __fastcall sub_F685E0(__m128i *a1, __m128i *a2)
{
  __m128i v2; // xmm2
  __m128i v3; // xmm1
  __m128i v4; // xmm0
  __int64 result; // rax

  v2 = _mm_loadu_si128(a1);
  v3 = _mm_loadu_si128(a1 + 1);
  v4 = _mm_loadu_si128(a1 + 2);
  *a1 = _mm_loadu_si128(a2);
  result = a1[3].m128i_i64[0];
  a1[1] = _mm_loadu_si128(a2 + 1);
  a1[2] = _mm_loadu_si128(a2 + 2);
  a1[3].m128i_i64[0] = a2[3].m128i_i64[0];
  *a2 = v2;
  a2[1] = v3;
  a2[2] = v4;
  a2[3].m128i_i64[0] = result;
  return result;
}

