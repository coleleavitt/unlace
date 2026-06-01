/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7C700
// Address: 0x0007C700

//----- (0007C700) --------------------------------------------------------
FILE *__fastcall sub_7C700(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_7C4F4(a1, "wte", 1);
  if ( !result )
  {
    set_qerrno(1);
    v3 = (const char *)qerrstr(-1);
    sub_1C9E4("Cannot open file '%s' for modification: %s", a1, v3);
  }
  return result;
}
