/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3088
// Address: 0x00000000000D3088

//----- (00000000000D3088) ----------------------------------------------------
long double __fastcall sub_D3088(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned __int64 a8)
{
  int v9; // w0
  long double result; // q0
  __int128 v11; // q0
  _OWORD v12[3]; // [xsp+10h] [xbp-B0h] BYREF
  long double v13; // [xsp+40h] [xbp-80h]
  __int128 v14; // [xsp+50h] [xbp-70h]
  __int128 v15; // [xsp+60h] [xbp-60h]
  __int128 v16; // [xsp+70h] [xbp-50h]
  __int128 v17; // [xsp+80h] [xbp-40h]
  __int64 v18; // [xsp+90h] [xbp-30h]
  __int64 v19; // [xsp+98h] [xbp-28h]

  v19 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v9 = sub_D2548(a1, (int32x2_t *)v12, nullptr, a3, a4, a5, a6, a7, a8);
  if ( a2 )
  {
    if ( !v9 )
    {
      *(_OWORD *)a2 = v12[0];
      *(_OWORD *)(a2 + 16) = v12[1];
      *(_OWORD *)(a2 + 32) = v12[2];
      *(_OWORD *)(a2 + 64) = v14;
      *(_OWORD *)(a2 + 80) = v15;
      *(_OWORD *)(a2 + 96) = v16;
      v11 = v17;
      *(_QWORD *)(a2 + 128) = v18;
      *(_OWORD *)(a2 + 112) = v11;
      result = v13;
      *(long double *)(a2 + 48) = v13;
    }
  }
  return result;
}
