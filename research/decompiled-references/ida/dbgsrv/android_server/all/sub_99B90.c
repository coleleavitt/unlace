/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_99B90
// Address: 0x0000000000099B90

//----- (0000000000099B90) ----------------------------------------------------
__int64 __fastcall sub_99B90(unsigned int a1, __int64 a2, char *a3, _OWORD *a4)
{
  __int128 v4; // q0
  __int128 v6; // q0
  _OWORD v7[2]; // [xsp+0h] [xbp-60h] BYREF
  _OWORD v8[2]; // [xsp+20h] [xbp-40h] BYREF
  __int64 v9; // [xsp+48h] [xbp-18h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( a2 && !*(_BYTE *)(a2 + 68) )
  {
    v6 = a4[1];
    v7[0] = *a4;
    v7[1] = v6;
    return sub_A5420(a1, a2, (__int64)a3, v7);
  }
  else
  {
    v4 = a4[1];
    v8[0] = *a4;
    v8[1] = v4;
    return sub_A85A4(a1, a3, v8);
  }
}
