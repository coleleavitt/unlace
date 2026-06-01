/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenWB
// Address: 0x000AD070

//----- (000AD070) --------------------------------------------------------
FILE *__cdecl fopenWB(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "wbe", 2);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
