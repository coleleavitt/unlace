/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3120
// Address: 0x000D3120

//----- (000D3120) --------------------------------------------------------
int __cdecl sub_D3120(int a1, int a2)
{
  int v2; // edx
  size_t v3; // eax
  size_t v4; // ecx
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  size_t v7; // eax
  _BYTE *v8; // edi
  int v9; // edx
  unsigned int v10; // eax
  size_t v11; // ecx
  _BYTE *v12; // eax
  size_t v13; // eax
  size_t v14; // eax
  _BYTE *v15; // edi
  _BYTE *v16; // edi
  int v17; // ecx
  unsigned int v18; // eax
  _BYTE *v19; // eax
  size_t v20; // eax
  int result; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = v2 + 1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( v4 >= v3 )
    {
      v7 = 2 * v3;
      if ( v7 < v4 )
        v7 = v2 + 1;
      *(_DWORD *)(a2 + 8) = v7;
      v5 = realloc(*(void **)a2, v7);
      *(_DWORD *)a2 = v5;
      v2 = *(_DWORD *)(a2 + 4);
      v4 = v2 + 1;
    }
    else
    {
      v5 = *(_BYTE **)a2;
    }
    *(_DWORD *)(a2 + 4) = v4;
    v5[v2] = 91;
    v8 = *(_BYTE **)(a1 + 8);
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v8 + 12))(v8, a2);
    if ( v8[5] != 1 )
      (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v8 + 16))(v8, a2);
    v9 = *(_DWORD *)(a2 + 4);
    v10 = *(_DWORD *)(a2 + 8);
    v11 = v9 + 1;
    if ( v9 + 1 >= v10 )
    {
      v13 = 2 * v10;
      if ( v13 < v11 )
        v13 = v9 + 1;
      *(_DWORD *)(a2 + 8) = v13;
      v12 = realloc(*(void **)a2, v13);
      *(_DWORD *)a2 = v12;
      v9 = *(_DWORD *)(a2 + 4);
      v11 = v9 + 1;
    }
    else
    {
      v12 = *(_BYTE **)a2;
    }
    *(_DWORD *)(a2 + 4) = v11;
    v12[v9] = 93;
  }
  else
  {
    if ( v4 >= v3 )
    {
      v14 = 2 * v3;
      if ( v14 < v4 )
        v14 = v2 + 1;
      *(_DWORD *)(a2 + 8) = v14;
      v6 = realloc(*(void **)a2, v14);
      *(_DWORD *)a2 = v6;
      v2 = *(_DWORD *)(a2 + 4);
      v4 = v2 + 1;
    }
    else
    {
      v6 = *(_BYTE **)a2;
    }
    *(_DWORD *)(a2 + 4) = v4;
    v6[v2] = 46;
    v15 = *(_BYTE **)(a1 + 8);
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v15 + 12))(v15, a2);
    if ( v15[5] != 1 )
      (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v15 + 16))(v15, a2);
  }
  v16 = *(_BYTE **)(a1 + 12);
  if ( (unsigned __int8)(v16[4] - 43) >= 2u )
  {
    v17 = *(_DWORD *)(a2 + 4);
    v18 = *(_DWORD *)(a2 + 8);
    if ( v17 + 3 >= v18 )
    {
      v20 = 2 * v18;
      if ( v20 < v17 + 3 )
        v20 = v17 + 3;
      *(_DWORD *)(a2 + 8) = v20;
      v19 = realloc(*(void **)a2, v20);
      *(_DWORD *)a2 = v19;
      v17 = *(_DWORD *)(a2 + 4);
    }
    else
    {
      v19 = *(_BYTE **)a2;
    }
    v19[v17 + 2] = 32;
    *(_WORD *)&v19[v17] = 15648;
    *(_DWORD *)(a2 + 4) += 3;
    v16 = *(_BYTE **)(a1 + 12);
  }
  result = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v16 + 12))(v16, a2);
  if ( v16[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v16 + 16))(v16, a2);
  return result;
}
