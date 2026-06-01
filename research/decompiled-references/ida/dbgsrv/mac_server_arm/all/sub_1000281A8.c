/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000281A8
// Address: 0x00000001000281A8

//----- (00000001000281A8) ----------------------------------------------------
__int64 __fastcall sub_1000281A8(__int64 a1)
{
  __int64 v2; // x20
  _QWORD *v3; // x1
  __int64 v4; // x8
  __int64 v5; // x20
  _QWORD *v6; // x1
  __int64 v7; // x8
  __int64 v8; // x20
  _QWORD *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x20
  _QWORD *v12; // x1
  __int64 v13; // x8
  __int64 v14; // x20
  _QWORD *v15; // x1
  __int64 v16; // x8

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
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD **)(a1 + 200), v6, v7 + 1, 1u);
    *(_QWORD *)v5 = v6;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)v6 + v7) = 0;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  v8 = *(_QWORD *)(a1 + 200);
  v9 = *(_QWORD **)v8;
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v10 + 1) )
  {
    v9 = qvector_reserve(*(_QWORD **)(a1 + 200), v9, v10 + 1, 1u);
    *(_QWORD *)v8 = v9;
    v10 = *(_QWORD *)(v8 + 8);
  }
  *((_BYTE *)v9 + v10) = 0;
  ++*(_QWORD *)(v8 + 8);
  ++*(_DWORD *)(a1 + 208);
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
  return 0;
}
