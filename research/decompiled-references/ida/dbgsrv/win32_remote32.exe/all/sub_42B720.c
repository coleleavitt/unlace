/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B720
// Address: 0x0042B720

//----- (0042B720) --------------------------------------------------------
int __stdcall sub_42B720(int a1)
{
  int v1; // ecx
  const char *v2; // eax
  int v3; // esi
  unsigned int v4; // eax

  v1 = *(_DWORD *)(a1 + 20);
  v2 = MultiByteStr;
  if ( v1 )
    v2 = *(const char **)(a1 + 16);
  sub_42E870(a1, v2, *(_DWORD *)(a1 + 20) != 0 ? v1 - 1 : 0);
  v3 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -80;
  v4 = *(_DWORD *)(v3 + 4) + 1;
  if ( v4 > *(_DWORD *)(v3 + 8) )
    *(_DWORD *)v3 = sub_453B00(v3, *(void **)v3, v4, 1u);
  *(_BYTE *)(*(_DWORD *)v3 + (*(_DWORD *)(v3 + 4))++) = -80;
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
