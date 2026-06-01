/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6C40
// Address: 0x000D6C40

//----- (000D6C40) --------------------------------------------------------
_BYTE *__cdecl sub_D6C40(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  int v7; // ecx
  unsigned int v8; // eax
  _BYTE *result; // eax
  size_t v10; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 + 9 >= v3 )
  {
    v5 = 2 * v3;
    if ( v5 < v2 + 9 )
      v5 = v2 + 9;
    *(_DWORD *)(a2 + 8) = v5;
    v4 = realloc(*(void **)a2, v5);
    *(_DWORD *)a2 = v4;
    v2 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v4 = *(_BYTE **)a2;
  }
  v4[v2 + 8] = 40;
  *(_DWORD *)&v4[v2 + 4] = 1953523043;
  *(_DWORD *)&v4[v2] = 2019913582;
  *(_DWORD *)(a2 + 4) += 9;
  v6 = *(_BYTE **)(a1 + 8);
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 16))(v6, a2);
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 8);
  if ( v7 + 1 >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < v7 + 1 )
      v10 = v7 + 1;
    *(_DWORD *)(a2 + 8) = v10;
    result = realloc(*(void **)a2, v10);
    *(_DWORD *)a2 = result;
    v7 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v7] = 41;
  ++*(_DWORD *)(a2 + 4);
  return result;
}
