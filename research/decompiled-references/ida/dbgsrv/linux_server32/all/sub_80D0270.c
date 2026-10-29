/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0270
// Address: 0x080D0270

//----- (080D0270) --------------------------------------------------------
bool __cdecl sub_80D0270(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
