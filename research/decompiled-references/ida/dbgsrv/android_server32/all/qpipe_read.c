/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read
// Address: 0x000847A8

//----- (000847A8) --------------------------------------------------------
ssize_t __fastcall qpipe_read(int a1, void *a2, size_t a3)
{
  return read(a1, a2, a3);
}
