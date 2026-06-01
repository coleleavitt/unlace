/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140066690
// Address: 0x0000000140066690

//----- (0000000140066690) ----------------------------------------------------
__int64 __fastcall sub_140066690(__int16 *a1, _WORD *a2, __int64 a3, char a4)
{
  unsigned __int16 v5; // r14
  unsigned __int16 v6; // r15
  __int16 v7; // r10
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r11
  unsigned __int16 v10; // r13
  __int16 v11; // ax
  __int16 v12; // cx
  __int16 v13; // di
  __int16 v14; // r10
  unsigned __int16 v15; // cx
  __int16 v16; // di
  int v17; // edx
  __m128i v18; // xmm1
  unsigned int v19; // r11d
  __m128i v20; // xmm0
  unsigned int v21; // esi
  unsigned __int16 epi16; // ax
  int v23; // eax
  unsigned __int16 v24; // dx
  bool v25; // zf
  unsigned __int16 v26; // ax
  int v27; // edx
  __int64 v28; // rax
  unsigned __int16 v29; // r8
  __int16 v30; // dx
  __int16 v31; // ax
  unsigned int v33; // eax
  unsigned __int64 v34; // r9
  unsigned __int16 v35; // r8
  unsigned int v36; // r11d
  unsigned int v37; // esi
  unsigned int v38; // edx
  unsigned int v39; // edx
  unsigned int v40; // edx
  unsigned int v41; // edx
  __int16 v42; // ax
  char v43; // r8
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // r8d
  unsigned int v47; // edx
  char v48; // [rsp+30h] [rbp-29h]
  unsigned __int16 v49; // [rsp+32h] [rbp-27h]
  unsigned __int16 v50; // [rsp+34h] [rbp-25h]
  __int16 v51; // [rsp+36h] [rbp-23h]
  __int16 v52; // [rsp+38h] [rbp-21h]
  unsigned __int16 v53; // [rsp+3Ch] [rbp-1Dh]
  int v54; // [rsp+40h] [rbp-19h]
  __int64 v55; // [rsp+48h] [rbp-11h]
  __m128i v56; // [rsp+50h] [rbp-9h] BYREF
  int v57; // [rsp+60h] [rbp+7h]
  __int16 v58; // [rsp+64h] [rbp+Bh]
  __m128i v59; // [rsp+68h] [rbp+Fh] BYREF
  int v60; // [rsp+78h] [rbp+1Fh]
  unsigned __int16 v61; // [rsp+7Ch] [rbp+23h]

  v5 = a2[5];
  v6 = a2[4];
  v7 = a1[7];
  v8 = a2[3];
  v9 = v7 & 0x7FFF;
  v10 = a2[1];
  v59.m128i_i16[3] = a1[6];
  v49 = a1[5];
  v59.m128i_i16[4] = v49;
  v59.m128i_i16[5] = a1[4];
  v59.m128i_i16[6] = a1[3];
  v59.m128i_i16[7] = a1[2];
  v53 = a1[1];
  LOWORD(v60) = v53;
  v11 = *a1;
  v12 = a2[7];
  HIWORD(v60) = v11;
  v13 = v12;
  v14 = v7 >> 15;
  v52 = 0;
  v15 = v12 & 0x7FFF;
  v50 = a2[6];
  v56.m128i_i16[3] = v50;
  v16 = v13 >> 15;
  v51 = a2[2];
  v56.m128i_i16[7] = v51;
  HIWORD(v57) = *a2;
  v59.m128i_i16[0] = v14;
  *(__int32 *)((char *)v59.m128i_i32 + 2) = v9;
  v61 = 0;
  v56.m128i_i16[0] = v16;
  *(__int32 *)((char *)v56.m128i_i32 + 2) = v15;
  v56.m128i_i16[4] = v5;
  v56.m128i_i16[5] = v6;
  v56.m128i_i16[6] = v8;
  LOWORD(v57) = v10;
  v58 = 0;
  if ( a4 )
  {
    v16 = ~v16;
    v56.m128i_i16[0] = v16;
  }
  v17 = v9 - v15;
  v54 = v15;
  if ( v17 <= 0 )
  {
    v19 = v60;
    v20 = v59;
    v21 = v57;
    v18 = v56;
    v55 = v56.m128i_i64[0];
  }
  else
  {
    v18 = v59;
    v19 = v57;
    v20 = v56;
    v21 = v60;
    v10 = v60;
    v57 = v60;
    v16 = v59.m128i_i16[0];
    v17 = -v17;
    v54 = v59.m128i_u16[1];
    epi16 = _mm_extract_epi16(v56, 4);
    v56 = v59;
    v60 = v19;
    v59 = v20;
    v49 = epi16;
    v55 = v56.m128i_i64[0];
    v53 = v19;
    v14 = _mm_cvtsi128_si32(v20);
    v51 = _mm_extract_epi16(v56, 7);
    v8 = _mm_extract_epi16(v56, 6);
    v6 = _mm_extract_epi16(v56, 5);
    v5 = _mm_extract_epi16(v56, 4);
    v50 = _mm_extract_epi16(v56, 3);
    v15 = _mm_extract_epi16(v56, 1);
    v52 = _mm_extract_epi16(v56, 2);
  }
  v48 = 0;
  if ( v17 )
  {
    if ( v17 < -113 )
    {
LABEL_15:
      v30 = v51;
      v31 = v50;
      goto LABEL_16;
    }
    v23 = sub_140067430(&v59, v17);
    v24 = v60;
    v25 = v23 == 1;
    v26 = v61;
    v48 = !v25;
    v19 = v60;
    v14 = v59.m128i_i16[0];
    v53 = v60;
    v49 = v59.m128i_u16[4];
  }
  else
  {
    v27 = 2;
    v28 = 0;
    while ( 1 )
    {
      v29 = v59.m128i_u16[v28 + 2];
      if ( v29 != v56.m128i_i16[v28 + 2] )
        break;
      ++v27;
      ++v28;
      if ( v27 >= 11 )
      {
        if ( v14 != v16 || !v15 )
        {
          *(_OWORD *)a3 = 0;
          return 1;
        }
        v15 = v54 + 1;
        if ( (unsigned int)(v54 + 1) >= 0x7FFF )
          goto LABEL_29;
        goto LABEL_15;
      }
    }
    if ( v29 > (unsigned int)v56.m128i_i16[v28 + 2] )
    {
      v33 = v21;
      v57 = v19;
      v24 = v21;
      v14 = _mm_cvtsi128_si32(v18);
      v21 = v19;
      v53 = v24;
      v19 = v33;
      v16 = _mm_cvtsi128_si32(v20);
      v56 = v20;
      v10 = v21;
      v59 = v18;
      v49 = _mm_extract_epi16(v18, 4);
      v34 = v20.m128i_i64[0];
      v35 = _mm_extract_epi16(v20, 7);
      v8 = _mm_extract_epi16(v20, 6);
      v6 = _mm_extract_epi16(v20, 5);
      v50 = _mm_extract_epi16(v20, 3);
      v5 = _mm_extract_epi16(v20, 4);
      v52 = _mm_extract_epi16(v20, 2);
      v26 = 0;
      goto LABEL_25;
    }
    v24 = v53;
    v26 = 0;
  }
  v34 = v55;
  v35 = v51;
LABEL_25:
  v36 = HIWORD(v19);
  if ( v14 == v16 )
  {
    v58 = v26;
    v37 = HIWORD(v21);
    HIWORD(v57) = v36 + v37;
    v38 = v10 + ((v36 + v37) >> 16) + v24;
    LOWORD(v57) = v38;
    v39 = HIWORD(v56.m128i_i64[1]) + HIWORD(v59.m128i_i64[1]) + (HIWORD(v38) & 1);
    v56.m128i_i16[7] = v39;
    v40 = v8 + v59.m128i_u16[6] + (HIWORD(v39) & 1);
    v56.m128i_i16[6] = v40;
    v41 = v6 + v59.m128i_u16[5] + (HIWORD(v40) & 1);
    v56.m128i_i16[5] = v41;
    v56.m128i_i16[4] = v49 + (BYTE2(v41) & 1) + v5;
    v56.m128i_i16[3] = HIWORD(v34) + v59.m128i_i16[3] + (((unsigned int)(v49 + (HIWORD(v41) & 1) + v5) >> 16) & 1);
    v42 = v59.m128i_i16[2]
        + (((HIWORD(v34) + HIWORD(v59.m128i_i64[0]) + (((unsigned int)(v49 + (HIWORD(v41) & 1) + v5) >> 16) & 1)) >> 16)
         & 1)
        + v52;
    v43 = 0;
  }
  else
  {
    v44 = -v26;
    v58 = v44;
    v45 = HIWORD(v57) - (HIWORD(v44) & 1) - v36;
    HIWORD(v57) = HIWORD(v57) - (BYTE2(v44) & 1) - v36;
    LOWORD(v57) = v10 - (BYTE2(v45) & 1) - v53;
    v46 = v35 - HIWORD(v59.m128i_i64[1]) - (((unsigned int)(v10 - (HIWORD(v45) & 1) - v53) >> 16) & 1);
    v56.m128i_i16[7] = v46;
    v56.m128i_i16[6] = v8 - v59.m128i_i16[6] - (BYTE2(v46) & 1);
    v56.m128i_i16[5] = v6 - v59.m128i_i16[5] - (((unsigned int)(v8 - v59.m128i_u16[6] - (HIWORD(v46) & 1)) >> 16) & 1);
    v56.m128i_i16[4] = v5
                     - (((v6 - v59.m128i_u16[5] - (((unsigned int)(v8 - v59.m128i_u16[6] - (HIWORD(v46) & 1)) >> 16) & 1)) >> 16)
                      & 1)
                     - v49;
    v47 = ((v5
          - (((v6 - v59.m128i_u16[5] - (((unsigned int)(v8 - v59.m128i_u16[6] - (HIWORD(v46) & 1)) >> 16) & 1)) >> 16)
           & 1)
          - v49) >> 16)
        & 1;
    v56.m128i_i16[3] = v50 - v59.m128i_i16[3] - v47;
    v43 = 1;
    v42 = v52 - (v59.m128i_i16[2] + (((v50 - HIWORD(v59.m128i_i64[0]) - v47) >> 16) & 1));
  }
  v56.m128i_i16[2] = v42;
  if ( !sub_140066F00((__int64)&v56, v48, v43, v54, 112) )
  {
LABEL_29:
    *(_OWORD *)a3 = 0;
    return 2;
  }
  v10 = v57;
  v30 = v56.m128i_i16[7];
  v8 = v56.m128i_u16[6];
  v6 = v56.m128i_u16[5];
  v5 = v56.m128i_u16[4];
  v31 = v56.m128i_i16[3];
  v15 = v56.m128i_u16[1];
  v16 = v56.m128i_i16[0];
LABEL_16:
  if ( v16 )
    v15 |= 0x8000u;
  *(_WORD *)(a3 + 14) = v15;
  *(_WORD *)(a3 + 12) = v31;
  *(_WORD *)a3 = HIWORD(v57);
  *(_WORD *)(a3 + 10) = v5;
  *(_WORD *)(a3 + 8) = v6;
  *(_WORD *)(a3 + 6) = v8;
  *(_WORD *)(a3 + 4) = v30;
  *(_WORD *)(a3 + 2) = v10;
  return 1;
}
