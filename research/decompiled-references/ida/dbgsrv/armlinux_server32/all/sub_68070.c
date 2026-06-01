/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_68070
// Address: 0x00068070

//----- (00068070) --------------------------------------------------------
_DWORD *__fastcall sub_68070(_DWORD *ptr)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)ptr[8];
  *ptr = &off_D1568;
  if ( v2 )
  {
    ptr[9] = 0;
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
// D1568: using guessed type _UNKNOWN *off_D1568;
