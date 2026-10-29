/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5FBD8
// Address: 0x0005FBD8

//----- (0005FBD8) --------------------------------------------------------
_DWORD *__fastcall sub_5FBD8(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = &off_D9FE0;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
    a1[7] = 0;
    a1[5] = 0;
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
// D9FE0: using guessed type _UNKNOWN *off_D9FE0;
