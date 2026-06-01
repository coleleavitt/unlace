/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emdnorm
// Address: 0x0000000100067A7C

//----- (0000000100067A7C) ----------------------------------------------------
__int64 __fastcall emdnorm(__int64 a1, char a2, char a3, int a4, int a5, int8x16x2_t a6)
{
  _BOOL8 v11; // x20
  int v12; // w0
  signed int v13; // w20
  int v14; // w8
  int v15; // w9
  __int16 v16; // w10
  unsigned __int16 v17; // w15
  int v18; // w13
  __int16 v19; // w12
  __int64 v20; // x10
  int v21; // w11
  int v22; // w17
  __int16 v23; // w14
  unsigned int v24; // w15
  int16x8_t v25; // q0
  unsigned __int64 v26; // x16
  __int16 v27; // w0
  __int64 v28; // x17
  unsigned __int64 v29; // x0
  unsigned __int64 v30; // x1
  unsigned __int64 v31; // d0
  unsigned __int64 v32; // x15
  int16x8_t v33; // q2
  int16x8_t v34; // q3
  int16x8_t v35; // q4
  int16x8_t v36; // q5
  int8x16_t v37; // q1
  int8x16_t v38; // q0
  __int64 v39; // x17
  _WORD *v40; // x0
  unsigned int v41; // w9
  unsigned int v42; // w9
  unsigned int v43; // w9
  unsigned int v44; // w9
  unsigned int v45; // w9
  unsigned int v46; // w8
  int v47; // w8
  uint16x8_t v48; // q0
  unsigned __int16 v49; // w8
  int8x8_t v50; // d0
  int16x4_t v51; // d1
  int v52; // w8
  unsigned __int64 v53; // t2
  int v54; // w9

  v11 = *(_WORD *)(a1 + 2) != 0;
  v12 = sub_100067EF8(a1, a6);
  if ( v12 >= 113 )
    goto LABEL_52;
  v13 = a4 - v12;
  if ( a4 - v12 > 32766 )
    goto LABEL_48;
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( a5 > 52 )
      goto LABEL_5;
LABEL_13:
    if ( !a5 )
    {
      *(_WORD *)(a1 + 20) = 0;
      goto LABEL_49;
    }
    if ( a5 == 24 )
    {
      v15 = 0;
      v21 = 0;
      v20 = 4;
      v22 = 1;
      v23 = 255;
      v18 = 128;
      v19 = 256;
      v24 = 4;
      v14 = 256;
      if ( v13 > 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
    goto LABEL_37;
  }
  if ( (unsigned int)v13 < 0xFFFFFF90 )
  {
LABEL_51:
    v11 = 0;
    goto LABEL_52;
  }
  if ( (unsigned int)eshift(a1, v13) != 1 )
    a2 = 1;
  if ( a5 <= 52 )
    goto LABEL_13;
LABEL_5:
  if ( a5 == 53 )
  {
    v14 = 0;
    v15 = 0;
    v20 = 6;
    v22 = 1;
    v23 = 2047;
    v18 = 1024;
    v19 = 2048;
    v24 = 6;
    v21 = 2048;
    if ( v13 > 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  if ( a5 == 56 )
  {
    v14 = 0;
    v15 = 0;
    v20 = 6;
    v22 = 1;
    v23 = 255;
    v18 = 128;
    v19 = 256;
    v24 = 6;
    v21 = 256;
    if ( v13 <= 0 )
    {
LABEL_18:
      v25 = *(int16x8_t *)(a1 + 4);
      *(_WORD *)(a1 + 4) = (unsigned __int16)v25.i16[0] >> 1;
      *(uint16x8_t *)(a1 + 6) = vsraq_n_u16((uint16x8_t)vshlq_n_s16(v25, 0xFu), *(uint16x8_t *)(a1 + 6), 1u);
    }
LABEL_19:
    v26 = v24;
    v27 = *(_WORD *)(a1 + 2LL * v24);
    v17 = v27 & v23;
    if ( !v22 )
    {
LABEL_28:
      *(_WORD *)(a1 + 2 * v26) = v27 & ~v23;
      goto LABEL_29;
    }
    v28 = 9;
    if ( v26 > 9 )
      v28 = v26;
    v29 = v28 - v26 + 1;
    v30 = v26;
    if ( v29 >= 0x20 )
    {
      v31 = v17;
      v32 = a1 + 2 * v26;
      v33 = *(int16x8_t *)(v32 + 2);
      v34 = *(int16x8_t *)(v32 + 18);
      v35 = *(int16x8_t *)(v32 + 34);
      v36 = *(int16x8_t *)(v32 + 50);
      *(_OWORD *)(v32 + 2) = 0u;
      *(_OWORD *)(v32 + 18) = 0u;
      *(_OWORD *)(v32 + 34) = 0u;
      *(_OWORD *)(v32 + 50) = 0u;
      v37 = (int8x16_t)vceqzq_s16(v36);
      v36.i64[0] = 0x1000100010001LL;
      v36.i64[1] = 0x1000100010001LL;
      v38 = vorrq_s8(
              vorrq_s8(
                vorrq_s8((int8x16_t)v31, vbicq_s8((int8x16_t)v36, (int8x16_t)vceqzq_s16(v33))),
                vorrq_s8(
                  vbicq_s8((int8x16_t)v36, (int8x16_t)vceqzq_s16(v34)),
                  vbicq_s8((int8x16_t)v36, (int8x16_t)vceqzq_s16(v35)))),
              vbicq_s8((int8x16_t)v36, v37));
      *(int8x8_t *)v38.i8 = vorr_s8(*(int8x8_t *)v38.i8, (int8x8_t)vextq_s8(v38, v38, 8u));
      v17 = v38.i16[0] | v38.i16[2] | ((unsigned int)(v38.i32[0] | v38.i32[1]) >> 16);
      if ( v29 == (v29 & 0xFFFFFFFFFFFFFFE0LL) )
      {
LABEL_27:
        v27 = *(_WORD *)(a1 + 2 * v26);
        goto LABEL_28;
      }
      v30 = v29 & 0xFFFFFFFFFFFFFFE0LL | v26;
    }
    v39 = v28 - v30 + 1;
    v40 = (_WORD *)(a1 + 2 * v30 + 2);
    do
    {
      v17 |= *v40 != 0;
      *v40++ = 0;
      --v39;
    }
    while ( v39 );
    goto LABEL_27;
  }
  if ( a5 != 64 )
  {
LABEL_37:
    if ( a5 >= 64 )
    {
      v14 = 0;
      v21 = 0;
      v17 = *(_WORD *)(a1 + 20);
      v19 = 1;
      v18 = 0x8000;
      v20 = 9;
      v15 = 1;
      goto LABEL_29;
    }
    v22 = 0;
    v14 = 0;
    v21 = 0;
    v19 = 1;
    v24 = 10;
    v23 = -1;
    v18 = 0x8000;
    v20 = 9;
    v15 = 1;
    if ( v13 <= 0 )
      goto LABEL_18;
    goto LABEL_19;
  }
  v14 = 0;
  v15 = 0;
  v16 = *(_WORD *)(a1 + 14) | (*(_WORD *)(a1 + 16) != 0);
  *(_WORD *)(a1 + 16) = 0;
  v17 = v16 | (*(_WORD *)(a1 + 18) != 0 || *(_WORD *)(a1 + 20) != 0);
  *(_DWORD *)(a1 + 18) = 0;
  v18 = 0x8000;
  v19 = 1;
  v20 = 6;
  v21 = 1;
LABEL_29:
  if ( ((unsigned __int16)v18 & v17) != 0 )
  {
    if ( v18 != v17 )
      goto LABEL_40;
    if ( (a2 & 1) != 0 )
    {
      if ( (a3 & 1) != 0 )
        goto LABEL_41;
      goto LABEL_40;
    }
    if ( ((unsigned __int16)v19 & *(_WORD *)(a1 + 2 * v20)) != 0 )
    {
LABEL_40:
      v41 = *(unsigned __int16 *)(a1 + 18) + v15;
      *(_WORD *)(a1 + 18) = v41;
      v42 = *(unsigned __int16 *)(a1 + 16) + HIWORD(v41);
      *(_WORD *)(a1 + 16) = v42;
      v43 = *(unsigned __int16 *)(a1 + 14) + HIWORD(v42);
      *(_WORD *)(a1 + 14) = v43;
      v44 = v21 + HIWORD(v43) + *(unsigned __int16 *)(a1 + 12);
      *(_WORD *)(a1 + 12) = v44;
      v45 = *(unsigned __int16 *)(a1 + 10) + HIWORD(v44);
      *(_WORD *)(a1 + 10) = v45;
      v46 = v14 + *(unsigned __int16 *)(a1 + 8) + HIWORD(v45);
      *(_WORD *)(a1 + 8) = v46;
      v47 = *(unsigned __int16 *)(a1 + 6) + HIWORD(v46);
      *(_WORD *)(a1 + 6) = v47;
      *(_WORD *)(a1 + 4) += HIWORD(v47);
    }
  }
LABEL_41:
  if ( a5 > 63 || v13 >= 1 )
  {
    v49 = *(_WORD *)(a1 + 4);
    if ( !v49 )
      goto LABEL_47;
    goto LABEL_46;
  }
  v48 = vsraq_n_u16(
          (uint16x8_t)vaddq_s16(*(int16x8_t *)(a1 + 4), *(int16x8_t *)(a1 + 4)),
          vshrq_n_u16(*(uint16x8_t *)(a1 + 6), 1u),
          0xEu);
  *(uint16x8_t *)(a1 + 4) = v48;
  v49 = v48.i16[0];
  if ( v48.i16[0] )
  {
LABEL_46:
    *(_WORD *)(a1 + 4) = v49 >> 1;
    v50 = *(int8x8_t *)(a1 + 6);
    v51 = (int16x4_t)vext_s8(v50, v50, 6u);
    v51.i16[0] = v49;
    *(uint16x4_t *)(a1 + 6) = vsra_n_u16((uint16x4_t)vshl_n_s16(v51, 0xFu), (uint16x4_t)v50, 1u);
    v52 = *(unsigned __int16 *)(a1 + 14);
    HIDWORD(v53) = v50.u16[3];
    LODWORD(v53) = v52 << 16;
    *(_WORD *)(a1 + 14) = v53 >> 17;
    v54 = *(unsigned __int16 *)(a1 + 16);
    HIDWORD(v53) = v52;
    LODWORD(v53) = v54 << 16;
    *(_WORD *)(a1 + 16) = v53 >> 17;
    HIDWORD(v53) = v54;
    LODWORD(v53) = *(unsigned __int16 *)(a1 + 18) << 16;
    *(_WORD *)(a1 + 18) = v53 >> 17;
    ++v13;
  }
LABEL_47:
  *(_WORD *)(a1 + 20) = 0;
  if ( v13 > 32766 )
  {
LABEL_48:
    v11 = 1;
LABEL_52:
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 14) = 0;
    return v11;
  }
LABEL_49:
  if ( v13 < 1 )
    goto LABEL_51;
  *(_WORD *)(a1 + 2) = v13;
  return 1;
}
