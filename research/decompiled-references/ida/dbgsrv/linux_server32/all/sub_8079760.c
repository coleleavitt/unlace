/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079760
// Address: 0x08079760

//----- (08079760) --------------------------------------------------------
int __cdecl sub_8079760(int a1)
{
  int v1; // edx
  int v2; // ecx

  v1 = *(_DWORD *)(a1 + 168);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 164) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 168) = v1 - 1;
  sub_8079640(a1, 172, v2);
  return 0;
}
