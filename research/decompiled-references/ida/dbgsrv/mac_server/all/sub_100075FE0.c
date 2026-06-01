/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100075FE0
// Address: 0x0000000100075FE0

//----- (0000000100075FE0) ----------------------------------------------------
_BOOL8 __fastcall sub_100075FE0(_WORD *a1, int *a2)
{
  int v2; // xmm0_4
  unsigned __int16 v3; // dx
  __m128i v4; // xmm1
  int v5; // r9d
  int v6; // r15d
  unsigned int v7; // eax
  __m128i v8; // xmm2
  unsigned __int16 v9; // ax
  __m128i inserted; // xmm3
  unsigned int v11; // ebx
  unsigned int v12; // et0
  __m128i v13; // xmm5
  __int16 v14; // r14
  __int16 v15; // r8
  __int16 v16; // cx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // r15
  unsigned int v19; // ecx
  unsigned __int16 v20; // bx
  unsigned int v21; // r12d
  unsigned __int16 v22; // ax
  unsigned int v23; // r13d
  signed int v24; // r10d
  int v25; // r8d
  int v26; // r11d
  int v27; // r14d
  signed int v28; // ecx
  signed int v29; // eax
  signed int v30; // r15d
  unsigned int v31; // ebx
  __m128i v32; // xmm1
  __m128i v33; // xmm2
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  int v36; // r9d
  int v37; // eax
  unsigned int v38; // r10d
  int v39; // r8d
  _BOOL4 v40; // ecx
  unsigned int v41; // r9d
  unsigned int v42; // et0
  __int16 v43; // r11
  __int16 v44; // r8
  __m128i v45; // xmm4
  __int16 v46; // r10
  __m128i v47; // xmm3
  __m128i v48; // xmm4
  _BOOL8 result; // rax
  unsigned int v50; // ecx
  unsigned int v51; // et0
  unsigned int epi16; // edx
  __m128i v53; // xmm0
  __m128i v54; // xmm1
  int v55; // [rsp+0h] [rbp-48h]
  unsigned int v56; // [rsp+Ch] [rbp-3Ch]
  _WORD *v57; // [rsp+10h] [rbp-38h]
  int v58; // [rsp+18h] [rbp-30h]
  unsigned __int16 v59; // [rsp+1Ch] [rbp-2Ch]

  v2 = *a2;
  if ( a1[4] || !a1[5] || !a1[6] || !a1[7] || !a1[8] || !a1[9] || !a1[10] || (a1[3] & 1) != 0 )
  {
    v3 = *((_WORD *)a2 + 2);
    v4 = 0;
    v5 = 114;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v57 = a1;
    while ( 1 )
    {
      v55 = v6;
      v18 = a1[2];
      v19 = *((unsigned __int16 *)a2 + 3);
      v58 = v5;
      v56 = v7;
      if ( v18 == v3 )
      {
        v20 = a1[3];
        v59 = *((_WORD *)a2 + 4);
        if ( v20 == (_WORD)v19 )
        {
          v18 = a1[4];
          if ( v18 == *((_WORD *)a2 + 4) )
          {
            LOWORD(v21) = a1[5];
            v22 = *((_WORD *)a2 + 5);
            if ( (_WORD)v21 == v22 )
            {
              LOWORD(v23) = a1[6];
              v22 = *((_WORD *)a2 + 6);
              if ( (_WORD)v23 == v22 )
              {
                LOWORD(v24) = a1[7];
                v22 = *((_WORD *)a2 + 7);
                if ( (_WORD)v24 == v22 )
                {
                  LOWORD(v25) = a1[8];
                  v22 = *((_WORD *)a2 + 8);
                  if ( (_WORD)v25 == v22 )
                  {
                    LOWORD(v26) = a1[9];
                    v22 = *((_WORD *)a2 + 9);
                    if ( (_WORD)v26 == v22 )
                    {
                      v18 = a1[10];
                      v22 = *((_WORD *)a2 + 10);
                      v19 = (unsigned __int16)a1[3];
                      LOWORD(v27) = v18;
                      if ( v18 == v22 )
                        goto LABEL_25;
                    }
                    else
                    {
                      v19 = (unsigned __int16)a1[3];
                      v18 = a1[9];
                    }
                  }
                  else
                  {
                    v19 = (unsigned __int16)a1[3];
                    v18 = a1[8];
                  }
                }
                else
                {
                  v19 = (unsigned __int16)a1[3];
                  v18 = a1[7];
                }
              }
              else
              {
                v19 = (unsigned __int16)a1[3];
                v18 = a1[6];
              }
            }
            else
            {
              v19 = (unsigned __int16)a1[3];
              v18 = a1[5];
            }
          }
          else
          {
            v19 = (unsigned __int16)a1[3];
            v22 = *((_WORD *)a2 + 4);
          }
        }
        else
        {
          v18 = a1[3];
          v22 = *((_WORD *)a2 + 3);
        }
      }
      else
      {
        v59 = *((_WORD *)a2 + 4);
        v22 = v3;
      }
      LOWORD(v27) = *((_WORD *)a2 + 10);
      LOWORD(v26) = *((_WORD *)a2 + 9);
      v24 = *((unsigned __int16 *)a2 + 7);
      LOWORD(v25) = *((_WORD *)a2 + 8);
      v23 = *((unsigned __int16 *)a2 + 6);
      v21 = *((unsigned __int16 *)a2 + 5);
      if ( v18 <= v22 )
      {
        v18 = v57[10];
        v20 = v19;
LABEL_25:
        v27 = (unsigned __int16)v27 - v18;
        *((_WORD *)a2 + 10) = v27;
        v26 = (v27 >> 16) + (unsigned __int16)v26 - (unsigned __int16)v57[9];
        *((_WORD *)a2 + 9) = v26;
        v25 = (v26 >> 16) + (unsigned __int16)v25 - (unsigned __int16)v57[8];
        *((_WORD *)a2 + 8) = v25;
        v24 = (v25 >> 16) + (unsigned __int16)v24 - (unsigned __int16)v57[7];
        *((_WORD *)a2 + 7) = v24;
        v28 = (v24 >> 16) + (unsigned __int16)v23 - (unsigned __int16)v57[6];
        *((_WORD *)a2 + 6) = v28;
        v29 = (v28 >> 16) + (unsigned __int16)v21 - (unsigned __int16)v57[5];
        *((_WORD *)a2 + 5) = v29;
        v30 = (v29 >> 16) + v59 - (unsigned __int16)v57[4];
        *((_WORD *)a2 + 4) = HIWORD(v29) + v59 - v57[4];
        a1 = v57;
        v31 = (v30 >> 16) + v20 - (unsigned __int16)v57[3];
        *((_WORD *)a2 + 3) = v31;
        v3 = HIWORD(v31) + v3 - v57[2];
        inserted = _mm_insert_epi16(_mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v31), v30, 1), v29, 2), v28, 3);
        v9 = 1;
        goto LABEL_4;
      }
      v9 = 0;
      inserted = _mm_insert_epi16(_mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v19), v59, 1), v21, 2), v23, 3);
      a1 = v57;
