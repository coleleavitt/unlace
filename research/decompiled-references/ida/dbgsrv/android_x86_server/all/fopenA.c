/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenA
// Address: 0x000ACEE0

//----- (000ACEE0) --------------------------------------------------------
FILE *__cdecl fopenA(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "ae", 8);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
