/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22D58
// Address: 0x00022D58

//----- (00022D58) --------------------------------------------------------
_DWORD *__fastcall sub_22D58(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[7];
  *a1 = &off_CF5F0;
  if ( v2 )
  {
    a1[8] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// CF5F0: using guessed type _UNKNOWN *;
