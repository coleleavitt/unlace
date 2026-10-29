/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_31558
// Address: 0x00031558

//----- (00031558) --------------------------------------------------------
_DWORD *__fastcall sub_31558(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_D64D4;
  v2 = (void *)a1[7];
  if ( v2 )
  {
    a1[8] = 0;
    qfree(v2);
    a1[9] = 0;
    a1[7] = 0;
  }
  return a1;
}
// D64D4: using guessed type _UNKNOWN *off_D64D4;