LABEL_4:
      HIWORD(v11) = HIWORD(v55);
      LOWORD(v12) = v55;
      HIWORD(v12) = v56;
      LOWORD(v11) = v12 >> 15;
      v13 = _mm_unpacklo_epi16(v8, v4);
      v4 = _mm_or_si128(
             _mm_add_epi16(v4, v4),
             _mm_srli_epi16(_mm_insert_epi16(_mm_shufflelo_epi16(v4, 56), v56, 0), 0xFu));
      v8 = _mm_or_si128(_mm_add_epi16(v8, v8), _mm_srli_epi16(_mm_shuffle_epi32(v13, 85), 0xFu));
      v6 = v9 + 2 * v55;
      *((_WORD *)a2 + 10) = 2 * v27;
      LOWORD(v12) = v27;
      HIWORD(v12) = v26;
      v14 = v12 >> 15;
      LOWORD(v12) = v26;
      HIWORD(v12) = v25;
      *((_WORD *)a2 + 9) = v14;
      *((_WORD *)a2 + 8) = v12 >> 15;
      LOWORD(v12) = v25;
      HIWORD(v12) = v24;
      v15 = v12 >> 15;
      *((_WORD *)a2 + 7) = v15;
      v16 = _mm_cvtsi128_si32(inserted);
      inserted.i64[0] = _mm_or_si128(
                          _mm_add_epi16(inserted, inserted),
                          _mm_srli_epi16(_mm_insert_epi16(_mm_srli_epi64(inserted, 0x10u), v24, 3), 0xFu)).u64[0];
      *(_QWORD *)((char *)a2 + 6) = inserted.i64[0];
      LOWORD(v12) = v16;
      HIWORD(v12) = v3;
      v17 = v12 >> 15;
      *((_WORD *)a2 + 2) = v17;
      v3 = v17;
      v7 = v11;
      --v5;
      if ( v58 == 1 )
        goto LABEL_37;
    }
  }
  v32 = _mm_loadu_si128((const __m128i *)(a2 + 1));
  v33 = _mm_loadu_si128((const __m128i *)((char *)a2 + 6));
  *((_WORD *)a2 + 2) = (unsigned int)_mm_extract_epi16(v32, 0) >> 1;
  *(__m128i *)((char *)a2 + 6) = _mm_or_si128(_mm_slli_epi16(v32, 0xFu), _mm_srli_epi16(v33, 1u));
  v34 = _mm_loadu_si128((const __m128i *)(a1 + 2));
  v35 = _mm_loadu_si128((const __m128i *)(a1 + 3));
  a1[2] = (unsigned int)_mm_extract_epi16(v34, 0) >> 1;
  *(__m128i *)(a1 + 3) = _mm_or_si128(_mm_slli_epi16(v34, 0xFu), _mm_srli_epi16(v35, 1u));
  v36 = *((unsigned __int16 *)a2 + 3);
  v4 = 0;
  v37 = 114;
  v6 = 0;
  v38 = 0;
  v8 = 0;
  do
  {
    v39 = (unsigned __int16)a1[3];
    v40 = (unsigned __int16)v39 <= (unsigned __int16)v36;
    if ( (unsigned __int16)v39 > (unsigned __int16)v36 )
      v39 = 0;
    v41 = v36 - v39;
    HIWORD(v11) = HIWORD(v6);
    LOWORD(v42) = v6;
    HIWORD(v42) = v38;
    LOWORD(v11) = v42 >> 15;
    v43 = *((_WORD *)a2 + 10);
    *((_WORD *)a2 + 10) = 2 * v43;
    v44 = *((_WORD *)a2 + 9);
    HIWORD(v42) = v44;
    LOWORD(v42) = v43;
    v45 = _mm_unpacklo_epi16(v8, v4);
    v4 = _mm_or_si128(
           _mm_add_epi16(v4, v4),
           _mm_srli_epi16(_mm_insert_epi16(_mm_shufflelo_epi16(v4, 56), v38, 0), 0xFu));
    v8 = _mm_or_si128(_mm_add_epi16(v8, v8), _mm_srli_epi16(_mm_shuffle_epi32(v45, 85), 0xFu));
    *((_WORD *)a2 + 9) = v42 >> 15;
    v46 = *((_WORD *)a2 + 8);
    LOWORD(v42) = v44;
    HIWORD(v42) = v46;
    v6 = v40 + 2 * v6;
    *((_WORD *)a2 + 8) = v42 >> 15;
    v47 = (__m128i)*((unsigned __int64 *)a2 + 1);
    HIWORD(v42) = HIWORD(*((_QWORD *)a2 + 1));
    LOWORD(v42) = v46;
    v15 = v42 >> 15;
    *((_WORD *)a2 + 7) = v15;
    v48 = _mm_insert_epi16(_mm_slli_epi64(v47, 0x10u), v41, 0);
    inserted = _mm_or_si128(_mm_srli_epi16(v47, 0xFu), _mm_add_epi16(v48, v48));
    *(_QWORD *)((char *)a2 + 6) = inserted.i64[0];
    HIWORD(v42) = *((_WORD *)a2 + 2);
    LOWORD(v42) = v41;
    v17 = v42 >> 15;
    v36 = _mm_cvtsi128_si32(inserted);
    *((_WORD *)a2 + 2) = v17;
    v38 = v11;
    --v37;
  }
  while ( v37 );
