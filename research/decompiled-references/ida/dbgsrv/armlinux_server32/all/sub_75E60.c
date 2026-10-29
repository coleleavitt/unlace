/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75E60
// Address: 0x00075E60

//----- (00075E60) --------------------------------------------------------
FILE *__fastcall sub_75E60(int a1)
{
  FILE *result; // r0

  result = sub_75CD8(a1, "wbe", 2);
  if ( !result )
  {
    sub_70B98(1);
    return nullptr;
  }
  return result;
}
