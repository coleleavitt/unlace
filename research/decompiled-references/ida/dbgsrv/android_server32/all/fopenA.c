/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenA
// Address: 0x0007C580

//----- (0007C580) --------------------------------------------------------
FILE *__fastcall fopenA(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "ae", 8);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
