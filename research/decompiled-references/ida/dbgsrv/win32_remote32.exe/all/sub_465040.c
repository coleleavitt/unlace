/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465040
// Address: 0x00465040

//----- (00465040) --------------------------------------------------------
__m128i *__cdecl sub_465040(unsigned int a1, unsigned __int8 a2)
{
  __m128i *v2; // edi
  __m128 v3; // xmm3
  __m128i v4; // xmm3
  int v5; // eax
  const __m128i *v6; // edi
  __int8 *v7; // edx
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm1
  int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  __int8 *v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __m128i *result; // eax
  __m128i v18; // xmm0
  bool v19; // zf
  int v20; // ecx
  __m128i *v21; // eax
  unsigned int i; // edi
  __m128i v23; // xmm0
  unsigned int v24; // edx
  unsigned int v25; // ecx
  const char *v26; // edi
  _BYTE *v27; // edi

  if ( dword_4B7844 )
  {
    v2 = (__m128i *)a1;
    if ( (unsigned int)dword_4B7844 > 1 )
    {
      if ( a2 )
      {
        result = nullptr;
        if ( (a1 & 0xF) != 0 )
        {
          while ( 1 )
          {
            if ( v2->m128i_u8[0] == a2 )
              result = v2;
            if ( !v2->m128i_i8[0] )
              break;
            v2 = (__m128i *)((char *)v2 + 1);
            if ( ((unsigned __int8)v2 & 0xF) == 0 )
              goto LABEL_17;
          }
        }
        else
        {
LABEL_17:
          v18 = _mm_cvtsi32_si128(a2);
          do
          {
            ++v2;
            v19 = _mm_cmpistrz(v18, v2[-1], 64);
            v20 = (int)v2[-1].m128i_i32 + _mm_cmpistri(v18, v2[-1], 64);
            if ( _mm_cmpistrc(v18, v2[-1], 64) )
              result = (__m128i *)v20;
          }
          while ( !v19 );
        }
      }
      else
      {
        v21 = (__m128i *)(a1 & 0xFFFFFFF0);
        for ( i = (-1 << (a1 & 0xF)) & _mm_movemask_epi8(_mm_cmpeq_epi8((__m128i)0LL, *(__m128i *)(a1 & 0xFFFFFFF0)));
              !i;
              i = _mm_movemask_epi8(v23) )
        {
          v23 = _mm_cmpeq_epi8((__m128i)0LL, v21[1]);
          ++v21;
        }
        _BitScanForward(&v24, i);
        return (__m128i *)((char *)v21 + v24);
      }
    }
    else
    {
      v3 = (__m128)_mm_shufflelo_epi16(_mm_cvtsi32_si128(a2 | (a2 << 8)), 0);
      v4 = (__m128i)_mm_movelh_ps(v3, v3);
      v5 = -1 << (a1 & 0xF);
      v6 = (const __m128i *)(a1 - (a1 & 0xF));
      v7 = nullptr;
      while ( 1 )
      {
        v8 = _mm_loadu_si128(v6);
        v9 = _mm_cmpeq_epi8((__m128i)0LL, v8);
        v10 = _mm_cmpeq_epi8(v8, v4);
        v11 = v5 & _mm_movemask_epi8(v9);
        if ( v11 )
          break;
        v12 = v5 & _mm_movemask_epi8(v10);
        _BitScanReverse(&v13, v12);
        v14 = &v6->m128i_i8[v13];
        if ( v12 )
          v7 = v14;
        v5 = -1;
        ++v6;
      }
      v15 = v5 & _mm_movemask_epi8(v10) & (((-2 * v11) & (2 * v11)) - 1);
      _BitScanReverse(&v16, v15);
      result = (__m128i *)((char *)v6 + v16);
      if ( !v15 )
        return (__m128i *)v7;
    }
  }
  else
  {
    v25 = strlen((const char *)a1) + 1;
    v26 = (const char *)(a1 + v25 - 1);
    do
    {
      if ( !v25 )
        break;
      v19 = *v26-- == a2;
      --v25;
    }
    while ( !v19 );
    v27 = v26 + 1;
    if ( *v27 == a2 )
      return (__m128i *)v27;
    else
      return nullptr;
  }
  return result;
}
// 4B7844: using guessed type int dword_4B7844;
