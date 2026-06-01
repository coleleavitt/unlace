/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006CA94
// Address: 0x000000014006CA94

//----- (000000014006CA94) ----------------------------------------------------
__m128i *__fastcall sub_14006CA94(__m128i *a1, unsigned __int8 a2)
{
  __m128i *v2; // r9
  __m128i *v3; // r8
  __m128i *v4; // rdx
  __int64 v5; // rax
  const __m128i *v7; // r10
  __m128i v8; // xmm2
  int v9; // r8d
  __m128i v10; // xmm4
  unsigned int v11; // r11d
  int i; // eax
  __int64 v13; // rcx
  __m128i *v14; // rcx
  __m128i v15; // xmm0
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int8 *v18; // rcx
  __m128i v19; // xmm0
  unsigned __int8 v20; // zf
  int v21; // ecx

  v2 = nullptr;
  v3 = a1;
  if ( a2 )
  {
    if ( dword_1400CA058 >= 2 )
    {
      while ( ((unsigned __int8)v3 & 0xF) != 0 )
      {
        if ( v3->m128i_i8[0] == a2 )
          v2 = v3;
        if ( !v3->m128i_i8[0] )
          return v2;
        v3 = (__m128i *)((char *)v3 + 1);
      }
      v19 = _mm_cvtsi32_si128(a2);
      while ( 1 )
      {
        v21 = _mm_cmpistri(v19, *v3, 64);
        v20 = _mm_cmpistrz(v19, *v3, 64);
        if ( _mm_cmpistrc(v19, *v3, 64) )
        {
          v2 = (__m128i *)((char *)v3 + v21);
          v20 = _mm_cmpistrz(v19, *v3, 64);
        }
        if ( v20 )
          break;
        ++v3;
      }
    }
    else
    {
      v7 = (const __m128i *)((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFF0uLL);
      v8 = _mm_loadu_si128((const __m128i *)((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFF0uLL));
      v9 = -1 << ((unsigned __int8)a1 & 0xF);
      v10 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2 | (a2 << 8)), 0), 0);
      v11 = v9 & _mm_movemask_epi8(_mm_cmpeq_epi8(v8, v10));
      for ( i = v9 & _mm_movemask_epi8(_mm_cmpeq_epi8(v8, (__m128i)0LL));
            !i;
            v11 = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v10)) )
      {
        _BitScanReverse((unsigned int *)&v13, v11);
        v14 = (__m128i *)((char *)v7 + v13);
        if ( v11 )
          v2 = v14;
        v15 = _mm_loadu_si128(++v7);
        i = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)0LL));
      }
      v16 = v11 & ((i & -i) - 1);
      _BitScanReverse((unsigned int *)&v17, v16);
      v18 = &v7->m128i_i8[v17];
      if ( v16 )
        return (__m128i *)v18;
    }
    return v2;
  }
  else
  {
    v4 = (__m128i *)((unsigned __int64)a1 & 0xFFFFFFFFFFFFFFF0uLL);
    for ( LODWORD(v5) = (-1 << ((unsigned __int8)a1 & 0xF))
                      & _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *(__m128i *)((unsigned __int64)a1
                                                                                  & 0xFFFFFFFFFFFFFFF0uLL)));
          !(_DWORD)v5;
          LODWORD(v5) = _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *v4)) )
    {
      ++v4;
    }
    _BitScanForward((unsigned int *)&v5, v5);
    return (__m128i *)((char *)v4 + v5);
  }
}
// 14006CAD9: variable 'v5' is possibly undefined
// 14006CB40: variable 'v13' is possibly undefined
// 14006CB7A: variable 'v17' is possibly undefined
// 1400CA058: using guessed type int dword_1400CA058;
