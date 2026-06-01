/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1409C
// Address: 0x0001409C

//----- (0001409C) --------------------------------------------------------
// attributes: thunk
ssize_t __fastcall sub_1409C(int fd, const void *buf, size_t n)
{
  return write(fd, buf, n);
}
