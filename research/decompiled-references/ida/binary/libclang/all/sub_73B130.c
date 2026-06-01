__int64 __fastcall sub_73B130(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __m128i v4; // xmm0
  int v5; // eax
  __m128i v6; // xmm0
  __int64 result; // rax

  v4 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 216;
  v5 = a1[2].m128i_u8[2];
  *a1 = v4;
  v6 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i64[1] = a4;
  result = v5 & 0xFFFFFFE0 | 0x18;
  a1[1] = v6;
  a1[2].m128i_i8[2] = result;
  return result;
}

