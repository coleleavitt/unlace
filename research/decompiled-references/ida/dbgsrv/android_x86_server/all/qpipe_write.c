/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_write
// Address: 0x000BA2B0

//----- (000BA2B0) --------------------------------------------------------
ssize_t __cdecl qpipe_write(int fd, void *buf, size_t n)
{
  return write(fd, buf, n);
}
