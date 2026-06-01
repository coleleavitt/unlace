/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3DC0
// Address: 0x000D3DC0

//----- (000D3DC0) --------------------------------------------------------
_BYTE *__cdecl sub_D3DC0(_DWORD *a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  _BYTE *v4; // eax
  size_t v5; // eax
  _BYTE *v6; // edi
  int v7; // ecx
  unsigned int v8; // eax
  _BYTE *v9; // eax
  size_t v10; // eax
  _BYTE *v11; // edi
  int v12; // ecx
  unsigned int v13; // eax
  _BYTE *v14; // eax
  size_t v15; // eax
  _BYTE *v16; // edi
  int v17; // ecx
  unsigned int v18; // eax
  _BYTE *result; // eax
  size_t v20; // eax

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
  v4[v2] = 40;
  ++*(_DWORD *)(a2 + 4);
  v6 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 12))(v6, a2);
  if ( v6[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v6 + 16))(v6, a2);
  v7 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(a2 + 8);
  if ( v7 + 5 >= v8 )
  {
    v10 = 2 * v8;
    if ( v10 < v7 + 5 )
      v10 = v7 + 5;
    *(_DWORD *)(a2 + 8) = v10;
    v9 = realloc(*(void **)a2, v10);
    *(_DWORD *)a2 = v9;
    v7 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v9 = *(_BYTE **)a2;
  }
  v9[v7 + 4] = 40;
  *(_DWORD *)&v9[v7] = 541007913;
  *(_DWORD *)(a2 + 4) += 5;
  v11 = (_BYTE *)a1[3];
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v11 + 12))(v11, a2);
  if ( v11[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v11 + 16))(v11, a2);
  v12 = *(_DWORD *)(a2 + 4);
  v13 = *(_DWORD *)(a2 + 8);
  if ( v12 + 5 >= v13 )
  {
    v15 = 2 * v13;
    if ( v15 < v12 + 5 )
      v15 = v12 + 5;
    *(_DWORD *)(a2 + 8) = v15;
    v14 = realloc(*(void **)a2, v15);
    *(_DWORD *)a2 = v14;
    v12 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v14 = *(_BYTE **)a2;
  }
  v14[v12 + 4] = 40;
  *(_DWORD *)&v14[v12] = 540680233;
  *(_DWORD *)(a2 + 4) += 5;
  v16 = (_BYTE *)a1[4];
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v16 + 12))(v16, a2);
  if ( v16[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v16 + 16))(v16, a2);
  v17 = *(_DWORD *)(a2 + 4);
  v18 = *(_DWORD *)(a2 + 8);
  if ( v17 + 1 >= v18 )
  {
    v20 = 2 * v18;
    if ( v20 < v17 + 1 )
      v20 = v17 + 1;
    *(_DWORD *)(a2 + 8) = v20;
    result = realloc(*(void **)a2, v20);
    *(_DWORD *)a2 = result;
    v17 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v17] = 41;
  ++*(_DWORD *)(a2 + 4);
  return result;
}
