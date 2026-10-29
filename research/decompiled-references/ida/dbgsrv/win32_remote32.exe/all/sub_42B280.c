/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B280
// Address: 0x0042B280

//----- (0042B280) --------------------------------------------------------
int __stdcall sub_42B280(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -76;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -76;
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
