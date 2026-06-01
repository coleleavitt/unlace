/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4293E0
// Address: 0x004293E0

//----- (004293E0) --------------------------------------------------------
int __stdcall sub_4293E0(int a1)
{
  int v2; // edi
  unsigned int v3; // eax
  void **v4; // edi
  int v5; // ebx
  unsigned int v6; // eax

  if ( !*(_DWORD *)(a1 + 164) )
    return sub_45CC20(50);
  v2 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -85;
  v3 = *(_DWORD *)(v2 + 4) + 1;
  if ( v3 > *(_DWORD *)(v2 + 8) )
    *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3, 1u);
  *(_BYTE *)(*(_DWORD *)(v2 + 4) + *(_DWORD *)v2) = -85;
  ++*(_DWORD *)(v2 + 4);
  v4 = (void **)(a1 + 136);
  v5 = ++*(_DWORD *)(a1 + 108);
  v6 = *(_DWORD *)(a1 + 140) + 1;
  if ( v6 > *(_DWORD *)(a1 + 144) )
    *v4 = sub_453B00(a1 + 136, *v4, v6, 4u);
  *((_DWORD *)*v4 + (*(_DWORD *)(a1 + 140))++) = v5;
  sub_42E320((int *)a1, 0);
  sub_42E320((int *)a1, 0);
  return 0;
}
