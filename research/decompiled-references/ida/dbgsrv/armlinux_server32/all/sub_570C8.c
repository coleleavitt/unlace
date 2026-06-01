/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_570C8
// Address: 0x000570C8

//----- (000570C8) --------------------------------------------------------
_DWORD *__fastcall sub_570C8(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[15];
  *a1 = &off_D0E08;
  if ( v2 )
  {
    a1[16] = 0;
    sub_77F70(v2);
  }
  sub_65A80(a1);
  return a1;
}
// D0E08: using guessed type _UNKNOWN *off_D0E08;
