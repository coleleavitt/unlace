/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75C44
// Address: 0x00075C44

//----- (00075C44) --------------------------------------------------------
FILE *__fastcall sub_75C44(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "ae", 8);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
