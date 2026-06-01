/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D7E90
// Address: 0x000D7E90

//----- (000D7E90) --------------------------------------------------------
int __cdecl sub_D7E90(int a1, int a2)
{
  _BYTE *v2; // eax
  char v3; // cl
  char v4; // cl
  int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // eax
  size_t v8; // eax

  v2 = *(_BYTE **)(a1 + 12);
  v3 = v2[6];
  if ( v3 )
  {
    if ( v3 != 2 )
    {
LABEL_5:
      v4 = v2[7];
      if ( v4 && (v4 != 2 || !(*(unsigned __int8 (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 8))(v2, a2)) )
        return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
      goto LABEL_8;
    }
    if ( !(*(unsigned __int8 (__cdecl **)(_BYTE *, int))(*(_DWORD *)v2 + 4))(v2, a2) )
    {
      v2 = *(_BYTE **)(a1 + 12);
      goto LABEL_5;
    }
  }
LABEL_8:
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  if ( v5 + 1 >= v6 )
  {
    v8 = 2 * v6;
    if ( v8 < v5 + 1 )
      v8 = v5 + 1;
    *(_DWORD *)(a2 + 8) = v8;
    v7 = realloc(*(void **)a2, v8);
    *(_DWORD *)a2 = v7;
    v5 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v7 = *(_BYTE **)a2;
  }
  v7[v5] = 41;
  ++*(_DWORD *)(a2 + 4);
  return (*(int (__cdecl **)(_DWORD, int))(**(_DWORD **)(a1 + 12) + 16))(*(_DWORD *)(a1 + 12), a2);
}
