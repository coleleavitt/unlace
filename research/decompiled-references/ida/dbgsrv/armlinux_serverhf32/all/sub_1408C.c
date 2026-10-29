/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1408C
// Address: 0x0001408C

//----- (0001408C) --------------------------------------------------------
// attributes: thunk
ssize_t __fastcall sub_1408C(int fd, void *buf, size_t nbytes)
{
  return read(fd, buf, nbytes);
}
