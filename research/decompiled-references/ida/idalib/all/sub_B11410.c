char __fastcall sub_B11410(__m128i *a1, __int64 a2, const __m128i *a3)
{
  int v3; // eax

  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i32[0] = a3[2].m128i_i32[0];
  v3 = a1[2].m128i_i32[1] & 0xE00000;
  LOBYTE(v3) = -59;
  a1[2].m128i_i32[1] = v3;
  return v3;
}
