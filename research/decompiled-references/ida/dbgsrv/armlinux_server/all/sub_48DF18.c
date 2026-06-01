/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DF18
// Address: 0x000000000048DF18

//----- (000000000048DF18) ----------------------------------------------------
FILE *__fastcall sub_48DF18(const char *a1)
{
  FILE *result; // x0
  const char *v3; // x0

  result = sub_48DE20(a1);
  if ( !result )
  {
    v3 = (const char *)sub_487060(-1);
    sub_40A608("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
