__int64 __fastcall sub_1870(__int64 a1)
{
  unsigned int v1; // edx
  __m128i v3; // xmm5
  __m128i v4; // xmm0
  unsigned int v5; // edx
  __m128i v6; // xmm1
  unsigned int v7; // edx

  v1 = *(_DWORD *)(a1 + 4);
  *(_WORD *)(a1 + 2) = __ROL2__(*(_WORD *)(a1 + 2), 8);
  *(_DWORD *)(a1 + 4) = _byteswap_ulong(v1);
  v3 = _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 36)));
  v4 = _mm_unpacklo_epi32(
         _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 24))),
         _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 28))));
  v5 = _byteswap_ulong(*(_DWORD *)(a1 + 32));
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 8))),
                             _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 12)))),
                           _mm_unpacklo_epi32(
                             _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 16))),
                             _mm_cvtsi32_si128(_byteswap_ulong(*(_DWORD *)(a1 + 20)))));
  v6 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v5), v3);
  *(_DWORD *)(a1 + 40) = _byteswap_ulong(*(_DWORD *)(a1 + 40));
  v7 = *(_DWORD *)(a1 + 44);
  *(__m128i *)(a1 + 24) = _mm_unpacklo_epi64(v4, v6);
  *(_DWORD *)(a1 + 44) = _byteswap_ulong(v7);
  return a1;
}

