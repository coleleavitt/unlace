/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B18E0
// Address: 0x000B18E0

//----- (000B18E0) --------------------------------------------------------
bool __cdecl sub_B18E0(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
