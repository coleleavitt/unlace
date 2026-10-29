/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43E0A8
// Address: 0x000000000043E0A8

//----- (000000000043E0A8) ----------------------------------------------------
const char **__fastcall sub_43E0A8(char *a1)
{
  const char **result; // x0

  if ( !a1 )
    return nullptr;
  result = sub_43C678(a1);
  if ( result )
  {
    if ( !result[1] )
      return nullptr;
  }
  return result;
}
