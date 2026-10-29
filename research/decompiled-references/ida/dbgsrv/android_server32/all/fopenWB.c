/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x0007C634

//----- (0007C634) --------------------------------------------------------
FILE *__fastcall fopenWB(const char *a1)
{
  FILE *result; // r0

  result = sub_7C4F4(a1, "wbe", 2);
  if ( !result )
  {
    set_qerrno(1);
    return nullptr;
  }
  return result;
}
