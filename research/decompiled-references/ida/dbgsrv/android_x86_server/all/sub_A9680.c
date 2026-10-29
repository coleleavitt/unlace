/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9680
// Address: 0x000A9680

//----- (000A9680) --------------------------------------------------------
int __fastcall sub_A9680(unsigned __int16 *a1, int a2)
{
  int v3; // edi
  int v4; // edi
  int v5; // eax
  unsigned __int16 *v6; // ecx
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  unsigned __int16 v11; // ax
  bool v12; // cc
  unsigned int v13; // ebx
  __m128i v14; // xmm0
  unsigned __int16 v15; // ax
  int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  __m128i v19; // xmm0
  unsigned int v20; // edx
  __m128i v21; // xmm1
  unsigned int v22; // edi
  __m128i v23; // xmm2
  unsigned int v24; // edx
  __m128i v25; // xmm3
  unsigned int v26; // edi
  __m128i v27; // xmm4
  unsigned int v28; // edx
  unsigned int v29; // edi
  __m128i v30; // xmm6
  unsigned int v31; // eax
  __m128i v32; // xmm0
  int v33; // eax
  int v34; // edi
  unsigned __int16 v36; // [esp+6h] [ebp-36h]
  int v37; // [esp+8h] [ebp-34h]
  unsigned __int16 v38; // [esp+Ch] [ebp-30h]
  int v39; // [esp+Ch] [ebp-30h]
  unsigned __int16 v41; // [esp+16h] [ebp-26h]
  unsigned __int16 v42; // [esp+18h] [ebp-24h]
  unsigned __int16 v43; // [esp+1Ah] [ebp-22h]
  unsigned __int16 v44; // [esp+1Ch] [ebp-20h]
  unsigned __int16 v45; // [esp+1Eh] [ebp-1Eh]
  int v46; // [esp+20h] [ebp-1Ch]
  int v47; // [esp+20h] [ebp-1Ch]
  unsigned int v48; // [esp+28h] [ebp-14h]

  v46 = a1[1];
  v3 = *(unsigned __int16 *)(a2 + 2);
  v47 = v46 - sub_A47E0((int)a1);
  v4 = v3 - sub_A47E0(a2);
  if ( v4 >= v47 )
  {
    v5 = *(unsigned __int16 *)(a2 + 4);
    v37 = 0;
    v6 = a1;
    while ( 1 )
    {
      v7 = v6[2];
      v48 = v5;
      v8 = v5;
      if ( v7 == (_WORD)v5 )
      {
        v7 = a1[3];
        v8 = *(_WORD *)(a2 + 6);
        if ( v7 == v8 )
        {
          v9 = a1[4];
          v8 = *(_WORD *)(a2 + 8);
          if ( v9 == v8
            && (v9 = a1[5], v8 = *(_WORD *)(a2 + 10), v9 == v8)
            && (v45 = a1[5], v9 = a1[6], v8 = *(_WORD *)(a2 + 12), v9 == v8)
            && (v44 = a1[6], v9 = a1[7], v8 = *(_WORD *)(a2 + 14), v9 == v8)
            && (v43 = a1[7], v9 = a1[8], v8 = *(_WORD *)(a2 + 16), v9 == v8) )
          {
            v42 = a1[8];
            v8 = *(_WORD *)(a2 + 18);
            v38 = a1[9];
            if ( v38 == v8 )
            {
              v41 = a1[3];
              v7 = a1[10];
              v8 = *(_WORD *)(a2 + 20);
              v10 = a1[4];
              v11 = v7;
              if ( v7 == v8 )
                goto LABEL_19;
            }
            else
            {
              v7 = a1[9];
            }
          }
          else
          {
            v7 = v9;
          }
        }
      }
      v12 = v7 <= v8;
      v13 = *(unsigned __int16 *)(a2 + 20);
      if ( v12 )
      {
        v11 = *(_WORD *)(a2 + 20);
        v7 = a1[10];
        v38 = *(_WORD *)(a2 + 18);
        v42 = *(_WORD *)(a2 + 16);
        v43 = *(_WORD *)(a2 + 14);
        v44 = *(_WORD *)(a2 + 12);
        v45 = *(_WORD *)(a2 + 10);
        v41 = *(_WORD *)(a2 + 6);
        v10 = *(_WORD *)(a2 + 8);
LABEL_19:
        v36 = v10;
        v17 = v11 - v7;
        *(_WORD *)(a2 + 20) = v17;
        v6 = a1;
        v18 = v38 - a1[9] - (HIWORD(v17) & 1);
        *(_WORD *)(a2 + 18) = v18;
        v39 = v4;
        v19 = _mm_cvtsi32_si128(v18);
        v20 = v42 - a1[8] - (HIWORD(v18) & 1);
        *(_WORD *)(a2 + 16) = v20;
        v21 = _mm_cvtsi32_si128(v20);
        v22 = v43 - a1[7] - (HIWORD(v20) & 1);
        *(_WORD *)(a2 + 14) = v22;
        v23 = _mm_cvtsi32_si128(v22);
        v24 = v44 - a1[6] - (HIWORD(v22) & 1);
        *(_WORD *)(a2 + 12) = v24;
        v25 = _mm_cvtsi32_si128(v24);
        v26 = v45 - a1[5] - (HIWORD(v24) & 1);
        *(_WORD *)(a2 + 10) = v26;
        v27 = _mm_cvtsi32_si128(v26);
        v28 = v36 - a1[4] - (HIWORD(v26) & 1);
        *(_WORD *)(a2 + 8) = v28;
        v13 = v17;
        v29 = v41 - a1[3] - (HIWORD(v28) & 1);
        *(_WORD *)(a2 + 6) = v29;
        v30 = _mm_cvtsi32_si128(v29);
        v31 = v48 - a1[2] - (HIWORD(v29) & 1);
        v4 = v39;
        *(_WORD *)(a2 + 4) = v31;
        v14 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(
                  _mm_unpacklo_epi16(_mm_cvtsi32_si128(v31), v30),
                  _mm_unpacklo_epi16(_mm_cvtsi32_si128(v28), v27)),
                _mm_unpacklo_epi32(_mm_unpacklo_epi16(v25, v23), _mm_unpacklo_epi16(v21, v19)));
        v15 = 1;
        v16 = v37;
        goto LABEL_20;
      }
      v14 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(
                _mm_unpacklo_epi16(_mm_cvtsi32_si128(v48), _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 6))),
                _mm_unpacklo_epi16(
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 8)),
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 10)))),
              _mm_unpacklo_epi32(
                _mm_unpacklo_epi16(
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 12)),
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 14))),
                _mm_unpacklo_epi16(
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 16)),
                  _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 18)))));
      v15 = 0;
      v16 = v37;
      v6 = a1;
LABEL_20:
      v37 = v15 + 2 * v16;
      *(_WORD *)(a2 + 20) = 2 * v13;
      v32 = _mm_or_si128(
              _mm_add_epi16(v14, v14),
              _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(v14, 2), v13, 7), 0xFu));
      *(__m128i *)(a2 + 4) = v32;
      --v4;
      v5 = _mm_cvtsi128_si32(v32);
      if ( v4 < v47 )
        goto LABEL_21;
    }
  }
  v37 = 0;
LABEL_21:
  v33 = sub_A47E0(a2);
  if ( v33 < 113 )
  {
    v34 = v4 - v33;
    if ( v34 <= 32766 )
    {
      if ( v34 < 0 )
      {
        if ( v34 >= -112 )
        {
          eshift(a2, v34);
          *(_WORD *)(a2 + 20) = 0;
        }
      }
      else
      {
        *(_WORD *)(a2 + 20) = 0;
        if ( v34 )
        {
          *(_WORD *)(a2 + 2) = v34;
          return v37;
        }
      }
    }
  }
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 18) = 0;
  *(_DWORD *)(a2 + 14) = 0;
  return v37;
}
