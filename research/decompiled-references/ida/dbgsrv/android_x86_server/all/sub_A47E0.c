/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A47E0
// Address: 0x000A47E0

//----- (000A47E0) --------------------------------------------------------
int __fastcall sub_A47E0(int a1)
{
  unsigned int v1; // edx
  int result; // eax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i si128; // xmm1
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  unsigned int epi16; // edx
  unsigned __int16 *v9; // edi
  int v10; // ebx
  __int64 v11; // xmm0_8
  unsigned int v12; // esi
  __m128i v13; // xmm0
  __m128i inserted; // xmm1
  unsigned int v15; // esi
  __m128i v16; // xmm0
  __m128i v17; // xmm1

  v1 = *(unsigned __int16 *)(a1 + 4);
  if ( (_WORD)v1 )
  {
    result = 0;
    if ( (unsigned __int16)v1 >= 0x100u )
    {
      *(_WORD *)(a1 + 4) = BYTE1(v1);
      v3 = _mm_loadu_si128((const __m128i *)(a1 + 6));
      *(__m128i *)(a1 + 6) = _mm_or_si128(
                               _mm_srli_epi16(v3, 8u),
                               _mm_slli_epi16(
                                 _mm_or_si128(
                                   _mm_shuffle_epi8(v3, (__m128i)xmmword_EFCF0),
                                   _mm_shuffle_epi8(_mm_cvtsi32_si128(v1), (__m128i)xmmword_EFCE0)),
                                 8u));
      result = -8;
      v1 = BYTE1(v1);
    }
    v4 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    si128 = _mm_load_si128((const __m128i *)&xmmword_EFCE0);
    v6 = _mm_load_si128((const __m128i *)&xmmword_EFCF0);
    do
    {
      v7 = _mm_cvtsi32_si128((unsigned __int16)v1);
      v1 = (unsigned __int16)v1 >> 1;
      v4 = _mm_or_si128(
             _mm_srli_epi16(v4, 1u),
             _mm_slli_epi16(_mm_or_si128(_mm_shuffle_epi8(v4, v6), _mm_shuffle_epi8(v7, si128)), 0xFu));
      --result;
    }
    while ( (_WORD)v1 );
    *(_WORD *)(a1 + 4) = 0;
    *(__m128i *)(a1 + 6) = v4;
  }
  else
  {
    epi16 = *(unsigned __int16 *)(a1 + 6);
    result = 0;
    if ( (epi16 & 0x8000u) == 0 )
    {
      if ( (_WORD)epi16 )
      {
LABEL_13:
        if ( (unsigned __int16)epi16 <= 0xFFu )
        {
          v12 = *(unsigned __int16 *)(a1 + 20);
          v13 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4)), _mm_cvtsi32_si128(epi16)),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 8)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 10)))),
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 12)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 14))),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 18)))));
          do
          {
            inserted = _mm_insert_epi16(_mm_srli_si128(v13, 2), v12, 7);
            v12 <<= 8;
            v13 = _mm_or_si128(_mm_slli_epi16(v13, 8u), _mm_srli_epi16(inserted, 8u));
            result += 8;
            epi16 = _mm_extract_epi16(v13, 1);
          }
          while ( epi16 < 0x100 );
          *(_WORD *)(a1 + 20) = v12;
          *(__m128i *)(a1 + 4) = v13;
        }
        if ( (epi16 & 0x8000u) == 0 )
        {
          v15 = *(unsigned __int16 *)(a1 + 20);
          v16 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4)), _mm_cvtsi32_si128(epi16)),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 8)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 10)))),
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 12)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 14))),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16)),
                      _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 18)))));
          do
          {
            v17 = _mm_insert_epi16(_mm_srli_si128(v16, 2), v15, 7);
            v15 *= 2;
            v16 = _mm_or_si128(_mm_add_epi16(v16, v16), _mm_srli_epi16(v17, 0xFu));
            ++result;
          }
          while ( (_mm_extract_epi16(v16, 1) & 0x8000u) == 0 );
          *(_WORD *)(a1 + 20) = v15;
          *(__m128i *)(a1 + 4) = v16;
        }
      }
      else
      {
        v9 = (unsigned __int16 *)(a1 + 6);
        v10 = 0;
        while ( 1 )
        {
          v11 = *(_QWORD *)v9;
          *(_QWORD *)(a1 + 12) = *(_QWORD *)(a1 + 14);
          *(_QWORD *)(a1 + 4) = v11;
          *(_WORD *)(a1 + 20) = 0;
          result = v10 + 16;
          if ( (unsigned int)(v10 + 16) > 0x70 )
            return v10 + 16;
          epi16 = *v9;
          v10 += 16;
          if ( (_WORD)epi16 )
            goto LABEL_13;
        }
      }
    }
  }
  return result;
}
// EFCE0: using guessed type __int128 xmmword_EFCE0;
// EFCF0: using guessed type __int128 xmmword_EFCF0;
