/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029410
// Address: 0x0000000100029410

//----- (0000000100029410) ----------------------------------------------------
__int64 __fastcall sub_100029410(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  int v4; // r14d
  __int64 v5; // rcx
  _DWORD *v6; // rax
  __int64 v7; // r14
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  void *v17; // rax
  __int64 v18; // rcx

  *(_BYTE *)(a1 + 212) = -83;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(void **)v1;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
    *(_QWORD *)v1 = v2;
    v3 = *(_QWORD *)(v1 + 8);
  }
  *((_BYTE *)v2 + v3) = -83;
  ++*(_QWORD *)(v1 + 8);
  v4 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v4;
  v5 = *(_QWORD *)(a1 + 304);
  v6 = *(_DWORD **)(a1 + 296);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v5 + 1) )
  {
    v6 = qvector_reserve(a1 + 296, *(void **)(a1 + 296), v5 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v6;
    v5 = *(_QWORD *)(a1 + 304);
  }
  v6[v5] = v4;
  ++*(_QWORD *)(a1 + 304);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(void **)v7;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve(*(_QWORD *)(a1 + 200), v8, v9 + 1, 1u);
    *(_QWORD *)v7 = v8;
    v9 = *(_QWORD *)(v7 + 8);
  }
  *((_BYTE *)v8 + v9) = 0;
  ++*(_QWORD *)(v7 + 8);
  ++*(_DWORD *)(a1 + 208);
  v10 = *(_QWORD *)(a1 + 200);
  v11 = *(void **)v10;
  v12 = *(_QWORD *)(v10 + 8);
  if ( *(_QWORD *)(v10 + 16) < (unsigned __int64)(v12 + 1) )
  {
    v11 = qvector_reserve(*(_QWORD *)(a1 + 200), v11, v12 + 1, 1u);
    *(_QWORD *)v10 = v11;
    v12 = *(_QWORD *)(v10 + 8);
  }
  *((_BYTE *)v11 + v12) = 0;
  ++*(_QWORD *)(v10 + 8);
  ++*(_DWORD *)(a1 + 208);
  v13 = *(_QWORD *)(a1 + 200);
  v14 = *(void **)v13;
  v15 = *(_QWORD *)(v13 + 8);
  if ( *(_QWORD *)(v13 + 16) < (unsigned __int64)(v15 + 1) )
  {
    v14 = qvector_reserve(*(_QWORD *)(a1 + 200), v14, v15 + 1, 1u);
    *(_QWORD *)v13 = v14;
    v15 = *(_QWORD *)(v13 + 8);
  }
  *((_BYTE *)v14 + v15) = 0;
  ++*(_QWORD *)(v13 + 8);
  ++*(_DWORD *)(a1 + 208);
  v16 = *(_QWORD *)(a1 + 200);
  v17 = *(void **)v16;
  v18 = *(_QWORD *)(v16 + 8);
  if ( *(_QWORD *)(v16 + 16) < (unsigned __int64)(v18 + 1) )
  {
    v17 = qvector_reserve(*(_QWORD *)(a1 + 200), v17, v18 + 1, 1u);
    *(_QWORD *)v16 = v17;
    v18 = *(_QWORD *)(v16 + 8);
  }
  *((_BYTE *)v17 + v18) = 0;
  ++*(_QWORD *)(v16 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
