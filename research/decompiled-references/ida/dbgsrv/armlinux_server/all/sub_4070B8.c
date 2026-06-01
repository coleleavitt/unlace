/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4070B8
// Address: 0x00000000004070B8

//----- (00000000004070B8) ----------------------------------------------------
__int64 sub_4070B8()
{
  __int64 result; // x0

  result = (unsigned __int8)byte_522030;
  if ( !byte_522030 )
  {
    sub_407050();
    byte_522030 = 1;
    return 1;
  }
  return result;
}
// 522030: using guessed type char byte_522030;
