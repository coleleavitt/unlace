/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenRT
// Address: 0x000ACFD0

//----- (000ACFD0) --------------------------------------------------------
FILE *__cdecl fopenRT(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "rte", 8);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
