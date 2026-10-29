/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpfile
// Address: 0x00000000000C22C0

//----- (00000000000C22C0) ----------------------------------------------------
FILE *qtmpfile()
{
  FILE *v0; // rbx

  v0 = tmpfile();
  if ( !v0 )
    set_qerrno(1u);
  return v0;
}
