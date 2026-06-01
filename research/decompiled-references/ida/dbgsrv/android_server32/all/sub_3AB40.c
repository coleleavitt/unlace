/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AB40
// Address: 0x0003AB40

//----- (0003AB40) --------------------------------------------------------
int __fastcall sub_3AB40(int a1, char a2, int a3)
{
  int v6; // r7
  int v7; // r1
  _BYTE *v8; // r0
  int v9; // r0
  unsigned int v10; // r6
  int v11; // r5
  int *v12; // r6
  int v13; // r0
  int v14; // r1
  int *v15; // r5
  int v16; // r0
  int v17; // r1

  *(_BYTE *)(a1 + 120) = a2;
  v6 = *(_DWORD *)(a1 + 112);
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
  v8[v7] = a2;
  ++*(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 116) = v9 + 1;
  v10 = a3 - 5 - v9;
  sub_390C4(a1, (unsigned __int16)(a3 - 5 - v9));
  sub_390C4(a1, HIWORD(v10));
  v11 = a3 - 4;
  v12 = (int *)(a1 + 160);
  while ( 1 )
  {
    v13 = *v12 - 1;
    v14 = *(_DWORD *)(*(_DWORD *)(a1 + 156) + 4 * v13);
    if ( *v12 )
      *v12 = v13;
    if ( v14 == -1 )
      break;
    sub_4022C(*(int **)(a1 + 112), v14, v11 - v14);
  }
  v15 = (int *)(a1 + 148);
  while ( 1 )
  {
    v16 = *v15 - 1;
    v17 = *(_DWORD *)(*(_DWORD *)(a1 + 144) + 4 * v16);
    if ( *v15 )
      *v15 = v16;
    if ( v17 == -1 )
      break;
    sub_4022C(*(int **)(a1 + 112), v17, -4 - v17 + *(_DWORD *)(a1 + 116));
  }
  return 0;
}
