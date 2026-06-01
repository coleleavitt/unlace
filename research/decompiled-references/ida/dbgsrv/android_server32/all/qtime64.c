/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtime64
// Address: 0x0007F1C0

//----- (0007F1C0) --------------------------------------------------------
__suseconds_t qtime64()
{
  struct timeval tv; // [sp+4h] [bp-Ch] BYREF

  gettimeofday(&tv, nullptr);
  return tv.tv_usec;
}
