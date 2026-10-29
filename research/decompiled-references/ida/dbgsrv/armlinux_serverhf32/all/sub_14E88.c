/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14E88
// Address: 0x00014E88

//----- (00014E88) --------------------------------------------------------
char *sub_14E88()
{
  char *result; // r0

  if ( !byte_D3930 )
  {
    result = sub_14E38();
    byte_D3930 = 1;
  }
  return result;
}
// D3930: using guessed type char byte_D3930;
