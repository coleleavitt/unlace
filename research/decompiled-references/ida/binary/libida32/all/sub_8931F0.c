bool __fastcall sub_8931F0(_QWORD *a1, int a2)
{
  bool result; // al

  result = (unsigned int)(a2 - 1) <= 0x146;
  if ( (unsigned int)(a2 - 1) <= 0x146 )
    *a1 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(dword_23A09A0[2 * a2]), _mm_cvtsi32_si128(dword_23A09A0[2 * a2 + 1] + 1)).m128i_u64[0];
  return result;
}

