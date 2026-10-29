/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C3BE0
// Address: 0x00000000000C3BE0

//----- (00000000000C3BE0) ----------------------------------------------------
bool __fastcall sub_C3BE0(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
