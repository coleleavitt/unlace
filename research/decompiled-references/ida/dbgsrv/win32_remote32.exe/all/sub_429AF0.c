/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429AF0
// Address: 0x00429AF0

//----- (00429AF0) --------------------------------------------------------
int __stdcall sub_429AF0(int a1)
{
  int v2; // esi
  unsigned int v3; // eax

  if ( *(_DWORD *)(a1 + 116) )
    return sub_45CC20(1540);
  v2 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -81;
  v3 = *(_DWORD *)(v2 + 4) + 1;
  if ( v3 > *(_DWORD *)(v2 + 8) )
    *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3, 1u);
  *(_BYTE *)(*(_DWORD *)(v2 + 4) + *(_DWORD *)v2) = -81;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
