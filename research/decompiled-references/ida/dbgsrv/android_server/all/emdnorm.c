/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x00000000000B2E00

//----- (00000000000B2E00) ----------------------------------------------------
bool __fastcall emdnorm(__int64 a1, char a2, char a3, int a4, int a5, int8x16x2_t a6)
{
  _BOOL4 v11; // w24
  int v12; // w0
  int v14; // w20
  int v15; // w14
  __int16 v16; // w13
  __int16 v17; // w15
  int v18; // w8
  int v19; // w9
  int v20; // w12
  int v21; // w10
  __int64 v22; // x11
  unsigned __int16 v23; // w16
  __int16 v24; // w14
  __int16 v25; // w13
  __int64 v26; // x15
  unsigned __int32 v27; // w16
  uint16x8_t v28; // q2
  __int16 v29; // w17
  __int64 v30; // x18
  __int64 v31; // x17
  __int64 v32; // x1
  __int64 v33; // x0
  int8x16_t v34; // q2
  int8x16_t v35; // q1
  int8x16_t v36; // q3
  int16x8_t *v37; // x2
  int16x8_t v38; // q4
  int16x8_t v39; // q5
  int8x16_t v40; // q0
  int8x16_t v41; // q0
  int8x16_t v42; // q0
  __int64 v43; // x18
  int v44; // w0
  int v45; // w13
  unsigned int v46; // w9
  int v47; // w11
  int v48; // w10
  int v49; // w12
  unsigned int v50; // w9
  int v51; // w11
  unsigned int v52; // w9
  unsigned int v53; // w9
  int v54; // w10
  unsigned int v55; // w9
  unsigned int v56; // w8
  int16x8_t v57; // q0
  uint16x8_t v58; // q1
  int8x16_t v59; // q0
  unsigned __int32 v60; // w8
  uint16x8_t v61; // q2
  int8x16x2_t v63; // 0:q0.32
  int8x16x2_t v64; // 0:kr00_32.32
  int8x16x2_t v65; // 0:kr20_32.32

  v11 = *(_WORD *)(a1 + 2) != 0;
  v12 = sub_B3274(a1, a6);
  if ( v12 >= 113 )
    goto LABEL_48;
  v14 = a4 - v12;
  if ( v14 > 32766 )
    goto LABEL_44;
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( a5 > 52 )
      goto LABEL_5;
LABEL_11:
    if ( !a5 )
    {
      *(_WORD *)(a1 + 20) = 0;
      goto LABEL_45;
    }
    if ( a5 != 24 )
    {
LABEL_33:
      if ( a5 >= 64 )
      {
        v23 = *(_WORD *)(a1 + 20);
        v18 = 0;
        v21 = 0;
        v20 = 0x8000;
        v19 = 1;
        v22 = 9;
        v24 = 1;
        goto LABEL_27;
      }
      v18 = 0;
      v21 = 0;
      v26 = 10;
      v25 = -1;
      v20 = 0x8000;
      v19 = 1;
      v22 = 9;
      v24 = 1;
      if ( v14 <= 0 )
        goto LABEL_18;
LABEL_19:
      v29 = *(_WORD *)(a1 + 2LL * (unsigned int)v26);
      v23 = v29 & v25;
      if ( ((unsigned int)v26 | 1) <= 0xA )
      {
        v30 = v26 | 1;
        v31 = v26 | 1;
        if ( (unsigned __int64)(10 - v26) < 0x10 )
          goto LABEL_53;
        v32 = (10 - (_BYTE)v26) & 0xE;
        v33 = 0;
        v34.n128_u64[0] = 0x1000100010001LL;
        v34.n128_u64[1] = 0x1000100010001LL;
        v35 = (int8x16_t)v23;
        v31 = v30 + 10 - v26 - v32;
        v36 = 0u;
        do
        {
          v37 = (int16x8_t *)(a1 + 2 * (v30 | v33));
          v38 = *v37;
          v39 = v37[1];
          v33 += 16;
          *v37 = 0u;
          v37[1] = 0u;
          v35 = vorrq_s8(v35, vandq_s8(vmvnq_s8(vceqzq_s16(v38)), v34));
          v36 = vorrq_s8(v36, vandq_s8(vmvnq_s8(vceqzq_s16(v39)), v34));
        }
        while ( 10 - v26 - v32 != v33 );
        v40 = vorrq_s8(v36, v35);
        v41 = vorrq_s8(v40, vextq_s8(v40, v40, 8u));
        v42 = vorrq_s8(v41, vextq_s8(v41, v41, 4u));
        v63.val[1] = vdupq_lane_s16((int16x4_t)v42.n128_u64[0], 1);
        v23 = vorrq_s8(v42, v63.val[1]).n128_u16[0];
        if ( ((10 - (_BYTE)v26) & 0xE) != 0 )
        {
LABEL_53:
          do
          {
            v43 = 2 * v31;
            v44 = *(unsigned __int16 *)(a1 + 2 * v31++);
            *(_WORD *)(a1 + v43) = 0;
            v23 |= v44 != 0;
          }
          while ( v31 != 11 );
        }
        v29 = *(_WORD *)(a1 + 2 * v26);
      }
      *(_WORD *)(a1 + 2 * v26) = v29 & ~v25;
      goto LABEL_27;
    }
    v21 = 0;
    v19 = 0;
    v22 = 4;
    v25 = 255;
    v20 = 128;
    v18 = 256;
    v24 = 256;
    v26 = 4;
    if ( v14 > 0 )
      goto LABEL_19;
LABEL_18:
    v27 = *(unsigned __int16 *)(a1 + 4);
    v28 = *(uint16x8_t *)(a1 + 6);
    *(_WORD *)(a1 + 4) >>= 1;
    v63.val[1].n128_u32[0] = v27;
    v64.val[0] = v63.val[1];
    v64.val[1] = v28;
    v63.val[1] = vshrq_n_u16(v28, 1u);
    *(int8x16_t *)(a1 + 6) = vorrq_s8(v63.val[1], vshlq_n_s16(vqtbl2q_s8(v64, (int8x16_t)xmmword_11B9E0), 0xFu));
    goto LABEL_19;
  }
  if ( v14 < -112 )
  {
LABEL_47:
    v11 = 0;
    goto LABEL_48;
  }
  a2 |= (unsigned int)eshift(a1, v14, v63) != 1;
  if ( a5 <= 52 )
    goto LABEL_11;
