/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078FC0
// Address: 0x08078FC0

//----- (08078FC0) --------------------------------------------------------
int __cdecl sub_8078FC0(int a1)
{
  int v1; // eax
  char *v2; // edx
  void **v3; // edi
  _BYTE *v4; // edx
  void *v5; // eax

  v1 = *(_DWORD *)(a1 + 24);
  v2 = (char *)&dword_80DDFD8;
  if ( v1 )
  {
    v2 = *(char **)(a1 + 20);
    --v1;
  }
  sub_8078F10(a1, v2, v1);
  v3 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -80;
  v4 = v3[1];
  v5 = *v3;
  if ( v3[2] < v4 + 1 )
  {
    v5 = sub_80CF920((int)v3, v5, (unsigned int)(v4 + 1), 1u);
    v4 = v3[1];
    *v3 = v5;
  }
  v4[(_DWORD)v5] = -80;
  v3[1] = (char *)v3[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
