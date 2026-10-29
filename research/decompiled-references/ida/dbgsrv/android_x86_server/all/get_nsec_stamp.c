/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_nsec_stamp
// Address: 0x000B1920

//----- (000B1920) --------------------------------------------------------
__int64 get_nsec_stamp()
{
  __int64 v0; // rax
  struct timespec tp; // [esp+10h] [ebp-18h] BYREF
  unsigned int v3; // [esp+1Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  if ( clock_gettime(0, &tp) == -1 )
  {
    if ( !(_BYTE)under_debugger )
      interr(10);
    BUG();
  }
  LODWORD(v0) = 1000000000 * tp.tv_sec;
  HIDWORD(v0) = tp.tv_nsec >> 31;
  return __PAIR64__((unsigned __int64)(1000000000LL * tp.tv_sec) >> 32, tp.tv_nsec) + v0;
}
// 13E34C: using guessed type int under_debugger;
