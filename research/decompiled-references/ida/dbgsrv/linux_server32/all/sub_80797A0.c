/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80797A0
// Address: 0x080797A0

//----- (080797A0) --------------------------------------------------------
int __cdecl sub_80797A0(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // esi
  int v4; // edx

  v1 = *(_DWORD *)(a1 + 168);
  v2 = *(_DWORD *)(a1 + 164);
  v3 = *(_DWORD *)(v2 + 4 * (v1 + 0x3FFFFFFF));
  v4 = v3;
  if ( v1 )
  {
    *(_DWORD *)(a1 + 168) = v1 - 1;
    v4 = *(_DWORD *)(v2 + 4 * (v1 + 0x3FFFFFFF) - 4);
    if ( v1 != 1 )
      *(_DWORD *)(a1 + 168) = v1 - 2;
  }
  sub_8079640(a1, 171, v4);
  if ( v3 )
    sub_807FB60(*(int **)(a1 + 108), v3, *(_DWORD *)(a1 + 112) - 4 - v3);
  return 0;
}
