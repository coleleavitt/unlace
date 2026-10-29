/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4927E0
// Address: 0x00000000004927E0

//----- (00000000004927E0) ----------------------------------------------------
__int64 __fastcall sub_4927E0(struct tm *tp, time_t a2)
{
  unsigned int v2; // w2
  time_t timer; // [xsp+10h] [xbp-10h] BYREF

  v2 = 0;
  timer = a2;
  if ( (a2 & 0x8000000000000000LL) == 0 )
    return localtime_r(&timer, tp) != nullptr;
  return v2;
}
