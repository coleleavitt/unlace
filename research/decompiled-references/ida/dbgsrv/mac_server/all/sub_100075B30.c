/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075B30
// Address: 0x0000000100075B30

//----- (0000000100075B30) ----------------------------------------------------
__int64 __fastcall sub_100075B30(__int64 a1, int *a2)
{
  int v2; // xmm0_4
  unsigned int v3; // esi
  int v4; // ecx
  __m128i *v5; // rax
  const __m128i *v6; // r8
  __int16 v7; // ax
  unsigned __int64 v8; // rbx
  __int16 v9; // r8
  unsigned int v10; // et0
  __int16 v11; // ax
  __m128i inserted; // xmm1
  __int64 result; // rax
  unsigned int v14; // r9d
  unsigned int v15; // edx
  __m128i v16; // xmm3
  __m128i v17; // xmm2
  unsigned int v18; // r10d
  __m128i v19; // xmm1
  __m128i v20; // xmm2
  bool v21; // cf
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  unsigned int v24; // ebx
  unsigned int v25; // r14d
  unsigned int v26; // r15d
  unsigned int v27; // r13d
  unsigned int v28; // r12d
  int epi16; // edx

  v2 = *a2;
  v3 = *(unsigned __int16 *)(a1 + 18);
  v4 = 112;
  if ( (_WORD)v3
    || (v5 = (__m128i *)(a1 + 6),
        v6 = (const __m128i *)(a1 + 4),
        *(__m128i *)(a1 + 6) = _mm_loadu_si128((const __m128i *)(a1 + 4)),
        *(_WORD *)(a1 + 4) = 0,
        v3 = *(unsigned __int16 *)(a1 + 18),
        v4 = 96,
        (_WORD)v3)
    || (*v5 = _mm_loadu_si128(v6), v3 = *(unsigned __int16 *)(a1 + 18), v4 = 80, (_WORD)v3)
    || (*v5 = _mm_loadu_si128(v6), v3 = *(unsigned __int16 *)(a1 + 18), v4 = 64, (_WORD)v3)
    || (*v5 = _mm_loadu_si128(v6), v3 = *(unsigned __int16 *)(a1 + 18), v4 = 48, (_WORD)v3)
    || (*v5 = _mm_loadu_si128(v6), v3 = *(unsigned __int16 *)(a1 + 18), v4 = 32, (_WORD)v3)
    || (*v5 = _mm_loadu_si128(v6), v3 = *(unsigned __int16 *)(a1 + 18), v4 = 16, (_WORD)v3) )
  {
    if ( !(_BYTE)v3 )
    {
      v7 = *(_WORD *)(a1 + 12);
      v8 = *(_QWORD *)(a1 + 4);
      *(_WORD *)(a1 + 4) = BYTE1(v8);
      *(_QWORD *)(a1 + 6) = _mm_or_si128(
                              _mm_slli_epi16((__m128i)v8, 8u),
                              _mm_srli_epi16(_mm_loadl_epi64((const __m128i *)(a1 + 6)), 8u)).u64[0];
      v9 = *(_WORD *)(a1 + 14);
      HIWORD(v10) = v7;
      LOWORD(v10) = v9;
      *(_WORD *)(a1 + 14) = v10 >> 8;
      v11 = *(_WORD *)(a1 + 16);
      HIWORD(v10) = v9;
      LOWORD(v10) = v11;
      *(_WORD *)(a1 + 16) = v10 >> 8;
      LOWORD(v10) = v3;
      HIWORD(v10) = v11;
      LOWORD(v3) = v10 >> 8;
      *(_WORD *)(a1 + 18) = v3;
      *(_WORD *)(a1 + 20) = *(unsigned __int8 *)(a1 + 21);
      v4 -= 8;
    }
    inserted = 0;
    result = 0;
    v14 = 0;
    do
    {
      if ( (v3 & 1) != 0 )
      {
        v21 = __CFADD__(*((_WORD *)a2 + 10), (_WORD)v14);
        LOWORD(v14) = *((_WORD *)a2 + 10) + v14;
        v22 = *((unsigned __int16 *)a2 + 9) + v21 + _mm_extract_epi16(inserted, 6);
        v23 = HIWORD(v22) + *((unsigned __int16 *)a2 + 8) + _mm_extract_epi16(inserted, 5);
        v24 = HIWORD(v23) + *((unsigned __int16 *)a2 + 7) + _mm_extract_epi16(inserted, 4);
        v25 = HIWORD(v24) + *((unsigned __int16 *)a2 + 6) + _mm_extract_epi16(inserted, 3);
        v26 = HIWORD(v25) + *((unsigned __int16 *)a2 + 5) + _mm_extract_epi16(inserted, 2);
        v27 = HIWORD(v26) + *((unsigned __int16 *)a2 + 4) + _mm_extract_epi16(inserted, 1);
        v28 = HIWORD(v27) + *((unsigned __int16 *)a2 + 3) + _mm_extract_epi16(inserted, 0);
        epi16 = _mm_extract_epi16(inserted, 7);
        LOWORD(epi16) = *((_WORD *)a2 + 2) + epi16;
        inserted = _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v28), v27, 1), v26, 2),
                             v25,
                             3),
                           v24,
                           4),
                         v23,
                         5),
                       v22,
                       6),
                     HIWORD(v28) + epi16,
                     7);
      }
      if ( (v14 & 1) != 0 )
        result = 1;
      v15 = *(unsigned __int16 *)(a1 + 4);
      *(_WORD *)(a1 + 4) >>= 1;
      v16 = _mm_unpacklo_epi64(
              _mm_insert_epi16(
                _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v3), v15, 1), *(unsigned __int16 *)(a1 + 6), 2),
                *(unsigned __int16 *)(a1 + 8),
                3),
              _mm_loadl_epi64((const __m128i *)(a1 + 10)));
      v17 = _mm_or_si128(
              _mm_srli_epi16(_mm_insert_epi16(_mm_alignr_epi8(v16, v16, 2), *(unsigned __int16 *)(a1 + 20), 0), 1u),
              _mm_slli_epi16(v16, 0xFu));
      v3 = _mm_extract_epi16(v17, 7);
      *(__m128i *)(a1 + 6) = _mm_alignr_epi8(v17, v17, 2);
      v18 = (unsigned int)_mm_extract_epi16(inserted, 7) >> 1;
      v19 = _mm_or_si128(
              _mm_slli_epi16(inserted, 0xFu),
              _mm_srli_epi16(_mm_insert_epi16(_mm_alignr_epi8(inserted, inserted, 2), v14, 6), 1u));
      v14 = _mm_extract_epi16(v19, 6);
      v20 = _mm_alignr_epi8(v19, v19, 14);
      inserted = _mm_insert_epi16(v20, v18, 7);
      --v4;
    }
    while ( v4 );
    *a2 = v2;
    *((_WORD *)a2 + 2) = v18;
    *(__m128i *)((char *)a2 + 6) = v20;
  }
  else
  {
    *v5 = *v6;
    *(_OWORD *)a2 = 0;
    *(_QWORD *)((char *)a2 + 14) = 0;
    return 0;
  }
  return result;
}
