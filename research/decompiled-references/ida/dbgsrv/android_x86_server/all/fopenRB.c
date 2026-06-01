/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRB
// Address: 0x000ACF30

//----- (000ACF30) --------------------------------------------------------
FILE *__cdecl fopenRB(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "rbe", 8);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
