/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57D44
// Address: 0x00057D44

//----- (00057D44) --------------------------------------------------------
_DWORD *__fastcall sub_57D44(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[7];
  *ptr = &off_CFFA8;
  if ( v2 )
  {
    ptr[8] = 0;
    sub_77E08(v2);
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    sub_77E08(v3);
  }
  sub_8121C(ptr);
  return ptr;
}
// CFFA8: using guessed type _UNKNOWN *off_CFFA8;
