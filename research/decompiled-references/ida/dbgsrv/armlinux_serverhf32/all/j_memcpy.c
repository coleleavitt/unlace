/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: j_memcpy
// Address: 0x000141D4

//----- (000141D4) --------------------------------------------------------
// attributes: thunk
void *j_memcpy(void *dest, const void *src, size_t n)
{
  return memcpy(dest, src, n);
}
