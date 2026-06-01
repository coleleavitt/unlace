/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3DBD8
// Address: 0x0003DBD8

//----- (0003DBD8) --------------------------------------------------------
_DWORD *__fastcall sub_3DBD8(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    qfree(v2);
    a1[8] = 0;
    a1[6] = 0;
  }
  return a1;
}
