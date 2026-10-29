/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75CF8
// Address: 0x00075CF8

//----- (00075CF8) --------------------------------------------------------
FILE *__fastcall sub_75CF8(int a1)
{
  FILE *result; // r0

  result = sub_75B70(a1, "wbe", 2);
  if ( !result )
  {
    sub_70A2C(1);
    return nullptr;
  }
  return result;
}
