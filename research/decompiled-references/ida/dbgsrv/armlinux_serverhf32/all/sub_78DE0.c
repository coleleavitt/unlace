/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78DE0
// Address: 0x00078DE0

//----- (00078DE0) --------------------------------------------------------
__suseconds_t sub_78DE0()
{
  struct timeval tv; // [sp+4h] [bp-10h] BYREF

  gettimeofday(&tv, nullptr);
  return tv.tv_usec;
}
