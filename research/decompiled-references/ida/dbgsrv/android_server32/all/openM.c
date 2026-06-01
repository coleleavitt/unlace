/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openM
// Address: 0x0007C6C8

//----- (0007C6C8) --------------------------------------------------------
FILE *__fastcall openM(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_7C4F4(a1, "rb+e", 1);
  if ( !result )
  {
    set_qerrno(1);
    v3 = (const char *)qerrstr(-1);
    sub_1C9E4("Cannot open file '%s' for modification: %s", a1, v3);
  }
  return result;
}
