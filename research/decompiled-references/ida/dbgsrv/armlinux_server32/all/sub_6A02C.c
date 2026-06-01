/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A02C
// Address: 0x0006A02C

//----- (0006A02C) --------------------------------------------------------
int __fastcall sub_6A02C(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 4);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    sub_77F70(v2);
  }
  return a1;
}
