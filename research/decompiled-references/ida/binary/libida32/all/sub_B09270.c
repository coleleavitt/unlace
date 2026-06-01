__m128i *__fastcall sub_B09270(__int64 a1, __int32 a2, const __m128i *a3)
{
  __m128i *result; // rax
  __int32 v5; // ecx

  result = (__m128i *)sub_99FDF0((__int64 *)(a1 + 2352), 48, 3u);
  *result = _mm_loadu_si128(a3);
  result[1] = _mm_loadu_si128(a3 + 1);
  v5 = a3[2].m128i_i32[0];
  result[2].m128i_i8[6] &= 0xE0u;
  result[2].m128i_i32[0] = v5;
  result[2].m128i_i16[2] = 409;
  result[2].m128i_i32[2] = a2;
  if ( (BYTE2(v5) & 0xF0) == 0xF0 && !result->m128i_i64[0] )
    result[2].m128i_i8[2] = BYTE2(v5) & 0xF;
  return result;
}

