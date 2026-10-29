/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56F44
// Address: 0x00056F44

//----- (00056F44) --------------------------------------------------------
_DWORD *__fastcall sub_56F44(_DWORD *a1)
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
  return a1;
}
// CFE08: using guessed type _UNKNOWN *off_CFE08;
