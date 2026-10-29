/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenM
// Address: 0x0007C5C8

//----- (0007C5C8) --------------------------------------------------------
FILE *__fastcall fopenM(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "rb+e", 1);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
