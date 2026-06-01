__m128i *__fastcall sub_AFEF60(const __m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  __int64 v3; // rcx
  __int32 v4; // edx
  __int32 v5; // edx
  __int8 v6; // dl
  __int8 v7; // dl
  __int32 v8; // edx
  __int32 v9; // edx

  result = (__m128i *)sub_99FDF0((__int64 *)(a2 + 2352), 56, 3u);
  v3 = a1[2].m128i_i64[1];
  if ( a1[2].m128i_i8[7] )
  {
    *result = _mm_loadu_si128(a1);
    result[1] = _mm_loadu_si128(a1 + 1);
    v4 = a1[2].m128i_i32[0];
    result[3].m128i_i8[4] = 0;
    result[2].m128i_i32[0] = v4;
    v5 = result[2].m128i_i32[1];
    result[2].m128i_i64[1] = v3;
    result[2].m128i_i32[1] = v5 & 0xE00000 | 0x100007E;
  }
  else
  {
    *result = _mm_loadu_si128(a1);
    result[1] = _mm_loadu_si128(a1 + 1);
    v8 = a1[2].m128i_i32[0];
    result[3].m128i_i8[4] = 0;
    result[2].m128i_i32[0] = v8;
    v9 = result[2].m128i_i32[1];
    result[2].m128i_i64[1] = v3;
    result[2].m128i_i32[1] = v9 & 0xE00000 | 0x7E;
  }
  v6 = a1[2].m128i_i8[6] & 1 | result[2].m128i_i8[6] & 0xFE;
  result[2].m128i_i8[6] = v6;
  v7 = a1[2].m128i_i8[6] & 2 | v6 & 0xFD;
  result[2].m128i_i8[6] = v7;
  result[2].m128i_i8[6] = a1[2].m128i_i8[6] & 4 | v7 & 0xFB;
  return result;
}

