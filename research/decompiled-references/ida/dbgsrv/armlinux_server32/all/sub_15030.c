/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_15030
// Address: 0x00015030

//----- (00015030) --------------------------------------------------------
char *sub_15030()
{
  char *result; // r0

  if ( !byte_D4950 )
  {
    result = sub_14FE0();
    byte_D4950 = 1;
  }
  return result;
}
// D4950: using guessed type char byte_D4950;
