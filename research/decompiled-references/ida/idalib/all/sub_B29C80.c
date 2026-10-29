__m128i *__fastcall sub_B29C80(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int32 v3; // edx

  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 104, 3u);
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v3 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = (__int64)&result[3].m128i_i64[1];
  result[2].m128i_i32[0] = v3;
  result[2].m128i_i16[2] = 319;
  LOBYTE(v3) = result[2].m128i_i8[6];
  result[3].m128i_i64[0] = 0x600000000LL;
  LOBYTE(v3) = v3 & 0xE0;
  result[2].m128i_i8[6] = v3;
  LOBYTE(v3) = a1[2].m128i_i8[6] & 1 | v3;
  result[2].m128i_i8[6] = v3;
  LOBYTE(v3) = a1[2].m128i_i8[6] & 2 | v3;
  result[2].m128i_i8[6] = v3;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v3;
  return result;
}
