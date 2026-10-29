/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43C28
// Address: 0x0000000000043C28

//----- (0000000000043C28) ----------------------------------------------------
bool __fastcall sub_43C28(__int64 a1, const char *a2, __int64 a3)
{
  __int64 (__fastcall **v4)(); // [xsp+0h] [xbp-30h] BYREF
  int v5; // [xsp+8h] [xbp-28h]
  __int64 v6; // [xsp+10h] [xbp-20h]
  __int64 v7; // [xsp+18h] [xbp-18h]

  v7 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a3;
  v5 = 4;
  v4 = off_156700;
  return (unsigned int)sub_5991C(a2, &v4, 0) == 1;
}
// 156700: using guessed type __int64 (__fastcall *off_156700[3])();
