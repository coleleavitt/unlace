/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807A0A0
// Address: 0x0807A0A0

//----- (0807A0A0) --------------------------------------------------------
int __cdecl sub_807A0A0(_DWORD *a1)
{
  int v1; // eax
  unsigned __int16 v2; // dx
  int v3; // eax
  int v4; // edx
  int v5; // ebp
  size_t v6; // edi
  int v7; // eax
  int v8; // edx
  void *v9; // eax
  int v11; // eax
  void *v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  void *v16; // ecx
  void *ptr; // [esp+0h] [ebp-20h]

  sub_8079EA0((int)a1, 2);
  v1 = a1[45];
  v2 = *(_WORD *)(a1[44] + 2 * v1 - 2);
  if ( v1 )
    a1[45] = v1 - 1;
  *(_DWORD *)(*(_DWORD *)(a1[47] + 4 * a1[48] - 4) + 12) = v2;
  v3 = a1[23];
  v4 = a1[22];
  v5 = v4 + 12 * v3 - 12;
  v6 = *(_DWORD *)(v5 + 4);
  if ( !v6 )
  {
    if ( v3 )
    {
      v7 = v3 - 1;
      a1[23] = v7;
      v8 = v4 + 12 * v7;
      v9 = *(void **)v8;
      if ( *(_DWORD *)v8 )
      {
        *(_DWORD *)(v8 + 4) = 0;
        sub_80CF780(v9);
      }
    }
    return 0;
  }
  ptr = sub_80CF8B0(*(_DWORD *)(v5 + 4));
  memcpy(ptr, *(const void **)v5, v6);
  v11 = a1[23];
  v12 = ptr;
  if ( v11 )
  {
    v13 = a1[22];
    v14 = v11 - 1;
    a1[23] = v14;
    v15 = v13 + 12 * v14;
    v16 = *(void **)v15;
    if ( *(_DWORD *)v15 )
    {
      *(_DWORD *)(v15 + 4) = 0;
      sub_80CF780(v16);
      v12 = ptr;
    }
  }
  if ( !v12 )
    return 0;
  sub_80CF780(v12);
  return 0;
}
