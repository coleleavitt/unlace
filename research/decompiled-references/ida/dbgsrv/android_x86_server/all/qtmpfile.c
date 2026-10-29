/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpfile
// Address: 0x000AFC40

//----- (000AFC40) --------------------------------------------------------
FILE *qtmpfile()
{
  FILE *v0; // esi

  v0 = tmpfile();
  if ( !v0 )
    set_qerrno(1);
  return v0;
}
