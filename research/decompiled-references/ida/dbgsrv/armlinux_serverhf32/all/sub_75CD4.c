/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75CD4
// Address: 0x00075CD4

//----- (00075CD4) --------------------------------------------------------
FILE *__fastcall sub_75CD4(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "wte", 1);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
