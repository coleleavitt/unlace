/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42ADB0
// Address: 0x0042ADB0

//----- (0042ADB0) --------------------------------------------------------
int __stdcall sub_42ADB0(int a1)
{
  int v1; // esi
  unsigned int v2; // eax
  int v3; // ecx
  const char *v4; // eax
  int v5; // esi
  unsigned int v6; // eax

  v1 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -86;
  v2 = *(_DWORD *)(v1 + 4) + 1;
  if ( v2 > *(_DWORD *)(v1 + 8) )
    *(_DWORD *)v1 = sub_453B00(v1, *(void **)v1, v2, 1u);
  *(_BYTE *)(*(_DWORD *)(v1 + 4) + *(_DWORD *)v1) = -86;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 108);
  v3 = *(_DWORD *)(a1 + 20);
  v4 = MultiByteStr;
  if ( v3 )
    v4 = *(const char **)(a1 + 16);
  sub_42E870(a1, v4, *(_DWORD *)(a1 + 20) != 0 ? v3 - 1 : 0);
  v5 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = 1;
  v6 = *(_DWORD *)(v5 + 4) + 1;
  if ( v6 > *(_DWORD *)(v5 + 8) )
    *(_DWORD *)v5 = sub_453B00(v5, *(void **)v5, v6, 1u);
  *(_BYTE *)(*(_DWORD *)v5 + (*(_DWORD *)(v5 + 4))++) = 1;
  ++*(_DWORD *)(a1 + 108);
  return 0;
}
