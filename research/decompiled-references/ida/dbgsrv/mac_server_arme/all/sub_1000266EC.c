/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000266EC
// Address: 0x00000001000266EC

//----- (00000001000266EC) ----------------------------------------------------
__int64 __fastcall sub_1000266EC(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8
  _QWORD *v5; // x1
  __int64 v6; // x8
  _QWORD *v7; // x1
  __int64 v8; // x9
  __int64 v9; // x8
  int v10; // w20
  __int64 v11; // x20
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x20
  _QWORD *v15; // x1
  __int64 v16; // x8
  __int64 v17; // x20
  _QWORD *v18; // x1
  __int64 v19; // x8
  __int64 v20; // x20
  _QWORD *v21; // x1
  __int64 v22; // x8

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
  ++*(_DWORD *)(a1 + 208);
  v5 = *(_QWORD **)(a1 + 296);
  v6 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve((_QWORD *)(a1 + 296), v5, v6 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v5;
    v6 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v5 + v6) = 0;
  v7 = *(_QWORD **)(a1 + 296);
  v8 = *(_QWORD *)(a1 + 304);
  v9 = v8 + 1;
  *(_QWORD *)(a1 + 304) = v8 + 1;
  v10 = *(_DWORD *)(a1 + 208);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v8 + 2) )
  {
    v7 = qvector_reserve((_QWORD *)(a1 + 296), v7, v8 + 2, 4u);
    *(_QWORD *)(a1 + 296) = v7;
    v9 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v7 + v9) = v10;
  ++*(_QWORD *)(a1 + 304);
  v11 = *(_QWORD *)(a1 + 200);
  v12 = *(_QWORD **)v11;
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
  {
    v12 = qvector_reserve(*(_QWORD **)(a1 + 200), v12, v13 + 1, 1u);
    *(_QWORD *)v11 = v12;
    v13 = *(_QWORD *)(v11 + 8);
  }
  *((_BYTE *)v12 + v13) = 0;
  ++*(_QWORD *)(v11 + 8);
  ++*(_DWORD *)(a1 + 208);
  v14 = *(_QWORD *)(a1 + 200);
  v15 = *(_QWORD **)v14;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
  {
    v15 = qvector_reserve(*(_QWORD **)(a1 + 200), v15, v16 + 1, 1u);
    *(_QWORD *)v14 = v15;
    v16 = *(_QWORD *)(v14 + 8);
  }
  *((_BYTE *)v15 + v16) = 0;
  ++*(_QWORD *)(v14 + 8);
  ++*(_DWORD *)(a1 + 208);
  v17 = *(_QWORD *)(a1 + 200);
  v18 = *(_QWORD **)v17;
  v19 = *(_QWORD *)(v17 + 8);
  if ( *(_QWORD *)(v17 + 16) < (unsigned __int64)(v19 + 1) )
  {
    v18 = qvector_reserve(*(_QWORD **)(a1 + 200), v18, v19 + 1, 1u);
    *(_QWORD *)v17 = v18;
    v19 = *(_QWORD *)(v17 + 8);
  }
  *((_BYTE *)v18 + v19) = 0;
  ++*(_QWORD *)(v17 + 8);
  ++*(_DWORD *)(a1 + 208);
  v20 = *(_QWORD *)(a1 + 200);
  v21 = *(_QWORD **)v20;
  v22 = *(_QWORD *)(v20 + 8);
  if ( *(_QWORD *)(v20 + 16) < (unsigned __int64)(v22 + 1) )
  {
    v21 = qvector_reserve(*(_QWORD **)(a1 + 200), v21, v22 + 1, 1u);
    *(_QWORD *)v20 = v21;
    v22 = *(_QWORD *)(v20 + 8);
  }
  *((_BYTE *)v21 + v22) = 0;
  ++*(_QWORD *)(v20 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
