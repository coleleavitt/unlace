/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B4260
// Address: 0x00000000000B4260

//----- (00000000000B4260) ----------------------------------------------------
long double __fastcall sub_B4260(unsigned __int16 *a1, _WORD *a2, int8x16x2_t a3)
{
  int v3; // w10
  int v4; // w9
  int v5; // w13
  int v6; // w15
  int v7; // w16
  int v8; // w17
  int v9; // w3
  int v10; // w4
  int v11; // w5
  int v12; // w12
  unsigned int v13; // w19
  int v14; // w20
  int v15; // w11
  int v16; // w14
  int v17; // w2
  int v18; // w6
  int v19; // w7
  int v20; // w22
  int v21; // w21
  unsigned int v22; // w18
  unsigned int v23; // w21
  unsigned int v24; // w24
  unsigned int v25; // w25
  unsigned int v26; // w27
  unsigned int v27; // w26
  unsigned int v28; // w28
  unsigned int v29; // w29
  char v30; // w11
  int v31; // w6
  int v32; // w2
  int v33; // w7
  int v34; // w19
  int v35; // w20
  int v36; // w11
  int v37; // w14
  int v39; // w13
  __int16 v40; // w12
  int v41; // w4
  int v42; // w3
  int v43; // w17
  int v44; // w16
  int v45; // w15
  int v46; // w10
  int v47; // w18
  int v48; // w5
  __int16 v49; // w5
  int16x4_t v50; // d0
  bool v51; // w20
  unsigned __int16 v52; // w15
  int v53; // w17
  unsigned int v54; // w9
  uint16x4_t v55; // d1
  __int16 v56; // w10
  __int16 v57; // w16
  bool v58; // w14
  int v59; // w3
  int v60; // w21
  _BYTE v61[22]; // [xsp+0h] [xbp-80h]
  int8x16x2_t v62; // 0:q0.16,16:q1.16

  _ReadStatusReg(TPIDR_EL0);
  *(_WORD *)v61 = *a2;
  *(_QWORD *)&v61[2] = (unsigned __int16)a2[1];
  if ( a1[4] || !a1[5] || !a1[6] || !a1[7] || !a1[8] || !a1[9] || !a1[10] || (a1[3] & 1) != 0 )
  {
    LOWORD(v3) = a2[2];
    LOWORD(v4) = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 114;
    while ( 1 )
    {
      v13 = a1[2];
      LOWORD(v14) = v3;
      if ( v13 == (unsigned __int16)v3 )
      {
        v15 = a1[3];
        v14 = (unsigned __int16)a2[3];
        if ( v15 == v14 )
        {
          v16 = a1[4];
          v14 = (unsigned __int16)a2[4];
          if ( v16 == v14 )
          {
            v17 = a1[5];
            v14 = (unsigned __int16)a2[5];
            if ( v17 == v14 )
            {
              v18 = a1[6];
              v14 = (unsigned __int16)a2[6];
              if ( v18 == v14 )
              {
                v19 = a1[7];
                v14 = (unsigned __int16)a2[7];
                if ( v19 == v14 )
                {
                  v20 = a1[8];
                  v14 = (unsigned __int16)a2[8];
                  if ( v20 == v14 )
                  {
                    v21 = a1[9];
                    v14 = (unsigned __int16)a2[9];
                    if ( v21 == v14 )
                    {
                      v13 = a1[10];
                      v14 = (unsigned __int16)a2[10];
                      v22 = v13;
                      if ( v13 == v14 )
                        goto LABEL_23;
                    }
                    else
                    {
                      v13 = a1[9];
                    }
                  }
                  else
                  {
                    v13 = a1[8];
                  }
                }
                else
                {
                  v13 = a1[7];
                }
              }
              else
              {
                v13 = a1[6];
              }
            }
            else
            {
              v13 = a1[5];
            }
          }
          else
          {
            v13 = a1[4];
          }
        }
        else
        {
          v13 = a1[3];
        }
      }
      v22 = (unsigned __int16)a2[10];
      if ( v13 <= (unsigned __int16)v14 )
      {
        v13 = a1[10];
        v21 = (unsigned __int16)a2[9];
        v20 = (unsigned __int16)a2[8];
        v19 = (unsigned __int16)a2[7];
        v18 = (unsigned __int16)a2[6];
        v17 = (unsigned __int16)a2[5];
        v16 = (unsigned __int16)a2[4];
        v15 = (unsigned __int16)a2[3];
LABEL_23:
        v22 -= v13;
        a2[10] = v22;
        v23 = v21 - a1[9] - (HIWORD(v22) & 1);
        a2[9] = v23;
        v24 = v20 - a1[8] - (HIWORD(v23) & 1);
        a2[8] = v20 - a1[8] - (BYTE2(v23) & 1);
        v25 = v19 - a1[7] - (HIWORD(v24) & 1);
        a2[7] = v19 - a1[7] - (BYTE2(v24) & 1);
        v26 = v18 - a1[6] - (HIWORD(v25) & 1);
        a2[6] = v18 - a1[6] - (BYTE2(v25) & 1);
        v27 = v17 - a1[5] - (HIWORD(v26) & 1);
        a2[5] = v17 - a1[5] - (BYTE2(v26) & 1);
        v28 = v16 - a1[4] - (HIWORD(v27) & 1);
        a2[4] = v16 - a1[4] - (BYTE2(v27) & 1);
        v29 = v15 - a1[3] - (HIWORD(v28) & 1);
        a2[3] = v15 - a1[3] - (BYTE2(v28) & 1);
        v3 = (unsigned __int16)v3 - a1[2] - (HIWORD(v29) & 1);
        v30 = 1;
        a2[2] = v3;
        goto LABEL_24;
      }
      LOWORD(v23) = a2[9];
      LOWORD(v24) = a2[8];
      LOWORD(v25) = a2[7];
      LOWORD(v26) = a2[6];
      LOWORD(v27) = a2[5];
      LOWORD(v28) = a2[4];
      LOWORD(v29) = a2[3];
      v30 = 0;
LABEL_24:
      LOWORD(v31) = ((v9 & 0x8000) != 0) | (unsigned __int16)(2 * v8);
      LOWORD(v32) = ((v10 & 0x8000) != 0) | (unsigned __int16)(2 * v9);
      LOWORD(v33) = ((v8 & 0x8000) != 0) | (unsigned __int16)(2 * v7);
      LOWORD(v34) = ((v7 & 0x8000) != 0) | (unsigned __int16)(2 * v6);
      LOWORD(v35) = ((v6 & 0x8000) != 0) | (unsigned __int16)(2 * v5);
      a2[10] = 2 * v22;
      v36 = v30 & 1 | (2 * v11);
      LOWORD(v37) = ((v11 & 0x8000) != 0) | (unsigned __int16)(2 * v10);
      --v12;
      LOWORD(v4) = ((v5 & 0x8000) != 0) | (unsigned __int16)(2 * v4);
      a2[9] = ((v22 & 0x8000) != 0) | (unsigned __int16)(2 * v23);
      a2[8] = ((v23 & 0x8000) != 0) | (unsigned __int16)(2 * v24);
      a2[7] = ((v24 & 0x8000) != 0) | (unsigned __int16)(2 * v25);
      LOWORD(v3) = ((v29 & 0x8000) != 0) | (unsigned __int16)(2 * v3);
      a2[2] = v3;
      v5 = ((v6 & 0x8000) != 0) | (2 * v5);
      v6 = ((v7 & 0x8000) != 0) | (2 * v6);
      v7 = ((v8 & 0x8000) != 0) | (2 * v7);
      v8 = ((v9 & 0x8000) != 0) | (2 * v8);
      v9 = ((v10 & 0x8000) != 0) | (2 * v9);
      v10 = ((v11 & 0x8000) != 0) | (2 * v10);
      v11 = v36;
      a2[6] = ((v25 & 0x8000) != 0) | (unsigned __int16)(2 * v26);
      a2[5] = ((v26 & 0x8000) != 0) | (unsigned __int16)(2 * v27);
      a2[4] = ((v27 & 0x8000) != 0) | (unsigned __int16)(2 * v28);
      a2[3] = ((v28 & 0x8000) != 0) | (unsigned __int16)(2 * v29);
      if ( !v12 )
        goto LABEL_25;
    }
  }
  a3.val[1] = *(int8x16_t *)(a2 + 3);
  a3.val[0].n128_u32[0] = (unsigned __int16)a2[2];
  v62.val[0] = vorrq_s8(vshrq_n_u16(a3.val[1], 1u), vshlq_n_s16(vqtbl2q_s8(a3, (int8x16_t)xmmword_11B9E0), 0xFu));
  a2[2] >>= 1;
  *(int8x16_t *)(a2 + 3) = v62.val[0];
  v62.val[1] = *(int8x16_t *)(a1 + 3);
  v39 = 113;
  v62.val[0].n128_u32[0] = a1[2];
  v62.val[0] = vorrq_s8(vshrq_n_u16(v62.val[1], 1u), vshlq_n_s16(vqtbl2q_s8(v62, (int8x16_t)xmmword_11B9E0), 0xFu));
  a1[2] >>= 1;
  *(int8x16_t *)(a1 + 3) = v62.val[0];
  v40 = 0;
  LOWORD(v36) = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = *(unsigned __int16 *)&v61[8];
  v46 = *(unsigned __int16 *)&v61[6];
  v4 = *(unsigned __int16 *)&v61[4];
  v47 = (unsigned __int16)a2[3];
  v48 = v62.val[0].n128_u16[0];
  while ( 1 )
  {
    if ( (unsigned __int16)v47 >= (unsigned int)(unsigned __int16)v48 )
    {
      v47 -= v48;
      v49 = 1;
      a2[3] = v47;
    }
    else
    {
      v49 = 0;
    }
    v50.n64_u64[0] = *(unsigned __int64 *)(a2 + 5);
    v32 = ((v41 & 0x8000) != 0) | (2 * v42);
    v33 = ((v43 & 0x8000) != 0) | (2 * v44);
    v51 = (v45 & 0x8000) != 0;
    v31 = ((v42 & 0x8000) != 0) | (2 * v43);
    v34 = ((v44 & 0x8000) != 0) | (2 * v45);
    v52 = a2[9];
    v53 = ((v46 & 0x8000) != 0) | (2 * v4);
    v54 = (unsigned __int16)a2[4];
    v35 = v51 | (2 * v46);
    v55.n64_u16[0] = vdupq_lane_s16(v50, 1).n128_u16[0];
    v56 = ((v47 & 0x8000) != 0) | (unsigned __int16)(2 * a2[2]);
    v55.n64_u16[1] = v50.n64_u16[2];
    v57 = (a2[10] >> 15) | (2 * v52);
    v55.n64_u16[2] = v50.n64_u16[3];
    a2[10] *= 2;
    a2[9] = v57;
    v55.n64_u16[3] = v52;
    v58 = (v36 & 0x8000) != 0;
    LOWORD(v36) = (v40 < 0) | (unsigned __int16)(2 * v36) | v49;
    v59 = (v54 >> 15) & 1 | (2 * v47);
    v37 = v58 | (2 * v41);
    v60 = (v50.n64_u16[0] >> 15) & 1 | (2 * (unsigned __int16)v54);
    v4 = v53;
    v47 = v59;
    a2[3] = v59;
    a2[4] = v60;
    *(int8x8_t *)(a2 + 5) = vorr_s8(vshl_n_s16(v50, 1u), vshr_n_u16(v55, 0xFu));
    a2[2] = v56;
    if ( !v39 )
      break;
    v48 = a1[3];
    --v39;
    v46 = v35;
    v45 = v34;
    v44 = v33;
    v43 = v31;
    v42 = v32;
    v41 = v37;
    v40 *= 2;
  }
  LOWORD(v12) = v40 & 0x7FFF;
LABEL_25:
  *(_WORD *)&v61[4] = (unsigned __int16)v4 >> 2;
  *(_WORD *)&v61[6] = ((_WORD)v4 << 14) & 0x8000
                    | ((unsigned __int16)(((_WORD)v4 << 15) | ((unsigned __int16)v35 >> 1)) >> 1);
  *(_WORD *)&v61[8] = ((unsigned __int16)v35 >> 1 << 15)
                    | ((unsigned __int16)(((_WORD)v35 << 15) | ((unsigned __int16)v34 >> 1)) >> 1);
  *(_WORD *)&v61[10] = ((unsigned __int16)v34 >> 1 << 15)
                     | ((unsigned __int16)(((_WORD)v34 << 15) | ((unsigned __int16)v33 >> 1)) >> 1);
  *(_WORD *)&v61[12] = ((unsigned __int16)v33 >> 1 << 15)
                     | ((unsigned __int16)(((_WORD)v33 << 15) | ((unsigned __int16)v31 >> 1)) >> 1);
  *(_WORD *)&v61[14] = ((unsigned __int16)v31 >> 1 << 15)
                     | ((unsigned __int16)(((_WORD)v31 << 15) | ((unsigned __int16)v32 >> 1)) >> 1);
  *(_WORD *)&v61[20] = ((unsigned __int16)v36 >> 1 << 15) | ((unsigned __int16)(v12 & 0x7FFF | ((_WORD)v36 << 15)) >> 1);
  *(_WORD *)&v61[18] = ((unsigned __int16)v37 >> 1 << 15)
                     | ((unsigned __int16)(((_WORD)v37 << 15) | ((unsigned __int16)v36 >> 1)) >> 1);
  *(_WORD *)&v61[16] = ((unsigned __int16)v32 >> 1 << 15)
                     | ((unsigned __int16)(((_WORD)v32 << 15) | ((unsigned __int16)v37 >> 1)) >> 1);
  *(_QWORD *)(a2 + 7) = *(_QWORD *)&v61[14];
  *(_OWORD *)a2 = *(_OWORD *)v61;
  return *(long double *)v61;
}
// 11B9E0: using guessed type __int128 xmmword_11B9E0;
