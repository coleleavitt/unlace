/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openM
// Address: 0x000AD1A0

//----- (000AD1A0) --------------------------------------------------------
FILE *__cdecl openM(char *a1)
{
  FILE *result; // eax
  int v2; // eax

  result = sub_ACE00(a1, "rb+e", 1);
  if ( !result )
  {
    set_qerrno(1);
    v2 = qerrstr(-1);
    sub_1DE10("Cannot open file '%s' for modification: %s", a1, v2);
  }
  return result;
}
