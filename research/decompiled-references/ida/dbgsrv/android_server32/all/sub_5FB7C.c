/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FB7C
// Address: 0x0005FB7C

//----- (0005FB7C) --------------------------------------------------------
_DWORD *__fastcall sub_5FB7C(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_D9FC8;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
    a1[4] = 0;
    a1[2] = 0;
  }
  return a1;
}
// D9FC8: using guessed type _UNKNOWN *off_D9FC8;
