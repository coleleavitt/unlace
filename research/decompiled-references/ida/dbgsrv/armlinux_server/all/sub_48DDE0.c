/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DDE0
// Address: 0x000000000048DDE0

//----- (000000000048DDE0) ----------------------------------------------------
FILE *__fastcall sub_48DDE0(const char *a1)
{
  FILE *result; // x0

  result = sub_48DBF8(a1, "rb+e", 1);
  if ( !result )
  {
    sub_4869C8(1);
    return nullptr;
  }
  return result;
}
