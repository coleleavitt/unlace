/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtime64
// Address: 0x000000010006FE88

//----- (000000010006FE88) ----------------------------------------------------
__darwin_time_t qtime64()
{
  timeval v1; // [xsp+8h] [xbp-18h] BYREF

  gettimeofday(&v1, nullptr);
  return v1.tv_usec | (v1.tv_sec << 32);
}
