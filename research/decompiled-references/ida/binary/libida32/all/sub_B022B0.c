__m128i *__fastcall sub_B022B0(__int64 a1, const __m128i *a2)
{
  __m128i *result; // rax

  result = (__m128i *)sub_99FDF0((__int64 *)(a1 + 2352), 40, 3u);
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  result[2].m128i_i32[0] = a2[2].m128i_i32[0];
  result[2].m128i_i32[1] = result[2].m128i_i32[1] & 0xE00000 | 0x5C;
  return result;
}

