/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x000000010006D7B0

//----- (000000010006D7B0) ----------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *result; // x0

  result = sub_10006D6C0(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
