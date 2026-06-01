/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4299C0
// Address: 0x004299C0

//----- (004299C0) --------------------------------------------------------
int __stdcall sub_4299C0(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // edi
  int v4; // ecx

  v1 = *(_DWORD *)(a1 + 164);
  v2 = *(_DWORD *)(a1 + 160);
  v3 = *(_DWORD *)(v2 + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 164) = --v1;
  v4 = *(_DWORD *)(v2 + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 164) = v1 - 1;
  if ( sub_42C6F0(a1, 171, v4) )
    return -1;
  if ( v3 )
    sub_428740(*(_DWORD **)(a1 + 104), v3, *(_DWORD *)(a1 + 108) - v3 - 4);
  return 0;
}
