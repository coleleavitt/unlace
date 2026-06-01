/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59E78
// Address: 0x00059E78

//----- (00059E78) --------------------------------------------------------
_DWORD *__fastcall sub_59E78(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_DA024;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
    a1[3] = 0;
    a1[1] = 0;
  }
  return a1;
}
// DA024: using guessed type _UNKNOWN *off_DA024;
