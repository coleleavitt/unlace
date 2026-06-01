/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42B6C0
// Address: 0x0042B6C0

//----- (0042B6C0) --------------------------------------------------------
int __stdcall sub_42B6C0(int a1)
{
  int v2; // esi
  unsigned int v3; // eax

  if ( dword_4B4090 <= 0 )
    return 1612;
  v2 = *(_DWORD *)(a1 + 104);
  *(_BYTE *)(a1 + 112) = -44;
  v3 = *(_DWORD *)(v2 + 4) + 1;
  if ( v3 > *(_DWORD *)(v2 + 8) )
    *(_DWORD *)v2 = sub_453B00(v2, *(void **)v2, v3, 1u);
  *(_BYTE *)(*(_DWORD *)(v2 + 4) + *(_DWORD *)v2) = -44;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 108);
  sub_42E770(a1, 0, dword_4B4090);
  return 0;
}
// 4B4090: using guessed type int dword_4B4090;
