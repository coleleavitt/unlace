__m128i *__fastcall sub_AFF4A0(const __m128i *a1, __int64 a2)
{
  __int32 v2; // r12d
  __int32 v3; // ebp
  __m128i *result; // rax
  __int8 v5; // cl
  __int64 v6; // rsi
  __int32 v7; // edx

  v2 = a1[3].m128i_i32[0];
  v3 = a1[3].m128i_i32[1];
  result = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 64, 3u);
  v5 = a1[3].m128i_i8[8];
  v6 = a1[2].m128i_i64[1];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  v7 = a1[2].m128i_i32[0];
  result[2].m128i_i64[1] = v6;
  result[2].m128i_i32[0] = v7;
  result[2].m128i_i16[2] = 134;
  LOBYTE(v7) = result[2].m128i_i8[6];
  result[3].m128i_i32[0] = v2;
  LOBYTE(v7) = v7 & 0xE0;
  result[3].m128i_i32[1] = v3;
  result[2].m128i_i8[6] = v7;
  result[3].m128i_i8[8] = v5;
  LOBYTE(v7) = a1[2].m128i_i8[6] & 1 | v7;
  result[2].m128i_i8[6] = v7;
  LOBYTE(v7) = a1[2].m128i_i8[6] & 2 | v7;
  result[2].m128i_i8[6] = v7;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v7;
  return result;
}

