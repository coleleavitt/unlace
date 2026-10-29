/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtmpfile
// Address: 0x00000000000BD640

//----- (00000000000BD640) ----------------------------------------------------
FILE *qtmpfile()
{
  FILE *v0; // x19

  v0 = tmpfile();
  if ( !v0 )
    set_qerrno(1u);
  return v0;
}
