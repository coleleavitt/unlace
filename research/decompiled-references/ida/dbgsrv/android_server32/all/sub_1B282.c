/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B282
// Address: 0x0001B282

//----- (0001B282) --------------------------------------------------------
_DWORD *__fastcall sub_1B282(_DWORD *a1)
{
  void *v2; // r0

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
