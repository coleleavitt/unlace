/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D3F0
// Address: 0x0003D3F0

//----- (0003D3F0) --------------------------------------------------------
int __fastcall sub_3D3F0(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v2);
  }
  return a1;
}
