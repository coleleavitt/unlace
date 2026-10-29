/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6B6D4
// Address: 0x0006B6D4

//----- (0006B6D4) --------------------------------------------------------
_DWORD *__fastcall sub_6B6D4(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_DA8B0;
  sub_6C74E(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
    a1[20] = 0;
    a1[18] = 0;
  }
  return a1;
}
// DA8B0: using guessed type _UNKNOWN *off_DA8B0;
