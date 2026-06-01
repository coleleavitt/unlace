__m128i *__fastcall sub_B07410(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int32 v5; // edx

  result = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 56, 3u);
  v3 = a1[3].m128i_i64[0];
  v4 = a1[2].m128i_i64[1];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v5 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v4;
  result[2].m128i_i32[0] = v5;
  result[2].m128i_i16[2] = 436;
  LOBYTE(v5) = result[2].m128i_i8[6];
  result[3].m128i_i64[0] = v3;
  LOBYTE(v5) = v5 & 0xE0;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 1 | v5;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 2 | v5;
  result[2].m128i_i8[6] = v5;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v5;
  return result;
}

