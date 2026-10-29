/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75D40
// Address: 0x00075D40

//----- (00075D40) --------------------------------------------------------
FILE *__fastcall sub_75D40(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75CB0((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_70EB4(-1);
    sub_16FE4("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
