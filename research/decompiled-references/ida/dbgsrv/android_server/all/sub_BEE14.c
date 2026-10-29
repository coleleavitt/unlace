/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEE14
// Address: 0x00000000000BEE14

//----- (00000000000BEE14) ----------------------------------------------------
bool __fastcall sub_BEE14(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
