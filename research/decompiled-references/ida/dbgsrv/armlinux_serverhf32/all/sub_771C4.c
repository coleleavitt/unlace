/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_771C4
// Address: 0x000771C4

//----- (000771C4) --------------------------------------------------------
int sub_771C4()
{
  int result; // r0

  result = ftruncate64();
  if ( result )
  {
    sub_70A2C(1);
    return -1;
  }
  return result;
}
// 14634: using guessed type int ftruncate64(void);
