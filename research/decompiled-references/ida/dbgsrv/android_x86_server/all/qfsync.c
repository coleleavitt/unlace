/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qfsync
// Address: 0x000AF730

//----- (000AF730) --------------------------------------------------------
int __cdecl qfsync(int fd)
{
  int v1; // esi

  v1 = fsync(fd);
  if ( v1 == -1 )
    set_qerrno(1);
  return v1;
}
