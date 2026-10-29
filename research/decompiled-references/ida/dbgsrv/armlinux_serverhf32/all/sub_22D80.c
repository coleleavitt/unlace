/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22D80
// Address: 0x00022D80

//----- (00022D80) --------------------------------------------------------
_DWORD *__fastcall sub_22D80(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[7];
  *ptr = &off_CF5F0;
  if ( v2 )
  {
    ptr[8] = 0;
    sub_77E08(v2);
  }
  sub_8121C(ptr);
  return ptr;
}
// CF5F0: using guessed type _UNKNOWN *off_CF5F0;
