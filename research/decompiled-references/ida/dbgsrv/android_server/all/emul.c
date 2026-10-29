/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: emul
// Address: 0x00000000000B3B80

//----- (00000000000B3B80) ----------------------------------------------------
__int64 __fastcall emul(__int16 *a1, __int16 *a2, __int64 a3, double a4, int8x8_t a5)
{
  __int16 v5; // w8
  int v6; // w21
  __int16 v7; // w8
  __int64 result; // x0
  __int16 v9; // w8
  int v10; // w22
  __int16 v11; // w8
  int v13; // w0
  bool v14; // zf
  __int16 v15; // w8
  __int16 v16; // w8
  unsigned __int16 v17; // [xsp+8h] [xbp-68h] BYREF
  __int16 v18; // [xsp+Ah] [xbp-66h]
  __int16 v19; // [xsp+Ch] [xbp-64h]
  __int16 v20; // [xsp+Eh] [xbp-62h]
  __int16 v21; // [xsp+10h] [xbp-60h]
  __int16 v22; // [xsp+12h] [xbp-5Eh]
  __int16 v23; // [xsp+14h] [xbp-5Ch]
  __int16 v24; // [xsp+16h] [xbp-5Ah]
  __int16 v25; // [xsp+18h] [xbp-58h]
  __int16 v26; // [xsp+1Ah] [xbp-56h]
  __int16 v27; // [xsp+1Ch] [xbp-54h]
  _WORD v28[12]; // [xsp+20h] [xbp-50h] BYREF
  __int64 v29; // [xsp+38h] [xbp-38h]
  int8x16x2_t v30; // 0:q0.32

  v29 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1[7];
  v28[2] = 0;
  v6 = v5 & 0x7FFF;
  v28[0] = (unsigned int)v5 >> 15;
  v28[1] = v5 & 0x7FFF;
  v28[3] = a1[6];
  v28[4] = a1[5];
  v28[5] = a1[4];
  v28[6] = a1[3];
  v28[7] = a1[2];
  v28[8] = a1[1];
  v7 = *a1;
  v28[10] = 0;
  result = 1;
  v28[9] = v7;
  v9 = a2[7];
  v19 = 0;
  v10 = v9 & 0x7FFF;
  v17 = (unsigned int)v9 >> 15;
  v18 = v9 & 0x7FFF;
  v20 = a2[6];
  v21 = a2[5];
  v22 = a2[4];
  v23 = a2[3];
  v24 = a2[2];
  v25 = a2[1];
  v11 = *a2;
  v27 = 0;
  v26 = v11;
  *(_QWORD *)a3 = 0;
  *(_QWORD *)(a3 + 8) = 0;
  if ( v6 && v10 )
  {
    v13 = sub_B3D24((__int64)v28, (__int64)&v17, a4, a5);
    if ( emdnorm((__int64)&v17, v13 != 0, 0, v6 + v10 - 16382, 112, v30) )
    {
      result = 1;
      v14 = v28[0] == v17;
      if ( v28[0] == v17 )
        v15 = 0;
      else
        v15 = -1;
      v17 = v15;
      v16 = v18;
      if ( !v14 )
        v16 = v18 | 0x8000;
      *(_WORD *)(a3 + 14) = v16;
      *(_WORD *)(a3 + 12) = v20;
      *(_WORD *)(a3 + 10) = v21;
      *(_WORD *)(a3 + 8) = v22;
      *(_WORD *)(a3 + 6) = v23;
      *(_WORD *)(a3 + 4) = v24;
      *(_WORD *)(a3 + 2) = v25;
      *(_WORD *)a3 = v26;
    }
    else
    {
      return 2;
    }
  }
  return result;
}
// B3C8C: variable 'v30' is possibly undefined
