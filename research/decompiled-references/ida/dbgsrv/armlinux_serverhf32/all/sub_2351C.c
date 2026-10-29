/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2351C
// Address: 0x0002351C

//----- (0002351C) --------------------------------------------------------
int __fastcall sub_2351C(int a1)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *(void **)(a1 + 12);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_77E08(v2);
  }
  v3 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v3);
  }
  return a1;
}
