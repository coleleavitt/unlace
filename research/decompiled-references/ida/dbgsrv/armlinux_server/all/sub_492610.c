/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492610
// Address: 0x0000000000492610

//----- (0000000000492610) ----------------------------------------------------
bool __fastcall sub_492610(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
