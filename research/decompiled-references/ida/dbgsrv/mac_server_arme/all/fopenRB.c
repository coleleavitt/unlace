/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x000000010007264C

//----- (000000010007264C) ----------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *result; // x0

  result = sub_100072558(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
