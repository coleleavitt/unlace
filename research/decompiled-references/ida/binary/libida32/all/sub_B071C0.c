__m128i *__fastcall sub_B071C0(const __m128i *a1, __int64 a2)
{
  __int32 v2; // ebp
  __m128i *result; // rax
  __int64 v4; // rcx
  __int32 v5; // edx

  v2 = a1[3].m128i_i32[0];
  result = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 56, 3u);
  v4 = a1[2].m128i_i64[1];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v5 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v4;
  result[2].m128i_i32[0] = v5;
  result[2].m128i_i16[2] = 348;
  LOBYTE(v5) = result[2].m128i_i8[6];
  result[3].m128i_i32[0] = v2;
  LOBYTE(v5) = v5 & 0xE0;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 1 | v5;
  result[2].m128i_i8[6] = v5;
  LOBYTE(v5) = a1[2].m128i_i8[6] & 2 | v5;
  result[2].m128i_i8[6] = v5;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v5;
  return result;
}

