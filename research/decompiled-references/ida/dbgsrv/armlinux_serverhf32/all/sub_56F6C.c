/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56F6C
// Address: 0x00056F6C

//----- (00056F6C) --------------------------------------------------------
_DWORD *__fastcall sub_56F6C(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[15];
  *a1 = &off_CFE08;
  if ( v2 )
  {
    a1[16] = 0;
    sub_77E08(v2);
  }
  sub_65900(a1);
  sub_8121C(a1);
  return a1;
}
// CFE08: using guessed type _UNKNOWN *off_CFE08;
