/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x00000001000726CC

//----- (00000001000726CC) ----------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // x0

  result = sub_100072558(a1, "wbe", 2);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
