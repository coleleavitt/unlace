/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002BCD0
// Address: 0x000000010002BCD0

//----- (000000010002BCD0) ----------------------------------------------------
__int64 __fastcall sub_10002BCD0(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  void *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rcx

  *(_BYTE *)(a1 + 212) = -89;
  v1 = *(_QWORD *)(a1 + 200);
  v2 = *(void **)v1;
  v3 = *(_QWORD *)(v1 + 8);
  if ( *(_QWORD *)(v1 + 16) < (unsigned __int64)(v3 + 1) )
  {
    v2 = qvector_reserve(*(_QWORD *)(a1 + 200), v2, v3 + 1, 1u);
    *(_QWORD *)v1 = v2;
    v3 = *(_QWORD *)(v1 + 8);
  }
  *((_BYTE *)v2 + v3) = -89;
  ++*(_QWORD *)(v1 + 8);
  ++*(_DWORD *)(a1 + 208);
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(void **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
    *(_QWORD *)v4 = v5;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = -1;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  v7 = *(_QWORD *)(a1 + 200);
  v8 = *(void **)v7;
  v9 = *(_QWORD *)(v7 + 8);
  if ( *(_QWORD *)(v7 + 16) < (unsigned __int64)(v9 + 1) )
  {
    v8 = qvector_reserve(*(_QWORD *)(a1 + 200), v8, v9 + 1, 1u);
    *(_QWORD *)v7 = v8;
    v9 = *(_QWORD *)(v7 + 8);
  }
  *((_BYTE *)v8 + v9) = -1;
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
  *((_BYTE *)v11 + v12) = -1;
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
  *((_BYTE *)v14 + v15) = 127;
  ++*(_QWORD *)(v13 + 8);
  ++*(_DWORD *)(a1 + 208);
  sub_10002BA90(a1, 3);
  return 0;
}
