__int64 __fastcall sub_154080(__int64 a1, __m128i *a2, __m128i *a3, __m128i *a4, __m128i *a5, const __m128i *a6)
{
  __m128i v7; // xmm3
  __int64 result; // rax
  unsigned int v9; // r11d
  __m128i v10; // xmm4
  __m128i v11; // xmm0
  __int32 v12; // ebx
  __int64 v13; // rbp
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __m128i v16; // xmm1
  __m128i v17; // xmm5
  __m128i v18; // xmm2
  __m128i v19; // xmm6

  v7 = _mm_cvtsi32_si128(a6->m128i_u32[3]);
  result = a6->m128i_u32[0];
  v9 = a6->m128i_u32[1];
  v10 = _mm_loadu_si128(a6);
  v11 = _mm_cvtsi32_si128(a6->m128i_i32[2] - 1);
  v12 = a6->m128i_i32[2];
  v13 = *(_QWORD *)(a1 + 984);
  v14 = _mm_cvtsi128_si32(v7) - 1;
  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 )
  {
    v15 = 0;
    if ( v13 )
    {
      v15 = 10;
      if ( v12 - (int)result >= 40 )
        v15 = 20;
    }
    v10.m128i_i32[0] = v11.m128i_i32[0];
    v16 = _mm_cvtsi32_si128(v15);
    v17 = v11;
    v18 = _mm_cvtsi32_si128(result);
    v19 = _mm_cvtsi32_si128(v14);
  }
  else
  {
    ++v9;
    result = (unsigned int)(result + 1);
    v15 = 66;
    v7 = _mm_cvtsi32_si128(v14 - v9);
    v16 = _mm_cvtsi32_si128(0x43u);
    if ( !v13 )
    {
      v15 = 0;
      v16 = _mm_cvtsi32_si128(1u);
    }
    v10 = _mm_add_epi32(_mm_shuffle_epi32(v10, 230), (__m128i)xmmword_1D39B0);
    v17 = _mm_cvtsi32_si128(v12 - (int)result - 3);
    v19 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v7) - 1);
    v18 = _mm_cvtsi32_si128(2u);
  }
  *a3 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v16, v19), _mm_unpacklo_epi32(v17, v7));
  *a4 = v10;
  *a5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v18, v19), _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), v7));
  *a2 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), _mm_cvtsi32_si128(v9)),
          _mm_unpacklo_epi32(v11, _mm_cvtsi32_si128(v14)));
  return result;
}

