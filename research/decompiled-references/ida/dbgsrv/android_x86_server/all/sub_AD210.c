/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD210
// Address: 0x000AD210

//----- (000AD210) --------------------------------------------------------
FILE *__cdecl sub_AD210(char *a1)
{
  FILE *result; // eax
  int v2; // eax

  result = sub_ACE00(a1, "wte", 1);
  if ( !result )
  {
    set_qerrno(1);
    v2 = qerrstr(-1);
    sub_1DE10("Cannot open file '%s' for modification: %s", a1, v2);
  }
  return result;
}
