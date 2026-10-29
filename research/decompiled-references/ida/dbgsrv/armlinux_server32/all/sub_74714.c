/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_74714
// Address: 0x00074714

//----- (00074714) --------------------------------------------------------
_DWORD *__fastcall sub_74714(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[5];
  *a1 = &off_D1CE8;
  if ( v2 )
  {
    a1[6] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D1CE8: using guessed type _UNKNOWN *;
