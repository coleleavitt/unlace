/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078B60
// Address: 0x08078B60

//----- (08078B60) --------------------------------------------------------
int __cdecl sub_8078B60(int a1)
{
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax
  int v5; // edx
  int v6; // edi
  void *v7; // eax

  if ( !*(_DWORD *)(a1 + 168) )
    return sub_80C7880(50);
  v2 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -85;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = -85;
  v2[1] = (char *)v2[1] + 1;
  v5 = *(_DWORD *)(a1 + 144);
  v6 = *(_DWORD *)(a1 + 112) + 1;
  v7 = *(void **)(a1 + 140);
  *(_DWORD *)(a1 + 112) = v6;
  if ( *(_DWORD *)(a1 + 148) < (unsigned int)(v5 + 1) )
  {
    v7 = sub_80CF920(a1 + 140, v7, v5 + 1, 4u);
    v5 = *(_DWORD *)(a1 + 144);
    *(_DWORD *)(a1 + 140) = v7;
  }
  *((_DWORD *)v7 + v5) = v6;
  ++*(_DWORD *)(a1 + 144);
  sub_8078190(a1, 0);
  sub_8078190(a1, 0);
  return 0;
}
