/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openR
// Address: 0x00000000000BFBF0

//----- (00000000000BFBF0) ----------------------------------------------------
FILE *__fastcall openR(const char *a1)
{
  FILE *result; // rax
  const char *v2; // rax

  result = sub_BFA30(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno(1u);
    v2 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3A5C0("Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
