/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A50
// Address: 0x00057A50

//----- (00057A50) --------------------------------------------------------
_DWORD *__fastcall sub_57A50(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[2];
  *a1 = &off_D0F34;
  if ( v2 )
  {
    a1[3] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D0F34: using guessed type _UNKNOWN *off_D0F34;
