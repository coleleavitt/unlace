/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D230
// Address: 0x0004D230

//----- (0004D230) --------------------------------------------------------
int __cdecl sub_4D230(int a1)
{
  int v1; // edi
  int v2; // ecx
  _BYTE *v3; // eax
  size_t v4; // eax
  char *v5; // ecx
  int v6; // edi
  int v7; // ecx
  _BYTE *v8; // eax

  *(_BYTE *)(a1 + 116) = -86;
  v1 = *(_DWORD *)(a1 + 108);
  v2 = *(_DWORD *)(v1 + 4);
  if ( *(_DWORD *)(v1 + 8) >= (unsigned int)(v2 + 1) )
  {
    v3 = *(_BYTE **)v1;
  }
  else
  {
    v3 = qvector_reserve(v1, *(void **)v1, v2 + 1, 1u);
    *(_DWORD *)v1 = v3;
    v2 = *(_DWORD *)(v1 + 4);
  }
  v3[v2] = -86;
  ++*(_DWORD *)(v1 + 4);
  ++*(_DWORD *)(a1 + 112);
  v4 = *(_DWORD *)(a1 + 24);
  if ( v4 )
  {
    --v4;
    v5 = *(char **)(a1 + 20);
  }
  else
  {
    v5 = byte_EF875;
  }
  sub_47000(a1, v5, v4);
  *(_BYTE *)(a1 + 116) = 1;
  v6 = *(_DWORD *)(a1 + 108);
  v7 = *(_DWORD *)(v6 + 4);
  if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_BYTE **)v6;
  }
  else
  {
    v8 = qvector_reserve(v6, *(void **)v6, v7 + 1, 1u);
    *(_DWORD *)v6 = v8;
    v7 = *(_DWORD *)(v6 + 4);
  }
  v8[v7] = 1;
  ++*(_DWORD *)(v6 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
