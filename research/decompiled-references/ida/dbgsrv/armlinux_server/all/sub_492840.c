/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492840
// Address: 0x0000000000492840

//----- (0000000000492840) ----------------------------------------------------
__int64 __fastcall sub_492840(struct tm *tp, time_t a2)
{
  unsigned int v2; // w2
  time_t timer; // [xsp+10h] [xbp-10h] BYREF

  v2 = 0;
  timer = a2;
  if ( (a2 & 0x8000000000000000LL) == 0 )
    return gmtime_r(&timer, tp) != nullptr;
  return v2;
}
