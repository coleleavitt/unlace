/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_578CC
// Address: 0x000578CC

//----- (000578CC) --------------------------------------------------------
_DWORD *__fastcall sub_578CC(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[2];
  *a1 = &off_CFF34;
  if ( v2 )
  {
    a1[3] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// CFF34: using guessed type _UNKNOWN *off_CFF34;
