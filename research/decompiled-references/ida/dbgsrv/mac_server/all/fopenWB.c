/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x000000010007B090

//----- (000000010007B090) ----------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // rax

  result = sub_10007AF30(a1, "wbe", 2);
  if ( !result )
  {
    set_qerrno();
    return nullptr;
  }
  return result;
}
