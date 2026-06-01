/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22DB0
// Address: 0x00022DB0

//----- (00022DB0) --------------------------------------------------------
_DWORD *__fastcall sub_22DB0(_DWORD *a1)
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
// CF5F0: using guessed type _UNKNOWN *off_CF5F0;
