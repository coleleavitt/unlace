/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_578EC
// Address: 0x000578EC

//----- (000578EC) --------------------------------------------------------
_DWORD *__fastcall sub_578EC(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[7];
  *a1 = &off_CFFA8;
  if ( v2 )
  {
    a1[8] = 0;
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
// CFFA8: using guessed type _UNKNOWN *off_CFFA8;
