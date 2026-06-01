/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D1B0
// Address: 0x0004D1B0

//----- (0004D1B0) --------------------------------------------------------
int __cdecl sub_4D1B0(int a1)
{
  size_t v1; // eax
  char *v2; // ecx
  int v3; // edi
  int v4; // ecx
  _BYTE *v5; // eax

  v1 = *(_DWORD *)(a1 + 24);
  if ( v1 )
  {
    --v1;
    v2 = *(char **)(a1 + 20);
  }
  else
  {
    v2 = byte_EF875;
  }
  sub_47000(a1, v2, v1);
  *(_BYTE *)(a1 + 116) = -80;
  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(v3 + 4);
  if ( *(_DWORD *)(v3 + 8) >= (unsigned int)(v4 + 1) )
  {
    v5 = *(_BYTE **)v3;
  }
  else
  {
    v5 = qvector_reserve(v3, *(void **)v3, v4 + 1, 1u);
    *(_DWORD *)v3 = v5;
    v4 = *(_DWORD *)(v3 + 4);
  }
  v5[v4] = -80;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 112);
  return 0;
}
