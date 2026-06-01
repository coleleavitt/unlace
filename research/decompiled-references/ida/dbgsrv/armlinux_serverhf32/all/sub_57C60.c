/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57C60
// Address: 0x00057C60

//----- (00057C60) --------------------------------------------------------
_DWORD *__fastcall sub_57C60(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[5];
  *ptr = &off_CFF4C;
  if ( v2 )
  {
    ptr[6] = 0;
    sub_77E08(v2);
  }
  v3 = (void *)ptr[2];
  if ( v3 )
  {
    ptr[3] = 0;
    sub_77E08(v3);
  }
  sub_8121C(ptr);
  return ptr;
}
// CFF4C: using guessed type _UNKNOWN *off_CFF4C;
