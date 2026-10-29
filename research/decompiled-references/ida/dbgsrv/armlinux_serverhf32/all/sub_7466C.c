/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7466C
// Address: 0x0007466C

//----- (0007466C) --------------------------------------------------------
_DWORD *__fastcall sub_7466C(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[5];
  *ptr = &off_D0CE8;
  if ( v2 )
  {
    ptr[6] = 0;
    sub_77E08(v2);
  }
  sub_8121C(ptr);
  return ptr;
}
// D0CE8: using guessed type _UNKNOWN *off_D0CE8;
