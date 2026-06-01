/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48DD60
// Address: 0x000000000048DD60

//----- (000000000048DD60) ----------------------------------------------------
FILE *__fastcall sub_48DD60(const char *a1)
{
  FILE *result; // x0

  result = sub_48DBF8(a1, "ae", 8);
  if ( !result )
  {
    sub_4869C8(1);
    return nullptr;
  }
  return result;
}
