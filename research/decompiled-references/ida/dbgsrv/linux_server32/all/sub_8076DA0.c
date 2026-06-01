/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8076DA0
// Address: 0x08076DA0

//----- (08076DA0) --------------------------------------------------------
int __cdecl sub_8076DA0(int a1)
{
  char v1; // bp
  void **v2; // edi
  _BYTE *v3; // edx
  void *v4; // eax
  void **v5; // edi
  _BYTE *v6; // edx
  void *v7; // eax

  v1 = 112;
  if ( *(_DWORD *)(a1 + 120) != 1 )
    v1 = -32;
  v2 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = v1;
  v3 = v2[1];
  v4 = *v2;
  if ( v2[2] < v3 + 1 )
  {
    v4 = sub_80CF920((int)v2, v4, (unsigned int)(v3 + 1), 1u);
    v3 = v2[1];
    *v2 = v4;
  }
  v3[(_DWORD)v4] = v1;
  v2[1] = (char *)v2[1] + 1;
  v5 = *(void ***)(a1 + 108);
  ++*(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 116) = -81;
  v6 = v5[1];
  v7 = *v5;
  if ( v5[2] < v6 + 1 )
  {
    v7 = sub_80CF920((int)v5, v7, (unsigned int)(v6 + 1), 1u);
    v6 = v5[1];
    *v5 = v7;
  }
  v6[(_DWORD)v7] = -81;
  v5[1] = (char *)v5[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
