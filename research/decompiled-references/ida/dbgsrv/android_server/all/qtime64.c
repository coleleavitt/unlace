/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtime64
// Address: 0x00000000000BEF20

//----- (00000000000BEF20) ----------------------------------------------------
__time_t qtime64()
{
  struct timeval tv; // [xsp+8h] [xbp-28h] BYREF
  __int64 v2; // [xsp+18h] [xbp-18h]

  v2 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  gettimeofday(&tv, nullptr);
  return SLODWORD(tv.tv_usec) | (tv.tv_sec << 32);
}
