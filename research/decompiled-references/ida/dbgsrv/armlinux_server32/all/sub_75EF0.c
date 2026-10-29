/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75EF0
// Address: 0x00075EF0

//----- (00075EF0) --------------------------------------------------------
FILE *__fastcall sub_75EF0(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75E3C((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_71020(-1);
    sub_17188("Cannot open file '%s' for modification: %s", a1, v3);
  }
  return result;
}
