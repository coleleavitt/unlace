/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qrmdir
// Address: 0x000AF7C0

//----- (000AF7C0) --------------------------------------------------------
int __cdecl qrmdir(char *path)
{
  int v1; // esi

  v1 = rmdir(path);
  if ( v1 == -1 )
    set_qerrno(1);
  return v1;
}
