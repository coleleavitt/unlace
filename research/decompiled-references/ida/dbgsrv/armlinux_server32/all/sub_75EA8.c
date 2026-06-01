/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75EA8
// Address: 0x00075EA8

//----- (00075EA8) --------------------------------------------------------
FILE *__fastcall sub_75EA8(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75E18((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_71020(-1);
    sub_17188("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
