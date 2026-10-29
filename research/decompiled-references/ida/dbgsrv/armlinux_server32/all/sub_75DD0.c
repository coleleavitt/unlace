/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75DD0
// Address: 0x00075DD0

//----- (00075DD0) --------------------------------------------------------
FILE *__fastcall sub_75DD0(int a1)
{
  FILE *result; // r0

  result = sub_75CD8(a1, "rbe", 8);
  if ( !result )
  {
    sub_70B98(1);
    return nullptr;
  }
  return result;
}
