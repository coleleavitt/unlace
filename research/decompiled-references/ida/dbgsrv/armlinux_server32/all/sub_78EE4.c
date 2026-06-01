/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78EE4
// Address: 0x00078EE4

//----- (00078EE4) --------------------------------------------------------
__int64 sub_78EE4()
{
  struct timespec tp; // [sp+4h] [bp-Ch] BYREF

  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78C64(10);
  }
  return 1000000000LL * tp.tv_sec + tp.tv_nsec;
}
// D6C20: using guessed type char under_debugger;
