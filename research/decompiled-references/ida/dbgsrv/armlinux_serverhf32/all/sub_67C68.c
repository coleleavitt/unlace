/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67C68
// Address: 0x00067C68

//----- (00067C68) --------------------------------------------------------
_DWORD *__fastcall sub_67C68(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[8];
  *a1 = &off_D0568;
  if ( v2 )
  {
    a1[9] = 0;
    sub_77E08(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    sub_77E08(v3);
  }
  return a1;
}
// D0568: using guessed type _UNKNOWN *off_D0568;
