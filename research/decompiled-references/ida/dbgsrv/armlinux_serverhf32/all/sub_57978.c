/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57978
// Address: 0x00057978

//----- (00057978) --------------------------------------------------------
_DWORD *__fastcall sub_57978(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[1];
  *ptr = &off_CFE60;
  if ( v2 )
  {
    ptr[2] = 0;
    sub_77E08(v2);
  }
  sub_8121C(ptr);
  return ptr;
}
// CFE60: using guessed type _UNKNOWN *off_CFE60;
