/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F0E8
// Address: 0x0007F0E8

//----- (0007F0E8) --------------------------------------------------------
bool __fastcall sub_7F0E8(struct timespec *tp)
{
  return clock_gettime(0, tp) != -1;
}
