/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: openRT
// Address: 0x000AD130

//----- (000AD130) --------------------------------------------------------
FILE *__cdecl openRT(char *a1)
{
  FILE *result; // eax
  int v2; // eax

  result = sub_ACE00(a1, "rte", 8);
  if ( !result )
  {
    set_qerrno(1);
    v2 = qerrstr(-1);
    sub_1DE10("Can't open for read file '%s': %s", a1, v2);
  }
  return result;
}
