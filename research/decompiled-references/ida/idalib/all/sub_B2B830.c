__m128i *__fastcall sub_B2B830(const __m128i *a1, __int64 a2)
{
  __int32 v2; // ebp
  __m128i *result; // rax
  __int32 v4; // ecx
  __int32 v5; // edx

  v2 = a1[2].m128i_i32[3];
  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 48, 3u);
  v4 = a1[2].m128i_i32[2];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v5 = a1[2].m128i_i32[0];
  result[2].m128i_i32[2] = v4;
  result[2].m128i_i32[0] = v5;
  result[2].m128i_i16[2] = 364;
  LOBYTE(v5) = result[2].m128i_i8[6];
  result[2].m128i_i32[3] = v2;
  LOBYTE(v5) = v5 & 0xE0;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 1 | v5;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 2 | v5;
  result[2].m128i_i8[6] = v5;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v5;
  return result;
}
