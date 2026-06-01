/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7732C
// Address: 0x0007732C

//----- (0007732C) --------------------------------------------------------
int sub_7732C()
{
  int result; // r0

  result = ftruncate64();
  if ( result )
  {
    sub_70B98(1);
    return -1;
  }
  return result;
}
// 147D0: using guessed type int ftruncate64(void);
