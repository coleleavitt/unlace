/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AB108
// Address: 0x00000000000AB108

//----- (00000000000AB108) ----------------------------------------------------
__int64 __fastcall sub_AB108(__int64 a1, __int64 a2, char *a3, _OWORD *a4)
{
  __int128 v6; // q0
  _OWORD v8[2]; // [xsp+0h] [xbp-50h] BYREF
  __int64 v9; // [xsp+28h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) & 1) == 0 )
    return 0;
  v6 = a4[1];
  v8[0] = *a4;
  v8[1] = v6;
  return sub_A8444(a3, v8);
}
