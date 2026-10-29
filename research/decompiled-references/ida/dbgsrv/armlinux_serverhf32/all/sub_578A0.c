/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_578A0
// Address: 0x000578A0

//----- (000578A0) --------------------------------------------------------
_DWORD *__fastcall sub_578A0(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[5];
  *a1 = &off_CFF4C;
  if ( v2 )
  {
    a1[6] = 0;
    sub_77E08(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    sub_77E08(v3);
  }
  return a1;
}
// CFF4C: using guessed type _UNKNOWN *off_CFF4C;
