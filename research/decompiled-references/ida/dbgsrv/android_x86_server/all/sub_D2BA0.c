/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2BA0
// Address: 0x000D2BA0

//----- (000D2BA0) --------------------------------------------------------
int __cdecl sub_D2BA0(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // eax
  size_t v5; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 1 >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < v2 + 1 )
      v5 = v2 + 1;
    *(_DWORD *)(a2 + 8) = v5;
    v4 = realloc(*(void **)a2, v5);
    *(_DWORD *)a2 = v4;
    v2 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v4 = *(_BYTE **)a2;
  }
  v4[v2] = 126;
  ++*(_DWORD *)(a2 + 4);
  return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
}
