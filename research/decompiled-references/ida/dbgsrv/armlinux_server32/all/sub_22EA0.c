/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_22EA0
// Address: 0x00022EA0

//----- (00022EA0) --------------------------------------------------------
_DWORD *__fastcall sub_22EA0(_DWORD *a1)
{
  void *v2; // r0

  v2 = (void *)a1[7];
  *a1 = &off_D0604;
  if ( v2 )
  {
    a1[8] = 0;
    sub_77F70(v2);
  }
  return a1;
}
// D0604: using guessed type _UNKNOWN *;
