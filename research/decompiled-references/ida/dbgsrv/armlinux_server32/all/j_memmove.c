/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_memmove
// Address: 0x00014624

//----- (00014624) --------------------------------------------------------
// attributes: thunk
void *j_memmove(void *dest, const void *src, size_t n)
{
  return memmove(dest, src, n);
}
