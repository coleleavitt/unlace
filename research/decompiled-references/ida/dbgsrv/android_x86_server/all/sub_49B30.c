/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49B30
// Address: 0x00049B30

//----- (00049B30) --------------------------------------------------------
int __cdecl sub_49B30(int a1)
{
  int v1; // edx
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 168);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 164) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 168) = v1 - 1;
  sub_499F0(a1, 172, v2);
  return 0;
}
