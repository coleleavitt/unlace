/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100067EF8
// Address: 0x0000000100067EF8

//----- (0000000100067EF8) ----------------------------------------------------
__int64 __fastcall sub_100067EF8(__int64 a1, int8x16x2_t a2)
{
  unsigned int v2; // w1
  _OWORD *v3; // x8
  int v4; // w8
  int v5; // w9
  unsigned __int16 *v6; // x10
  __int64 v7; // x8
  unsigned int v8; // w2
  __int64 v9; // x8
  int v10; // w10
  unsigned __int64 v11; // t2
  unsigned int v12; // w11
  int v13; // w12
  int v14; // w13
  int v15; // w14
  int v16; // w15
  int v17; // w16
  int v18; // w17
  int v19; // w9
  unsigned int v20; // w21
  int v21; // w20
  unsigned __int64 v22; // t2
  int v23; // w19
  int v24; // w7
  int v25; // w6
  int v26; // w5
  int v27; // w4
  int v28; // w3
  unsigned __int64 v29; // t2
  unsigned __int64 v31; // t2
  unsigned __int64 v32; // t2
  unsigned __int64 v33; // t2
  unsigned __int64 v34; // t2
  unsigned __int64 v35; // t2
  int v36; // w13
  int v37; // w11
  unsigned int v38; // w12
  int16x4_t v39; // d0
  __int16 v40; // w10
  unsigned int v41; // w15
  unsigned __int64 v42; // t2
  uint16x4_t v43; // d1
  unsigned __int16 v44; // h2
  int v45; // w13
  int v46; // w11
  unsigned int v47; // w12
  int16x4_t v48; // d0
  __int16 v49; // w10
  unsigned int v50; // w15
  unsigned __int64 v51; // t2
  uint16x4_t v52; // d1
  unsigned __int16 v53; // h2

  v3 = (_OWORD *)(a1 + 4);
  v2 = *(unsigned __int16 *)(a1 + 4);
  if ( *(_WORD *)(a1 + 4) )
  {
    if ( v2 >= 0x100 )
    {
      a2.val[1] = *(int8x16_t *)(a1 + 6);
      a2.val[0].i32[0] = *(unsigned __int16 *)(a1 + 4);
      v2 >>= 8;
      *(uint16x8_t *)(a1 + 6) = vsraq_n_u16(
                                  (uint16x8_t)vshlq_n_s16((int16x8_t)vqtbl2q_s8(a2, (int8x16_t)xmmword_100087330), 8u),
                                  vshrq_n_u16((uint16x8_t)a2.val[1], 1u),
                                  7u);
      v4 = -8;
    }
    else
    {
      v4 = 0;
    }
    v8 = __clz(v2 << 16);
    v9 = v4 - (unsigned int)(unsigned __int16)(16 - v8);
    HIDWORD(v11) = v2;
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 6) << 16;
    v10 = v11 >> 17;
    v12 = v2 >> 1;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 6);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 8) << 16;
    v13 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 8);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 10) << 16;
    v14 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 10);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 12) << 16;
    v15 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 12);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 14) << 16;
    v16 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 14);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 16) << 16;
    v17 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 16);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 18) << 16;
    v18 = v11 >> 17;
    HIDWORD(v11) = *(unsigned __int16 *)(a1 + 18);
    LODWORD(v11) = *(unsigned __int16 *)(a1 + 20) << 16;
    v19 = v11 >> 17;
    if ( v8 == 15 )
      goto LABEL_12;
    v20 = v2 >> 2;
    HIDWORD(v22) = v2 >> 1;
    LODWORD(v22) = v10 << 16;
    v21 = v22 >> 17;
    HIDWORD(v22) = v10;
    LODWORD(v22) = v13 << 16;
    v23 = v22 >> 17;
    HIDWORD(v22) = v13;
    LODWORD(v22) = v14 << 16;
    v24 = v22 >> 17;
    HIDWORD(v22) = v14;
    LODWORD(v22) = v15 << 16;
    v25 = v22 >> 17;
    HIDWORD(v22) = v15;
    LODWORD(v22) = v16 << 16;
    v26 = v22 >> 17;
    HIDWORD(v22) = v16;
    LODWORD(v22) = v17 << 16;
    v27 = v22 >> 17;
    HIDWORD(v22) = v17;
    LODWORD(v22) = v18 << 16;
    v28 = v22 >> 17;
    HIDWORD(v22) = v18;
    LODWORD(v22) = v19 << 16;
    v19 = v22 >> 17;
    if ( v8 != 14 )
    {
      v12 = v2 >> 3;
      HIDWORD(v29) = v2 >> 2;
      LODWORD(v29) = v21 << 16;
      v10 = v29 >> 17;
      HIDWORD(v29) = v21;
      LODWORD(v29) = v23 << 16;
      v13 = v29 >> 17;
      HIDWORD(v29) = v23;
      LODWORD(v29) = v24 << 16;
      v14 = v29 >> 17;
      HIDWORD(v29) = v24;
      LODWORD(v29) = v25 << 16;
      v15 = v29 >> 17;
      HIDWORD(v29) = v25;
      LODWORD(v29) = v26 << 16;
      v16 = v29 >> 17;
      HIDWORD(v29) = v26;
      LODWORD(v29) = v27 << 16;
      v17 = v29 >> 17;
      HIDWORD(v29) = v27;
      LODWORD(v29) = v28 << 16;
      v18 = v29 >> 17;
      HIDWORD(v29) = v28;
      LODWORD(v29) = v19 << 16;
      v19 = v29 >> 17;
      if ( v8 == 13 )
        goto LABEL_12;
      v20 = v2 >> 4;
      HIDWORD(v31) = v2 >> 3;
      LODWORD(v31) = v10 << 16;
      v21 = v31 >> 17;
      HIDWORD(v31) = v10;
      LODWORD(v31) = v13 << 16;
      v23 = v31 >> 17;
      HIDWORD(v31) = v13;
      LODWORD(v31) = v14 << 16;
      v24 = v31 >> 17;
      HIDWORD(v31) = v14;
      LODWORD(v31) = v15 << 16;
      v25 = v31 >> 17;
      HIDWORD(v31) = v15;
      LODWORD(v31) = v16 << 16;
      v26 = v31 >> 17;
      HIDWORD(v31) = v16;
      LODWORD(v31) = v17 << 16;
      v27 = v31 >> 17;
      HIDWORD(v31) = v17;
      LODWORD(v31) = v18 << 16;
      v28 = v31 >> 17;
      HIDWORD(v31) = v18;
      LODWORD(v31) = v19 << 16;
      v19 = v31 >> 17;
      if ( v8 != 12 )
      {
        v12 = v2 >> 5;
        HIDWORD(v32) = v2 >> 4;
        LODWORD(v32) = v21 << 16;
        v10 = v32 >> 17;
        HIDWORD(v32) = v21;
        LODWORD(v32) = v23 << 16;
        v13 = v32 >> 17;
        HIDWORD(v32) = v23;
        LODWORD(v32) = v24 << 16;
        v14 = v32 >> 17;
        HIDWORD(v32) = v24;
        LODWORD(v32) = v25 << 16;
        v15 = v32 >> 17;
        HIDWORD(v32) = v25;
        LODWORD(v32) = v26 << 16;
        v16 = v32 >> 17;
        HIDWORD(v32) = v26;
        LODWORD(v32) = v27 << 16;
        v17 = v32 >> 17;
        HIDWORD(v32) = v27;
        LODWORD(v32) = v28 << 16;
        v18 = v32 >> 17;
        HIDWORD(v32) = v28;
        LODWORD(v32) = v19 << 16;
        v19 = v32 >> 17;
        if ( v8 == 11 )
          goto LABEL_12;
        v20 = v2 >> 6;
        HIDWORD(v33) = v2 >> 5;
        LODWORD(v33) = v10 << 16;
        v21 = v33 >> 17;
        HIDWORD(v33) = v10;
        LODWORD(v33) = v13 << 16;
        v23 = v33 >> 17;
        HIDWORD(v33) = v13;
        LODWORD(v33) = v14 << 16;
        v24 = v33 >> 17;
        HIDWORD(v33) = v14;
        LODWORD(v33) = v15 << 16;
        v25 = v33 >> 17;
        HIDWORD(v33) = v15;
        LODWORD(v33) = v16 << 16;
        v26 = v33 >> 17;
        HIDWORD(v33) = v16;
        LODWORD(v33) = v17 << 16;
        v27 = v33 >> 17;
        HIDWORD(v33) = v17;
        LODWORD(v33) = v18 << 16;
        v28 = v33 >> 17;
        HIDWORD(v33) = v18;
        LODWORD(v33) = v19 << 16;
        v19 = v33 >> 17;
        if ( v8 != 10 )
        {
          v12 = v2 >> 7;
          HIDWORD(v34) = v2 >> 6;
          LODWORD(v34) = v21 << 16;
          v10 = v34 >> 17;
          HIDWORD(v34) = v21;
          LODWORD(v34) = v23 << 16;
          v13 = v34 >> 17;
          HIDWORD(v34) = v23;
          LODWORD(v34) = v24 << 16;
          v14 = v34 >> 17;
          HIDWORD(v34) = v24;
          LODWORD(v34) = v25 << 16;
          v15 = v34 >> 17;
          HIDWORD(v34) = v25;
          LODWORD(v34) = v26 << 16;
          v16 = v34 >> 17;
          HIDWORD(v34) = v26;
          LODWORD(v34) = v27 << 16;
          v17 = v34 >> 17;
          HIDWORD(v34) = v27;
          LODWORD(v34) = v28 << 16;
          v18 = v34 >> 17;
          HIDWORD(v34) = v28;
          LODWORD(v34) = v19 << 16;
          v19 = v34 >> 17;
          if ( v8 != 9 )
          {
            HIDWORD(v35) = v18;
            LODWORD(v35) = v19 << 16;
            LOWORD(v19) = v35 >> 17;
            HIDWORD(v35) = v17;
            LODWORD(v35) = v18 << 16;
            LOWORD(v18) = v35 >> 17;
            HIDWORD(v35) = v16;
            LODWORD(v35) = v17 << 16;
            LOWORD(v17) = v35 >> 17;
            HIDWORD(v35) = v15;
            LODWORD(v35) = v16 << 16;
            LOWORD(v16) = v35 >> 17;
            HIDWORD(v35) = v14;
            LODWORD(v35) = v15 << 16;
            LOWORD(v15) = v35 >> 17;
            HIDWORD(v35) = v13;
            LODWORD(v35) = v14 << 16;
            LOWORD(v14) = v35 >> 17;
            HIDWORD(v35) = v10;
            LODWORD(v35) = v13 << 16;
            LOWORD(v13) = v35 >> 17;
            HIDWORD(v35) = v2 >> 7;
            LODWORD(v35) = v10 << 16;
            LOWORD(v10) = v35 >> 17;
            LOWORD(v12) = 0;
          }
          goto LABEL_12;
        }
      }
    }
    LOWORD(v12) = v20;
    LOWORD(v10) = v21;
    LOWORD(v13) = v23;
    LOWORD(v14) = v24;
    LOWORD(v15) = v25;
    LOWORD(v16) = v26;
    LOWORD(v17) = v27;
    LOWORD(v18) = v28;
