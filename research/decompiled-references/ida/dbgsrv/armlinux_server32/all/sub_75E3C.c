/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75E3C
// Address: 0x00075E3C

//----- (00075E3C) --------------------------------------------------------
FILE *__fastcall sub_75E3C(int a1)
{
  FILE *result; // r0

  result = sub_75CD8(a1, "wte", 1);
  if ( !result )
  {
    sub_70B98(1);
    return nullptr;
  }
  return result;
}
