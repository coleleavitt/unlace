/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BEEAC
// Address: 0x00000000000BEEAC

//----- (00000000000BEEAC) ----------------------------------------------------
__time_t sub_BEEAC()
{
  struct timespec tp; // [xsp+8h] [xbp-28h] BYREF
  __int64 v2; // [xsp+18h] [xbp-18h]

  v2 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( clock_gettime(0, &tp) != -1 )
    return tp.tv_nsec + 1000000000 * tp.tv_sec;
  if ( !under_debugger )
    interr(10);
  __break(1u);
  return qtime64();
}
// 168DF0: using guessed type char under_debugger;
