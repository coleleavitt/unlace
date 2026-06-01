/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100026B2C
// Address: 0x0000000100026B2C

//----- (0000000100026B2C) ----------------------------------------------------
__int64 __fastcall sub_100026B2C(__int64 a1)
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

  *(_BYTE *)(a1 + 212) = -89;
  v2 = *(_QWORD *)(a1 + 200);
  v3 = *(_QWORD **)v2;
  v4 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)(v2 + 16) < (unsigned __int64)(v4 + 1) )
  {
    v3 = qvector_reserve(*(_QWORD **)(a1 + 200), v3, v4 + 1, 1u);
    *(_QWORD *)v2 = v3;
    v4 = *(_QWORD *)(v2 + 8);
  }
  *((_BYTE *)v3 + v4) = -89;
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
  *((_BYTE *)v6 + v7) = -1;
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
  *((_BYTE *)v9 + v10) = -1;
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
  *((_BYTE *)v12 + v13) = -1;
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
  *((_BYTE *)v15 + v16) = 127;
  ++*(_QWORD *)(v14 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_1000268F8(a1, 3);
  return 0;
}
