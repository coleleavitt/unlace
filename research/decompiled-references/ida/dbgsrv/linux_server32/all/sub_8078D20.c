/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078D20
// Address: 0x08078D20

//----- (08078D20) --------------------------------------------------------
int __cdecl sub_8078D20(int a1)
{
  int v1; // eax
  _DWORD *v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // ebp
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  void *v9; // edx
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD *v13; // eax
  void **v14; // ebp
  _BYTE *v15; // edx
  void *v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // eax
  int v20; // [esp+8h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 168);
  v2 = *(_DWORD **)(a1 + 164);
  v3 = v2[v1 - 1];
  if ( !v1 )
  {
    v20 = *(v2 - 1);
LABEL_12:
    v5 = v20;
    v6 = 1;
    v7 = 0;
    goto LABEL_5;
  }
  v4 = v1 + 0x3FFFFFFF;
  *(_DWORD *)(a1 + 168) = v1 - 1;
  v5 = v2[v4 - 1];
  if ( v1 == 1 )
  {
    v20 = v2[v4 - 1];
    goto LABEL_12;
  }
  v6 = v1 - 2;
  *(_DWORD *)(a1 + 168) = v1 - 2;
  v20 = v2[v4 - 2];
  if ( v1 == 2 )
  {
    v7 = 0;
    v6 = 1;
  }
  else
  {
    v7 = v1 - 3;
    *(_DWORD *)(a1 + 168) = v7;
  }
LABEL_5:
  v21 = a1 + 164;
  if ( *(_DWORD *)(a1 + 172) < v6 )
  {
    v13 = sub_80CF920(v21, v2, v6, 4u);
    *(_DWORD *)(a1 + 164) = v13;
    v2 = v13;
    v7 = *(_DWORD *)(a1 + 168);
  }
  v2[v7] = v3 + 4;
  v8 = *(_DWORD *)(a1 + 168);
  v9 = *(void **)(a1 + 164);
  v10 = v8 + 1;
  v11 = v8 + 2;
  *(_DWORD *)(a1 + 168) = v10;
  if ( *(_DWORD *)(a1 + 172) < v11 )
  {
    v19 = sub_80CF920(v21, v9, v11, 4u);
    v10 = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 164) = v19;
    v9 = v19;
  }
  *((_DWORD *)v9 + v10) = v5;
  ++*(_DWORD *)(a1 + 168);
  if ( v5 )
  {
    v14 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -85;
    v15 = v14[1];
    v16 = *v14;
    if ( v14[2] < v15 + 1 )
    {
      v16 = sub_80CF920((int)v14, v16, (unsigned int)(v15 + 1), 1u);
      v15 = v14[1];
      *v14 = v16;
    }
    v15[(_DWORD)v16] = -85;
    v14[1] = (char *)v14[1] + 1;
    v17 = *(_DWORD *)(a1 + 112) + 1;
    *(_DWORD *)(a1 + 112) = v17;
    v18 = (unsigned int)(v20 - v17 - 4) >> 16;
    sub_8078190(a1, v20 - v17 - 4);
    sub_8078190(a1, v18);
  }
  sub_807FB60(*(int **)(a1 + 108), v3, *(_DWORD *)(a1 + 112) - 4 - v3);
  return 0;
}
