/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100029750
// Address: 0x0000000100029750

//----- (0000000100029750) ----------------------------------------------------
__int64 __fastcall sub_100029750(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  void *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  unsigned __int64 v9; // rdx
  _DWORD *v10; // rax
  __int64 v11; // r14
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r14
  void *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  void *v21; // rax
  __int64 v22; // rcx

  *(_BYTE *)(a1 + 212) = -85;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(void **)v1;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
    *(_QWORD *)v1 = v2;
    v3 = *(_QWORD *)(v1 + 8);
  }
  *((_BYTE *)v2 + v3) = -85;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  v4 = *(void **)(a1 + 296);
  v5 = *(_QWORD *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 312) < (unsigned __int64)(v5 + 1) )
  {
    v4 = qvector_reserve(a1 + 296, v4, v5 + 1, 4u);
    *(_QWORD *)(a1 + 296) = v4;
    v5 = *(_QWORD *)(a1 + 304);
  }
  *((_DWORD *)v4 + v5) = 0;
  v6 = *(_QWORD *)(a1 + 304);
  v7 = v6 + 1;
  *(_QWORD *)(a1 + 304) = v6 + 1;
  v8 = *(_DWORD *)(a1 + 208);
  v9 = v6 + 2;
  v10 = *(_DWORD **)(a1 + 296);
  if ( *(_QWORD *)(a1 + 312) < v9 )
  {
    v10 = qvector_reserve(a1 + 296, *(void **)(a1 + 296), v9, 4u);
    *(_QWORD *)(a1 + 296) = v10;
    v7 = *(_QWORD *)(a1 + 304);
  }
  v10[v7] = v8;
  ++*(_QWORD *)(a1 + 304);
  v11 = *(_QWORD *)(a1 + 200);
  v12 = *(void **)v11;
  v13 = *(_QWORD *)(v11 + 8);
  if ( *(_QWORD *)(v11 + 16) < (unsigned __int64)(v13 + 1) )
  {
    v12 = qvector_reserve(*(_QWORD *)(a1 + 200), v12, v13 + 1, 1u);
    *(_QWORD *)v11 = v12;
    v13 = *(_QWORD *)(v11 + 8);
  }
  *((_BYTE *)v12 + v13) = 0;
  ++*(_QWORD *)(v11 + 8);
  ++*(_DWORD *)(a1 + 208);
  v14 = *(_QWORD *)(a1 + 200);
  v15 = *(void **)v14;
  v16 = *(_QWORD *)(v14 + 8);
  if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
  {
    v15 = qvector_reserve(*(_QWORD *)(a1 + 200), v15, v16 + 1, 1u);
    *(_QWORD *)v14 = v15;
    v16 = *(_QWORD *)(v14 + 8);
  }
  *((_BYTE *)v15 + v16) = 0;
  ++*(_QWORD *)(v14 + 8);
  ++*(_DWORD *)(a1 + 208);
  v17 = *(_QWORD *)(a1 + 200);
  v18 = *(void **)v17;
  v19 = *(_QWORD *)(v17 + 8);
  if ( *(_QWORD *)(v17 + 16) < (unsigned __int64)(v19 + 1) )
  {
    v18 = qvector_reserve(*(_QWORD *)(a1 + 200), v18, v19 + 1, 1u);
    *(_QWORD *)v17 = v18;
    v19 = *(_QWORD *)(v17 + 8);
  }
  *((_BYTE *)v18 + v19) = 0;
  ++*(_QWORD *)(v17 + 8);
  ++*(_DWORD *)(a1 + 208);
  v20 = *(_QWORD *)(a1 + 200);
  v21 = *(void **)v20;
  v22 = *(_QWORD *)(v20 + 8);
  if ( *(_QWORD *)(v20 + 16) < (unsigned __int64)(v22 + 1) )
  {
    v21 = qvector_reserve(*(_QWORD *)(a1 + 200), v21, v22 + 1, 1u);
    *(_QWORD *)v20 = v21;
    v22 = *(_QWORD *)(v20 + 8);
  }
  *((_BYTE *)v21 + v22) = 0;
  ++*(_QWORD *)(v20 + 8);
  ++*(_DWORD *)(a1 + 208);
  return 0;
}
