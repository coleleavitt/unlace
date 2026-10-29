/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_write
// Address: 0x000847B0

//----- (000847B0) --------------------------------------------------------
ssize_t __fastcall qpipe_write(int a1, const void *a2, size_t a3)
{
  return write(a1, a2, a3);
}
