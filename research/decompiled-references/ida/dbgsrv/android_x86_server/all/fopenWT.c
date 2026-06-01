/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWT
// Address: 0x000AD020

//----- (000AD020) --------------------------------------------------------
FILE *__cdecl fopenWT(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "wte", 1);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
