/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80787B0
// Address: 0x080787B0

//----- (080787B0) --------------------------------------------------------
int __cdecl sub_80787B0(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax
  int v4; // edx
  int v5; // edi
  void *v6; // eax

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
  v5 = *(_DWORD *)(a1 + 112) + 1;
  v6 = *(void **)(a1 + 164);
  *(_DWORD *)(a1 + 112) = v5;
  if ( *(_DWORD *)(a1 + 172) < (unsigned int)(v4 + 1) )
  {
    v6 = sub_80CF920(a1 + 164, v6, v4 + 1, 4u);
    v4 = *(_DWORD *)(a1 + 168);
    *(_DWORD *)(a1 + 164) = v6;
  }
  *((_DWORD *)v6 + v4) = v5;
  ++*(_DWORD *)(a1 + 168);
  sub_8078190(a1, 0);
  sub_8078190(a1, 0);
  return 0;
}
