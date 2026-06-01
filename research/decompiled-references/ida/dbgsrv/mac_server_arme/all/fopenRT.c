/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x000000010007268C

//----- (000000010007268C) ----------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *result; // x0

  result = sub_100072558(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
