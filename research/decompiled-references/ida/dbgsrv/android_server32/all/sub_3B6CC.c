/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3B6CC
// Address: 0x0003B6CC

//----- (0003B6CC) --------------------------------------------------------
int __fastcall sub_3B6CC(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r6
  size_t v4; // r7
  void *v5; // r0
  unsigned int v6; // r0
  int v7; // r1
  int *v8; // r6
  void **v9; // r5
  void *v10; // r0

  v2 = operator new(0x10u);
  v2[3] = 0;
  *v2 = 1;
  v3 = operator new(0xCu);
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    v5 = qalloc_or_throw(*(_DWORD *)(a1 + 28));
    v3[2] = v4;
    *v3 = v5;
    qmemcpy(v5, *(const void **)(a1 + 24), v4);
    v3[1] = v4;
  }
  v2[2] = v3;
  v6 = *(_DWORD *)(a1 + 200);
  v7 = *(_DWORD *)(a1 + 196);
  v8 = (int *)(a1 + 196);
  v9 = (void **)(a1 + 192);
  if ( v6 >= v7 + 1 )
  {
    v10 = *v9;
  }
  else
  {
    v10 = qvector_reserve((int)v9, *v9, v7 + 1, 4u);
    *v9 = v10;
    v7 = *v8;
  }
  *((_DWORD *)v10 + v7) = v2;
  ++*v8;
  return 0;
}
