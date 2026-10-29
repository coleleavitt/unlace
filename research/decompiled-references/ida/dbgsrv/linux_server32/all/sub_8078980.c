/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078980
// Address: 0x08078980

//----- (08078980) --------------------------------------------------------
int __cdecl sub_8078980(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // edx
  void *v8; // eax

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
  v4 = *(_DWORD *)(a1 + 112) + 1;
  *(_DWORD *)(a1 + 112) = v4;
  sub_8078190(a1, 0);
  sub_8078190(a1, 0);
  v5 = *(_DWORD *)(a1 + 132);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 4 * v5 - 4);
  if ( v5 )
    *(_DWORD *)(a1 + 132) = v5 - 1;
  sub_807FB60(*(int **)(a1 + 108), v6, *(_DWORD *)(a1 + 112) - 4 - v6);
  v7 = *(_DWORD *)(a1 + 132);
  v8 = *(void **)(a1 + 128);
  if ( *(_DWORD *)(a1 + 136) < (unsigned int)(v7 + 1) )
  {
    v8 = sub_80CF920(a1 + 128, v8, v7 + 1, 4u);
    v7 = *(_DWORD *)(a1 + 132);
    *(_DWORD *)(a1 + 128) = v8;
  }
  *((_DWORD *)v8 + v7) = v4;
  ++*(_DWORD *)(a1 + 132);
  return 0;
}
