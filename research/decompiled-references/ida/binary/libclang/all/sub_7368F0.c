char __fastcall sub_7368F0(__m128i *a1, __int64 a2, const __m128i *a3)
{
  __int32 v3; // eax
  __m128i v4; // xmm0
  int v5; // eax

  v3 = a1[2].m128i_i32[0];
  *a1 = _mm_loadu_si128(a3);
  v5 = v3 & 0xE00000;
  v4 = _mm_loadu_si128(a3 + 1);
  LOBYTE(v5) = v5 | 0xBF;
  a1[2].m128i_i32[0] = v5;
  a1[1] = v4;
  return v5;
}

