/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3AA18
// Address: 0x0003AA18

//----- (0003AA18) --------------------------------------------------------
int __fastcall sub_3AA18(int a1)
{
  _DWORD *v2; // r1
  int v3; // r2
  int *v4; // r4
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r2
  int v9; // r6
  int v10; // r0
  int v11; // r1
  void *v12; // r0
  int **v13; // r4
  int v14; // r6
  int v15; // r1
  _BYTE *v16; // r0
  _DWORD *v17; // r7
  int v18; // r0
  unsigned int v19; // r5
  int v21; // [sp+0h] [bp-14h]
  int v22; // [sp+4h] [bp-10h]
  void **v23; // [sp+Ch] [bp-8h]
  int v24; // [sp+10h] [bp-4h]

  v2 = *(_DWORD **)(a1 + 168);
  v3 = *(_DWORD *)(a1 + 172);
  v24 = v2[v3 - 1];
  v4 = (int *)(a1 + 172);
  v23 = (void **)(a1 + 168);
  if ( v3 )
  {
    *v4 = v3 - 1;
    v5 = v3 - 2;
    v6 = v2[v3 - 2];
    v7 = 0;
    v22 = v6;
    if ( v3 == 1 )
    {
      v21 = v6;
    }
    else
    {
      *v4 = v5;
      v7 = v3 - 3;
      v8 = v2[v3 - 3];
      if ( !v5 )
        v7 = 0;
      v21 = v8;
      *v4 = v7;
    }
  }
  else
  {
    v7 = 0;
    v21 = *(v2 - 1);
    v22 = v21;
  }
  v9 = v24 + 4;
  if ( *(_DWORD *)(a1 + 176) < (unsigned int)(v7 + 1) )
  {
    v2 = qvector_reserve((int)v23, v2, v7 + 1, 4u);
    *v23 = v2;
    v9 = v24 + 4;
    v7 = *v4;
  }
  v2[v7] = v9;
  v10 = *v4;
  v11 = *v4 + 1;
  *v4 = v11;
  if ( *(_DWORD *)(a1 + 176) >= (unsigned int)(v10 + 2) )
  {
    v12 = *v23;
  }
  else
  {
    v12 = qvector_reserve((int)v23, *v23, v10 + 2, 4u);
    *v23 = v12;
    v11 = *v4;
  }
  *((_DWORD *)v12 + v11) = v22;
  ++*v4;
  if ( v22 )
  {
    *(_BYTE *)(a1 + 120) = -85;
    v13 = (int **)(a1 + 112);
    v14 = *(_DWORD *)(a1 + 112);
    v15 = *(_DWORD *)(v14 + 4);
    if ( *(_DWORD *)(v14 + 8) >= (unsigned int)(v15 + 1) )
    {
      v16 = *(_BYTE **)v14;
    }
    else
    {
      v16 = qvector_reserve(*(_DWORD *)(a1 + 112), *(void **)v14, v15 + 1, 1u);
      *(_DWORD *)v14 = v16;
      v15 = *(_DWORD *)(v14 + 4);
    }
    v16[v15] = -85;
    ++*(_DWORD *)(v14 + 4);
    v18 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 116) = v18 + 1;
    v19 = v21 - 5 - v18;
    sub_390C4(a1, (unsigned __int16)(v21 - 5 - v18));
    sub_390C4(a1, HIWORD(v19));
    v17 = (_DWORD *)(a1 + 116);
    v9 = v24 + 4;
  }
  else
  {
    v13 = (int **)(a1 + 112);
    v17 = (_DWORD *)(a1 + 116);
  }
  sub_4022C(*v13, v24, *v17 - v9);
  return 0;
}
