/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x0007C5EC

//----- (0007C5EC) --------------------------------------------------------
FILE *__fastcall fopenRT(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
