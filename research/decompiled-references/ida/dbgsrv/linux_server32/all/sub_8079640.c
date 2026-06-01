/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8079640
// Address: 0x08079640

//----- (08079640) --------------------------------------------------------
int __cdecl sub_8079640(int a1, char a2, int a3)
{
  char v3; // dl
  void **v4; // edi
  _BYTE *v5; // ecx
  void *v6; // eax
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx

  v3 = a2;
  v4 = *(void ***)(a1 + 108);
  *(_BYTE *)(a1 + 116) = a2;
  v5 = v4[1];
  v6 = *v4;
  if ( v4[2] < v5 + 1 )
  {
    v6 = sub_80CF920((int)v4, v6, (unsigned int)(v5 + 1), 1u);
    v5 = v4[1];
    v3 = a2;
    *v4 = v6;
  }
  v5[(_DWORD)v6] = v3;
  v4[1] = (char *)v4[1] + 1;
  v7 = *(_DWORD *)(a1 + 112) + 1;
  *(_DWORD *)(a1 + 112) = v7;
  v8 = (unsigned int)(a3 - 4 - v7) >> 16;
  sub_8078190(a1, a3 - 4 - v7);
  sub_8078190(a1, v8);
  while ( 1 )
  {
    v9 = *(_DWORD *)(a1 + 156);
    v10 = *(_DWORD *)(*(_DWORD *)(a1 + 152) + 4 * v9 - 4);
    if ( v9 )
      *(_DWORD *)(a1 + 156) = v9 - 1;
    if ( v10 == -1 )
      break;
    sub_807FB60(*(int **)(a1 + 108), v10, a3 - 4 - v10);
  }
  while ( 1 )
  {
    v11 = *(_DWORD *)(a1 + 144);
    v12 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 4 * v11 - 4);
    if ( v11 )
      *(_DWORD *)(a1 + 144) = v11 - 1;
    if ( v12 == -1 )
      break;
    sub_807FB60(*(int **)(a1 + 108), v12, *(_DWORD *)(a1 + 112) - 4 - v12);
  }
  return 0;
}
