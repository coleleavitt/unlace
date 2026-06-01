/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eldexp
// Address: 0x00000000000B3A6C

//----- (00000000000B3A6C) ----------------------------------------------------
__int64 __fastcall eldexp(_WORD *a1, int a2, _WORD *a3, int8x16x2_t a4)
{
  __int16 v5; // w8
  unsigned int v6; // w9
  int v7; // w8
  __int16 v8; // w8
  __int64 result; // x0
  __int16 v10; // [xsp+0h] [xbp-40h] BYREF
  __int16 v11; // [xsp+2h] [xbp-3Eh]
  __int16 v12; // [xsp+4h] [xbp-3Ch]
  __int16 v13; // [xsp+6h] [xbp-3Ah]
  __int16 v14; // [xsp+8h] [xbp-38h]
  __int16 v15; // [xsp+Ah] [xbp-36h]
  __int16 v16; // [xsp+Ch] [xbp-34h]
  __int16 v17; // [xsp+Eh] [xbp-32h]
  __int16 v18; // [xsp+10h] [xbp-30h]
  __int16 v19; // [xsp+12h] [xbp-2Eh]
  __int16 v20; // [xsp+14h] [xbp-2Ch]
  __int64 v21; // [xsp+18h] [xbp-28h]

  v21 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v5 = a1[7];
  v12 = 0;
  v6 = v5;
  v7 = v5 & 0x7FFF;
  v10 = v6 >> 15;
  v11 = v7;
  v13 = a1[6];
  v14 = a1[5];
  v15 = a1[4];
  v16 = a1[3];
  v17 = a1[2];
  v18 = a1[1];
  LOWORD(v6) = *a1;
  v20 = 0;
  v19 = v6;
  if ( emdnorm((__int64)&v10, 0, 0, v7 + a2, 112, a4) )
  {
    v8 = v11;
    result = 1;
    if ( v10 )
      v8 = v11 | 0x8000;
    a3[7] = v8;
    a3[6] = v13;
    a3[5] = v14;
    a3[4] = v15;
    a3[3] = v16;
    a3[2] = v17;
    a3[1] = v18;
    *a3 = v19;
  }
  else
  {
    *(_QWORD *)a3 = 0;
    *((_QWORD *)a3 + 1) = 0;
    return 2;
  }
  return result;
}
