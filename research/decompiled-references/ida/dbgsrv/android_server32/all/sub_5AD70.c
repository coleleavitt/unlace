/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5AD70
// Address: 0x0005AD70

//----- (0005AD70) --------------------------------------------------------
_DWORD *__fastcall sub_5AD70(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = &off_DA9A8;
  v2 = (void *)a1[10];
  if ( v2 )
  {
    a1[11] = 0;
    qfree(v2);
    a1[12] = 0;
    a1[10] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
    a1[4] = 0;
    a1[2] = 0;
  }
  return a1;
}
// DA9A8: using guessed type _UNKNOWN *off_DA9A8;
