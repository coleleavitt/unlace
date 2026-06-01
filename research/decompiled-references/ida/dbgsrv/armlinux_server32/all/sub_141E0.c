/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_141E0
// Address: 0x000141E0

//----- (000141E0) --------------------------------------------------------
// attributes: thunk
ssize_t __fastcall sub_141E0(int fd, void *buf, size_t nbytes)
{
  return read(fd, buf, nbytes);
}
