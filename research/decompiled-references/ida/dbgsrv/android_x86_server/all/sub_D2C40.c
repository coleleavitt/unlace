/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D2C40
// Address: 0x000D2C40

//----- (000D2C40) --------------------------------------------------------
int __cdecl sub_D2C40(int a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  int result; // eax

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
  v4[v2 + 8] = 32;
  *(_DWORD *)&v4[v2 + 4] = 1919906913;
  *(_DWORD *)&v4[v2] = 1919250543;
  *(_DWORD *)(a2 + 4) += 9;
  v6 = *(_BYTE **)(a1 + 8);
  result = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 16))(v6, a2);
  return result;
}
