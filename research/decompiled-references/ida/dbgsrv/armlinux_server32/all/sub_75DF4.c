/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75DF4
// Address: 0x00075DF4

//----- (00075DF4) --------------------------------------------------------
FILE *__fastcall sub_75DF4(int a1)
{
  FILE *result; // r0

  result = sub_75CD8(a1, "rb+e", 1);
  if ( !result )
  {
    sub_70B98(1);
    return nullptr;
  }
  return result;
}
