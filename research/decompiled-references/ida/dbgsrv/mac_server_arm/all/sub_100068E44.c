/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100068E44
// Address: 0x0000000100068E44

//----- (0000000100068E44) ----------------------------------------------------
bool __fastcall sub_100068E44(__int64 a1, __int16 *a2)
{
  __int16 v2; // w9
  __int16 v3; // w8
  unsigned int v4; // w10
  unsigned int v5; // w14
  int v6; // w11
  int v7; // w4
  unsigned int v8; // w20
  unsigned int v9; // w6
  unsigned int v10; // w7
  unsigned int v11; // w19
  int v12; // w12
  int v13; // w13
  int v14; // w30
  int v15; // w15
  unsigned __int64 v16; // t2
  unsigned int v17; // w16
  unsigned int v18; // w17
  unsigned int v19; // w3
  unsigned int v20; // w5
  unsigned int v21; // w2
  unsigned int v22; // w7
  __int16 v23; // w14
  __int16 v24; // w26
  __int16 v25; // w24
  __int16 v26; // w23
  __int16 v27; // w22
  int v28; // w21
  unsigned int v29; // w16
  unsigned int v30; // w25
  unsigned int v31; // w15
  int v32; // w22
  int v33; // w17
  int v34; // w23
  int v35; // w24
  int v36; // w26
  int v37; // w27
  int v38; // w28
  int v39; // w16
  int16x8_t v40; // q0
  int16x8_t v41; // q0
  uint16x8_t v42; // q0
  int v43; // w13
  unsigned int v44; // w12
  _BOOL4 v45; // w14
  unsigned int v46; // w6
  unsigned __int64 v47; // t2
  unsigned int v48; // w4
  unsigned int v49; // w6
  unsigned int v50; // w4
  unsigned int v51; // w6
  unsigned int v52; // w4
  __int16 v53; // w14
  int16x4_t v54; // d1
  uint16x4_t v55; // d0
  int v56; // w4
  _BOOL8 result; // x0
  unsigned int v58; // w12
  unsigned __int64 v59; // t2
  int v60; // w13
  unsigned int v61; // w14
  int v62; // w15
  unsigned int v63; // w16
  int v64; // w17
  int v65; // w2
  __int16 v66; // w3
  __int16 v67; // w9
  __int16 v68; // w8
  __int16 v69; // w10

  v2 = *a2;
  v3 = a2[1];
  if ( *(_WORD *)(a1 + 8)
    || !*(_WORD *)(a1 + 10)
    || !*(_WORD *)(a1 + 12)
    || !*(_WORD *)(a1 + 14)
    || !*(_WORD *)(a1 + 16)
    || !*(_WORD *)(a1 + 18)
    || !*(_WORD *)(a1 + 20)
    || (*(_WORD *)(a1 + 6) & 1) != 0 )
  {
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = (unsigned __int16)a2[2];
    v13 = 114;
    while ( 1 )
    {
      v29 = *(unsigned __int16 *)(a1 + 4);
      v30 = (unsigned __int16)a2[3];
      if ( v29 == (unsigned __int16)v12 )
      {
        v31 = *(unsigned __int16 *)(a1 + 6);
        v28 = (unsigned __int16)a2[4];
        if ( v31 == v30 )
        {
          v29 = *(unsigned __int16 *)(a1 + 8);
          if ( v29 == v28 )
          {
            v32 = *(unsigned __int16 *)(a1 + 10);
            v33 = (unsigned __int16)a2[5];
            if ( v32 == v33 )
            {
              v34 = *(unsigned __int16 *)(a1 + 12);
              v33 = (unsigned __int16)a2[6];
              if ( v34 == v33 )
              {
                v35 = *(unsigned __int16 *)(a1 + 14);
                v33 = (unsigned __int16)a2[7];
                if ( v35 == v33 )
                {
                  v36 = *(unsigned __int16 *)(a1 + 16);
                  v33 = (unsigned __int16)a2[8];
                  if ( v36 == v33 )
                  {
                    v37 = *(unsigned __int16 *)(a1 + 18);
                    v33 = (unsigned __int16)a2[9];
                    if ( v37 == v33 )
                    {
                      v29 = *(unsigned __int16 *)(a1 + 20);
                      v33 = (unsigned __int16)a2[10];
                      v30 = *(unsigned __int16 *)(a1 + 6);
                      v38 = v29;
                      if ( v29 == v33 )
                        goto LABEL_25;
                    }
                    else
                    {
                      v30 = *(unsigned __int16 *)(a1 + 6);
                      v29 = *(unsigned __int16 *)(a1 + 18);
                    }
                  }
                  else
                  {
                    v30 = *(unsigned __int16 *)(a1 + 6);
                    v29 = *(unsigned __int16 *)(a1 + 16);
                  }
                }
                else
                {
                  v30 = *(unsigned __int16 *)(a1 + 6);
                  v29 = *(unsigned __int16 *)(a1 + 14);
                }
              }
              else
              {
                v30 = *(unsigned __int16 *)(a1 + 6);
                v29 = *(unsigned __int16 *)(a1 + 12);
              }
            }
            else
            {
              v30 = *(unsigned __int16 *)(a1 + 6);
              v29 = *(unsigned __int16 *)(a1 + 10);
            }
          }
          else
          {
            v30 = *(unsigned __int16 *)(a1 + 6);
            LOWORD(v33) = a2[4];
          }
        }
        else
        {
          v29 = *(unsigned __int16 *)(a1 + 6);
          LOWORD(v33) = a2[3];
        }
      }
      else
      {
        v28 = (unsigned __int16)a2[4];
        LOWORD(v33) = v12;
      }
      v38 = (unsigned __int16)a2[10];
      v37 = (unsigned __int16)a2[9];
      v36 = (unsigned __int16)a2[8];
      v35 = (unsigned __int16)a2[7];
      v34 = (unsigned __int16)a2[6];
      v32 = (unsigned __int16)a2[5];
      if ( v29 <= (unsigned __int16)v33 )
      {
        v29 = *(unsigned __int16 *)(a1 + 20);
        v31 = v30;
LABEL_25:
        v38 -= v29;
        a2[10] = v38;
        v37 = v37 - *(unsigned __int16 *)(a1 + 18) + (v38 >> 16);
        a2[9] = v37;
        v36 = v36 - *(unsigned __int16 *)(a1 + 16) + (v37 >> 16);
        a2[8] = v36;
        v35 = v35 - *(unsigned __int16 *)(a1 + 14) + (v36 >> 16);
        a2[7] = v35;
        v34 = v34 - *(unsigned __int16 *)(a1 + 12) + (v35 >> 16);
        a2[6] = v34;
        v32 = v32 - *(unsigned __int16 *)(a1 + 10) + (v34 >> 16);
        a2[5] = v32;
        v28 = v28 - *(unsigned __int16 *)(a1 + 8) + (v32 >> 16);
        a2[4] = v28;
        v39 = *(unsigned __int16 *)(a1 + 6);
        v30 = v31 - v39 + (v28 >> 16);
        a2[3] = v31 - v39 + HIWORD(v28);
        v12 = (unsigned __int16)v12 - *(unsigned __int16 *)(a1 + 4) + HIWORD(v30);
        v14 = 1;
        goto LABEL_4;
      }
      v14 = 0;
LABEL_4:
      HIDWORD(v16) = v7;
      LODWORD(v16) = v6 << 16;
      v15 = v16 >> 31;
      HIDWORD(v16) = v8;
      LODWORD(v16) = v7 << 16;
      v17 = v16 >> 31;
      HIDWORD(v16) = v9;
      LODWORD(v16) = v8 << 16;
      v18 = v16 >> 31;
      HIDWORD(v16) = v10;
      LODWORD(v16) = v9 << 16;
      v19 = v16 >> 31;
      HIDWORD(v16) = v11;
      LODWORD(v16) = v10 << 16;
      v20 = v16 >> 31;
      HIDWORD(v16) = v5;
      LODWORD(v16) = v11 << 16;
      v21 = v16 >> 31;
      v22 = v5 << 16;
      a2[10] = 2 * v38;
      HIDWORD(v16) = v37;
      LODWORD(v16) = v38 << 16;
      v23 = v16 >> 31;
      HIDWORD(v16) = v36;
      LODWORD(v16) = v37 << 16;
      a2[9] = v23;
      a2[8] = v16 >> 31;
      HIDWORD(v16) = v35;
      LODWORD(v16) = v36 << 16;
      v24 = v16 >> 31;
      HIDWORD(v16) = v34;
      LODWORD(v16) = v35 << 16;
      v25 = v16 >> 31;
      HIDWORD(v16) = v32;
      LODWORD(v16) = v34 << 16;
      v26 = v16 >> 31;
      HIDWORD(v16) = v28;
      LODWORD(v16) = v32 << 16;
      v27 = v16 >> 31;
      HIDWORD(v16) = v30;
      LODWORD(v16) = v28 << 16;
      LOWORD(v28) = v16 >> 31;
      a2[7] = v24;
      a2[6] = v25;
      v5 = v21;
      v7 = v15;
      HIDWORD(v16) = v12;
      LODWORD(v16) = v30 << 16;
      v12 = v16 >> 31;
      a2[5] = v26;
      a2[4] = v27;
      a2[3] = v28;
      a2[2] = v16 >> 31;
      v8 = v17;
      v9 = v18;
      v4 = __PAIR64__(v4, v22) >> 31;
      v10 = v19;
      v6 = v14 | (2 * v6);
      v11 = v20;
      if ( !--v13 )
        goto LABEL_38;
    }
  }
  v4 = 0;
  v21 = 0;
  v6 = 0;
  v15 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v40 = *(int16x8_t *)(a2 + 2);
  a2[2] = (unsigned __int16)v40.i16[0] >> 1;
  *(uint16x8_t *)(a2 + 3) = vsraq_n_u16((uint16x8_t)vshlq_n_s16(v40, 0xFu), *(uint16x8_t *)(a2 + 3), 1u);
  v41 = *(int16x8_t *)(a1 + 4);
  *(_WORD *)(a1 + 4) = (unsigned __int16)v41.i16[0] >> 1;
  v42 = vsraq_n_u16((uint16x8_t)vshlq_n_s16(v41, 0xFu), *(uint16x8_t *)(a1 + 6), 1u);
  *(uint16x8_t *)(a1 + 6) = v42;
  v28 = (unsigned __int16)a2[3];
  v43 = 114;
  do
  {
    v44 = *(unsigned __int16 *)(a1 + 6);
    v45 = v44 <= (unsigned __int16)v28;
    if ( v44 > (unsigned __int16)v28 )
      v44 = 0;
    v12 = v28 - v44;
    v46 = v15 << 16;
    HIDWORD(v47) = v15;
    LODWORD(v47) = v6 << 16;
    v15 = v47 >> 31;
    v48 = v17 << 16;
    v17 = __PAIR64__(v17, v46) >> 31;
    v49 = v18 << 16;
    v18 = __PAIR64__(v18, v48) >> 31;
    v50 = v19 << 16;
    v19 = __PAIR64__(v19, v49) >> 31;
    v51 = v20 << 16;
    v20 = __PAIR64__(v20, v50) >> 31;
    v52 = v21 << 16;
    v21 = __PAIR64__(v21, v51) >> 31;
    v4 = __PAIR64__(v4, v52) >> 31;
    v6 = v45 | (2 * v6);
    v53 = a2[10];
    a2[10] = 2 * v53;
    v54 = *(int16x4_t *)(a2 + 6);
    v55 = (uint16x4_t)vext_s8((int8x8_t)v54, *(int8x8_t *)v42.i8, 2u);
    v55.i16[3] = v53;
    *(uint16x4_t *)v42.i8 = vsra_n_u16((uint16x4_t)vadd_s16(v54, v54), vshr_n_u16(v55, 1u), 0xEu);
    *(_QWORD *)(a2 + 6) = v42.i64[0];
    HIDWORD(v47) = (unsigned __int16)a2[5];
    LODWORD(v47) = v54.u16[0] << 16;
    v26 = v47 >> 31;
    v56 = (unsigned __int16)a2[4];
    HIDWORD(v47) = v56;
    LODWORD(v47) = (unsigned __int16)a2[5] << 16;
    v27 = v47 >> 31;
    a2[5] = v26;
    a2[4] = v27;
    HIDWORD(v47) = v12;
    LODWORD(v47) = v56 << 16;
    v28 = v47 >> 31;
    a2[3] = v47 >> 31;
    HIDWORD(v47) = (unsigned __int16)a2[2];
    LODWORD(v47) = v12 << 16;
    LOWORD(v12) = v47 >> 31;
    a2[2] = v12;
    --v43;
  }
  while ( v43 );
  v24 = v42.i16[1];
  v25 = v42.i16[0];
LABEL_38:
  result = 1;
  if ( !(_WORD)v12 && !(_WORD)v28 && !v27 && !v26 && !v25 && !v24 && !a2[8] && !a2[9] )
    result = a2[10] != 0;
  HIDWORD(v59) = v15;
  LODWORD(v59) = v6 << 16;
  v58 = v59 >> 17;
  HIDWORD(v59) = v17;
  LODWORD(v59) = v15 << 16;
  v60 = v59 >> 17;
  HIDWORD(v59) = v18;
  LODWORD(v59) = v17 << 16;
  v61 = v59 >> 17;
  HIDWORD(v59) = v19;
  LODWORD(v59) = v18 << 16;
  v62 = v59 >> 17;
  HIDWORD(v59) = v20;
  LODWORD(v59) = v19 << 16;
  v63 = v59 >> 17;
  HIDWORD(v59) = v21;
  LODWORD(v59) = v20 << 16;
  v64 = v59 >> 17;
  HIDWORD(v59) = v4;
  LODWORD(v59) = v21 << 16;
  v65 = v59 >> 17;
  HIDWORD(v59) = v4 >> 1;
  LODWORD(v59) = v65 << 16;
  v66 = v59 >> 17;
  *a2 = v2;
  HIDWORD(v59) = v60;
  LODWORD(v59) = v58 << 16;
  v67 = v59 >> 17;
  a2[1] = v3;
  HIDWORD(v59) = v62;
  LODWORD(v59) = v61 << 16;
  v68 = v59 >> 17;
  a2[2] = (unsigned __int16)v4 >> 2;
  HIDWORD(v59) = v64;
  LODWORD(v59) = v63 << 16;
  v69 = v59 >> 17;
  a2[3] = v66;
  HIDWORD(v59) = v65;
  LODWORD(v59) = v64 << 16;
  a2[4] = v59 >> 17;
  a2[5] = v69;
  a2[6] = __PAIR64__(v63, v62 << 16) >> 17;
  a2[7] = v68;
  a2[8] = __PAIR64__(v61, v60 << 16) >> 17;
  a2[9] = v67;
  a2[10] = __PAIR64__(v58, v6 << 31) >> 17;
  return result;
}
