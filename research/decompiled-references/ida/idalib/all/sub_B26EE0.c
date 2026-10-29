__m128i *__fastcall sub_B26EE0(__int64 a1, __int32 a2, __int32 a3, __int64 a4, const __m128i *a5)
{
  __m128i *result; // rax
  __int32 v9; // edx
  unsigned __int32 v10; // esi
  unsigned __int32 v11; // esi

  result = (__m128i *)sub_9C3B30((__int64 *)(a1 + 2352), 56, 3u);
  *result = _mm_loadu_si128(a5);
  result[1] = _mm_loadu_si128(a5 + 1);
  v9 = a5[2].m128i_i32[0];
  result[2].m128i_i32[2] = a2;
  v10 = v9;
  result[2].m128i_i32[0] = v9;
  result[2].m128i_i16[2] = 418;
  LOBYTE(v9) = result[2].m128i_i8[6];
  v11 = HIWORD(v10);
  result[2].m128i_i32[3] = a3;
  result[3].m128i_i64[0] = a4;
  result[2].m128i_i8[6] = v9 & 0xE0 | 4;
  if ( (v11 & 0xF0) == 0xF0 && !result->m128i_i64[0] )
    result[2].m128i_i8[2] = v11 & 0xF;
  return result;
}
