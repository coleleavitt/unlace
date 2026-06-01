/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_141F0
// Address: 0x000141F0

//----- (000141F0) --------------------------------------------------------
// attributes: thunk
ssize_t __fastcall sub_141F0(int fd, const void *buf, size_t n)
{
  return write(fd, buf, n);
}
