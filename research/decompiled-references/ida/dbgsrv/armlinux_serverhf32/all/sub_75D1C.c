/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75D1C
// Address: 0x00075D1C

//----- (00075D1C) --------------------------------------------------------
FILE *__fastcall sub_75D1C(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75C68((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_70EB4(-1);
    sub_16FE4("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
