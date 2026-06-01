/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8078C40
// Address: 0x08078C40

//----- (08078C40) --------------------------------------------------------
int __cdecl sub_8078C40(int a1)
{
  int v1; // eax
  int v2; // edx
  int v3; // eax
  void **v5; // edi
  _BYTE *v6; // edx
  void *v7; // eax

  v1 = *(_DWORD *)(a1 + 132);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 128) + 4 * v1 - 4);
  if ( v1 )
    *(_DWORD *)(a1 + 132) = v1 - 1;
  v3 = *(_DWORD *)(a1 + 112) - 4 - v2;
  if ( v3 )
  {
    sub_807FB60(*(int **)(a1 + 108), v2, v3);
    *(_BYTE *)(a1 + 116) = -1;
    return 0;
  }
  else if ( (unsigned __int8)sub_8077EF0(a1, 5u) == 0xAB )
  {
    v5 = *(void ***)(a1 + 108);
    *(_BYTE *)(a1 + 116) = -85;
    v6 = v5[1];
    v7 = *v5;
    if ( v5[2] < v6 + 1 )
    {
      v7 = sub_80CF920((int)v5, v7, (unsigned int)(v6 + 1), 1u);
      v6 = v5[1];
      *v5 = v7;
    }
    v6[(_DWORD)v7] = -85;
    v5[1] = (char *)v5[1] + 1;
    ++*(_DWORD *)(a1 + 112);
    sub_8078190(a1, 0);
    sub_8078190(a1, 0);
    return 0;
  }
  else
  {
    sub_8077FD0(a1);
    return 0;
  }
}
