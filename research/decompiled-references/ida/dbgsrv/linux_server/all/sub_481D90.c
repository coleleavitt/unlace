/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481D90
// Address: 0x0000000000481D90

//----- (0000000000481D90) ----------------------------------------------------
__syscall_slong_t sub_481D90()
{
  struct timespec v1; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v2; // [rsp+18h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  if ( clock_gettime(0, &v1) == -1 )
  {
    if ( !byte_4C94E1 )
      sub_481AC0(10);
    BUG();
  }
  return v1.tv_nsec + 1000000000 * v1.tv_sec;
}
// 4C94E1: using guessed type char byte_4C94E1;
