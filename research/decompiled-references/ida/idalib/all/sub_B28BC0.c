__m128i *__fastcall sub_B28BC0(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int32 v4; // ecx
  __int8 v5; // si
  __int64 v6; // r8
  __int64 v7; // rdi
  __int32 v8; // edx

  result = (__m128i *)sub_9C3B30((__int64 *)(a2 + 2352), 64, 3u);
  v4 = a1[3].m128i_i32[3];
  v5 = a1[3].m128i_i8[8];
  v6 = a1[2].m128i_i64[1];
  v7 = a1[3].m128i_i64[0];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v8 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v6;
  result[2].m128i_i32[0] = v8;
  result[2].m128i_i16[2] = 295;
  LOBYTE(v8) = result[2].m128i_i8[6];
  result[3].m128i_i64[0] = v7;
  LOBYTE(v8) = v8 & 0xE0;
  result[3].m128i_i8[8] = v5;
  result[2].m128i_i8[6] = v8;
  result[3].m128i_i32[3] = v4;
  LOBYTE(v8) = a1[2].m128i_i8[6] & 1 | v8;
  result[2].m128i_i8[6] = v8;
  LOBYTE(v8) = a1[2].m128i_i8[6] & 2 | v8;
  result[2].m128i_i8[6] = v8;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v8;
  return result;
}
