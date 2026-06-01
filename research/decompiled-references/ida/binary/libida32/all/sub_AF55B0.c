__int64 __fastcall sub_AF55B0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4, __int32 a5)
{
  __int32 v5; // eax
  int v6; // eax
  __int64 result; // rax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v5 = a3[2].m128i_i32[0];
  a1[2].m128i_i64[1] = a4;
  a1[2].m128i_i32[0] = v5;
  a1[2].m128i_i16[2] = 82;
  v6 = a1[2].m128i_u8[6];
  a1[3].m128i_i32[0] = a5;
  result = v6 & 0xFFFFFFE0 | 8;
  a1[2].m128i_i8[6] = result;
  return result;
}

