/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3A326
// Address: 0x0003A326

//----- (0003A326) --------------------------------------------------------
int __fastcall sub_3A326(int a1)
{
  int v2; // r5
  int v3; // r1
  _BYTE *v4; // r0
  int v5; // r6
  int v6; // r2
  int v7; // r1
  int *v8; // r7
  void **v9; // r5
  int v10; // r1
  unsigned int v11; // r2
  void *v12; // r0

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
  v5 = *(_DWORD *)(a1 + 116) + 1;
  *(_DWORD *)(a1 + 116) = v5;
  sub_390C4(a1, 0);
  sub_390C4(a1, 0);
  v6 = *(_DWORD *)(a1 + 136);
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 132) + 4 * (v6 - 1));
  v8 = (int *)(a1 + 136);
  v9 = (void **)(a1 + 132);
  if ( v6 )
    *v8 = v6 - 1;
  sub_4022C(*(int **)(a1 + 112), v7, -4 - v7 + *(_DWORD *)(a1 + 116));
  v10 = *v8;
  v11 = *v8 + 1;
  if ( *(_DWORD *)(a1 + 140) >= v11 )
  {
    v12 = *v9;
  }
  else
  {
    v12 = qvector_reserve(a1 + 132, *v9, v11, 4u);
    *v9 = v12;
    v10 = *v8;
  }
  *((_DWORD *)v12 + v10) = v5;
  ++*v8;
  return 0;
}
