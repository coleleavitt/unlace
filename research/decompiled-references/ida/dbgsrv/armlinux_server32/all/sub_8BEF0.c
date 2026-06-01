/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BEF0
// Address: 0x0008BEF0

//----- (0008BEF0) --------------------------------------------------------
void *__fastcall sub_8BEF0(void *dest, const void *src, size_t n)
{
  if ( n == 1 )
  {
    *(_BYTE *)dest = *(_BYTE *)src;
  }
  else if ( n )
  {
    return j_memcpy(dest, src, n);
  }
  return dest;
}
