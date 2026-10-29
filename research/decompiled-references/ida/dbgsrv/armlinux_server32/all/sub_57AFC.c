/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57AFC
// Address: 0x00057AFC

//----- (00057AFC) --------------------------------------------------------
_DWORD *__fastcall sub_57AFC(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[1];
  *ptr = &off_D0E60;
  if ( v2 )
  {
    ptr[2] = 0;
    sub_77F70(v2);
  }
  sub_808A0(ptr);
  return ptr;
}
// D0E60: using guessed type _UNKNOWN *off_D0E60;
