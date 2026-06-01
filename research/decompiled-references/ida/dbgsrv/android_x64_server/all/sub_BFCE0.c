/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_BFCE0
// Address: 0x00000000000BFCE0

//----- (00000000000BFCE0) ----------------------------------------------------
FILE *__fastcall sub_BFCE0(const char *a1)
{
  FILE *result; // rax
  const char *v2; // rax

  result = sub_BFA30(a1, "wte", 1);
  if ( !result )
  {
    set_qerrno(1u);
    v2 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("Cannot open file '%s' for modification: %s", a1, v2);
  }
  return result;
}
