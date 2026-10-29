/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8BF08
// Address: 0x0008BF08

//----- (0008BF08) --------------------------------------------------------
void *__fastcall sub_8BF08(void *dest, const void *src, size_t n)
{
  if ( n == 1 )
  {
    *(_BYTE *)dest = *(_BYTE *)src;
  }
  else if ( n )
  {
    return j_memmove(dest, src, n);
  }
  return dest;
}
