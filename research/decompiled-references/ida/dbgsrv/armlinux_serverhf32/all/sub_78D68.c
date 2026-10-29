/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78D68
// Address: 0x00078D68

//----- (00078D68) --------------------------------------------------------
bool __fastcall sub_78D68(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
