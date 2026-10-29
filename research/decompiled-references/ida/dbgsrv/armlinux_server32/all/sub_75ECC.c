/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75ECC
// Address: 0x00075ECC

//----- (00075ECC) --------------------------------------------------------
FILE *__fastcall sub_75ECC(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75DF4((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_71020(-1);
    sub_17188("Cannot open file '%s' for modification: %s", a1, v3);
  }
  return result;
}
