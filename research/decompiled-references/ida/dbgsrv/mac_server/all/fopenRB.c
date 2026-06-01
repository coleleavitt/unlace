/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x000000010007B010

//----- (000000010007B010) ----------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *result; // rax

  result = sub_10007AF30(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
