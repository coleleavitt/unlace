/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qtouchfile
// Address: 0x000AFB00

//----- (000AFB00) --------------------------------------------------------
int __cdecl qtouchfile(char *file)
{
  int v1; // esi

  v1 = utime(file, nullptr);
  if ( v1 == -1 )
    set_qerrno(1);
  return v1;
}
