/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_499F0
// Address: 0x000499F0

//----- (000499F0) --------------------------------------------------------
int __cdecl sub_499F0(int a1, char a2, int a3)
{
  char v3; // dl
  int v4; // edi
  int v5; // ecx
  _BYTE *v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v13; // [esp+8h] [ebp-14h]

  v3 = a2;
  *(_BYTE *)(a1 + 116) = a2;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_BYTE **)v4;
  }
  else
  {
    v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
    v3 = a2;
    *(_DWORD *)v4 = v6;
    v5 = *(_DWORD *)(v4 + 4);
  }
  v6[v5] = v3;
  ++*(_DWORD *)(v4 + 4);
  v7 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = v7 + 1;
  v13 = a3 - 5 - v7;
  sub_46F00(a1, a3 - 5 - v7);
  sub_46F00(a1, SHIWORD(v13));
  while ( 1 )
  {
    v8 = *(_DWORD *)(a1 + 156);
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 152) + 4 * v8 - 4);
    if ( v8 )
      *(_DWORD *)(a1 + 156) = v8 - 1;
    if ( v9 == -1 )
      break;
    sub_52090(*(_DWORD **)(a1 + 108), v9, a3 - 4 - v9);
  }
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 144);
    v11 = *(_DWORD *)(*(_DWORD *)(a1 + 140) + 4 * v10 - 4);
    if ( v10 )
      *(_DWORD *)(a1 + 144) = v10 - 1;
    if ( v11 == -1 )
      break;
    sub_52090(*(_DWORD **)(a1 + 108), v11, *(_DWORD *)(a1 + 112) + -4 - v11);
  }
  return 0;
}
