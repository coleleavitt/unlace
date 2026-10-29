/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A70
// Address: 0x00057A70

//----- (00057A70) --------------------------------------------------------
_DWORD *__fastcall sub_57A70(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[7];
  *a1 = &off_D0FA8;
  if ( v2 )
  {
    a1[8] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    sub_77F70(v3);
  }
  return a1;
}
// D0FA8: using guessed type _UNKNOWN *off_D0FA8;
