__int64 __fastcall sub_B13EC0(__m128i *a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  __int32 v4; // eax
  __int64 result; // rax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v4 = a3[2].m128i_i32[0];
  a1[2].m128i_i64[1] = a4;
  a1[2].m128i_i32[0] = v4;
  a1[2].m128i_i16[2] = 242;
  result = a1[2].m128i_i8[6] & 0xE0 | 8u;
  a1[2].m128i_i8[6] = a1[2].m128i_i8[6] & 0xE0 | 8;
  return result;
}