LABEL_12:
    *(_WORD *)(a1 + 4) = v12;
    *(_WORD *)(a1 + 6) = v10;
    *(_WORD *)(a1 + 8) = v13;
    *(_WORD *)(a1 + 10) = v14;
    *(_WORD *)(a1 + 12) = v15;
    *(_WORD *)(a1 + 14) = v16;
    *(_WORD *)(a1 + 16) = v17;
    *(_WORD *)(a1 + 18) = v18;
    *(_WORD *)(a1 + 20) = v19;
    return v9;
  }
  v6 = (unsigned __int16 *)(a1 + 6);
  v5 = *(__int16 *)(a1 + 6);
  if ( v5 < 0 )
    return 0;
  if ( *(_WORD *)(a1 + 6) )
  {
    v7 = 0;
  }
  else
  {
    *v3 = *(_OWORD *)v6;
    *(_WORD *)(a1 + 20) = 0;
    v5 = *(unsigned __int16 *)(a1 + 6);
    if ( *(_WORD *)(a1 + 6) )
    {
      v7 = 16;
    }
    else
    {
      *v3 = *(_OWORD *)v6;
      v5 = *v6;
      if ( *v6 )
      {
        v7 = 32;
      }
      else
      {
        *v3 = *(_OWORD *)v6;
        v5 = *v6;
        if ( *v6 )
        {
          v7 = 48;
        }
        else
        {
          *v3 = *(_OWORD *)v6;
          v5 = *v6;
          if ( *v6 )
          {
            v7 = 64;
          }
          else
          {
            *v3 = *(_OWORD *)v6;
            v5 = *v6;
            if ( *v6 )
            {
              v7 = 80;
            }
            else
            {
              *v3 = *(_OWORD *)v6;
              v5 = *v6;
              if ( *v6 )
              {
                v7 = 96;
              }
              else
              {
                *v3 = *(_OWORD *)v6;
                v5 = *v6;
                if ( !*v6 )
                {
                  *v3 = *(_OWORD *)v6;
                  return 128;
                }
                v7 = 112;
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned __int16)v5 <= 0xFFu )
  {
    v36 = *(unsigned __int16 *)(a1 + 20);
    v37 = *(unsigned __int16 *)(a1 + 18);
    v38 = *(unsigned __int16 *)(a1 + 16);
    v39 = *(int16x4_t *)(a1 + 8);
    v40 = *(_WORD *)(a1 + 4);
    do
    {
      v41 = v37 << 16;
      HIDWORD(v42) = v37;
      LODWORD(v42) = v36 << 16;
      v37 = v42 >> 24;
      v36 <<= 8;
      v43 = (uint16x4_t)vext_s8((int8x8_t)v39, (int8x8_t)v39, 2u);
      v43.i16[3] = v38;
      v38 = __PAIR64__(v38, v41) >> 24;
      v44 = v39.i16[0];
      v39 = (int16x4_t)vsra_n_u16((uint16x4_t)vshl_n_s16(v39, 8u), vshr_n_u16(v43, 1u), 7u);
      HIDWORD(v42) = v5;
      LODWORD(v42) = v44 << 16;
      v5 = v42 >> 24;
      v40 <<= 8;
      v7 = (unsigned int)(v7 + 8);
    }
    while ( (unsigned __int16)(v42 >> 24) < 0x100u );
    *(_WORD *)(a1 + 20) = v36;
    *(_WORD *)(a1 + 18) = v37;
    *(_WORD *)(a1 + 16) = v38;
    *(int16x4_t *)(a1 + 8) = v39;
    *(_WORD *)(a1 + 6) = v5;
    *(_WORD *)(a1 + 4) = v40;
  }
  if ( (v5 & 0x8000) != 0 )
    return v7;
  v45 = *(unsigned __int16 *)(a1 + 20);
  v46 = *(unsigned __int16 *)(a1 + 18);
  v47 = *(unsigned __int16 *)(a1 + 16);
  v48 = *(int16x4_t *)(a1 + 8);
  v49 = *(_WORD *)(a1 + 4);
  do
  {
    v50 = v46 << 16;
    HIDWORD(v51) = v46;
    LODWORD(v51) = v45 << 16;
    v46 = v51 >> 31;
    v45 *= 2;
    v52 = (uint16x4_t)vext_s8((int8x8_t)v48, (int8x8_t)v48, 2u);
    v52.i16[3] = v47;
    v47 = __PAIR64__(v47, v50) >> 31;
    v53 = v48.i16[0];
    v48 = (int16x4_t)vsra_n_u16((uint16x4_t)vadd_s16(v48, v48), vshr_n_u16(v52, 1u), 0xEu);
    HIDWORD(v51) = v5;
    LODWORD(v51) = v53 << 16;
    v5 = (__int16)(v51 >> 31);
    v49 *= 2;
    v7 = (unsigned int)(v7 + 1);
  }
  while ( ((v51 >> 31) & 0x8000) == 0 );
  *(_WORD *)(a1 + 20) = v45;
  *(_WORD *)(a1 + 18) = v46;
  *(_WORD *)(a1 + 16) = v47;
  *(int16x4_t *)(a1 + 8) = v48;
  *(_WORD *)(a1 + 6) = v5;
  *(_WORD *)(a1 + 4) = v49;
  return v7;
}
// 100087330: using guessed type __int128 xmmword_100087330;
