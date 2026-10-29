/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A966
// Address: 0x0003A966

//----- (0003A966) --------------------------------------------------------
int __fastcall sub_3A966(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r1
  int *v6; // r6
  void **v7; // r5
  void *v8; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r7
  void *v13; // r0

  *(_BYTE *)(a1 + 120) = -85;
  v2 = *(_DWORD *)(a1 + 112);
  v3 = *(_DWORD *)(v2 + 4);
  if ( *(_DWORD *)(v2 + 8) >= (unsigned int)(v3 + 1) )
  {
    v4 = *(_BYTE **)v2;
  }
  else
  {
    v4 = qvector_reserve(v2, *(void **)v2, v3 + 1, 1u);
    *(_DWORD *)v2 = v4;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4[v3] = -85;
  ++*(_DWORD *)(v2 + 4);
  ++*(_DWORD *)(a1 + 116);
  v5 = *(_DWORD *)(a1 + 172);
  v6 = (int *)(a1 + 172);
  v7 = (void **)(a1 + 168);
  if ( *(_DWORD *)(a1 + 176) >= (unsigned int)(v5 + 1) )
  {
    v8 = *v7;
  }
  else
  {
    v8 = qvector_reserve(a1 + 168, *v7, v5 + 1, 4u);
    *v7 = v8;
    v5 = *v6;
  }
  *((_DWORD *)v8 + v5) = 0;
  v9 = *v6;
  v10 = *v6 + 1;
  *v6 = v10;
  v11 = *(_DWORD *)(a1 + 116);
  if ( *(_DWORD *)(a1 + 176) >= (unsigned int)(v9 + 2) )
  {
    v13 = *v7;
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 116);
    v13 = qvector_reserve(a1 + 168, *v7, v9 + 2, 4u);
    v11 = v12;
    *v7 = v13;
    v10 = *v6;
  }
  *((_DWORD *)v13 + v10) = v11;
  ++*v6;
  sub_390C4(a1, 0);
  sub_390C4(a1, 0);
  return 0;
}
