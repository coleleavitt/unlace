/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B2E0
// Address: 0x000000010006B2E0

//----- (000000010006B2E0) ----------------------------------------------------
__int64 __fastcall sub_10006B2E0(unsigned __int16 *a1, __int64 x1_0, int8x16x2_t a3)
{
  int v5; // w21
  int v6; // w22
  int v7; // w23
  int v8; // w22
  unsigned __int16 v9; // w21
  int v10; // w0
  unsigned int v11; // w1
  int v12; // w8
  __int16 v13; // w16
  unsigned __int64 v14; // t2
  unsigned int v15; // w0
  unsigned int v16; // w13
  unsigned int v17; // w16
  int v18; // w9
  int v19; // w10
  int v20; // w1
  int v21; // w11
  int v22; // w12
  int v23; // w14
  int v24; // w15
  int v25; // w17
  int8x16x2_t v27; // 0:q0.32
  int8x16x2_t v28; // 0:q0.32

  v5 = a1[1];
  v6 = *(unsigned __int16 *)(x1_0 + 2);
  v7 = v5 - sub_100067EF8((__int64)a1, a3);
  v8 = v6 - sub_100067EF8(x1_0, v27);
  if ( v8 >= v7 )
  {
    v9 = 0;
    v12 = *(unsigned __int16 *)(x1_0 + 4);
    while ( 1 )
    {
      v15 = a1[2];
      v16 = *(unsigned __int16 *)(x1_0 + 6);
      if ( v15 == (unsigned __int16)v12 )
      {
        v17 = a1[3];
        v18 = *(unsigned __int16 *)(x1_0 + 8);
        if ( v17 == v16 )
        {
          v15 = a1[4];
          if ( v15 == v18 )
          {
            v19 = a1[5];
            v20 = *(unsigned __int16 *)(x1_0 + 10);
            if ( v19 == v20 )
            {
              v21 = a1[6];
              v20 = *(unsigned __int16 *)(x1_0 + 12);
              if ( v21 == v20 )
              {
                v22 = a1[7];
                v20 = *(unsigned __int16 *)(x1_0 + 14);
                if ( v22 == v20 )
                {
                  v23 = a1[8];
                  v20 = *(unsigned __int16 *)(x1_0 + 16);
                  if ( v23 == v20 )
                  {
                    v24 = a1[9];
                    v20 = *(unsigned __int16 *)(x1_0 + 18);
                    if ( v24 == v20 )
                    {
                      v15 = a1[10];
                      v20 = *(unsigned __int16 *)(x1_0 + 20);
                      v16 = a1[3];
                      v25 = v15;
                      if ( v15 == v20 )
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
            LOWORD(v20) = *(_WORD *)(x1_0 + 8);
          }
        }
        else
        {
          v15 = a1[3];
          LOWORD(v20) = *(_WORD *)(x1_0 + 6);
        }
      }
      else
      {
        v18 = *(unsigned __int16 *)(x1_0 + 8);
        LOWORD(v20) = v12;
      }
      v25 = *(unsigned __int16 *)(x1_0 + 20);
      v24 = *(unsigned __int16 *)(x1_0 + 18);
      v23 = *(unsigned __int16 *)(x1_0 + 16);
      v22 = *(unsigned __int16 *)(x1_0 + 14);
      v21 = *(unsigned __int16 *)(x1_0 + 12);
      v19 = *(unsigned __int16 *)(x1_0 + 10);
      if ( v15 <= (unsigned __int16)v20 )
      {
        v15 = a1[10];
        v17 = v16;
LABEL_31:
        v25 -= v15;
        *(_WORD *)(x1_0 + 20) = v25;
        v24 = v24 - a1[9] + (v25 >> 16);
        *(_WORD *)(x1_0 + 18) = v24;
        v23 = v23 - a1[8] + (v24 >> 16);
        *(_WORD *)(x1_0 + 16) = v23;
        v22 = v22 - a1[7] + (v23 >> 16);
        *(_WORD *)(x1_0 + 14) = v22;
        v21 = v21 - a1[6] + (v22 >> 16);
        *(_WORD *)(x1_0 + 12) = v21;
        v19 = v19 - a1[5] + (v21 >> 16);
        *(_WORD *)(x1_0 + 10) = v19;
        v18 = v18 - a1[4] + (v19 >> 16);
        *(_WORD *)(x1_0 + 8) = v18;
        v16 = v17 - a1[3] + (v18 >> 16);
        *(_WORD *)(x1_0 + 6) = v17 - a1[3] + HIWORD(v18);
        v12 = (unsigned __int16)v12 - a1[2] + HIWORD(v16);
        v13 = 1;
        goto LABEL_10;
      }
      v13 = 0;
LABEL_10:
      *(_WORD *)(x1_0 + 20) = 2 * v25;
      HIDWORD(v14) = v24;
      LODWORD(v14) = v25 << 16;
      *(_WORD *)(x1_0 + 18) = v14 >> 31;
      HIDWORD(v14) = v23;
      LODWORD(v14) = v24 << 16;
      *(_WORD *)(x1_0 + 16) = v14 >> 31;
      HIDWORD(v14) = v22;
      LODWORD(v14) = v23 << 16;
      *(_WORD *)(x1_0 + 14) = v14 >> 31;
      HIDWORD(v14) = v21;
      LODWORD(v14) = v22 << 16;
      *(_WORD *)(x1_0 + 12) = v14 >> 31;
      HIDWORD(v14) = v19;
      LODWORD(v14) = v21 << 16;
      *(_WORD *)(x1_0 + 10) = v14 >> 31;
      HIDWORD(v14) = v18;
      LODWORD(v14) = v19 << 16;
      *(_WORD *)(x1_0 + 8) = v14 >> 31;
      HIDWORD(v14) = v16;
      LODWORD(v14) = v18 << 16;
      *(_WORD *)(x1_0 + 6) = v14 >> 31;
      HIDWORD(v14) = v12;
      LODWORD(v14) = v16 << 16;
      v12 = v14 >> 31;
      *(_WORD *)(x1_0 + 4) = v14 >> 31;
      --v8;
      v9 = v13 | (2 * v9);
      if ( v8 < v7 )
        goto LABEL_3;
    }
  }
  v9 = 0;
LABEL_3:
  v10 = sub_100067EF8(x1_0, v28);
  if ( v10 >= 113 )
    goto LABEL_34;
  v11 = v8 - v10;
  if ( v8 - v10 > 32766 )
    goto LABEL_34;
  if ( (v11 & 0x80000000) != 0 )
  {
    if ( v11 >= 0xFFFFFF90 )
      eshift(x1_0, v11);
    goto LABEL_34;
  }
  *(_WORD *)(x1_0 + 20) = 0;
  if ( v8 == v10 )
  {
LABEL_34:
    *(_QWORD *)x1_0 = 0;
    *(_QWORD *)(x1_0 + 8) = 0;
    *(_QWORD *)(x1_0 + 14) = 0;
    return v9;
  }
  *(_WORD *)(x1_0 + 2) = v11;
  return v9;
}
// 10006B310: variable 'v27' is possibly undefined
// 10006B328: variable 'v28' is possibly undefined
