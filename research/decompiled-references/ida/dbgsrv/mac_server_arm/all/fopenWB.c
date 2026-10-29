/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x000000010006D828

//----- (000000010006D828) ----------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // x0

  result = sub_10006D6C0(a1, "wbe", 2);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
