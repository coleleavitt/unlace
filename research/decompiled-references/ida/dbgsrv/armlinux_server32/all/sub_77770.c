/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77770
// Address: 0x00077770

//----- (00077770) --------------------------------------------------------
int sub_77770()
{
  int result; // r0

  result = tmpfile64();
  if ( !result )
  {
    sub_70B98(1);
    return 0;
  }
  return result;
}
// 14080: using guessed type int tmpfile64(void);
