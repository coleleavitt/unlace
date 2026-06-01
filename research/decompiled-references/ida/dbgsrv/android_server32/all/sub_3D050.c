/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D050
// Address: 0x0003D050

//----- (0003D050) --------------------------------------------------------
int __fastcall sub_3D050(int a1)
{
  int v2; // r0
  const char *v3; // r1
  size_t v4; // r2
  int v5; // r5
  int v6; // r1
  _BYTE *v7; // r0

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
    v3 = *(const char **)(a1 + 24);
  else
    v3 = &byte_B3CBE;
  v4 = v2 - 1;
  if ( !v2 )
    v4 = 0;
  sub_39160(a1, v3, v4);
  *(_BYTE *)(a1 + 120) = -80;
  v5 = *(_DWORD *)(a1 + 112);
  v6 = *(_DWORD *)(v5 + 4);
  if ( *(_DWORD *)(v5 + 8) >= (unsigned int)(v6 + 1) )
  {
    v7 = *(_BYTE **)v5;
  }
  else
  {
    v7 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v5, v6 + 1, 1u);
    *(_DWORD *)v5 = v7;
    v6 = *(_DWORD *)(v5 + 4);
  }
  v7[v6] = -80;
  ++*(_DWORD *)(v5 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
