/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vqperror
// Address: 0x00000000000B277C

//----- (00000000000B277C) ----------------------------------------------------
__int64 __fastcall vqperror(char *a1, _OWORD *a2)
{
  __int128 v2; // q0
  const char *v3; // x0
  _OWORD v5[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v6; // [xsp+28h] [xbp-18h]

  v6 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a2[1];
  v5[0] = *a2;
  v5[1] = v2;
  qveprintf(a1, v5);
  v3 = qstrerror(0xFFFFFFFF);
  return sub_B27D8(": %s\n", v3);
}
