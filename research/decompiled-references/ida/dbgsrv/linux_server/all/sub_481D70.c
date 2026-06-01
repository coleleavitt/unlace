/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481D70
// Address: 0x0000000000481D70

//----- (0000000000481D70) ----------------------------------------------------
bool __fastcall sub_481D70(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
