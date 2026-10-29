/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openM
// Address: 0x00000000000BFC90

//----- (00000000000BFC90) ----------------------------------------------------
FILE *__fastcall openM(const char *a1)
{
  FILE *result; // rax
  const char *v2; // rax

  result = sub_BFA30(a1, "rb+e", 1);
  if ( !result )
  {
    set_qerrno(1u);
    v2 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("Cannot open file '%s' for modification: %s", a1, v2);
  }
  return result;
}
