/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8718
// Address: 0x00000000000B8718

//----- (00000000000B8718) ----------------------------------------------------
__int64 __fastcall sub_B8718(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD, __int64, __int64, _QWORD, _BYTE *),
        __int64 a3)
{
  int v6; // w0
  __int64 v7; // x22
  int32x2_t v9[3]; // [xsp+0h] [xbp-1D0h] BYREF
  unsigned int v10; // [xsp+18h] [xbp-1B8h]
  __int64 v11; // [xsp+30h] [xbp-1A0h]
  __int64 v12; // [xsp+38h] [xbp-198h]
  unsigned int v13; // [xsp+68h] [xbp-168h]
  _BYTE v14[256]; // [xsp+88h] [xbp-148h] BYREF
  __int64 v15; // [xsp+188h] [xbp-48h]

  v15 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = sub_D2510(a1, v9, (__int64)v14, 0x100u, 0, 0, 0, 0);
  if ( !v6 )
  {
    v6 = sub_D3C8C(a1);
    if ( !v6 )
    {
      v7 = sub_D3CBC(a1);
      sub_D2444(a1);
      v6 = a2(a3, v7, v10, v11, v12, v13, v14);
    }
  }
  if ( v6 < 0 )
    return (unsigned int)-v6;
  else
    return 0;
}
