/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57950
// Address: 0x00057950

//----- (00057950) --------------------------------------------------------
_DWORD *__fastcall sub_57950(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[2];
  *ptr = &off_CFF34;
  if ( v2 )
  {
    ptr[3] = 0;
    sub_77E08(v2);
  }
  sub_8121C(ptr);
  return ptr;
}
// CFF34: using guessed type _UNKNOWN *off_CFF34;
