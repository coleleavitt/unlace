/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4926B8
// Address: 0x00000000004926B8

//----- (00000000004926B8) ----------------------------------------------------
__time_t sub_4926B8()
{
  struct timeval tv; // [xsp+18h] [xbp-18h] BYREF

  gettimeofday(&tv, nullptr);
  return SLODWORD(tv.tv_usec) | (tv.tv_sec << 32);
}
