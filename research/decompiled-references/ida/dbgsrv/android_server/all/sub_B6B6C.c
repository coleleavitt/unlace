/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B6B6C
// Address: 0x00000000000B6B6C

//----- (00000000000B6B6C) ----------------------------------------------------
__int64 __fastcall sub_B6B6C(unsigned __int16 *a1, __int64 x1_0, int8x16x2_t a3)
{
  int v3; // w21
  int v4; // w22
  int v7; // w23
  int v8; // w22
  unsigned int v9; // w21
  int v10; // w8
  unsigned int v11; // w9
  unsigned int v12; // w14
  int v13; // w15
  int v14; // w11
  int v15; // w12
  int v16; // w13
  int v17; // w16
  int v18; // w17
  int v19; // w18
  int v20; // w0
  unsigned int v21; // w10
  unsigned int v22; // w14
  unsigned int v23; // w15
  unsigned int v24; // w17
  unsigned int v25; // w16
  unsigned int v26; // w13
  unsigned int v27; // w12
  unsigned int v28; // w11
  char v29; // w21
  int v30; // w0
  int v31; // w1
  int8x16x2_t v33; // 0:q0.32
  int8x16x2_t v34; // 0:q0.32
  int8x16x2_t v35; // 0:q0.32

  v3 = a1[1];
  v4 = *(unsigned __int16 *)(x1_0 + 2);
  v7 = v3 - sub_B3274((__int64)a1, a3);
  v8 = v4 - sub_B3274(x1_0, v33);
  if ( v8 >= v7 )
  {
    LOWORD(v10) = *(_WORD *)(x1_0 + 4);
    v11 = 0;
    while ( 1 )
    {
      v12 = a1[2];
      LOWORD(v13) = v10;
      if ( v12 == (unsigned __int16)v10 )
      {
        v14 = a1[3];
        v13 = *(unsigned __int16 *)(x1_0 + 6);
        if ( v14 == v13 )
        {
          v15 = a1[4];
          v13 = *(unsigned __int16 *)(x1_0 + 8);
          if ( v15 == v13 )
          {
            v16 = a1[5];
            v13 = *(unsigned __int16 *)(x1_0 + 10);
            if ( v16 == v13 )
            {
              v17 = a1[6];
              v13 = *(unsigned __int16 *)(x1_0 + 12);
              if ( v17 == v13 )
              {
                v18 = a1[7];
                v13 = *(unsigned __int16 *)(x1_0 + 14);
                if ( v18 == v13 )
                {
                  v19 = a1[8];
                  v13 = *(unsigned __int16 *)(x1_0 + 16);
                  if ( v19 == v13 )
                  {
                    v20 = a1[9];
                    v13 = *(unsigned __int16 *)(x1_0 + 18);
                    if ( v20 == v13 )
                    {
                      v12 = a1[10];
                      v13 = *(unsigned __int16 *)(x1_0 + 20);
                      v21 = v12;
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
      v21 = *(unsigned __int16 *)(x1_0 + 20);
      if ( v12 <= (unsigned __int16)v13 )
      {
        v12 = a1[10];
        v20 = *(unsigned __int16 *)(x1_0 + 18);
        v19 = *(unsigned __int16 *)(x1_0 + 16);
        v18 = *(unsigned __int16 *)(x1_0 + 14);
        v17 = *(unsigned __int16 *)(x1_0 + 12);
        v16 = *(unsigned __int16 *)(x1_0 + 10);
        v15 = *(unsigned __int16 *)(x1_0 + 8);
        v14 = *(unsigned __int16 *)(x1_0 + 6);
LABEL_24:
        v21 -= v12;
        *(_WORD *)(x1_0 + 20) = v21;
        v29 = 1;
        v22 = v20 - a1[9] - (HIWORD(v21) & 1);
        *(_WORD *)(x1_0 + 18) = v20 - a1[9] - (BYTE2(v21) & 1);
        v23 = v19 - a1[8] - (HIWORD(v22) & 1);
        *(_WORD *)(x1_0 + 16) = v19 - a1[8] - (BYTE2(v22) & 1);
        v24 = v18 - a1[7] - (HIWORD(v23) & 1);
        *(_WORD *)(x1_0 + 14) = v24;
        v25 = v17 - a1[6] - (HIWORD(v24) & 1);
        *(_WORD *)(x1_0 + 12) = v25;
        v26 = v16 - a1[5] - (HIWORD(v25) & 1);
        *(_WORD *)(x1_0 + 10) = v26;
        v27 = v15 - a1[4] - (HIWORD(v26) & 1);
        *(_WORD *)(x1_0 + 8) = v27;
        v28 = v14 - a1[3] - (HIWORD(v27) & 1);
        *(_WORD *)(x1_0 + 6) = v28;
        v10 = (unsigned __int16)v10 - a1[2] - (HIWORD(v28) & 1);
        *(_WORD *)(x1_0 + 4) = v10;
        goto LABEL_25;
      }
      LOWORD(v22) = *(_WORD *)(x1_0 + 18);
      LOWORD(v23) = *(_WORD *)(x1_0 + 16);
      LOWORD(v24) = *(_WORD *)(x1_0 + 14);
      LOWORD(v25) = *(_WORD *)(x1_0 + 12);
      LOWORD(v26) = *(_WORD *)(x1_0 + 10);
      LOWORD(v27) = *(_WORD *)(x1_0 + 8);
      LOWORD(v28) = *(_WORD *)(x1_0 + 6);
      v29 = 0;
LABEL_25:
      v9 = v29 & 1 | (2 * v11);
      *(_WORD *)(x1_0 + 20) = 2 * v21;
      --v8;
      *(_WORD *)(x1_0 + 18) = ((v21 & 0x8000) != 0) | (unsigned __int16)(2 * v22);
      LOWORD(v10) = ((v28 & 0x8000) != 0) | (unsigned __int16)(2 * v10);
      v11 = v9;
      *(_WORD *)(x1_0 + 16) = ((v22 & 0x8000) != 0) | (unsigned __int16)(2 * v23);
      *(_WORD *)(x1_0 + 14) = ((v23 & 0x8000) != 0) | (unsigned __int16)(2 * v24);
      *(_WORD *)(x1_0 + 12) = ((v24 & 0x8000) != 0) | (unsigned __int16)(2 * v25);
      *(_WORD *)(x1_0 + 10) = ((v25 & 0x8000) != 0) | (unsigned __int16)(2 * v26);
      *(_WORD *)(x1_0 + 8) = ((v26 & 0x8000) != 0) | (unsigned __int16)(2 * v27);
      *(_WORD *)(x1_0 + 6) = ((v27 & 0x8000) != 0) | (unsigned __int16)(2 * v28);
      *(_WORD *)(x1_0 + 4) = v10;
      if ( v8 < v7 )
        goto LABEL_26;
    }
  }
  v9 = 0;
LABEL_26:
  v30 = sub_B3274(x1_0, v34);
  if ( v30 < 113 )
  {
    v31 = v8 - v30;
    if ( v8 - v30 <= 32766 )
    {
      if ( v31 < 0 )
      {
        if ( v31 >= -112 )
        {
          eshift(x1_0, v31, v35);
          *(_WORD *)(x1_0 + 20) = 0;
        }
      }
      else
      {
        *(_WORD *)(x1_0 + 20) = 0;
        if ( v31 )
        {
          *(_WORD *)(x1_0 + 2) = v31;
          return v9;
        }
      }
    }
  }
  *(_QWORD *)x1_0 = 0;
  *(_QWORD *)(x1_0 + 8) = 0;
  *(_QWORD *)(x1_0 + 14) = 0;
  return v9;
}
// B6B94: variable 'v33' is possibly undefined
// B6E04: variable 'v34' is possibly undefined
// B6E5C: variable 'v35' is possibly undefined
