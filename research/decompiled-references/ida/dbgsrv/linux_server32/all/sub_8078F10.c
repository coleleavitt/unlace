/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078F10
// Address: 0x08078F10

//----- (08078F10) --------------------------------------------------------
unsigned int __cdecl sub_8078F10(int a1, char *s, int a3)
{
  int v3; // edi
  void **v4; // ebp
  _BYTE *v5; // edx
  void *v6; // eax
  unsigned int result; // eax

  v3 = a3;
  v4 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = -88;
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < v5 + 1 )
  {
    v6 = sub_80CF920((int)v4, v6, (unsigned int)(v5 + 1), 1u);
    v5 = v4[1];
    *v4 = v6;
  }
  v5[(_DWORD)v6] = -88;
  v4[1] = (char *)v4[1] + 1;
  ++*(_DWORD *)(a1 + 112);
  if ( !a3 )
    v3 = strlen(s);
  sub_8078190(a1, v3);
  sub_8078190(a1, SHIWORD(v3));
  result = sub_807FAE0(*(char ***)(a1 + 108), s, v3);
  *(_DWORD *)(a1 + 112) += v3;
  return result;
}
