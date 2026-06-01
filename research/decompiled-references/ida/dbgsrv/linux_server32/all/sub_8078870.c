/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078870
// Address: 0x08078870

//----- (08078870) --------------------------------------------------------
int __cdecl sub_8078870(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax
  int v4; // edx
  void *v5; // eax
  int v6; // eax
  int v7; // edi
  void *v8; // ecx
  int v9; // edx
  unsigned int v10; // eax
  void *v12; // eax

  v1 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -85;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v3 = sub_80CF920((int)v1, v3, (unsigned int)(v2 + 1), 1u);
    v2 = v1[1];
    *v1 = v3;
  }
  v2[(_DWORD)v3] = -85;
  v1[1] = (char *)v1[1] + 1;
  v4 = *(_DWORD *)(a1 + 168);
  ++*(_DWORD *)(a1 + 112);
  v5 = *(void **)(a1 + 164);
  if ( *(_DWORD *)(a1 + 172) < (unsigned int)(v4 + 1) )
  {
    v5 = sub_80CF920(a1 + 164, v5, v4 + 1, 4u);
    v4 = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 164) = v5;
  }
  *((_DWORD *)v5 + v4) = 0;
  v6 = *(_DWORD *)(a1 + 168);
  v7 = *(_DWORD *)(a1 + 112);
  v8 = *(void **)(a1 + 164);
  v9 = v6 + 1;
  v10 = v6 + 2;
  *(_DWORD *)(a1 + 168) = v9;
  if ( *(_DWORD *)(a1 + 172) < v10 )
  {
    v12 = sub_80CF920(a1 + 164, v8, v10, 4u);
    v9 = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 164) = v12;
    v8 = v12;
  }
  *((_DWORD *)v8 + v9) = v7;
  ++*(_DWORD *)(a1 + 168);
  sub_8078190(a1, 0);
  sub_8078190(a1, 0);
  return 0;
}
