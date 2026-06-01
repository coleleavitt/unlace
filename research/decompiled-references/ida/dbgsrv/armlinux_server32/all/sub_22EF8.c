/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22EF8
// Address: 0x00022EF8

//----- (00022EF8) --------------------------------------------------------
_DWORD *__fastcall sub_22EF8(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[7];
  *a1 = &off_D05F0;
  if ( v2 )
  {
    a1[8] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D05F0: using guessed type _UNKNOWN *;
