/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072790
// Address: 0x08072790

//----- (08072790) --------------------------------------------------------
int __cdecl sub_8072790(_DWORD *a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  bool v7; // zf
  int (__cdecl *v8)(int, int, int); // edi
  int v9; // esi
  int v10; // ebx
  int v12; // [esp+0h] [ebp-24h]
  int v13; // [esp+4h] [ebp-20h]

  v2 = a1[2];
  if ( !v2 || (v3 = a1[7]) == 0 )
  {
    *(_DWORD *)(a2 + 4) = -1;
    return 0;
  }
  v4 = a1[11];
  v5 = v3 - 1;
  *(_DWORD *)(a2 + 4) = -1;
  if ( v3 - 2 >= (unsigned int)(v2 - 1) )
    return 0;
  v6 = v2 - v5;
  if ( !v6 )
    return 0;
  v7 = v4 == 0;
  v13 = v6;
  v8 = (int (__cdecl *)(int, int, int))&memcmp;
  v9 = a1[6];
  if ( !v7 )
    v8 = (int (__cdecl *)(int, int, int))sub_80D0620;
  v12 = a1[1];
  v10 = 0;
  while ( v8(v10 + v12, v9, v5) )
  {
    if ( v13 == ++v10 )
      return 0;
  }
  *(_DWORD *)(a2 + 4) = v10;
  return 0;
}
