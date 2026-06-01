/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWT
// Address: 0x0007C610

//----- (0007C610) --------------------------------------------------------
FILE *__fastcall fopenWT(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "wte", 1);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
