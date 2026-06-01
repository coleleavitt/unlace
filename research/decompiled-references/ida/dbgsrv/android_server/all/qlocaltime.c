/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlocaltime
// Address: 0x00000000000BF190

//----- (00000000000BF190) ----------------------------------------------------
bool __fastcall qlocaltime(struct tm *tp, time_t a2)
{
  time_t v3; // [xsp+0h] [xbp-20h] BYREF
  __int64 v4; // [xsp+8h] [xbp-18h]

  v4 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v3 = a2;
  return (a2 & 0x8000000000000000LL) == 0 && localtime_r(&v3, tp) != nullptr;
}
