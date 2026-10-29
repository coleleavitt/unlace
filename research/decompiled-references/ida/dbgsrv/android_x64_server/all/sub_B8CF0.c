/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8CF0
// Address: 0x00000000000B8CF0

//----- (00000000000B8CF0) ----------------------------------------------------
__int64 __fastcall sub_B8CF0(__int64 a1, int *a2)
{
  unsigned int epi16; // esi
  __m128i *v3; // rax
  const __m128i *v4; // rcx
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  int v8; // r10d
  int v9; // ebp
  unsigned int v10; // r8d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  unsigned int v16; // r12d
  __int64 result; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  unsigned int v20; // ecx
  __m128i inserted; // xmm0
  __m128i v22; // xmm1
  unsigned int v23; // et0
  __m128i v24; // xmm1
  int v25; // [rsp+Ch] [rbp-6Ch]
  int v27; // [rsp+20h] [rbp-58h]
  __int64 v28; // [rsp+24h] [rbp-54h]
  __int64 v29; // [rsp+2Eh] [rbp-4Ah]

  v27 = *a2;
  epi16 = *(unsigned __int16 *)(a1 + 18);
  v25 = 112;
  if ( (_WORD)epi16
    || (v3 = (__m128i *)(a1 + 6),
        v4 = (const __m128i *)(a1 + 4),
        *(__m128i *)(a1 + 6) = _mm_loadu_si128((const __m128i *)(a1 + 4)),
        *(_WORD *)(a1 + 4) = 0,
        epi16 = *(unsigned __int16 *)(a1 + 18),
        v25 = 96,
        (_WORD)epi16)
    || (*v3 = _mm_loadu_si128(v4), *(_WORD *)(a1 + 4) = 0,
                                   epi16 = *(unsigned __int16 *)(a1 + 18),
                                   v25 = 80,
                                   (_WORD)epi16)
    || (*v3 = _mm_loadu_si128(v4), *(_WORD *)(a1 + 4) = 0,
                                   epi16 = *(unsigned __int16 *)(a1 + 18),
                                   v25 = 64,
                                   (_WORD)epi16)
    || (*v3 = _mm_loadu_si128(v4), *(_WORD *)(a1 + 4) = 0,
                                   epi16 = *(unsigned __int16 *)(a1 + 18),
                                   v25 = 48,
                                   (_WORD)epi16)
    || (*v3 = _mm_loadu_si128(v4), *(_WORD *)(a1 + 4) = 0,
                                   epi16 = *(unsigned __int16 *)(a1 + 18),
                                   v25 = 32,
                                   (_WORD)epi16)
    || (*v3 = _mm_loadu_si128(v4), *(_WORD *)(a1 + 4) = 0,
                                   epi16 = *(unsigned __int16 *)(a1 + 18),
                                   v25 = 16,
                                   (_WORD)epi16) )
  {
    if ( !(_BYTE)epi16 )
    {
      v5 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4));
      *(_WORD *)(a1 + 4) >>= 8;
      v6 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
      v7 = _mm_or_si128(
             _mm_srli_epi16(
               _mm_insert_epi16(
                 _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(v6, *(unsigned __int16 *)(a1 + 14), 4),
                     *(unsigned __int16 *)(a1 + 16),
                     5),
                   epi16,
                   6),
                 *(unsigned __int16 *)(a1 + 20),
                 7),
               8u),
             _mm_slli_epi16(
               _mm_insert_epi16(
                 _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(v5, _mm_extract_epi16(v6, 0), 1),
                           _mm_extract_epi16(v6, 1),
                           2),
                         _mm_extract_epi16(v6, 2),
                         3),
                       _mm_extract_epi16(v6, 3),
                       4),
                     *(unsigned __int16 *)(a1 + 14),
                     5),
                   *(unsigned __int16 *)(a1 + 16),
                   6),
                 epi16,
                 7),
               8u));
      *(__m128i *)(a1 + 6) = v7;
      v25 -= 8;
      epi16 = _mm_extract_epi16(v7, 6);
    }
    LOWORD(v8) = 0;
    LOWORD(v9) = 0;
    LOWORD(v10) = 0;
    LOWORD(v11) = 0;
    LOWORD(v12) = 0;
    LOWORD(v13) = 0;
    LOWORD(v14) = 0;
    LOWORD(v15) = 0;
    LOWORD(v16) = 0;
    LODWORD(result) = 0;
    do
    {
      if ( (epi16 & 1) != 0 )
      {
        v16 = *((unsigned __int16 *)a2 + 10) + (unsigned __int16)v16;
        v15 = HIWORD(v16) + *((unsigned __int16 *)a2 + 9) + (unsigned __int16)v15;
        v14 = (HIWORD(v15) & 1) + *((unsigned __int16 *)a2 + 8) + (unsigned __int16)v14;
        v13 = (HIWORD(v14) & 1) + *((unsigned __int16 *)a2 + 7) + (unsigned __int16)v13;
        v12 = (HIWORD(v13) & 1) + *((unsigned __int16 *)a2 + 6) + (unsigned __int16)v12;
        v11 = (HIWORD(v12) & 1) + *((unsigned __int16 *)a2 + 5) + (unsigned __int16)v11;
        v10 = (HIWORD(v11) & 1) + *((unsigned __int16 *)a2 + 4) + (unsigned __int16)v10;
        v9 = (HIWORD(v10) & 1) + *((unsigned __int16 *)a2 + 3) + (unsigned __int16)v9;
        LOWORD(v8) = (BYTE2(v9) & 1) + *((_WORD *)a2 + 2) + v8;
      }
      v18 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4));
      *(_WORD *)(a1 + 4) >>= 1;
      v19 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
      v20 = *(unsigned __int16 *)(a1 + 14);
      inserted = _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(v18, _mm_extract_epi16(v19, 0), 1),
                         _mm_extract_epi16(v19, 1),
                         2),
                       _mm_extract_epi16(v19, 2),
                       3),
                     _mm_extract_epi16(v19, 3),
                     4),
                   v20,
                   5);
      v22 = _mm_insert_epi16(v19, v20, 4);
      LOBYTE(v20) = v16;
      HIWORD(v23) = v8;
      LOWORD(v23) = v9;
      LOWORD(v9) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v10;
      LOWORD(v10) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v11;
      LOWORD(v11) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v12;
      LOWORD(v12) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v13;
      LOWORD(v13) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v14;
      LOWORD(v14) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v15;
      LOWORD(v15) = v23 >> 1;
      HIWORD(v23) = v23;
      LOWORD(v23) = v16;
      LOWORD(v16) = v23 >> 1;
      result = v20 & 1 | (unsigned int)result;
      v24 = _mm_or_si128(
              _mm_srli_epi16(
                _mm_insert_epi16(
                  _mm_insert_epi16(_mm_insert_epi16(v22, *(unsigned __int16 *)(a1 + 16), 5), epi16, 6),
                  *(unsigned __int16 *)(a1 + 20),
                  7),
                1u),
              _mm_slli_epi16(
                _mm_insert_epi16(_mm_insert_epi16(inserted, *(unsigned __int16 *)(a1 + 16), 6), epi16, 7),
                0xFu));
      *(__m128i *)(a1 + 6) = v24;
      v8 = (unsigned __int16)v8 >> 1;
      epi16 = _mm_extract_epi16(v24, 6);
      --v25;
    }
    while ( v25 );
    HIWORD(v29) = v16;
    WORD2(v29) = v15;
    WORD1(v29) = v14;
    LOWORD(v29) = v13;
    HIWORD(v28) = v11;
    WORD2(v28) = v10;
    WORD1(v28) = v9;
    LOWORD(v28) = v8;
    *(_QWORD *)((char *)a2 + 14) = v29;
    *a2 = v27;
    *(_QWORD *)(a2 + 1) = v28;
    *((_WORD *)a2 + 6) = v12;
    *((_WORD *)a2 + 7) = v13;
  }
  else
  {
    *v3 = _mm_loadu_si128(v4);
    v4->m128i_i16[0] = 0;
    *(_OWORD *)a2 = 0;
    *(_QWORD *)((char *)a2 + 14) = 0;
    return 0;
  }
  return result;
}
