/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openRT
// Address: 0x00000000000BFC40

//----- (00000000000BFC40) ----------------------------------------------------
FILE *__fastcall openRT(const char *a1)
{
  FILE *result; // rax
  const char *v2; // rax

  result = sub_BFA30(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno(1u);
    v2 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
