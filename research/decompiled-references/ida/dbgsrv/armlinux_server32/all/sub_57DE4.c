/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57DE4
// Address: 0x00057DE4

//----- (00057DE4) --------------------------------------------------------
_DWORD *__fastcall sub_57DE4(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[5];
  *ptr = &off_D0F4C;
  if ( v2 )
  {
    ptr[6] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)ptr[2];
  if ( v3 )
  {
    ptr[3] = 0;
    sub_77F70(v3);
  }
  sub_808A0(ptr);
  return ptr;
}
// D0F4C: using guessed type _UNKNOWN *off_D0F4C;
