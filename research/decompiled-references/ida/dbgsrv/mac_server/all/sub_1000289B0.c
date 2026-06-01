/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000289B0
// Address: 0x00000001000289B0

//----- (00000001000289B0) ----------------------------------------------------
__int64 __fastcall sub_1000289B0(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rax
  __int64 v3; // rcx
  int v4; // r15d
  __int64 v5; // r14
  void *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r14
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 *v19; // rsi
  void *v20; // rax
  __int64 v21; // rcx

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
  v4 = *(_DWORD *)(a1 + 208) + 1;
  *(_DWORD *)(a1 + 208) = v4;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(void **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD *)(a1 + 200), v6, v7 + 1, 1u);
    *(_QWORD *)v5 = v6;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)v6 + v7) = 0;
  ++*(_QWORD *)(v5 + 8);
  ++*(_DWORD *)(a1 + 208);
  v8 = *(_QWORD *)(a1 + 200);
  v9 = *(void **)v8;
  v10 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)(v10 + 1) )
  {
    v9 = qvector_reserve(*(_QWORD *)(a1 + 200), v9, v10 + 1, 1u);
    *(_QWORD *)v8 = v9;
    v10 = *(_QWORD *)(v8 + 8);
  }
  *((_BYTE *)v9 + v10) = 0;
  ++*(_QWORD *)(v8 + 8);
  ++*(_DWORD *)(a1 + 208);
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
  v17 = *(_DWORD *)(a1 + 208);
  *(_DWORD *)(a1 + 208) = v17 + 1;
  v18 = *(_QWORD *)(a1 + 232);
  v19 = (__int64 *)*(unsigned int *)(*(_QWORD *)(a1 + 224) + 4 * v18 - 4);
  if ( v18 )
    *(_QWORD *)(a1 + 232) = v18 - 1;
  sub_100032CB0(*(void ***)(a1 + 200), v19, v17 - (_DWORD)v19 - 3);
  v20 = *(void **)(a1 + 224);
  v21 = *(_QWORD *)(a1 + 232);
  if ( *(_QWORD *)(a1 + 240) < (unsigned __int64)(v21 + 1) )
  {
    v20 = qvector_reserve(a1 + 224, v20, v21 + 1, 4u);
    *(_QWORD *)(a1 + 224) = v20;
    v21 = *(_QWORD *)(a1 + 232);
  }
  *((_DWORD *)v20 + v21) = v4;
  ++*(_QWORD *)(a1 + 232);
  return 0;
}
