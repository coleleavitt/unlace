/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtime64
// Address: 0x00000000000C3CD0

//----- (00000000000C3CD0) ----------------------------------------------------
__time_t qtime64()
{
  struct timeval v1; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v2; // [rsp+10h] [rbp-8h]

  v2 = __readfsqword(0x28u);
  gettimeofday(&v1, nullptr);
  return (v1.tv_sec << 32) | SLODWORD(v1.tv_usec);
}
