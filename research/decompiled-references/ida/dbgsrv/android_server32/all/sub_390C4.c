/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_390C4
// Address: 0x000390C4

//----- (000390C4) --------------------------------------------------------
int __fastcall sub_390C4(int a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r1
  _BYTE *v6; // r0
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r1
  _BYTE *v10; // r0
  int result; // r0

  v4 = *(_DWORD *)(a1 + 112);
  v5 = *(_DWORD *)(v4 + 4);
  if ( *(_DWORD *)(v4 + 8) >= (unsigned int)(v5 + 1) )
  {
    v6 = *(_BYTE **)v4;
  }
  else
  {
    v6 = qvector_reserve(v4, *(void **)v4, v5 + 1, 1u);
    *(_DWORD *)v4 = v6;
    v5 = *(_DWORD *)(v4 + 4);
  }
  v6[v5] = a2;
  ++*(_DWORD *)(v4 + 4);
  ++*(_DWORD *)(a1 + 116);
  v7 = a2 >> 8;
  v8 = *(_DWORD *)(a1 + 112);
  v9 = *(_DWORD *)(v8 + 4);
  if ( *(_DWORD *)(v8 + 8) >= (unsigned int)(v9 + 1) )
  {
    v10 = *(_BYTE **)v8;
  }
  else
  {
    v10 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v8, v9 + 1, 1u);
    *(_DWORD *)v8 = v10;
    v9 = *(_DWORD *)(v8 + 4);
  }
  v10[v9] = v7;
  ++*(_DWORD *)(v8 + 4);
  result = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = result;
  return result;
}
