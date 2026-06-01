/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_36DA8
// Address: 0x00036DA8

//----- (00036DA8) --------------------------------------------------------
_DWORD *__fastcall sub_36DA8(_DWORD *a1)
{
  int *v2; // r5

  *a1 = &off_D64AC;
  v2 = a1 + 7;
  if ( a1[7] )
  {
    sub_35D20(v2, 0);
    qfree((void *)*v2);
    a1[9] = 0;
    a1[7] = 0;
  }
  return a1;
}
// D64AC: using guessed type _UNKNOWN *off_D64AC;
