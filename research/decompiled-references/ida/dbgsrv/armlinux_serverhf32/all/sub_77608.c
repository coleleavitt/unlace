/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77608
// Address: 0x00077608

//----- (00077608) --------------------------------------------------------
int sub_77608()
{
  int result; // r0

  result = tmpfile64();
  if ( !result )
  {
    sub_70A2C(1);
    return 0;
  }
  return result;
}
// 13F2C: using guessed type int tmpfile64(void);
