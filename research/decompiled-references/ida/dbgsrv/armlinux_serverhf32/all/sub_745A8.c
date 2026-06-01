/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_745A8
// Address: 0x000745A8

//----- (000745A8) --------------------------------------------------------
_DWORD *__fastcall sub_745A8(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[5];
  *a1 = &off_D0CE8;
  if ( v2 )
  {
    a1[6] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// D0CE8: using guessed type _UNKNOWN *;
