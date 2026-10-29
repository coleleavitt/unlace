/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DEE0
// Address: 0x000000000048DEE0

//----- (000000000048DEE0) ----------------------------------------------------
FILE *__fastcall sub_48DEE0(const char *a1)
{
  FILE *result; // x0
  const char *v3; // x0

  result = sub_48DDA0(a1);
  if ( !result )
  {
    v3 = (const char *)sub_487060(-1);
    sub_40A608("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
