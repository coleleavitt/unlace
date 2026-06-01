/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qwrite
// Address: 0x000AF5F0

//----- (000AF5F0) --------------------------------------------------------
ssize_t __cdecl qwrite(int fd, void *buf, size_t n)
{
  ssize_t v3; // eax
  ssize_t v4; // esi

  v3 = write(fd, buf, n);
  v4 = v3;
  if ( v3 != n )
    set_qerrno(2 - (v3 == -1));
  return v4;
}
