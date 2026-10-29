/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35C74
// Address: 0x00035C74

//----- (00035C74) --------------------------------------------------------
_DWORD *__fastcall sub_35C74(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_D64C0;
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
// D64C0: using guessed type _UNKNOWN *off_D64C0;
