__m128i *__fastcall sub_B24180(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int32 v7; // edx

  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  v4 = a1[3].m128i_i64[1];
  v5 = a1[3].m128i_i64[0];
  v6 = a1[2].m128i_i64[1];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v7 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v6;
  result[2].m128i_i32[0] = v7;
  result[2].m128i_i16[2] = 167;
  LOBYTE(v7) = result[2].m128i_i8[6];
  result[3].m128i_i64[0] = v5;
  LOBYTE(v7) = v7 & 0xE0;
  result[3].m128i_i64[1] = v4;
  result[2].m128i_i8[6] = v7;
  LOBYTE(v7) = a1[2].m128i_i8[6] & 1 | v7;
  result[2].m128i_i8[6] = v7;
  LOBYTE(v7) = a1[2].m128i_i8[6] & 2 | v7;
  result[2].m128i_i8[6] = v7;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v7;
  return result;
}
