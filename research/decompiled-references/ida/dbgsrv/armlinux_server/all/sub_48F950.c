/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48F950
// Address: 0x000000000048F950

//----- (000000000048F950) ----------------------------------------------------
char *__fastcall sub_48F950(char *a1, size_t a2)
{
  char *result; // x0
  const char *v3; // x0

  result = getcwd(a1, a2);
  if ( !result )
  {
    v3 = (const char *)sub_487060(-1);
    sub_40A608("getcwd: %s", v3);
  }
  return result;
}
