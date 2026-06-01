/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DDA0
// Address: 0x000000000048DDA0

//----- (000000000048DDA0) ----------------------------------------------------
FILE *__fastcall sub_48DDA0(const char *a1)
{
  FILE *result; // x0

  result = sub_48DBF8(a1, "rbe", 8);
  if ( !result )
  {
    sub_4869C8(1);
    return nullptr;
  }
  return result;
}
