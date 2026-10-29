/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81A00
// Address: 0x00081A00

//----- (00081A00) --------------------------------------------------------
void *__fastcall sub_81A00(void *dest, const void *src, size_t n)
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
