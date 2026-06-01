/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A54C0
// Address: 0x000A54C0

//----- (000A54C0) --------------------------------------------------------
int __fastcall sub_A54C0(int a1, _WORD *a2)
{
  unsigned int v2; // ebx
  int v3; // edx
  _QWORD *v4; // eax
  __int64 *v5; // ecx
  __int64 v6; // xmm0_8
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8
  __int64 v9; // xmm0_8
  __int64 v10; // xmm0_8
  __int64 v11; // xmm0_8
  unsigned int epi16; // ecx
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  __m128i v15; // xmm2
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __m128i v18; // xmm1
  int v19; // eax
  unsigned __int16 v20; // dx
  int v21; // ebx
  unsigned __int16 v22; // di
  unsigned int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // et0
  __int16 v26; // si
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __m128i v29; // xmm2
  __m128i v30; // xmm3
  __m128i v31; // xmm4
  __m128i v32; // xmm4
  bool v33; // zf
  __int64 v35; // xmm0_8
  unsigned int v37; // [esp+Ch] [ebp-60h]
  unsigned int v38; // [esp+10h] [ebp-5Ch]
  unsigned int v39; // [esp+14h] [ebp-58h]
  int v40; // [esp+18h] [ebp-54h]
  unsigned __int16 v42; // [esp+20h] [ebp-4Ch]
  unsigned __int16 v43; // [esp+24h] [ebp-48h]
  int v44; // [esp+28h] [ebp-44h]
  int v45; // [esp+2Ch] [ebp-40h]
  unsigned int v46; // [esp+30h] [ebp-3Ch]
  __int64 v47; // [esp+42h] [ebp-2Ah]
  _BYTE v48[14]; // [esp+4Ah] [ebp-22h]

  LOWORD(v47) = *a2;
  WORD1(v47) = a2[1];
  v2 = *(unsigned __int16 *)(a1 + 18);
  v3 = 112;
  if ( (_WORD)v2 )
    goto LABEL_8;
  v4 = (_QWORD *)(a1 + 6);
  v5 = (__int64 *)(a1 + 4);
  v6 = *(_QWORD *)(a1 + 4);
  *(_QWORD *)(a1 + 14) = *(_QWORD *)(a1 + 12);
  *(_QWORD *)(a1 + 6) = v6;
  *(_WORD *)(a1 + 4) = 0;
  v2 = *(unsigned __int16 *)(a1 + 18);
  v3 = 96;
  if ( (_WORD)v2
    || (v7 = *v5,
        v4[1] = v5[1],
        *v4 = v7,
        *(_WORD *)(a1 + 4) = 0,
        v2 = *(unsigned __int16 *)(a1 + 18),
        v3 = 80,
        (_WORD)v2)
    || (v8 = *v5,
        v4[1] = v5[1],
        *v4 = v8,
        *(_WORD *)(a1 + 4) = 0,
        v2 = *(unsigned __int16 *)(a1 + 18),
        v3 = 64,
        (_WORD)v2)
    || (v9 = *v5,
        v4[1] = v5[1],
        *v4 = v9,
        *(_WORD *)(a1 + 4) = 0,
        v2 = *(unsigned __int16 *)(a1 + 18),
        v3 = 48,
        (_WORD)v2)
    || (v10 = *v5,
        v4[1] = v5[1],
        *v4 = v10,
        *(_WORD *)(a1 + 4) = 0,
        v2 = *(unsigned __int16 *)(a1 + 18),
        v3 = 32,
        (_WORD)v2)
    || (v11 = *v5,
        v4[1] = v5[1],
        *v4 = v11,
        *(_WORD *)(a1 + 4) = 0,
        v2 = *(unsigned __int16 *)(a1 + 18),
        v3 = 16,
        (_WORD)v2) )
  {
LABEL_8:
    epi16 = v2;
    if ( (_BYTE)v2 )
    {
      v44 = v3;
    }
    else
    {
      v13 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4));
      *(_WORD *)(a1 + 4) >>= 8;
      v14 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
      v15 = _mm_cvtsi32_si128(v2);
      v16 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16));
      v17 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 14));
      v18 = _mm_or_si128(
              _mm_srli_epi16(
                _mm_unpacklo_epi64(
                  v14,
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(v17, v16),
                    _mm_unpacklo_epi16(v15, _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 20))))),
                8u),
              _mm_slli_epi16(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(v13, _mm_cvtsi32_si128(_mm_extract_epi16(v14, 0))),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(_mm_extract_epi16(v14, 1)),
                      _mm_cvtsi32_si128(_mm_extract_epi16(v14, 2)))),
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(_mm_cvtsi32_si128(_mm_extract_epi16(v14, 3)), v17),
                    _mm_unpacklo_epi16(v16, v15))),
                8u));
      *(__m128i *)(a1 + 6) = v18;
      v44 = v3 - 8;
      epi16 = _mm_extract_epi16(v18, 6);
    }
    LOWORD(v40) = 0;
    LOWORD(v19) = 0;
    v43 = 0;
    v42 = 0;
    v20 = 0;
    LOWORD(v21) = 0;
    LOWORD(v39) = 0;
    LOWORD(v38) = 0;
    LOWORD(v37) = 0;
    v45 = 0;
    do
    {
      if ( (epi16 & 1) != 0 )
      {
        v37 = (unsigned __int16)a2[10] + (unsigned __int16)v37;
        v38 = HIWORD(v37) + (unsigned __int16)a2[9] + (unsigned __int16)v38;
        v39 = (HIWORD(v38) & 1) + (unsigned __int16)a2[8] + (unsigned __int16)v39;
        v46 = (((unsigned int)((HIWORD(v39) & 1) + (unsigned __int16)a2[7] + (unsigned __int16)v21) >> 16) & 1)
            + (unsigned __int16)a2[6]
            + v20;
        v24 = (HIWORD(v46) & 1) + (unsigned __int16)a2[5] + v42;
        v23 = (HIWORD(v24) & 1) + (unsigned __int16)a2[4] + v43;
        v19 = (HIWORD(v23) & 1) + (unsigned __int16)a2[3] + (unsigned __int16)v19;
        v21 = (HIWORD(v39) & 1) + (unsigned __int16)a2[7] + (unsigned __int16)v21;
        v22 = (BYTE2(v19) & 1) + a2[2] + v40;
      }
      else
      {
        v22 = v40;
        LOWORD(v23) = v43;
        LOWORD(v46) = v20;
        LOWORD(v24) = v42;
      }
      HIWORD(v25) = v22;
      LOWORD(v25) = v19;
      LOWORD(v19) = v25 >> 1;
      HIWORD(v25) = v25;
      LOWORD(v25) = v23;
      v43 = v25 >> 1;
      HIWORD(v25) = v23;
      LOWORD(v25) = v24;
      v42 = v25 >> 1;
      HIWORD(v25) = v24;
      LOWORD(v25) = v46;
      v20 = v25 >> 1;
      HIWORD(v25) = v46;
      LOWORD(v25) = v21;
      LOWORD(v21) = v25 >> 1;
      HIWORD(v25) = v25;
      LOWORD(v25) = v39;
      LOWORD(v39) = v25 >> 1;
      HIWORD(v25) = v25;
      LOWORD(v25) = v38;
      LOWORD(v38) = v25 >> 1;
      HIWORD(v25) = v25;
      LOWORD(v25) = v37;
      v26 = v25 >> 1;
      LOWORD(v37) = v26;
      v45 |= v25 & 1;
      v27 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 4));
      *(_WORD *)(a1 + 4) >>= 1;
      v28 = _mm_cvtsi32_si128(epi16);
      v29 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 16));
      v30 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 14));
      v31 = _mm_loadl_epi64((const __m128i *)(a1 + 6));
      v32 = _mm_or_si128(
              _mm_srli_epi16(
                _mm_unpacklo_epi64(
                  v31,
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(v30, v29),
                    _mm_unpacklo_epi16(v28, _mm_cvtsi32_si128(*(unsigned __int16 *)(a1 + 20))))),
                1u),
              _mm_slli_epi16(
                _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(v27, _mm_cvtsi32_si128(_mm_extract_epi16(v31, 0))),
                    _mm_unpacklo_epi16(
                      _mm_cvtsi32_si128(_mm_extract_epi16(v31, 1)),
                      _mm_cvtsi32_si128(_mm_extract_epi16(v31, 2)))),
                  _mm_unpacklo_epi32(
                    _mm_unpacklo_epi16(_mm_cvtsi32_si128(_mm_extract_epi16(v31, 3)), v30),
                    _mm_unpacklo_epi16(v29, v28))),
                0xFu));
      *(__m128i *)(a1 + 6) = v32;
      v40 = v22 >> 1;
      v33 = v44-- == 1;
      epi16 = _mm_extract_epi16(v32, 6);
    }
    while ( !v33 );
    *(_WORD *)&v48[12] = v26;
    *(_WORD *)&v48[10] = v38;
    *(_WORD *)&v48[8] = v39;
    *(_WORD *)&v48[6] = v21;
    *(_WORD *)&v48[4] = v20;
    *(_WORD *)&v48[2] = v42;
    *(_WORD *)v48 = v43;
    HIWORD(v47) = v19;
    WORD2(v47) = v22 >> 1;
    *((_QWORD *)a2 + 1) = *(_QWORD *)v48;
    *(_QWORD *)(a2 + 7) = *(_QWORD *)&v48[6];
    *(_QWORD *)a2 = v47;
    return v45;
  }
  else
  {
    v35 = *v5;
    v4[1] = v5[1];
    *v4 = v35;
    *(_WORD *)v5 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 3) = 0;
    *((_DWORD *)a2 + 2) = 0;
    *(_DWORD *)(a2 + 9) = 0;
    *(_DWORD *)(a2 + 7) = 0;
    return 0;
  }
}
