/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57EC8
// Address: 0x00057EC8

//----- (00057EC8) --------------------------------------------------------
_DWORD *__fastcall sub_57EC8(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[7];
  *ptr = &off_D0FA8;
  if ( v2 )
  {
    ptr[8] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)ptr[4];
  if ( v3 )
  {
    ptr[5] = 0;
    sub_77F70(v3);
  }
  sub_808A0(ptr);
  return ptr;
}
// D0FA8: using guessed type _UNKNOWN *off_D0FA8;
