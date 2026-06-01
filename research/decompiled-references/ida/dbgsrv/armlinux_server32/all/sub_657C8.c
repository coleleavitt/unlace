/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_657C8
// Address: 0x000657C8

//----- (000657C8) --------------------------------------------------------
_DWORD *__fastcall sub_657C8(_DWORD *a1)
{
  void *v2; // r0

  *a1 = dword_D2B20;
  sub_66704(a1 + 17);
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D2B20: using guessed type int dword_D2B20[2];
