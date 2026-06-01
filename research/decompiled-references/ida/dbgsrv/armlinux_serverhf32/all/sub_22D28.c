/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22D28
// Address: 0x00022D28

//----- (00022D28) --------------------------------------------------------
_DWORD *__fastcall sub_22D28(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[7];
  *ptr = &off_CF604;
  if ( v2 )
  {
    ptr[8] = 0;
    sub_77E08(v2);
  }
  sub_8121C(ptr);
  return ptr;
}
// CF604: using guessed type _UNKNOWN *off_CF604;
