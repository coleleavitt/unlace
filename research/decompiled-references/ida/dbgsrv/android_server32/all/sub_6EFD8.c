/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6EFD8
// Address: 0x0006EFD8

//----- (0006EFD8) --------------------------------------------------------
_DWORD *__fastcall sub_6EFD8(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = &off_DA9CC;
  v2 = (void *)a1[8];
  if ( v2 )
  {
    a1[9] = 0;
    qfree(v2);
    a1[10] = 0;
    a1[8] = 0;
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3);
    a1[6] = 0;
    a1[4] = 0;
  }
  return a1;
}
// DA9CC: using guessed type _UNKNOWN *off_DA9CC;
