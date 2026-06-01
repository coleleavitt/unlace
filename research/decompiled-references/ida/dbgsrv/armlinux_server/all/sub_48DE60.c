/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DE60
// Address: 0x000000000048DE60

//----- (000000000048DE60) ----------------------------------------------------
FILE *__fastcall sub_48DE60(const char *a1)
{
  FILE *result; // x0

  result = sub_48DBF8(a1, "wte", 1);
  if ( !result )
  {
    sub_4869C8(1);
    return nullptr;
  }
  return result;
}
