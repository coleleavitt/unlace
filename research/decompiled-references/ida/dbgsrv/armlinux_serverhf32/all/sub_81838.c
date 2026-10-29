/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_81838
// Address: 0x00081838

//----- (00081838) --------------------------------------------------------
void *__fastcall sub_81838(void *dest, const void *src, size_t n)
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
