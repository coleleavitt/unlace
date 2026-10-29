/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22F20
// Address: 0x00022F20

//----- (00022F20) --------------------------------------------------------
_DWORD *__fastcall sub_22F20(_DWORD *ptr)
{
  void *v2; // r0

  v2 = (void *)ptr[7];
  *ptr = &off_D05F0;
  if ( v2 )
  {
    ptr[8] = 0;
    sub_77F70(v2);
  }
  sub_808A0(ptr);
  return ptr;
}
// D05F0: using guessed type _UNKNOWN *off_D05F0;
