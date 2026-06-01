__m128i *__fastcall sub_B25140(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  int v3; // edx

  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 40, 3u);
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  result[2].m128i_i32[0] = a1[2].m128i_i32[0];
  v3 = result[2].m128i_i32[1] & 0xE00000;
  LOBYTE(v3) = -59;
  result[2].m128i_i32[1] = v3;
  LOBYTE(v3) = a1[2].m128i_i8[6] & 1 | result[2].m128i_i8[6] & 0xFE;
  result[2].m128i_i8[6] = v3;
  LOBYTE(v3) = a1[2].m128i_i8[6] & 2 | v3 & 0xFD;
  result[2].m128i_i8[6] = v3;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v3 & 0xFB;
  return result;
}
