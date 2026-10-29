/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57A9C
// Address: 0x00057A9C

//----- (00057A9C) --------------------------------------------------------
_DWORD *__fastcall sub_57A9C(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[1];
  *a1 = &off_D0E60;
  if ( v2 )
  {
    a1[2] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D0E60: using guessed type _UNKNOWN *;
