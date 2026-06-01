/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x000000010006D7EC

//----- (000000010006D7EC) ----------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *result; // x0

  result = sub_10006D6C0(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
