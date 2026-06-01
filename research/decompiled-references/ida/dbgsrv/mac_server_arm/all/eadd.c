/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x0000000100068410

//----- (0000000100068410) ----------------------------------------------------
__int64 __fastcall eadd(unsigned __int16 *a1, unsigned __int16 *a2, int16x4_t *a3, int a4, int8x16x2_t a5)
{
  __int16 v6; // w8
  int v7; // w9
  int v8; // w2
  unsigned int v9; // w8
  unsigned int v10; // w15
  unsigned int v11; // w14
  unsigned int v12; // w13
  unsigned int v13; // w12
  unsigned int v14; // w11
  unsigned int v15; // w10
  __int16 v16; // w17
  int v17; // w16
  unsigned int v18; // w20
  unsigned int v19; // w17
  unsigned int v20; // w21
  unsigned int v21; // w7
  unsigned int v22; // w6
  unsigned int v23; // w5
  unsigned int v24; // w4
  unsigned int v25; // w0
  unsigned int v26; // w1
  char v27; // w1
  int v28; // w10
  int v29; // w10
  int v30; // w10
  int v31; // w10
  int v32; // w10
  int v33; // w11
  int v34; // w12
  __int16 v35; // w13
  unsigned int v36; // w10
  unsigned int v37; // w10
  unsigned int v38; // w10
  unsigned int v39; // w10
  __int16 v40; // w8
  unsigned __int64 v41; // t2
  int8x16_t v43; // [xsp+0h] [xbp-80h]
  int8x16_t v44; // [xsp+0h] [xbp-80h]
  int v45; // [xsp+10h] [xbp-70h]
  int v46; // [xsp+10h] [xbp-70h]
  _BYTE v47[20]; // [xsp+20h] [xbp-60h] BYREF
  unsigned __int16 v48; // [xsp+34h] [xbp-4Ch]
  int8x16_t v49; // [xsp+40h] [xbp-40h] BYREF
  int v50; // [xsp+50h] [xbp-30h]
  unsigned __int16 v51; // [xsp+54h] [xbp-2Ch]

  v6 = a1[7];
  v7 = v6 >> 15;
  v49.i16[0] = v6 >> 15;
  v8 = v6 & 0x7FFF;
  *(__int32 *)((char *)v49.i32 + 2) = v8;
  v9 = a1[6];
  v49.i16[3] = a1[6];
  v10 = a1[5];
  v49.i16[4] = a1[5];
  v11 = a1[4];
  v49.i16[5] = a1[4];
  v12 = a1[3];
  v49.i16[6] = a1[3];
  v13 = a1[2];
  v49.i16[7] = a1[2];
  v14 = a1[1];
  LOWORD(v50) = a1[1];
  v15 = *a1;
  HIWORD(v50) = *a1;
  v51 = 0;
  v16 = a2[7];
  v17 = v16 >> 15;
  *(_WORD *)v47 = v16 >> 15;
  v18 = v16 & 0x7FFF;
  *(_DWORD *)&v47[2] = v18;
  v19 = a2[6];
  *(_WORD *)&v47[6] = a2[6];
  v20 = a2[5];
  *(_WORD *)&v47[8] = a2[5];
  v21 = a2[4];
  *(_WORD *)&v47[10] = a2[4];
  v22 = a2[3];
  *(_WORD *)&v47[12] = a2[3];
  v23 = a2[2];
  *(_WORD *)&v47[14] = a2[2];
  v24 = a2[1];
  *(_WORD *)&v47[16] = a2[1];
  v25 = *a2;
  *(_WORD *)&v47[18] = *a2;
  if ( a4 )
  {
    v17 = ~v17;
    *(_WORD *)v47 = v17;
  }
  v26 = v8 - v18;
  if ( (int)(v8 - v18) >= 1 )
  {
    v43 = *(int8x16_t *)v47;
    v45 = *(_DWORD *)&v47[16];
    *(int8x16_t *)v47 = v49;
    *(_DWORD *)&v47[16] = v50;
    v49 = v43;
    v50 = v45;
    v51 = 0;
    v18 = *(unsigned __int16 *)&v47[2];
    v26 = -v26;
LABEL_6:
    if ( v26 < 0xFFFFFF8F )
    {
LABEL_13:
      if ( *(_WORD *)v47 )
        v40 = v18 | 0x8000;
      else
        v40 = v18;
      a3[1].i16[3] = v40;
      HIDWORD(v41) = *(_DWORD *)&v47[8];
      LODWORD(v41) = *(_DWORD *)&v47[8];
      a3[1].i16[2] = *(_WORD *)&v47[6];
      a3[1].i32[0] = v41 >> 16;
      *a3 = vrev64_s16(*(int16x4_t *)&v47[12]);
      return 1;
    }
    v27 = (unsigned int)eshift((__int64)&v49, v26) != 1;
    goto LABEL_8;
  }
  if ( v26 )
    goto LABEL_6;
  if ( v9 == v19 )
  {
    if ( v10 == v20 )
    {
      if ( v11 == v21 )
      {
        if ( v12 == v22 )
        {
          if ( v13 == v23 )
          {
            if ( v14 == v24 )
            {
              if ( v15 == v25 )
              {
                if ( v7 != v17 || !v18 )
                {
                  *a3 = 0;
                  a3[1] = 0;
                  return 1;
                }
                if ( v18 < 0x7FFE )
                {
                  LOWORD(v18) = v18 + 1;
                  goto LABEL_13;
                }
                goto LABEL_28;
              }
              v9 = v15;
              v19 = v25;
            }
            else
            {
              v9 = v14;
              v19 = v24;
            }
          }
          else
          {
            v9 = v13;
            v19 = v23;
          }
        }
        else
        {
          v9 = v12;
          v19 = v22;
        }
      }
      else
      {
        v9 = v11;
        v19 = v21;
      }
    }
    else
    {
      v9 = v10;
      v19 = v20;
    }
  }
  v27 = 0;
  if ( v9 > v19 )
  {
    a5.val[0] = *(int8x16_t *)v47;
    v44 = *(int8x16_t *)v47;
    v46 = *(_DWORD *)&v47[16];
    a5.val[1] = v49;
    *(int8x16_t *)v47 = v49;
    *(_DWORD *)&v47[16] = v50;
    v49 = v44;
    v50 = v46;
    v51 = 0;
  }
LABEL_8:
  if ( v49.u16[0] == *(unsigned __int16 *)v47 )
  {
    v48 = v51;
    v36 = HIWORD(v50) + *(unsigned __int16 *)&v47[18];
    *(_WORD *)&v47[18] += HIWORD(v50);
    v37 = (unsigned __int16)v50 + HIWORD(v36) + *(unsigned __int16 *)&v47[16];
    *(_WORD *)&v47[16] = v37;
    v38 = v49.u16[7] + HIWORD(v37) + *(unsigned __int16 *)&v47[14];
    *(_WORD *)&v47[14] = v38;
    v39 = v49.u16[6] + HIWORD(v38) + *(unsigned __int16 *)&v47[12];
    *(_WORD *)&v47[12] = v39;
    v32 = v49.u16[5] + HIWORD(v39) + *(unsigned __int16 *)&v47[10];
    v33 = v49.u16[4] + HIWORD(v32) + *(unsigned __int16 *)&v47[8];
    v34 = v49.u16[3] + HIWORD(v33) + *(unsigned __int16 *)&v47[6];
    v35 = *(_WORD *)&v47[4] + v49.i16[2];
  }
  else
  {
    v48 = -v51;
    v28 = *(unsigned __int16 *)&v47[18] - HIWORD(v50) + (-v51 >> 16);
    *(_WORD *)&v47[18] = *(_WORD *)&v47[18] - HIWORD(v50) + ((unsigned int)-v51 >> 16);
    v29 = *(unsigned __int16 *)&v47[16] - (unsigned __int16)v50 + (v28 >> 16);
    *(_WORD *)&v47[16] = v29;
    v30 = *(unsigned __int16 *)&v47[14] - v49.u16[7] + (v29 >> 16);
    *(_WORD *)&v47[14] = v30;
    v31 = *(unsigned __int16 *)&v47[12] - v49.u16[6] + (v30 >> 16);
    *(_WORD *)&v47[12] = v31;
    v32 = *(unsigned __int16 *)&v47[10] - v49.u16[5] + (v31 >> 16);
    v33 = *(unsigned __int16 *)&v47[8] - v49.u16[4] + (v32 >> 16);
    v34 = *(unsigned __int16 *)&v47[6] - v49.u16[3] + (v33 >> 16);
    v35 = *(_WORD *)&v47[4] - v49.i16[2];
  }
  *(_WORD *)&v47[10] = v32;
  *(_WORD *)&v47[8] = v33;
  *(_WORD *)&v47[6] = v34;
  *(_WORD *)&v47[4] = v35 + HIWORD(v34);
  if ( (unsigned int)emdnorm((__int64)v47, v27, v49.u16[0] != *(unsigned __int16 *)v47, v18, 112, a5) )
  {
    LOWORD(v18) = *(_WORD *)&v47[2];
    goto LABEL_13;
  }
LABEL_28:
  *a3 = 0;
  a3[1] = 0;
  return 2;
}
// 1000686A8: variable 'a5' is possibly undefined
