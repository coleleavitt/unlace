/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_155BC
// Address: 0x000155BC

//----- (000155BC) --------------------------------------------------------
_DWORD *__fastcall sub_155BC(_DWORD *a1)
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
