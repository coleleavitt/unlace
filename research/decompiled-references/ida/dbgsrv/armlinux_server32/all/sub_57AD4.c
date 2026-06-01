/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57AD4
// Address: 0x00057AD4

//----- (00057AD4) --------------------------------------------------------
_DWORD *__fastcall sub_57AD4(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[2];
  *ptr = &off_D0F34;
  if ( v2 )
  {
    ptr[3] = 0;
    sub_77F70(v2);
  }
  sub_808A0(ptr);
  return ptr;
}
// D0F34: using guessed type _UNKNOWN *off_D0F34;
