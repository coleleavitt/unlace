__int64 __fastcall sub_7E5800(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v5[12]; // [rsp+0h] [rbp-30h] BYREF

  v3 = a3 ^ 1;
  *(_QWORD *)v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2 ^ 1), _mm_cvtsi32_si128(a3)).m128i_u64[0];
  sub_7E4C70(a1, v5, nullptr);
  *(_QWORD *)v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v3)).m128i_u64[0];
  return sub_7E4C70(a1, v5, nullptr);
}

