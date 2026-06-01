/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openRT
// Address: 0x0007C690

//----- (0007C690) --------------------------------------------------------
FILE *__fastcall openRT(const char *a1)
{
  FILE *result; // r0
  const char *v3; // r0

  result = sub_7C4F4(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno(1);
    v3 = (const char *)qerrstr(-1);
    sub_1C9E4("Can't open for read file '%s': %s", a1, v3);
  }
  return result;
}
