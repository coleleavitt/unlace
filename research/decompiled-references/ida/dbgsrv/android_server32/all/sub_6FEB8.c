/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6FEB8
// Address: 0x0006FEB8

//----- (0006FEB8) --------------------------------------------------------
_DWORD *__fastcall sub_6FEB8(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *a1 = &off_DAA54;
  v2 = a1[22];
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[22] = 0;
  }
  a1[21] = 0;
  v3 = (void *)a1[24];
  if ( v3 )
  {
    a1[25] = 0;
    qfree(v3);
    a1[26] = 0;
    a1[24] = 0;
  }
  v4 = (void *)a1[18];
  if ( v4 )
  {
    a1[19] = 0;
    qfree(v4);
    a1[20] = 0;
    a1[18] = 0;
  }
  v5 = (void *)a1[15];
  if ( v5 )
  {
    a1[16] = 0;
    qfree(v5);
    a1[17] = 0;
    a1[15] = 0;
  }
  return sub_6BBD4(a1);
}
// DAA54: using guessed type _UNKNOWN *off_DAA54;
