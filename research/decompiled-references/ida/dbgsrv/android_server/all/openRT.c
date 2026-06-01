/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openRT
// Address: 0x00000000000BAFA0

//----- (00000000000BAFA0) ----------------------------------------------------
FILE *__fastcall openRT(const char *a1)
{
  FILE *result; // x0
  const char *v3; // x0
  const char *v4; // x0

  result = sub_BAD80(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno(1u);
    v3 = (const char *)qerrstr(0xFFFFFFFFLL);
    sub_3B1DC("Can't open for read file '%s': %s", a1, v3);
    return openM(v4);
  }
  return result;
}
// BAFE5: variable 'v4' is possibly undefined
