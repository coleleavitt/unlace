/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D0AC
// Address: 0x0003D0AC

//----- (0003D0AC) --------------------------------------------------------
int __fastcall sub_3D0AC(int a1)
{
  _BYTE *v2; // r6
  int v3; // r5
  int v4; // r1
  _BYTE *v5; // r0
  int v6; // r0
  const char *v7; // r1
  size_t v8; // r2
  int v9; // r5
  int v10; // r1
  _BYTE *v11; // r0

  *(_BYTE *)(a1 + 120) = -86;
  v2 = (_BYTE *)(a1 + 120);
  v3 = *(_DWORD *)(a1 + 112);
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
  v5[v4] = -86;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 116);
  v6 = *(_DWORD *)(a1 + 28);
  if ( v6 )
    v7 = *(const char **)(a1 + 24);
  else
    v7 = &byte_B3CBE;
  v8 = v6 - 1;
  if ( !v6 )
    v8 = 0;
  sub_39160(a1, v7, v8);
  *v2 = 1;
  v9 = *(_DWORD *)(a1 + 112);
  v10 = *(_DWORD *)(v9 + 4);
  if ( *(_DWORD *)(v9 + 8) >= (unsigned int)(v10 + 1) )
  {
    v11 = *(_BYTE **)v9;
  }
  else
  {
    v11 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v9, v10 + 1, 1u);
    *(_DWORD *)v9 = v11;
    v10 = *(_DWORD *)(v9 + 4);
  }
  v11[v10] = 1;
  ++*(_DWORD *)(v9 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;
