/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read
// Address: 0x000BA280

//----- (000BA280) --------------------------------------------------------
ssize_t __cdecl qpipe_read(int fd, void *buf, size_t nbytes)
{
  return read(fd, buf, nbytes);
}
