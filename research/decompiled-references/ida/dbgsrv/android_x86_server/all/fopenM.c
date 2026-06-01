/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: fopenM
// Address: 0x000ACF80

//----- (000ACF80) --------------------------------------------------------
FILE *__cdecl fopenM(char *a1)
{
  FILE *v1; // esi

  v1 = sub_ACE00(a1, "rb+e", 1);
  if ( !v1 )
    set_qerrno(1);
  return v1;
}
