/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429A70
// Address: 0x00429A70

//----- (00429A70) --------------------------------------------------------
int __stdcall sub_429A70(int a1)
{
  char v1; // bl
  int v2; // esi
  unsigned int v3; // eax
  int v4; // esi
  unsigned int v5; // eax

  v1 = -32;
  v2 = *(_DWORD *)(a1 + 104);
  if ( *(_DWORD *)(a1 + 116) == 1 )
    v1 = 112;
  *(_BYTE *)(a1 + 112) = v1;
  v3 = *(_DWORD *)(v2 + 4) + 1;
  if ( v3 > *(_DWORD *)(v2 + 8) )
    *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3, 1u);
  *(_BYTE *)(*(_DWORD *)v2 + (*(_DWORD *)(v2 + 4))++) = v1;
  v4 = *(_DWORD *)(a1 + 104);
  ++*(_DWORD *)(a1 + 108);
  *(_BYTE *)(a1 + 112) = -81;
  v5 = *(_DWORD *)(v4 + 4) + 1;
  if ( v5 > *(_DWORD *)(v4 + 8) )
    *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, v5, 1u);
  *(_BYTE *)(*(_DWORD *)(v4 + 4) + *(_DWORD *)v4) = -81;
  ++*(_DWORD *)(v4 + 4);
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
