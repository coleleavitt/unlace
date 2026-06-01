/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59E34
// Address: 0x00059E34

//----- (00059E34) --------------------------------------------------------
_DWORD *__fastcall sub_59E34(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  *a1 = &off_DA038;
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
    a1[9] = 0;
    a1[7] = 0;
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
// DA038: using guessed type _UNKNOWN *off_DA038;
