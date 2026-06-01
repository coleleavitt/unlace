/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qdup
// Address: 0x000AF6F0

//----- (000AF6F0) --------------------------------------------------------
int __cdecl qdup(int fd)
{
  int v1; // esi

  v1 = dup(fd);
  if ( v1 == -1 )
    set_qerrno(1);
  return v1;
}
