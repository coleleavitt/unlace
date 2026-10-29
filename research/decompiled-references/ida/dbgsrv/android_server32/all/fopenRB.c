/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x0007C5A4

//----- (0007C5A4) --------------------------------------------------------
FILE *__fastcall fopenRB(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
