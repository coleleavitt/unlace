/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eadd
// Address: 0x00000000000B346C

//----- (00000000000B346C) ----------------------------------------------------
__int64 __fastcall eadd(__int16 *a1, __int16 *a2, __int64 a3, char a4, int8x16x2_t a5)
{
  int v6; // w8
  __int16 v7; // w9
  __int16 v8; // w10
  int v9; // w9
  unsigned int v10; // w20
  __int16 v11; // w10
  int v12; // w1
  char v13; // w1
  unsigned int v14; // w8
  unsigned int v15; // w9
  char v16; // w2
  unsigned int v17; // w8
  unsigned int v18; // w8
  unsigned int v19; // w8
  unsigned int v20; // w8
  unsigned int v21; // w8
  unsigned int v22; // w8
  unsigned int v23; // w8
  unsigned int v24; // w8
  int v25; // w8
  unsigned int v26; // w8
  unsigned int v27; // w8
  unsigned int v28; // w8
  unsigned int v29; // w8
  unsigned int v30; // w8
  unsigned int v31; // w8
  unsigned int v32; // w8
  unsigned int v33; // w8
  __int16 v34; // w8
  int8x16_t v36; // [xsp+0h] [xbp-80h]
  int v37; // [xsp+10h] [xbp-70h]
  int v38; // [xsp+10h] [xbp-70h]
  int8x16_t v39; // [xsp+20h] [xbp-60h] BYREF
  int v40; // [xsp+30h] [xbp-50h]
  unsigned __int16 v41; // [xsp+34h] [xbp-4Ch]
  int8x16_t v42; // [xsp+40h] [xbp-40h] BYREF
  int v43; // [xsp+50h] [xbp-30h]
  unsigned __int16 v44; // [xsp+54h] [xbp-2Ch]
  __int64 v45; // [xsp+58h] [xbp-28h]

  v45 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a1[7] & 0x7FFF;
  v42.n128_u16[0] = (unsigned int)a1[7] >> 15;
  *(unsigned __int32 *)((char *)v42.n128_u32 + 2) = (unsigned __int16)v6;
  v42.n128_u16[3] = a1[6];
  v42.n128_u16[4] = a1[5];
  v42.n128_u16[5] = a1[4];
  v42.n128_u16[6] = a1[3];
  v42.n128_u16[7] = a1[2];
  LOWORD(v43) = a1[1];
  v7 = *a1;
  v44 = 0;
  HIWORD(v43) = v7;
  v8 = a2[7];
  v9 = v8 >> 15;
  v10 = v8 & 0x7FFF;
  v39.n128_u16[0] = v8 >> 15;
  *(unsigned __int32 *)((char *)v39.n128_u32 + 2) = v10;
  v39.n128_u16[3] = a2[6];
  v39.n128_u16[4] = a2[5];
  v39.n128_u16[5] = a2[4];
  v39.n128_u16[6] = a2[3];
  v39.n128_u16[7] = a2[2];
  LOWORD(v40) = a2[1];
  v11 = *a2;
  v41 = 0;
  HIWORD(v40) = v11;
  if ( (a4 & 1) != 0 )
    v39.n128_u16[0] = ~(_WORD)v9;
  v12 = v6 - v10;
  if ( (int)(v6 - v10) >= 1 )
  {
    a5.val[1] = v42;
    a5.val[0] = v39;
    v39 = v42;
    v10 = v42.n128_u16[1];
    v12 = -v12;
    v37 = v40;
    v40 = v43;
    v41 = 0;
    v43 = v37;
    v42 = a5.val[0];
    v44 = 0;
  }
  if ( !v12 )
  {
    v14 = v42.n128_u16[2];
    v15 = v39.n128_u16[2];
    if ( v42.n128_u16[2] != v39.n128_u16[2]
      || (v14 = v42.n128_u16[3], v15 = v39.n128_u16[3], v42.n128_u16[3] != v39.n128_u16[3])
      || (v14 = v42.n128_u16[4], v15 = v39.n128_u16[4], v42.n128_u16[4] != v39.n128_u16[4])
      || (v14 = v42.n128_u16[5], v15 = v39.n128_u16[5], v42.n128_u16[5] != v39.n128_u16[5])
      || (v14 = v42.n128_u16[6], v15 = v39.n128_u16[6], v42.n128_u16[6] != v39.n128_u16[6])
      || (v14 = v42.n128_u16[7], v15 = v39.n128_u16[7], v42.n128_u16[7] != v39.n128_u16[7])
      || (v14 = (unsigned __int16)v43, v15 = (unsigned __int16)v40, (unsigned __int16)v43 != (unsigned __int16)v40)
      || (v14 = HIWORD(v43), v15 = HIWORD(v40), HIWORD(v43) != HIWORD(v40)) )
    {
      if ( v14 <= v15 )
      {
        v13 = 0;
      }
      else
      {
        a5.val[0] = v39;
        a5.val[1] = v42;
        v13 = 0;
        v38 = v40;
        v36 = v39;
        v40 = v43;
        v39 = v42;
        v41 = 0;
        v43 = v38;
        v42 = v36;
        v44 = 0;
      }
      goto LABEL_23;
    }
    if ( v42.n128_u16[0] != v39.n128_u16[0] || !v10 )
    {
      *(_QWORD *)a3 = 0;
      *(_QWORD *)(a3 + 8) = 0;
      return 1;
    }
    if ( v10 >= 0x7FFE )
      goto LABEL_33;
    LOWORD(v10) = v10 + 1;
    v39.n128_u16[1] = v10;
LABEL_28:
    if ( v39.n128_u16[0] )
      v34 = v10 | 0x8000;
    else
      v34 = v10;
    *(_WORD *)(a3 + 14) = v34;
    *(_WORD *)(a3 + 12) = v39.n128_u16[3];
    *(_WORD *)(a3 + 10) = v39.n128_u16[4];
    *(_WORD *)(a3 + 8) = v39.n128_u16[5];
    *(_WORD *)(a3 + 6) = v39.n128_u16[6];
    *(_WORD *)(a3 + 4) = v39.n128_u16[7];
    *(_WORD *)(a3 + 2) = v40;
    *(_WORD *)a3 = HIWORD(v40);
    return 1;
  }
  if ( v12 < -113 )
    goto LABEL_28;
  v13 = (unsigned int)eshift((__int64)&v42, v12, a5) != 1;
LABEL_23:
  if ( v42.n128_u16[0] == v39.n128_u16[0] )
  {
    v16 = 0;
    v17 = v41 + v44;
    v41 += v44;
    v18 = HIWORD(v43) + HIWORD(v17) + HIWORD(v40);
    HIWORD(v40) = v18;
    v19 = (HIWORD(v18) & 1) + (unsigned __int16)v43 + (unsigned __int16)v40;
    LOWORD(v40) = v19;
    v20 = v39.n128_u16[7] + v42.n128_u16[7] + (HIWORD(v19) & 1);
    v39.n128_u16[7] = v20;
    v21 = v39.n128_u16[6] + v42.n128_u16[6] + (HIWORD(v20) & 1);
    v39.n128_u16[6] = v21;
    v22 = v39.n128_u16[5] + v42.n128_u16[5] + (HIWORD(v21) & 1);
    v39.n128_u16[5] = v22;
    v23 = v39.n128_u16[4] + v42.n128_u16[4] + (HIWORD(v22) & 1);
    v39.n128_u16[4] = v23;
    v24 = v39.n128_u16[3] + v42.n128_u16[3] + (HIWORD(v23) & 1);
    v39.n128_u16[3] = v24;
    v25 = v39.n128_u16[2] + v42.n128_u16[2] + (HIWORD(v24) & 1);
  }
  else
  {
    v16 = 1;
    v26 = v41 - v44;
    v41 -= v44;
    v27 = HIWORD(v40) - HIWORD(v43) - (HIWORD(v26) & 1);
    HIWORD(v40) = v27;
    v28 = (unsigned __int16)v40 - (unsigned __int16)v43 - (HIWORD(v27) & 1);
    LOWORD(v40) = v28;
    v29 = v39.n128_u16[7] - v42.n128_u16[7] - (HIWORD(v28) & 1);
    v39.n128_u16[7] = v29;
    v30 = v39.n128_u16[6] - v42.n128_u16[6] - (HIWORD(v29) & 1);
    v39.n128_u16[6] = v30;
    v31 = v39.n128_u16[5] - v42.n128_u16[5] - (HIWORD(v30) & 1);
    v39.n128_u16[5] = v31;
    v32 = v39.n128_u16[4] - v42.n128_u16[4] - (HIWORD(v31) & 1);
    v39.n128_u16[4] = v32;
    v33 = v39.n128_u16[3] - v42.n128_u16[3] - (HIWORD(v32) & 1);
    v39.n128_u16[3] = v33;
    v25 = v39.n128_u16[2] - v42.n128_u16[2] - (HIWORD(v33) & 1);
  }
  v39.n128_u16[2] = v25;
  if ( emdnorm((__int64)&v39, v13, v16, v10, 112, a5) )
  {
    LOWORD(v10) = v39.n128_u16[1];
    goto LABEL_28;
  }
LABEL_33:
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  return 2;
}
// B385C: variable 'a5' is possibly undefined
