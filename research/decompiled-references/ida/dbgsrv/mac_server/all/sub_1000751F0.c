/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000751F0
// Address: 0x00000001000751F0

//----- (00000001000751F0) ----------------------------------------------------
__int64 __fastcall sub_1000751F0(__int64 a1)
{
  unsigned int v1; // ecx
  __int64 result; // rax
  __m128i v3; // xmm0
  unsigned int v4; // edx
  __m128i inserted; // xmm0
  unsigned int epi16; // esi
  __m128i v7; // xmm1
  unsigned int v8; // ecx
  __m128i *v9; // rdx
  const __m128i *v10; // rsi
  int v11; // r9d
  unsigned int v12; // esi
  unsigned int v13; // r8d
  __int16 v14; // dx
  unsigned int v15; // r10d
  __m128i v16; // xmm0
  unsigned int v17; // ecx
  unsigned int v18; // et0
  int v19; // r10d
  int v20; // r9d
  int v21; // esi
  __int16 v22; // dx
  unsigned int v23; // r8d
  __m128i v24; // xmm0
  int v25; // ecx
  int v26; // r10d
  unsigned int v27; // et0
  int v28; // r11d
  unsigned int v29; // r10d
  __m128i v30; // xmm1

  v1 = *(unsigned __int16 *)(a1 + 4);
  if ( (_WORD)v1 )
  {
    LODWORD(result) = 0;
    if ( (unsigned __int16)v1 >= 0x100u )
    {
      v3 = _mm_loadu_si128((const __m128i *)(a1 + 6));
      *(__m128i *)(a1 + 6) = _mm_or_si128(
                               _mm_srli_epi16(v3, 8u),
                               _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v3, 2), _mm_cvtsi32_si128(v1), 1), 8u));
      LODWORD(result) = -8;
      v1 = BYTE1(v1);
    }
    v4 = *(unsigned __int16 *)(a1 + 20);
    inserted = _mm_insert_epi16(
                 _mm_shuffle_epi8(
                   _mm_unpacklo_epi16(
                     _mm_loadl_epi64((const __m128i *)(a1 + 12)),
                     _mm_insert_epi16(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 6)), *(unsigned __int16 *)(a1 + 10), 2)),
                   (__m128i)xmmword_1000A1520),
                 v1,
                 7);
    do
    {
      epi16 = _mm_extract_epi16(inserted, 7);
      v7 = _mm_or_si128(
             _mm_slli_epi16(_mm_alignr_epi8(inserted, inserted, 14), 0xFu),
             _mm_srli_epi16(_mm_insert_epi16(inserted, v4, 7), 1u));
      inserted = _mm_insert_epi16(v7, epi16 >> 1, 7);
      result = (unsigned int)(result - 1);
      v4 = _mm_extract_epi16(v7, 7);
    }
    while ( (unsigned __int16)epi16 >= 2u );
    *(_WORD *)(a1 + 4) = epi16 >> 1;
    *(__m128i *)(a1 + 6) = v7;
  }
  else
  {
    v8 = *(unsigned __int16 *)(a1 + 6);
    result = 0;
    if ( (v8 & 0x8000u) == 0 )
    {
      if ( (_WORD)v8
        || (v9 = (__m128i *)(a1 + 4),
            v10 = (const __m128i *)(a1 + 6),
            *(__m128i *)(a1 + 4) = _mm_loadu_si128((const __m128i *)(a1 + 6)),
            *(_WORD *)(a1 + 20) = 0,
            v8 = *(unsigned __int16 *)(a1 + 6),
            result = 16,
            (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 32, (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 48, (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 64, (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 80, (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 96, (_WORD)v8)
        || (*v9 = _mm_loadu_si128(v10), v8 = v10->u16[0], result = 112, (_WORD)v8) )
      {
        if ( (unsigned __int16)v8 <= 0xFFu )
        {
          v11 = *(unsigned __int16 *)(a1 + 20);
          v12 = *(unsigned __int16 *)(a1 + 18);
          v13 = *(unsigned __int16 *)(a1 + 16);
          v14 = *(_WORD *)(a1 + 4);
          v15 = *(unsigned __int16 *)(a1 + 14);
          v16 = _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(_mm_cvtsi32_si128(v8), *(unsigned __int16 *)(a1 + 8), 1),
                    *(unsigned __int16 *)(a1 + 10),
                    2),
                  *(unsigned __int16 *)(a1 + 12),
                  3);
          do
          {
            v17 = v15;
            v15 = v13;
            v13 = v12;
            HIWORD(v12) = HIWORD(v11);
            LOWORD(v18) = v11;
            HIWORD(v18) = v13;
            LOWORD(v12) = v18 >> 8;
            LOWORD(v18) = v13;
            HIWORD(v18) = v15;
            LOWORD(v13) = v18 >> 8;
            v11 <<= 8;
            LOWORD(v18) = v15;
            HIWORD(v18) = v17;
            LOWORD(v15) = v18 >> 8;
            v16 = _mm_or_si128(
                    _mm_slli_epi16(v16, 8u),
                    _mm_srli_epi16(_mm_insert_epi16(_mm_srli_epi64(v16, 0x10u), v17, 3), 8u));
            v8 = _mm_cvtsi128_si32(v16);
            v14 <<= 8;
            result = (unsigned int)(result + 8);
          }
          while ( (unsigned __int16)v8 < 0x100u );
          *(_WORD *)(a1 + 20) = v11;
          *(_WORD *)(a1 + 18) = v12;
          *(_WORD *)(a1 + 16) = v13;
          *(_WORD *)(a1 + 14) = v15;
          *(_QWORD *)(a1 + 6) = v16.i64[0];
          *(_WORD *)(a1 + 4) = v14;
        }
        if ( (v8 & 0x8000u) == 0 )
        {
          v19 = *(unsigned __int16 *)(a1 + 20);
          v20 = *(unsigned __int16 *)(a1 + 18);
          v21 = *(unsigned __int16 *)(a1 + 16);
          v22 = *(_WORD *)(a1 + 4);
          v23 = *(unsigned __int16 *)(a1 + 14);
          v24 = _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(_mm_cvtsi32_si128(v8), *(unsigned __int16 *)(a1 + 8), 1),
                    *(unsigned __int16 *)(a1 + 10),
                    2),
                  *(unsigned __int16 *)(a1 + 12),
                  3);
          do
          {
            v25 = v19;
            v26 = v20;
            HIWORD(v20) = HIWORD(v25);
            LOWORD(v27) = v25;
            HIWORD(v27) = v26;
            LOWORD(v20) = v27 >> 15;
            v28 = v21;
            HIWORD(v21) = HIWORD(v26);
            LOWORD(v27) = v26;
            HIWORD(v27) = v28;
            LOWORD(v21) = v27 >> 15;
            v29 = v23;
            HIWORD(v23) = HIWORD(v28);
            LOWORD(v27) = v28;
            HIWORD(v27) = v29;
            LOWORD(v23) = v27 >> 15;
            v30 = _mm_insert_epi16(_mm_srli_epi64(v24, 0x10u), v29, 3);
            v19 = 2 * v25;
            v24 = _mm_or_si128(_mm_add_epi16(v24, v24), _mm_srli_epi16(v30, 0xFu));
            v22 *= 2;
            result = (unsigned int)(result + 1);
          }
          while ( (_mm_cvtsi128_si32(v24) & 0x8000u) == 0 );
          *(_WORD *)(a1 + 20) = v19;
          *(_WORD *)(a1 + 18) = v20;
          *(_WORD *)(a1 + 16) = v21;
          *(_WORD *)(a1 + 14) = v23;
          *(_QWORD *)(a1 + 6) = v24.i64[0];
          *(_WORD *)(a1 + 4) = v22;
        }
      }
      else
      {
        *v9 = _mm_loadu_si128(v10);
        return 128;
      }
    }
  }
  return result;
}
// 1000A1520: using guessed type __int128 xmmword_1000A1520;
