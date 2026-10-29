/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AC18
// Address: 0x0003AC18

//----- (0003AC18) --------------------------------------------------------
int __fastcall sub_3AC18(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r1
  int *v8; // r7
  void **v9; // r5
  void *v10; // r0

  if ( !*(_DWORD *)(a1 + 172) )
    return set_qerrno(51);
  *(_BYTE *)(a1 + 120) = -85;
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -85;
  ++*(_DWORD *)(v2 + 4);
  v6 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v6;
  v7 = *(_DWORD *)(a1 + 160);
  v8 = (int *)(a1 + 160);
  v9 = (void **)(a1 + 156);
  if ( *(_DWORD *)(a1 + 164) >= (unsigned int)(v7 + 1) )
  {
    v10 = *v9;
  }
  else
  {
    v10 = qvector_reserve(a1 + 156, *v9, v7 + 1, 4u);
    *v9 = v10;
    v7 = *v8;
  }
  *((_DWORD *)v10 + v7) = v6;
  ++*v8;
  v5 = 0;
  sub_390C4(a1, 0);
  sub_390C4(a1, 0);
  return v5;
}
