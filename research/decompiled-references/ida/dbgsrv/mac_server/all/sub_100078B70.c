/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100078B70
// Address: 0x0000000100078B70

//----- (0000000100078B70) ----------------------------------------------------
__int64 __fastcall sub_100078B70(unsigned __int16 *a1, __int64 a2)
{
  int v4; // r15d
  int v5; // r12d
  int v6; // r15d
  int v7; // r12d
  int v8; // r15d
  int v9; // eax
  signed int v10; // esi
  unsigned int v11; // eax
  unsigned __int16 v12; // di
  __m128i inserted; // xmm0
  __m128i v14; // xmm0
  unsigned __int16 v15; // di
  unsigned int v16; // r11d
  unsigned __int16 v17; // r13
  unsigned int v18; // esi
  unsigned __int16 v19; // r15
  unsigned int v20; // r8d
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // edx
  signed int v24; // ecx
  signed int v25; // edi
  signed int v26; // edx
  signed int v27; // r9d
  signed int v28; // r8d
  signed int v29; // esi
  signed int v30; // r10d
  unsigned int v31; // r11d
  int v33; // [rsp+8h] [rbp-38h]
  int v34; // [rsp+10h] [rbp-30h]
  unsigned __int16 v35; // [rsp+14h] [rbp-2Ch]

  v4 = a1[1];
  v5 = *(unsigned __int16 *)(a2 + 2);
  v6 = v4 - sub_1000751F0((__int64)a1);
  v7 = v5 - sub_1000751F0(a2);
  v34 = v6;
  if ( v7 >= v6 )
  {
    v11 = *(unsigned __int16 *)(a2 + 4);
    v8 = 0;
    while ( 1 )
    {
      v15 = a1[2];
      v16 = *(unsigned __int16 *)(a2 + 6);
      v33 = v8;
      if ( v15 == (_WORD)v11 )
      {
        v17 = a1[3];
        v35 = *(_WORD *)(a2 + 8);
        if ( v17 == (_WORD)v16 )
        {
          v15 = a1[4];
          if ( v15 == *(_WORD *)(a2 + 8) )
          {
            LOWORD(v18) = a1[5];
            v19 = *(_WORD *)(a2 + 10);
            if ( (_WORD)v18 == v19 )
            {
              LOWORD(v20) = a1[6];
              v19 = *(_WORD *)(a2 + 12);
              if ( (_WORD)v20 == v19 )
              {
                LOWORD(v21) = a1[7];
                v19 = *(_WORD *)(a2 + 14);
                if ( (_WORD)v21 == v19 )
                {
                  LOWORD(v22) = a1[8];
                  v19 = *(_WORD *)(a2 + 16);
                  if ( (_WORD)v22 == v19 )
                  {
                    LOWORD(v23) = a1[9];
                    v19 = *(_WORD *)(a2 + 18);
                    if ( (_WORD)v23 == v19 )
                    {
                      v15 = a1[10];
                      v19 = *(_WORD *)(a2 + 20);
                      v16 = a1[3];
                      LOWORD(v24) = v15;
                      if ( v15 == v19 )
                        goto LABEL_31;
                    }
                    else
                    {
                      v16 = a1[3];
                      v15 = a1[9];
                    }
                  }
                  else
                  {
                    v16 = a1[3];
                    v15 = a1[8];
                  }
                }
                else
                {
                  v16 = a1[3];
                  v15 = a1[7];
                }
              }
              else
              {
                v16 = a1[3];
                v15 = a1[6];
              }
            }
            else
            {
              v16 = a1[3];
              v15 = a1[5];
            }
          }
          else
          {
            v16 = a1[3];
            v19 = *(_WORD *)(a2 + 8);
          }
        }
        else
        {
          v15 = a1[3];
          v19 = *(_WORD *)(a2 + 6);
        }
      }
      else
      {
        v35 = *(_WORD *)(a2 + 8);
        v19 = v11;
      }
      v24 = *(unsigned __int16 *)(a2 + 20);
      v23 = *(unsigned __int16 *)(a2 + 18);
      v22 = *(unsigned __int16 *)(a2 + 16);
      v21 = *(unsigned __int16 *)(a2 + 14);
      v20 = *(unsigned __int16 *)(a2 + 12);
      v18 = *(unsigned __int16 *)(a2 + 10);
      if ( v15 <= v19 )
      {
        v15 = a1[10];
        v17 = v16;
LABEL_31:
        v24 = (unsigned __int16)v24 - v15;
        *(_WORD *)(a2 + 20) = v24;
        v25 = (v24 >> 16) + (unsigned __int16)v23 - a1[9];
        *(_WORD *)(a2 + 18) = HIWORD(v24) + v23 - a1[9];
        v26 = (v25 >> 16) + (unsigned __int16)v22 - a1[8];
        *(_WORD *)(a2 + 16) = HIWORD(v25) + v22 - a1[8];
        v27 = (v26 >> 16) + (unsigned __int16)v21 - a1[7];
        *(_WORD *)(a2 + 14) = v27;
        v28 = (v27 >> 16) + (unsigned __int16)v20 - a1[6];
        *(_WORD *)(a2 + 12) = v28;
        v29 = (v28 >> 16) + (unsigned __int16)v18 - a1[5];
        *(_WORD *)(a2 + 10) = v29;
        v30 = (v29 >> 16) + v35 - a1[4];
        *(_WORD *)(a2 + 8) = HIWORD(v29) + v35 - a1[4];
        v31 = (v30 >> 16) + v17 - a1[3];
        *(_WORD *)(a2 + 6) = HIWORD(v30) + v17 - a1[3];
        inserted = _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(
                             _mm_insert_epi16(
                               _mm_insert_epi16(_mm_cvtsi32_si128(HIWORD(v31) + v11 - a1[2]), v31, 1),
                               v30,
                               2),
                             v29,
                             3),
                           v28,
                           4),
                         v27,
                         5),
                       v26,
                       6),
                     v25,
                     7);
        v12 = 1;
        goto LABEL_10;
      }
      v12 = 0;
      inserted = _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(
                           _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v11), v16, 1), v35, 2),
                           v18,
                           3),
                         v20,
                         4),
                       v21,
                       5),
                     v22,
                     6),
                   v23,
                   7);
LABEL_10:
      v8 = v12 + 2 * v33;
      *(_WORD *)(a2 + 20) = 2 * v24;
      v14 = _mm_or_si128(
              _mm_add_epi16(inserted, inserted),
              _mm_srli_epi16(_mm_insert_epi16(_mm_srli_si128(inserted, 2), v24, 7), 0xFu));
      *(__m128i *)(a2 + 4) = v14;
      --v7;
      v11 = _mm_cvtsi128_si32(v14);
      if ( v7 < v34 )
        goto LABEL_3;
    }
  }
  LOWORD(v8) = 0;
LABEL_3:
  v9 = sub_1000751F0(a2);
  if ( v9 >= 113 )
    goto LABEL_34;
  v10 = v7 - v9;
  if ( v7 - v9 > 32766 )
    goto LABEL_34;
  if ( v10 < 0 )
  {
    if ( (unsigned int)v10 >= 0xFFFFFF90 )
      eshift(a2, v10);
    goto LABEL_34;
  }
  *(_WORD *)(a2 + 20) = 0;
  if ( v7 == v9 )
  {
LABEL_34:
    *(_OWORD *)a2 = 0;
    *(_QWORD *)(a2 + 14) = 0;
    return (unsigned __int16)v8;
  }
  *(_WORD *)(a2 + 2) = v10;
  return (unsigned __int16)v8;
}
