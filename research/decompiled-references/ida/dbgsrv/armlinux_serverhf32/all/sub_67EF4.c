/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67EF4
// Address: 0x00067EF4

//----- (00067EF4) --------------------------------------------------------
_DWORD *__fastcall sub_67EF4(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[8];
  *ptr = &off_D0568;
  if ( v2 )
  {
    ptr[9] = 0;
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
// D0568: using guessed type _UNKNOWN *off_D0568;
