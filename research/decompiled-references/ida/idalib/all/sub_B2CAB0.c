__m128i *__fastcall sub_B2CAB0(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rcx
  __int32 v4; // edx

  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 48, 3u);
  v3 = a1[2].m128i_i64[1];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v4 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v3;
  result[2].m128i_i32[0] = v4;
  result[2].m128i_i16[2] = 395;
  LOBYTE(v4) = result[2].m128i_i8[6] & 0xE0;
  result[2].m128i_i8[6] = v4;
  LOBYTE(v4) = a1[2].m128i_i8[6] & 1 | v4;
  result[2].m128i_i8[6] = v4;
  LOBYTE(v4) = a1[2].m128i_i8[6] & 2 | v4;
  result[2].m128i_i8[6] = v4;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v4;
  return result;
}
