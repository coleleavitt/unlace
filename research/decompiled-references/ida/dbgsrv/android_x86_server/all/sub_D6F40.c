/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6F40
// Address: 0x000D6F40

//----- (000D6F40) --------------------------------------------------------
_BYTE *__cdecl sub_D6F40(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *result; // eax
  size_t v5; // eax

  (*(void (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 8) + 12))(*(_DWORD *)(a1 + 8), a2);
  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 1 >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < v2 + 1 )
      v5 = v2 + 1;
    *(_DWORD *)(a2 + 8) = v5;
    result = realloc(*(void **)a2, v5);
    *(_DWORD *)a2 = result;
    v2 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v2] = 32;
  ++*(_DWORD *)(a2 + 4);
  return result;
}
