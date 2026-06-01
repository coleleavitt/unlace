/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A11C
// Address: 0x0003A11C

//----- (0003A11C) --------------------------------------------------------
int __fastcall sub_3A11C(int a1)
{
  char v2; // r7
  int v3; // r5
  int v4; // r1
  _BYTE *v5; // r0
  int v6; // r5
  int v7; // r1
  _BYTE *v8; // r0

  v2 = 112;
  if ( *(_DWORD *)(a1 + 124) != 1 )
    v2 = -32;
  *(_BYTE *)(a1 + 120) = v2;
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
  v5[v4] = v2;
  ++*(_DWORD *)(v3 + 4);
  ++*(_DWORD *)(a1 + 116);
  *(_BYTE *)(a1 + 120) = -81;
  v6 = *(_DWORD *)(a1 + 112);
  v7 = *(_DWORD *)(v6 + 4);
  if ( *(_DWORD *)(v6 + 8) >= (unsigned int)(v7 + 1) )
  {
    v8 = *(_BYTE **)v6;
  }
  else
  {
    v8 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v6, v7 + 1, 1u);
    *(_DWORD *)v6 = v8;
    v7 = *(_DWORD *)(v6 + 4);
  }
  v8[v7] = -81;
  ++*(_DWORD *)(v6 + 4);
  ++*(_DWORD *)(a1 + 116);
  return 0;
}
