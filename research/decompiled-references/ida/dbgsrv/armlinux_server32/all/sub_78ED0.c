/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78ED0
// Address: 0x00078ED0

//----- (00078ED0) --------------------------------------------------------
bool __fastcall sub_78ED0(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
