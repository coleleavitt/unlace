__int64 __fastcall sub_7361F0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int32 a5)
{
  __m128i v5; // xmm0
  int v6; // eax
  __m128i v7; // xmm0
  __int64 result; // rax

  v5 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 60;
  v6 = a1[2].m128i_u8[2];
  *a1 = v5;
  v7 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i64[1] = a4;
  result = v6 & 0xFFFFFFE0 | 8;
  a1[3].m128i_i32[0] = a5;
  a1[2].m128i_i8[2] = result;
  a1[1] = v7;
  return result;
}

