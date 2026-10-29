/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75D88
// Address: 0x00075D88

//----- (00075D88) --------------------------------------------------------
FILE *__fastcall sub_75D88(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75CD4((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_70EB4(-1);
    sub_16FE4("Cannot open file '%s' for modification: %s", a1, v3);
  }
  return result;
}
