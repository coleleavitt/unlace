/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlocaltime
// Address: 0x000000010007000C

//----- (000000010007000C) ----------------------------------------------------
bool __fastcall qlocaltime(tm *a1, time_t a2)
{
  time_t v3; // [xsp+0h] [xbp-10h] BYREF

  v3 = a2;
  return (a2 & 0x8000000000000000LL) == 0 && localtime_r(&v3, a1) != nullptr;
}
