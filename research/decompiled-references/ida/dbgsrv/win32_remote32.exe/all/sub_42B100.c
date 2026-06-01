/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B100
// Address: 0x0042B100

//----- (0042B100) --------------------------------------------------------
int __stdcall sub_42B100(int a1)
{
  int v1; // esi
  unsigned int v2; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -68;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)v1 + (*(_DWORD *)(v1 + 4))++) = -68;
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
