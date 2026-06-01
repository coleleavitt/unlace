/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FB3E
// Address: 0x0006FB3E

//----- (0006FB3E) --------------------------------------------------------
_DWORD *__fastcall sub_6FB3E(_DWORD *a1)
{
  void *v2; // r0

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
