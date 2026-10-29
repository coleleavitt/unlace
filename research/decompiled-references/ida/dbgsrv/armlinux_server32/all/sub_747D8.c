/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_747D8
// Address: 0x000747D8

//----- (000747D8) --------------------------------------------------------
_DWORD *__fastcall sub_747D8(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[5];
  *ptr = &off_D1CE8;
  if ( v2 )
  {
    ptr[6] = 0;
    sub_77F70(v2);
  }
  sub_808A0(ptr);
  return ptr;
}
// D1CE8: using guessed type _UNKNOWN *off_D1CE8;
