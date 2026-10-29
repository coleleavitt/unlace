/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001E600
// Address: 0x000000014001E600

//----- (000000014001E600) ----------------------------------------------------
void *sub_14001E600()
{
  void *result; // rax

  result = Block;
  if ( !Block )
  {
    result = operator new(0x40u);
    if ( result )
      result = (void *)sub_14001D1E0((__int64)result);
    Block = result;
  }
  return result;
}
