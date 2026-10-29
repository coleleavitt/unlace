/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D0330
// Address: 0x080D0330

//----- (080D0330) --------------------------------------------------------
__suseconds_t sub_80D0330()
{
  __suseconds_t result; // eax
  struct timeval tv; // [esp+0h] [ebp-18h] BYREF
  unsigned int v2; // [esp+8h] [ebp-10h]

  v2 = __readgsdword(0x14u);
  gettimeofday(&tv, nullptr);
  result = tv.tv_usec;
  if ( v2 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
