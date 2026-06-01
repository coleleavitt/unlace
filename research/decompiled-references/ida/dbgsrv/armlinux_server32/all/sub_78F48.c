/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78F48
// Address: 0x00078F48

//----- (00078F48) --------------------------------------------------------
__suseconds_t sub_78F48()
{
  struct timeval tv; // [sp+4h] [bp-10h] BYREF

  gettimeofday(&tv, nullptr);
  return tv.tv_usec;
}
