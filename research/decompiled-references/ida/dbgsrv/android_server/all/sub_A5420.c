/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5420
// Address: 0x00000000000A5420

//----- (00000000000A5420) ----------------------------------------------------
__int64 __fastcall sub_A5420(unsigned int a1, __int64 a2, __int64 a3, _OWORD *a4)
{
  __int128 v4; // q0
  _OWORD v6[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v7; // [xsp+28h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = a4[1];
  v6[0] = *a4;
  v6[1] = v4;
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *))(*(_QWORD *)a2 + 32LL))(a2, a1, a3, v6);
}
