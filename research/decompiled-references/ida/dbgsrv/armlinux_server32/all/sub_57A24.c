/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A24
// Address: 0x00057A24

//----- (00057A24) --------------------------------------------------------
_DWORD *__fastcall sub_57A24(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[5];
  *a1 = &off_D0F4C;
  if ( v2 )
  {
    a1[6] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    sub_77F70(v3);
  }
  return a1;
}
// D0F4C: using guessed type _UNKNOWN *off_D0F4C;
