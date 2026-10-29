/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5718C
// Address: 0x0005718C

//----- (0005718C) --------------------------------------------------------
int __fastcall sub_5718C(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 28) = 0;
    sub_77E08(v2);
  }
  v3 = *(void **)(a1 + 12);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 16) = 0;
    sub_77E08(v3);
  }
  v4 = *(void **)a1;
  if ( *(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    sub_77E08(v4);
  }
  return a1;
}
