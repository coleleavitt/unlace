/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_nsec_stamp
// Address: 0x00000000000BEE34

//----- (00000000000BEE34) ----------------------------------------------------
__syscall_slong_t get_nsec_stamp()
{
  __syscall_slong_t result; // x0
  struct timespec tp; // [xsp+8h] [xbp-28h] BYREF
  __int64 v2; // [xsp+18h] [xbp-18h]

  v2 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = clock_gettime(0, &tp);
  if ( (_DWORD)result != -1 )
    return tp.tv_nsec + 1000000000 * tp.tv_sec;
  if ( !under_debugger )
    interr(10);
  __break(1u);
  return result;
}
// 168DF0: using guessed type char under_debugger;
