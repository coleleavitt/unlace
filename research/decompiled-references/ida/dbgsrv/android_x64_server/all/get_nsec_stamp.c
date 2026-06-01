/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_nsec_stamp
// Address: 0x00000000000C3C00

//----- (00000000000C3C00) ----------------------------------------------------
__syscall_slong_t get_nsec_stamp()
{
  struct timespec v1; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+10h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  if ( clock_gettime(0, &v1) == -1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(10);
    BUG();
  }
  return v1.tv_nsec + 1000000000 * v1.tv_sec;
}
// 158B40: using guessed type __int64 under_debugger;
