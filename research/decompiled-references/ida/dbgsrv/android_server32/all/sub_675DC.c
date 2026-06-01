/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_675DC
// Address: 0x000675DC

//----- (000675DC) --------------------------------------------------------
_DWORD *__fastcall sub_675DC(_DWORD *a1)
{
  void *v2; // r0

  *a1 = &off_DA324;
  v2 = (void *)a1[15];
  if ( v2 )
  {
    a1[16] = 0;
    qfree(v2);
    a1[17] = 0;
    a1[15] = 0;
  }
  return sub_6BBD4(a1);
}
// DA324: using guessed type _UNKNOWN *off_DA324;
