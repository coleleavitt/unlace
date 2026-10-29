/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48D00
// Address: 0x00048D00

//----- (00048D00) --------------------------------------------------------
int __cdecl sub_48D00(int a1)
{
  int v1; // edi
  char v2; // dl
  int v3; // ecx
  _BYTE *v4; // eax
  int v5; // edi
  int v6; // ecx
  _BYTE *v7; // eax
  char v9; // [esp+Bh] [ebp-11h]

  v1 = *(_DWORD *)(a1 + 108);
  v2 = 112;
  if ( *(_DWORD *)(a1 + 120) != 1 )
    v2 = -32;
  *(_BYTE *)(a1 + 116) = v2;
  v3 = *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v1;
  }
  else
  {
    v9 = v2;
    v4 = qvector_reserve(v1, *(void **)v1, v3 + 1, 1u);
    v2 = v9;
    *(_DWORD *)v1 = v4;
    v3 = *(_DWORD *)(v1 + 4);
  }
  v4[v3] = v2;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 112);
  *(_BYTE *)(a1 + 116) = -81;
  v5 = *(_DWORD *)(a1 + 108);
  v6 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_BYTE **)v5;
  }
  else
  {
    v7 = qvector_reserve(v5, *(void **)v5, v6 + 1, 1u);
    *(_DWORD *)v5 = v7;
    v6 = *(_DWORD *)(v5 + 4);
  }
  v7[v6] = -81;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
