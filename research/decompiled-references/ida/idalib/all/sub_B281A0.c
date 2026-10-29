__m128i *__fastcall sub_B281A0(__int64 a1, const __m128i *a2)
{
  __m128i *result; // rax
  __int32 v3; // ecx

  result = (__m128i *)sub_9C3B30((__int64 *)(a1 + 2352), 40, 3u);
  *result = _mm_loadu_si128(a2);
  result[1] = _mm_loadu_si128(a2 + 1);
  v3 = a2[2].m128i_i32[0];
  result[2].m128i_i8[6] &= 0xE0u;
  result[2].m128i_i32[0] = v3;
  result[2].m128i_i16[2] = 55;
  if ( (BYTE2(v3) & 0xF0) == 0xF0 && !result->m128i_i64[0] )
    result[2].m128i_i8[2] = BYTE2(v3) & 0xF;
  return result;
}
