/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079040
// Address: 0x08079040

//----- (08079040) --------------------------------------------------------
int __cdecl sub_8079040(int a1)
{
  void **v1; // edi
  _BYTE *v2; // edx
  void *v3; // eax
  char *v4; // edx
  int v5; // eax
  void **v6; // edi
  _BYTE *v7; // edx
  void *v8; // eax

  v1 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -86;
  v2 = v1[1];
  v3 = *v1;
  if ( v1[2] < v2 + 1 )
  {
    v3 = sub_80CF920((int)v1, v3, (unsigned int)(v2 + 1), 1u);
    v2 = v1[1];
    *v1 = v3;
  }
  v2[(_DWORD)v3] = -86;
  v4 = (char *)&dword_80DDFD8;
  v1[1] = (char *)v1[1] + 1;
  v5 = *(_DWORD *)(a1 + 24);
  ++*(_DWORD *)(a1 + 112);
  if ( v5 )
  {
    v4 = *(char **)(a1 + 20);
    --v5;
  }
  sub_8078F10(a1, v4, v5);
  v6 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = 1;
  v7 = v6[1];
  v8 = *v6;
  if ( v6[2] < v7 + 1 )
  {
    v8 = sub_80CF920((int)v6, v8, (unsigned int)(v7 + 1), 1u);
    v7 = v6[1];
    *v6 = v8;
  }
  v7[(_DWORD)v8] = 1;
  v6[1] = (char *)v6[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