LABEL_37:
  result = 1;
  if ( !v17 && !inserted.i64[0] && !v15 && !*((_WORD *)a2 + 8) && !*((_WORD *)a2 + 9) )
    result = *((_WORD *)a2 + 10) != 0;
  HIWORD(v50) = HIWORD(v11);
  HIWORD(v51) = v11;
  LOWORD(v51) = v6;
  LOWORD(v50) = v51 >> 1;
  epi16 = _mm_extract_epi16(v8, 0);
  *a2 = v2;
  *((_WORD *)a2 + 2) = epi16 >> 2;
  v53 = _mm_unpacklo_epi64(
          _mm_unpacklo_epi32(
            _mm_insert_epi16(_mm_cvtsi32_si128(v50), epi16 >> 1, 1),
            _mm_or_si128(
              _mm_slli_epi16(v8, 0xFu),
              _mm_srli_epi16(_mm_shuffle_epi32(_mm_unpacklo_epi16(v8, v4), 85), 1u))),
          _mm_shufflelo_epi16(
            _mm_or_si128(
              _mm_slli_epi16(v4, 0xFu),
              _mm_srli_epi16(_mm_insert_epi16(_mm_shufflelo_epi16(v4, 56), v11, 0), 1u)),
            57));
  v54 = _mm_or_si128(
          _mm_srli_epi16(_mm_insert_epi16(_mm_alignr_epi8(v53, v53, 2), v6 << 15, 0), 1u),
          _mm_slli_epi16(v53, 0xFu));
  *(__m128i *)((char *)a2 + 6) = _mm_alignr_epi8(v54, v54, 2);
  return result;
}
