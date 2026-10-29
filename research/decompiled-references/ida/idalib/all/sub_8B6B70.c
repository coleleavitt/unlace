bool __fastcall sub_8B6B70(__m128i *a1, int a2)
{
  bool result; // al

  result = (unsigned int)(a2 - 1) <= 0x146;
  if ( (unsigned int)(a2 - 1) <= 0x146 )
    *a1 = _mm_unpacklo_epi32(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(dword_23C4B00[2 * a2]),
              _mm_cvtsi32_si128(dword_23C4B00[2 * a2 + 1] + 1)),
            (__m128i)0LL);
  return result;
}
