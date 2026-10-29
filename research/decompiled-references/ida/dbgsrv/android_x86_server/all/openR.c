/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openR
// Address: 0x000AD0C0

//----- (000AD0C0) --------------------------------------------------------
FILE *__cdecl openR(char *a1)
{
  FILE *result; // eax
  int v2; // eax

  result = sub_ACE00(a1, "rbe", 8);
  if ( !result )
  {
    set_qerrno(1);
    v2 = qerrstr(-1);
    sub_1DE10("Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
