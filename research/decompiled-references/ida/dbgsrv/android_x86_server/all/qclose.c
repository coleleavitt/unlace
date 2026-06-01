/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qclose
// Address: 0x000AF3F0

//----- (000AF3F0) --------------------------------------------------------
int __cdecl qclose(int fd)
{
  int v1; // esi

  v1 = close(fd);
  if ( v1 == -1 )
    set_qerrno(1);
  return v1;
}
