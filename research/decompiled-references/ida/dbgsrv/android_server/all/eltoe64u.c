/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: eltoe64u
// Address: 0x00000000000B4DAC

//----- (00000000000B4DAC) ----------------------------------------------------
__int64 __fastcall eltoe64u(__int64 result, _WORD *a2, int8x16x2_t a3)
{
  __int16 v4; // w9
  __int16 v5; // w10
  __int16 v6; // w11
  __int16 v7; // w12
  __int16 v8; // w13
  __int16 v9; // w14
  __int16 v10; // w15
  __int16 v11; // w8
  _QWORD v12[4]; // [xsp+0h] [xbp-40h] BYREF

  v12[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  memset(v12, 0, 22);
  if ( result )
  {
    WORD1(v12[1]) = result;
    WORD2(v12[0]) = HIWORD(result);
    HIWORD(v12[0]) = WORD2(result);
    LOWORD(v12[1]) = WORD1(result);
    result = sub_B3274((__int64)v12, a3);
    v4 = HIWORD(v12[0]);
    v5 = v12[1];
    v6 = WORD1(v12[1]);
    v7 = WORD2(v12[1]);
    v8 = HIWORD(v12[1]);
    v9 = v12[2];
    v10 = WORD1(v12[2]);
    v11 = 16430 - result;
    WORD1(v12[0]) = 16430 - result;
    if ( LOWORD(v12[0]) )
      v11 |= 0x8000u;
  }
  else
  {
    v11 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
  }
  a2[7] = v11;
  a2[6] = v4;
  a2[5] = v5;
  a2[4] = v6;
  a2[3] = v7;
  a2[2] = v8;
  a2[1] = v9;
  *a2 = v10;
  return result;
}
