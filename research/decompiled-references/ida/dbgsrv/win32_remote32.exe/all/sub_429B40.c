/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_429B40
// Address: 0x00429B40

//----- (00429B40) --------------------------------------------------------
int __stdcall sub_429B40(int a1)
{
  int v1; // esi
  unsigned int v2; // eax
  void **v3; // esi
  unsigned int v4; // eax
  int v5; // ebx
  unsigned int v6; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -85;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)(v1 + 4) + *(_DWORD *)v1) = -85;
  ++*(_DWORD *)(v1 + 4);
  v3 = (void **)(a1 + 160);
  ++*(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(a1 + 164) + 1;
  if ( v4 > *(_DWORD *)(a1 + 168) )
    *v3 = sub_453B00(a1 + 160, *v3, v4, 4u);
  *((_DWORD *)*v3 + (*(_DWORD *)(a1 + 164))++) = 0;
  v5 = *(_DWORD *)(a1 + 108);
  v6 = *(_DWORD *)(a1 + 164) + 1;
  if ( v6 > *(_DWORD *)(a1 + 168) )
    *v3 = sub_453B00(a1 + 160, *v3, v6, 4u);
  *((_DWORD *)*v3 + (*(_DWORD *)(a1 + 164))++) = v5;
  sub_42E320((int *)a1, 0);
  sub_42E320((int *)a1, 0);
  return 0;
}
