/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67DE4
// Address: 0x00067DE4

//----- (00067DE4) --------------------------------------------------------
_DWORD *__fastcall sub_67DE4(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[8];
  *a1 = &off_D1568;
  if ( v2 )
  {
    a1[9] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    sub_77F70(v3);
  }
  return a1;
}
// D1568: using guessed type _UNKNOWN *off_D1568;
