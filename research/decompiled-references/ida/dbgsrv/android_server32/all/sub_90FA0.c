/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_90FA0
// Address: 0x00090FA0

//----- (00090FA0) --------------------------------------------------------
int *__fastcall sub_90FA0(size_t a1)
{
  int *result; // r0

  result = (int *)malloc(a1);
  if ( !result )
    return sub_90FB8(a1);
  return result;
}