LABEL_5:
  if ( a5 == 53 )
  {
    v18 = 0;
    v19 = 0;
    v22 = 6;
    v25 = 2047;
    v20 = 1024;
    v21 = 2048;
    v24 = 2048;
    goto LABEL_17;
  }
  if ( a5 == 56 )
  {
    v18 = 0;
    v19 = 0;
    v22 = 6;
    v25 = 255;
    v20 = 128;
    v21 = 256;
    v24 = 256;
LABEL_17:
    v26 = 6;
    if ( v14 > 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( a5 != 64 )
    goto LABEL_33;
  v15 = *(unsigned __int16 *)(a1 + 20);
  v16 = *(_WORD *)(a1 + 14) | (*(_WORD *)(a1 + 16) != 0);
  v17 = *(_WORD *)(a1 + 18) != 0;
  v18 = 0;
  v19 = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 20) = 0;
  v20 = 0x8000;
  v21 = 1;
  v22 = 6;
  v23 = v16 | v17 | (v15 != 0);
  v24 = 1;
LABEL_27:
  if ( ((unsigned __int16)v20 & v23) != 0 )
  {
    if ( v20 != v23 )
      goto LABEL_36;
    if ( (a2 & 1) != 0 )
    {
      if ( (a3 & 1) != 0 )
        goto LABEL_37;
      goto LABEL_36;
    }
    if ( ((unsigned __int16)v24 & *(_WORD *)(a1 + 2 * v22)) != 0 )
    {
LABEL_36:
      v45 = *(unsigned __int16 *)(a1 + 8);
      v46 = v19 + *(unsigned __int16 *)(a1 + 18);
      v47 = *(unsigned __int16 *)(a1 + 16);
      v48 = v21 + *(unsigned __int16 *)(a1 + 12);
      v49 = *(unsigned __int16 *)(a1 + 14);
      *(_WORD *)(a1 + 18) = v46;
      v50 = v47 + HIWORD(v46);
      v51 = *(unsigned __int16 *)(a1 + 10);
      *(_WORD *)(a1 + 16) = v50;
      v52 = v49 + HIWORD(v50);
      *(_WORD *)(a1 + 14) = v52;
      v53 = v48 + HIWORD(v52);
      v54 = *(unsigned __int16 *)(a1 + 6);
      *(_WORD *)(a1 + 12) = v53;
      v55 = (HIWORD(v53) & 1) + v51;
      LOWORD(v51) = *(_WORD *)(a1 + 4);
      v56 = v18 + v45 + HIWORD(v55);
      *(_WORD *)(a1 + 10) = v55;
      *(_WORD *)(a1 + 8) = v56;
      *(_WORD *)(a1 + 6) = (BYTE2(v56) & 1) + v54;
      *(_WORD *)(a1 + 4) = v51 + ((unsigned int)((HIWORD(v56) & 1) + v54) >> 16);
    }
  }
LABEL_37:
  if ( a5 > 63 || v14 >= 1 )
  {
    v60 = *(unsigned __int16 *)(a1 + 4);
    if ( !*(_WORD *)(a1 + 4) )
      goto LABEL_43;
    goto LABEL_42;
  }
  v57 = *(int16x8_t *)(a1 + 4);
  v58.n128_u16[0] = vdupq_lane_s16((int16x4_t)v57.n128_u64[0], 1).n128_u16[0];
  v58.n128_u16[1] = WORD2(*(_QWORD *)(a1 + 4));
  v58.n128_u16[2] = HIWORD(*(_QWORD *)(a1 + 4));
  v58.n128_u16[3] = *(_QWORD *)(a1 + 12);
  v58.n128_u16[4] = WORD1(*(_QWORD *)(a1 + 12));
  *(unsigned __int32 *)((char *)&v58.n128_u32[2] + 2) = v57.n128_u32[3];
  v58.n128_u16[7] = *(_WORD *)(a1 + 20);
  v63.val[1] = vshrq_n_u16(v58, 0xFu);
  v59 = vorrq_s8(vshlq_n_s16(v57, 1u), v63.val[1]);
  v60 = v59.n128_u16[0];
  *(_WORD *)(a1 + 20) *= 2;
  *(int8x16_t *)(a1 + 4) = v59;
  if ( v59.n128_u16[0] )
  {
LABEL_42:
    v61 = *(uint16x8_t *)(a1 + 6);
    ++v14;
    v63.val[1].n128_u32[0] = v60;
    *(_WORD *)(a1 + 4) = (unsigned __int16)v60 >> 1;
    v65.val[0] = v63.val[1];
    v65.val[1] = v61;
    *(int8x16_t *)(a1 + 6) = vorrq_s8(
                               vshrq_n_u16(v61, 1u),
                               vshlq_n_s16(vqtbl2q_s8(v65, (int8x16_t)xmmword_11B9E0), 0xFu));
  }
LABEL_43:
  *(_WORD *)(a1 + 20) = 0;
  if ( v14 <= 32766 )
  {
LABEL_45:
    if ( v14 >= 1 )
    {
      *(_WORD *)(a1 + 2) = v14;
      return 1;
    }
    goto LABEL_47;
  }
LABEL_44:
  v11 = 1;
LABEL_48:
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 14) = 0;
  return v11;
}
// B2ED8: variable 'v63' is possibly undefined
// 11B9E0: using guessed type __int128 xmmword_11B9E0;
