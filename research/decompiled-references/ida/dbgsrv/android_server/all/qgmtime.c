/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgmtime
// Address: 0x00000000000BF134

//----- (00000000000BF134) ----------------------------------------------------
bool __fastcall qgmtime(struct tm *tp, time_t a2)
{
  time_t v3; // [xsp+0h] [xbp-20h] BYREF
  __int64 v4; // [xsp+8h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2;
  return (a2 & 0x8000000000000000LL) == 0 && gmtime_r(&v3, tp) != nullptr;
}
