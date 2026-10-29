/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtime64
// Address: 0x000B1A50

//----- (000B1A50) --------------------------------------------------------
__suseconds_t qtime64()
{
  struct timeval tv; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v2; // [esp+10h] [ebp-14h]

  v2 = __readgsdword(0x14u);
  gettimeofday(&tv, nullptr);
  return tv.tv_usec;
}
