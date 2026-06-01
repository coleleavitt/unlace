/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F160
// Address: 0x0007F160

//----- (0007F160) --------------------------------------------------------
__int64 sub_7F160()
{
  __int64 v0; // r0
  struct timespec tp; // [sp+4h] [bp-Ch] BYREF

  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( !under_debugger )
      interr(10);
    __debugbreak();
  }
  LODWORD(v0) = 1000000000 * tp.tv_sec;
  HIDWORD(v0) = tp.tv_nsec >> 31;
  return v0 + __PAIR64__((unsigned __int64)(1000000000LL * tp.tv_sec) >> 32, tp.tv_nsec);
}
// E0550: using guessed type char under_debugger;
