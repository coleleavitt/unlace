/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_806C340
// Address: 0x0806C340

//----- (0806C340) --------------------------------------------------------
int __cdecl sub_806C340(_DWORD *a1, int a2)
{
  int result; // eax
  __m128i v3; // xmm2
  unsigned int v4; // esi
  __m128i v5; // xmm0
  int v6; // ebp
  int v7; // edx
  int v8; // eax
  bool v9; // cf
  __m128i v10; // xmm0
  unsigned int v11; // esi
  unsigned int v12; // ebx
  int v13; // [esp+Ch] [ebp-20h]

  result = 0;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v3 = _mm_loadl_epi64((const __m128i *)(a2 + 24));
    v4 = a1[4];
    v13 = _mm_cvtsi128_si32(v3);
    v5 = _mm_sub_epi64(
           _mm_loadl_epi64((const __m128i *)(a1[33] + 372)),
           _mm_loadl_epi64((const __m128i *)(a1[33] + 364)));
    v6 = _mm_cvtsi128_si32(v5);
    v7 = _mm_cvtsi128_si32(_mm_srli_epi64(v5, 0x20u));
    v8 = _mm_cvtsi128_si32(_mm_srli_epi64(v3, 0x20u));
    if ( a2 + 64 >= v4 && a2 + 64 < (a1[5] << 6) + v4 )
    {
      v11 = *(_DWORD *)(a2 + 88);
      v12 = *(_DWORD *)(a2 + 92);
      if ( *(_QWORD *)(a2 + 88) < __PAIR64__(v7, v6) && __PAIR64__(v12, v11) >= __PAIR64__(v8, v13) )
      {
        v6 = *(_DWORD *)(a2 + 88);
        v7 = *(_DWORD *)(a2 + 92);
        v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v12));
      }
    }
    v9 = __PAIR64__(v8, v13) < __PAIR64__(v7, v6);
    result = 0;
    if ( v9 )
    {
      v10 = _mm_sub_epi64(v5, v3);
      result = _mm_cvtsi128_si32(v10);
      if ( *(_QWORD *)(a2 + 32) < __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v10, 0x20u)), result) )
        return *(_DWORD *)(a2 + 32);
    }
  }
  return result;
}
