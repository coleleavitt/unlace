/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57918
// Address: 0x00057918

//----- (00057918) --------------------------------------------------------
_DWORD *__fastcall sub_57918(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[1];
  *a1 = &off_CFE60;
  if ( v2 )
  {
    a1[2] = 0;
    sub_77E08(v2);
  }
  return a1;
}
// CFE60: using guessed type _UNKNOWN *;
