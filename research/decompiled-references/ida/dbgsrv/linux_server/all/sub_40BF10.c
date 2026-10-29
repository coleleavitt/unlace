/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BF10
// Address: 0x000000000040BF10

//----- (000000000040BF10) ----------------------------------------------------
__int64 *sub_40BF10()
{
  __int64 *result; // rax

  if ( !byte_4C7FC0 )
  {
    result = sub_40BEA0();
    byte_4C7FC0 = 1;
  }
  return result;
}
// 4C7FC0: using guessed type char byte_4C7FC0;
