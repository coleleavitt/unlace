/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BC8B0
// Address: 0x00000000000BC8B0

//----- (00000000000BC8B0) ----------------------------------------------------
__int64 __fastcall sub_BC8B0(unsigned __int16 *a1, __int64 a2, __m128i a3, __m128 a4)
{
  int v6; // ebx
  int v7; // r12d
  int v8; // ebx
  int v9; // r12d
  unsigned int v10; // r14d
  unsigned int v11; // r9d
  unsigned __int16 v12; // si
  unsigned __int16 v13; // di
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  unsigned __int16 v16; // r10
  unsigned __int16 v17; // bx
  unsigned __int16 v18; // r11
  unsigned __int16 v19; // bp
  unsigned int v20; // r8d
  __m128i inserted; // xmm0
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // ax
  unsigned int v24; // r11d
  unsigned __int16 v25; // di
  unsigned int v26; // r10d
  int v27; // ebp
  unsigned __int16 v28; // si
  unsigned int v29; // edx
  int v30; // ecx
  unsigned int v31; // ebp
  unsigned int v32; // ecx
  unsigned int v33; // eax
  unsigned int v34; // edi
  unsigned int v35; // r9d
  int v36; // eax
  int v37; // r12d
  unsigned __int16 v39; // [rsp+0h] [rbp-38h]
  unsigned __int16 v40; // [rsp+2h] [rbp-36h]
  int v41; // [rsp+4h] [rbp-34h]

  v6 = a1[1];
  v7 = *(unsigned __int16 *)(a2 + 2);
  v8 = v6 - sub_B8110((__int64)a1);
  v9 = v7 - sub_B8110(a2);
  v41 = v8;
  if ( v9 >= v8 )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    v10 = 0;
    while ( 1 )
    {
      v12 = a1[2];
      v13 = v11;
      if ( v12 == (_WORD)v11 )
      {
        v14 = a1[3];
        v13 = *(_WORD *)(a2 + 6);
        if ( v14 == v13 )
        {
          v15 = a1[4];
          v13 = *(_WORD *)(a2 + 8);
          if ( v15 == v13 )
          {
            v16 = a1[5];
            v13 = *(_WORD *)(a2 + 10);
            if ( v16 == v13 )
            {
              v13 = *(_WORD *)(a2 + 12);
              v39 = a1[6];
              if ( v39 == v13 )
              {
                v17 = a1[7];
                v13 = *(_WORD *)(a2 + 14);
                if ( v17 == v13 )
                {
                  v18 = a1[8];
                  v13 = *(_WORD *)(a2 + 16);
                  if ( v18 == v13 )
                  {
                    v19 = a1[9];
                    v13 = *(_WORD *)(a2 + 18);
                    if ( v19 == v13 )
                    {
                      v12 = a1[10];
                      v13 = *(_WORD *)(a2 + 20);
                      LOWORD(v20) = v12;
                      if ( v12 == v13 )
                        goto LABEL_24;
                    }
                    else
                    {
                      v12 = a1[9];
                    }
                  }
                  else
                  {
                    v12 = a1[8];
                  }
                }
                else
                {
                  v12 = a1[7];
                }
              }
              else
              {
                v12 = a1[6];
              }
            }
            else
            {
              v12 = a1[5];
            }
          }
          else
          {
            v12 = a1[4];
          }
        }
        else
        {
          v12 = a1[3];
        }
      }
      v20 = *(unsigned __int16 *)(a2 + 20);
      if ( v12 <= v13 )
      {
        v12 = a1[10];
        v19 = *(_WORD *)(a2 + 18);
        v18 = *(_WORD *)(a2 + 16);
        v17 = *(_WORD *)(a2 + 14);
        v39 = *(_WORD *)(a2 + 12);
        v16 = *(_WORD *)(a2 + 10);
        v14 = *(_WORD *)(a2 + 6);
        v15 = *(_WORD *)(a2 + 8);
LABEL_24:
        v40 = v14;
        v20 = (unsigned __int16)v20 - v12;
        *(_WORD *)(a2 + 20) = v20;
        v23 = v18;
        v24 = v19 - a1[9] - (HIWORD(v20) & 1);
        *(_WORD *)(a2 + 18) = v24;
        v25 = v16;
        v26 = v23 - a1[8] - (HIWORD(v24) & 1);
        v27 = HIWORD(v26) & 1;
        *(_WORD *)(a2 + 16) = v26;
        v28 = v15;
        v29 = v17 - a1[7] - v27;
        v30 = HIWORD(v29) & 1;
        *(_WORD *)(a2 + 14) = v17 - a1[7] - v27;
        v31 = v39 - a1[6] - v30;
        *(_WORD *)(a2 + 12) = v39 - a1[6] - v30;
        v32 = v25 - a1[5] - (HIWORD(v31) & 1);
        *(_WORD *)(a2 + 10) = v32;
        v33 = v28 - a1[4] - (HIWORD(v32) & 1);
        *(_WORD *)(a2 + 8) = v33;
        v34 = v40 - a1[3] - (HIWORD(v33) & 1);
        *(_WORD *)(a2 + 6) = v34;
        v35 = v11 - a1[2] - (HIWORD(v34) & 1);
        *(_WORD *)(a2 + 4) = v35;
        inserted = _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v35), v34, 1), v33, 2),
                             v32,
                             3),
                           v31,
                           4),
                         v29,
                         5),
                       v26,
                       6),
                     v24,
                     7);
        v22 = 1;
        goto LABEL_25;
      }
      inserted = _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(_mm_cvtsi32_si128(v11), *(unsigned __int16 *)(a2 + 6), 1),
                             *(unsigned __int16 *)(a2 + 8),
                             2),
                           *(unsigned __int16 *)(a2 + 10),
                           3),
                         *(unsigned __int16 *)(a2 + 12),
                         4),
                       *(unsigned __int16 *)(a2 + 14),
                       5),
                     *(unsigned __int16 *)(a2 + 16),
                     6),
                   *(unsigned __int16 *)(a2 + 18),
                   7);
      v22 = 0;
LABEL_25:
      v10 = v22 + 2 * v10;
      *(_WORD *)(a2 + 20) = 2 * v20;
      a4 = (__m128)_mm_srli_epi16(
                     _mm_insert_epi16(
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
                       v20,
                       7),
                     0xFu);
      a3 = _mm_or_si128(_mm_add_epi16(inserted, inserted), (__m128i)a4);
      *(__m128i *)(a2 + 4) = a3;
      --v9;
      v11 = _mm_cvtsi128_si32(a3);
      if ( v9 < v41 )
        goto LABEL_26;
    }
  }
  v10 = 0;
LABEL_26:
  v36 = sub_B8110(a2);
  if ( v36 < 113 )
  {
    v37 = v9 - v36;
    if ( v37 <= 32766 )
    {
      if ( v37 < 0 )
      {
        if ( v37 >= -112 )
        {
          eshift(a2, v37, *(double *)a3.m128i_i64, a4);
          *(_WORD *)(a2 + 20) = 0;
        }
      }
      else
      {
        *(_WORD *)(a2 + 20) = 0;
        if ( v37 )
        {
          *(_WORD *)(a2 + 2) = v37;
          return v10;
        }
      }
    }
  }
  *(_OWORD *)a2 = 0;
  *(_QWORD *)(a2 + 14) = 0;
  return v10;
}
