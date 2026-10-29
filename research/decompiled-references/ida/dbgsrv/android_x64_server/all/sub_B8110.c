/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8110
// Address: 0x00000000000B8110

//----- (00000000000B8110) ----------------------------------------------------
__int64 __fastcall sub_B8110(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  unsigned int epi16; // ecx
  const __m128i *v7; // rsi
  int v8; // edx
  unsigned int v9; // edx
  __m128i inserted; // xmm0
  __m128i v11; // xmm1
  unsigned int v12; // r8d
  __m128i v13; // xmm0
  __m128i v14; // xmm1

  v1 = *(unsigned __int16 *)(a1 + 4);
  if ( (_WORD)v1 )
  {
    LODWORD(result) = 0;
    if ( (unsigned __int16)v1 >= 0x100u )
    {
      *(_WORD *)(a1 + 4) = BYTE1(v1);
      v3 = _mm_loadu_si128((const __m128i *)(a1 + 6));
      *(__m128i *)(a1 + 6) = _mm_or_si128(
                               _mm_srli_epi16(v3, 8u),
                               _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v3, 2), _mm_cvtsi32_si128(v1), 1), 8u));
      LODWORD(result) = -8;
      LOWORD(v1) = BYTE1(v1);
    }
    v4 = _mm_loadu_si128((const __m128i *)(a1 + 6));
    do
    {
      v5 = _mm_cvtsi32_si128((unsigned __int16)v1);
      v1 = (unsigned __int16)v1 >> 1;
      v4 = _mm_or_si128(_mm_srli_epi16(v4, 1u), _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v4, 2), v5, 1), 0xFu));
      result = (unsigned int)(result - 1);
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
          v9 = *(unsigned __int16 *)(a1 + 20);
          inserted = _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(
                               _mm_insert_epi16(
                                 _mm_insert_epi16(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4)), epi16, 1),
                                 *(unsigned __int16 *)(a1 + 8),
                                 2),
                               *(unsigned __int16 *)(a1 + 10),
                               3),
                             *(unsigned __int16 *)(a1 + 12),
                             4),
                           *(unsigned __int16 *)(a1 + 14),
                           5),
                         *(unsigned __int16 *)(a1 + 16),
                         6),
                       *(unsigned __int16 *)(a1 + 18),
                       7);
          do
          {
            v11 = _mm_insert_epi16(
                    _mm_insert_epi16(
                      _mm_insert_epi16(
                        _mm_insert_epi16(
                          _mm_insert_epi16(
                            _mm_insert_epi16(
                              _mm_insert_epi16(
                                _mm_cvtsi32_si128(_mm_extract_epi16(inserted, 1)),
                                _mm_extract_epi16(inserted, 2),
                                1),
                              _mm_extract_epi16(inserted, 3),
                              2),
                            _mm_extract_epi16(inserted, 4),
                            3),
                          _mm_extract_epi16(inserted, 5),
                          4),
                        _mm_extract_epi16(inserted, 6),
                        5),
                      _mm_extract_epi16(inserted, 7),
                      6),
                    v9,
                    7);
            v9 <<= 8;
            inserted = _mm_or_si128(_mm_slli_epi16(inserted, 8u), _mm_srli_epi16(v11, 8u));
            result = (unsigned int)(result + 8);
            epi16 = _mm_extract_epi16(inserted, 1);
          }
          while ( epi16 < 0x100 );
          *(_WORD *)(a1 + 20) = v9;
          *(__m128i *)(a1 + 4) = inserted;
        }
        if ( (epi16 & 0x8000u) == 0 )
        {
          v12 = *(unsigned __int16 *)(a1 + 20);
          v13 = _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(
                      _mm_insert_epi16(
                        _mm_insert_epi16(
                          _mm_insert_epi16(
                            _mm_insert_epi16(_mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4)), epi16, 1),
                            *(unsigned __int16 *)(a1 + 8),
                            2),
                          *(unsigned __int16 *)(a1 + 10),
                          3),
                        *(unsigned __int16 *)(a1 + 12),
                        4),
                      *(unsigned __int16 *)(a1 + 14),
                      5),
                    *(unsigned __int16 *)(a1 + 16),
                    6),
                  *(unsigned __int16 *)(a1 + 18),
                  7);
          do
          {
            v14 = _mm_insert_epi16(
                    _mm_insert_epi16(
                      _mm_insert_epi16(
                        _mm_insert_epi16(
                          _mm_insert_epi16(
                            _mm_insert_epi16(
                              _mm_insert_epi16(
                                _mm_cvtsi32_si128(_mm_extract_epi16(v13, 1)),
                                _mm_extract_epi16(v13, 2),
                                1),
                              _mm_extract_epi16(v13, 3),
                              2),
                            _mm_extract_epi16(v13, 4),
                            3),
                          _mm_extract_epi16(v13, 5),
                          4),
                        _mm_extract_epi16(v13, 6),
                        5),
                      _mm_extract_epi16(v13, 7),
                      6),
                    v12,
                    7);
            v12 *= 2;
            v13 = _mm_or_si128(_mm_add_epi16(v13, v13), _mm_srli_epi16(v14, 0xFu));
            result = (unsigned int)(result + 1);
          }
          while ( (_mm_extract_epi16(v13, 1) & 0x8000u) == 0 );
          *(_WORD *)(a1 + 20) = v12;
          *(__m128i *)(a1 + 4) = v13;
        }
      }
      else
      {
        v7 = (const __m128i *)(a1 + 6);
        v8 = 0;
        while ( 1 )
        {
          *(__m128i *)(a1 + 4) = _mm_loadu_si128(v7);
          *(_WORD *)(a1 + 20) = 0;
          result = (unsigned int)(v8 + 16);
          if ( (unsigned int)result > 0x70 )
            return (unsigned int)(v8 + 16);
          epi16 = v7->m128i_u16[0];
          v8 += 16;
          if ( (_WORD)epi16 )
            goto LABEL_13;
        }
      }
    }
  }
  return result;
}
