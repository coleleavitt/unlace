/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CD100
// Address: 0x080CD100

//----- (080CD100) --------------------------------------------------------
void __cdecl sub_80CD100(int a1)
{
  int v1; // edx
  __m128i v2; // xmm0
  unsigned int v3; // edx
  int size; // edi
  int v5; // eax
  __m128i v6; // xmm1
  unsigned int v7; // ebp
  void *v8; // eax
  void *v9; // edx

  v1 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v2 = _mm_loadl_epi64((const __m128i *)(v1 + 4));
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 8) = v2.m128i_i64[0];
  v3 = *(_DWORD *)(v1 + 12);
  *(_DWORD *)(a1 + 32) = v3;
  if ( v3 )
  {
    size = _mm_cvtsi128_si32(v2);
    v5 = _mm_cvtsi128_si32(_mm_srli_epi64(v2, 0x20u));
    if ( (size != 0) + v5 <= 0
      || (v6 = _mm_and_si128(_mm_load_si128((const __m128i *)&xmmword_80DE190), v2),
          _mm_cvtsi128_si32(_mm_srli_epi64(v6, 0x20u)) ^ v5 | size ^ _mm_cvtsi128_si32(v6)) )
    {
      *(_DWORD *)(a1 + 32) = 0;
    }
    else
    {
      v7 = ((unsigned int)(_mm_add_epi64(
                             _mm_add_epi64(v2, _mm_unpacklo_epi32(_mm_cvtsi32_si128(v3), _mm_cvtsi32_si128(0))),
                             (__m128i)-1LL).m128i_i64[0]
                         / v3)
          + 7) >> 3;
      *(_DWORD *)(a1 + 28) = sub_80CF710(size);
      v8 = sub_80CF710(v7);
      v9 = *(void **)(a1 + 28);
      *(_DWORD *)(a1 + 24) = v8;
      if ( v8 && v9 )
      {
        memset(v8, 0, v7);
      }
      else
      {
        sub_80CF780(v9);
        *(_DWORD *)(a1 + 28) = 0;
        sub_80CF780(*(void **)(a1 + 24));
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 32) = 0;
      }
    }
  }
}
// 80DE190: using guessed type __int128 xmmword_80DE190;
