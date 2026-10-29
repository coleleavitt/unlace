/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qvprintf
// Address: 0x00000000000C6750

//----- (00000000000C6750) ----------------------------------------------------
__int64 __fastcall qvprintf(char *s, _OWORD *a2)
{
  __int128 v2; // q0
  _OWORD v4[2]; // [xsp+0h] [xbp-40h] BYREF
  __int64 v5; // [xsp+28h] [xbp-18h]

  v5 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = a2[1];
  v4[0] = *a2;
  v4[1] = v2;
  return qvfprintf((FILE *)&_sF.__pad1, s, v4);
}
// 169790: using guessed type FILE _sF;
