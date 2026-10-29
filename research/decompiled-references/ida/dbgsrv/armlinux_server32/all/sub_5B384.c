/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B384
// Address: 0x0005B384

//----- (0005B384) --------------------------------------------------------
_DWORD *__fastcall sub_5B384(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    sub_77F70(v3);
  }
  return a1;
}
