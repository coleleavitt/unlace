/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78D7C
// Address: 0x00078D7C

//----- (00078D7C) --------------------------------------------------------
__int64 sub_78D7C()
{
  struct timespec tp; // [sp+4h] [bp-Ch] BYREF

  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( under_debugger )
      __und(0xFFu);
    sub_78AFC(10);
  }
  return 1000000000LL * tp.tv_sec + tp.tv_nsec;
}
// D5C00: using guessed type char under_debugger;
