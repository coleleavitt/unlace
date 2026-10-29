/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_819E8
// Address: 0x000819E8

//----- (000819E8) --------------------------------------------------------
void *__fastcall sub_819E8(void *dest, const void *src, size_t n)
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
