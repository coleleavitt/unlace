/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x000000010007B050

//----- (000000010007B050) ----------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *result; // rax

  result = sub_10007AF30(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
