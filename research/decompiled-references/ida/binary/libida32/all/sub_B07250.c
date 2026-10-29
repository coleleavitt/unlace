__m128i *__fastcall sub_B07250(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int8 v3; // dl
  __int8 v4; // dl
  __int8 v5; // dl

  result = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 40, 3u);
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  result[2].m128i_i32[0] = a1[2].m128i_i32[0];
  result[2].m128i_i16[2] = 349;
  v3 = result[2].m128i_i8[6] & 0xE0;
  result[2].m128i_i8[6] = v3;
  v4 = a1[2].m128i_i8[6] & 1 | v3;
  result[2].m128i_i8[6] = v4;
  v5 = a1[2].m128i_i8[6] & 2 | v4;
  result[2].m128i_i8[6] = v5;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v5;
  return result;
}

