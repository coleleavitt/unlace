/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: ediv
// Address: 0x00000000000B40B8

//----- (00000000000B40B8) ----------------------------------------------------
__int64 __fastcall ediv(__int16 *a1, unsigned __int16 *a2, __int64 a3, int8x16x2_t a4)
{
  __int16 v4; // w8
  int v5; // w21
  __int16 v6; // w8
  signed __int16 v7; // w8
  int v8; // w22
  unsigned __int16 v9; // w8
  int v11; // w0
  bool v12; // zf
  __int16 v13; // w8
  __int16 v14; // w8
  unsigned __int16 v16[12]; // [xsp+8h] [xbp-68h] BYREF
  unsigned __int16 v17; // [xsp+20h] [xbp-50h] BYREF
  __int16 v18; // [xsp+22h] [xbp-4Eh]
  __int16 v19; // [xsp+24h] [xbp-4Ch]
  __int16 v20; // [xsp+26h] [xbp-4Ah]
  __int16 v21; // [xsp+28h] [xbp-48h]
  __int16 v22; // [xsp+2Ah] [xbp-46h]
  __int16 v23; // [xsp+2Ch] [xbp-44h]
  __int16 v24; // [xsp+2Eh] [xbp-42h]
  __int16 v25; // [xsp+30h] [xbp-40h]
  __int16 v26; // [xsp+32h] [xbp-3Eh]
  __int16 v27; // [xsp+34h] [xbp-3Ch]
  __int64 v28; // [xsp+38h] [xbp-38h]
  int8x16x2_t v29; // 0:q0.32

  v28 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a1[7];
  v19 = 0;
  v5 = v4 & 0x7FFF;
  v17 = (unsigned int)v4 >> 15;
  v18 = v4 & 0x7FFF;
  v20 = a1[6];
  v21 = a1[5];
  v22 = a1[4];
  v23 = a1[3];
  v24 = a1[2];
  v25 = a1[1];
  v6 = *a1;
  v27 = 0;
  v26 = v6;
  v7 = a2[7];
  v16[2] = 0;
  v8 = v7 & 0x7FFF;
  v16[0] = (unsigned int)v7 >> 15;
  v16[1] = v7 & 0x7FFF;
  v16[3] = a2[6];
  v16[4] = a2[5];
  v16[5] = a2[4];
  v16[6] = a2[3];
  v16[7] = a2[2];
  v16[8] = a2[1];
  v9 = *a2;
  v16[10] = 0;
  v16[9] = v9;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  if ( !v8 )
    return 4;
  if ( !v5 )
    return 1;
  *(long double *)v29.val = sub_B4260(v16, &v17, a4);
  if ( emdnorm((__int64)&v17, v11 != 0, 0, 0x3FFF - v8 + v5, 112, v29) )
  {
    v12 = v17 == v16[0];
    if ( v17 == v16[0] )
      v13 = 0;
    else
      v13 = -1;
    v17 = v13;
    v14 = v18;
    if ( !v12 )
      v14 = v18 | 0x8000;
    *(_WORD *)(a3 + 14) = v14;
    *(_WORD *)(a3 + 12) = v20;
    *(_WORD *)(a3 + 10) = v21;
    *(_WORD *)(a3 + 8) = v22;
    *(_WORD *)(a3 + 6) = v23;
    *(_WORD *)(a3 + 4) = v24;
    *(_WORD *)(a3 + 2) = v25;
    *(_WORD *)a3 = v26;
    return 1;
  }
  return 2;
}
// B41B0: variable 'v11' is possibly undefined
// B41C0: variable 'v29' is possibly undefined
