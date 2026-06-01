/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_75E84
// Address: 0x00075E84

//----- (00075E84) --------------------------------------------------------
FILE *__fastcall sub_75E84(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_75DD0((int)a1);
  if ( !result )
  {
    v3 = (const char *)sub_71020(-1);
    sub_17188("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
