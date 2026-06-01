/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_492630
// Address: 0x0000000000492630

//----- (0000000000492630) ----------------------------------------------------
__syscall_slong_t sub_492630()
{
  struct timespec tp; // [xsp+18h] [xbp-18h] BYREF

  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( under_debugger )
      __break(0x3E8u);
    sub_492270(10);
  }
  return tp.tv_nsec + 1000000000 * tp.tv_sec;
}
// 52451C: using guessed type char under_debugger;
