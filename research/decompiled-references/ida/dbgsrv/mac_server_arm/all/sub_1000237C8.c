/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000237C8
// Address: 0x00000001000237C8

//----- (00000001000237C8) ----------------------------------------------------
__int64 __fastcall sub_1000237C8(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8
  int v5; // w21
  __int64 v6; // x20
  _QWORD *v7; // x1
  __int64 v8; // x8
  __int64 v9; // x20
  _QWORD *v10; // x1
  __int64 v11; // x8
  __int64 v12; // x20
  _QWORD *v13; // x1
  __int64 v14; // x8
  __int64 v15; // x20
  _QWORD *v16; // x1
  __int64 v17; // x8
  __int64 v18; // x10
  int v19; // w8
  __int64 v20; // x9
  __int64 v21; // x1
  _QWORD *v22; // x1
  __int64 v23; // x8

  *(_BYTE *)(a1 + 212) = -85;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD **)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -85;
  ++*(_QWORD *)(v2 + 8);
  v5 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v5;
  v6 = *(_QWORD *)(a1 + 200);
  v7 = *(_QWORD **)v6;
  v8 = *(_QWORD *)(v6 + 8);
  if ( *(_QWORD *)(v6 + 16) < (unsigned __int64)(v8 + 1) )
  {
    v7 = qvector_reserve(*(_QWORD **)(a1 + 200), v7, v8 + 1, 1u);
    *(_QWORD *)v6 = v7;
    v8 = *(_QWORD *)(v6 + 8);
  }
  *((_BYTE *)v7 + v8) = 0;
  ++*(_QWORD *)(v6 + 8);
  ++*(_DWORD *)(a1 + 208);
  v9 = *(_QWORD *)(a1 + 200);
  v10 = *(_QWORD **)v9;
  v11 = *(_QWORD *)(v9 + 8);
  if ( *(_QWORD *)(v9 + 16) < (unsigned __int64)(v11 + 1) )
  {
    v10 = qvector_reserve(*(_QWORD **)(a1 + 200), v10, v11 + 1, 1u);
    *(_QWORD *)v9 = v10;
    v11 = *(_QWORD *)(v9 + 8);
  }
  *((_BYTE *)v10 + v11) = 0;
  ++*(_QWORD *)(v9 + 8);
  ++*(_DWORD *)(a1 + 208);
  v12 = *(_QWORD *)(a1 + 200);
  v13 = *(_QWORD **)v12;
  v14 = *(_QWORD *)(v12 + 8);
  if ( *(_QWORD *)(v12 + 16) < (unsigned __int64)(v14 + 1) )
  {
    v13 = qvector_reserve(*(_QWORD **)(a1 + 200), v13, v14 + 1, 1u);
    *(_QWORD *)v12 = v13;
    v14 = *(_QWORD *)(v12 + 8);
  }
  *((_BYTE *)v13 + v14) = 0;
  ++*(_QWORD *)(v12 + 8);
  ++*(_DWORD *)(a1 + 208);
  v15 = *(_QWORD *)(a1 + 200);
  v16 = *(_QWORD **)v15;
  v17 = *(_QWORD *)(v15 + 8);
  if ( *(_QWORD *)(v15 + 16) < (unsigned __int64)(v17 + 1) )
  {
    v16 = qvector_reserve(*(_QWORD **)(a1 + 200), v16, v17 + 1, 1u);
    *(_QWORD *)v15 = v16;
    v17 = *(_QWORD *)(v15 + 8);
  }
  *((_BYTE *)v16 + v17) = 0;
  ++*(_QWORD *)(v15 + 8);
  v18 = *(_QWORD *)(a1 + 224);
  v19 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = v19 + 1;
  v20 = *(_QWORD *)(a1 + 232);
  v21 = *(unsigned int *)(v18 + 4 * v20 - 4);
  if ( v20 )
    *(_QWORD *)(a1 + 232) = v20 - 1;
  sub_10002CBF8(*(_QWORD **)(a1 + 200), v21, v19 - v21 - 3);
  v22 = *(_QWORD **)(a1 + 224);
  v23 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) < (unsigned __int64)(v23 + 1) )
  {
    v22 = qvector_reserve((_QWORD *)(a1 + 224), v22, v23 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v22;
    v23 = *(_QWORD *)(a1 + 232);
  }
  *((_DWORD *)v22 + v23) = v5;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
