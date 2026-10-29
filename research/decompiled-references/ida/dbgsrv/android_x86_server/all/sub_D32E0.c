/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D32E0
// Address: 0x000D32E0

//----- (000D32E0) --------------------------------------------------------
int __cdecl sub_D32E0(_DWORD *a1, int a2)
{
  int v2; // edx
  unsigned int v3; // eax
  size_t v4; // ecx
  _BYTE *v5; // eax
  size_t v6; // eax
  _BYTE *v7; // edi
  int v8; // ecx
  unsigned int v9; // eax
  _BYTE *v10; // eax
  size_t v11; // eax
  _BYTE *v12; // edi
  int v13; // edx
  unsigned int v14; // eax
  size_t v15; // ecx
  _BYTE *v16; // eax
  size_t v17; // eax
  _BYTE *v18; // edi
  int v19; // ecx
  unsigned int v20; // eax
  _BYTE *v21; // eax
  size_t v22; // eax
  int result; // eax

  v2 = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  v4 = v2 + 1;
  if ( v2 + 1 >= v3 )
  {
    v6 = 2 * v3;
    if ( v6 < v4 )
      v6 = v2 + 1;
    *(_DWORD *)(a2 + 8) = v6;
    v5 = realloc(*(void **)a2, v6);
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
  v7 = (_BYTE *)a1[2];
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v7 + 12))(v7, a2);
  if ( v7[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v7 + 16))(v7, a2);
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a2 + 8);
  if ( v8 + 5 >= v9 )
  {
    v11 = 2 * v9;
    if ( v11 < v8 + 5 )
      v11 = v8 + 5;
    *(_DWORD *)(a2 + 8) = v11;
    v10 = realloc(*(void **)a2, v11);
    *(_DWORD *)a2 = v10;
    v8 = *(_DWORD *)(a2 + 4);
  }
  else
  {
    v10 = *(_BYTE **)a2;
  }
  v10[v8 + 4] = 32;
  *(_DWORD *)&v10[v8] = 774778400;
  *(_DWORD *)(a2 + 4) += 5;
  v12 = (_BYTE *)a1[3];
  (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v12 + 12))(v12, a2);
  if ( v12[5] != 1 )
    (*(void (__cdecl **)(_BYTE *, int))(*(_DWORD *)v12 + 16))(v12, a2);
  v13 = *(_DWORD *)(a2 + 4);
  v14 = *(_DWORD *)(a2 + 8);
  v15 = v13 + 1;
  if ( v13 + 1 >= v14 )
  {
    v17 = 2 * v14;
    if ( v17 < v15 )
      v17 = v13 + 1;
    *(_DWORD *)(a2 + 8) = v17;
    v16 = realloc(*(void **)a2, v17);
    *(_DWORD *)a2 = v16;
    v13 = *(_DWORD *)(a2 + 4);
    v15 = v13 + 1;
  }
  else
  {
    v16 = *(_BYTE **)a2;
  }
  *(_DWORD *)(a2 + 4) = v15;
  v16[v13] = 93;
  v18 = (_BYTE *)a1[4];
  if ( (unsigned __int8)(v18[4] - 43) >= 2u )
  {
    v19 = *(_DWORD *)(a2 + 4);
    v20 = *(_DWORD *)(a2 + 8);
    if ( v19 + 3 >= v20 )
    {
      v22 = 2 * v20;
      if ( v22 < v19 + 3 )
        v22 = v19 + 3;
      *(_DWORD *)(a2 + 8) = v22;
      v21 = realloc(*(void **)a2, v22);
      *(_DWORD *)a2 = v21;
      v19 = *(_DWORD *)(a2 + 4);
    }
    else
    {
      v21 = *(_BYTE **)a2;
    }
    v21[v19 + 2] = 32;
    *(_WORD *)&v21[v19] = 15648;
    *(_DWORD *)(a2 + 4) += 3;
    v18 = (_BYTE *)a1[4];
  }
  result = (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v18 + 12))(v18, a2);
  if ( v18[5] != 1 )
    return (*(int (__cdecl **)(_BYTE *, int))(*(_DWORD *)v18 + 16))(v18, a2);
  return result;
}
