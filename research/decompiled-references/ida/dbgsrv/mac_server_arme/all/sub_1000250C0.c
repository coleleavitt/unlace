/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000250C0
// Address: 0x00000001000250C0

//----- (00000001000250C0) ----------------------------------------------------
__int64 __fastcall sub_1000250C0(__int64 a1)
{
  char *file_line; // x0
  __int64 v3; // x8
  __int64 v4; // x9
  __int64 v5; // x20
  _QWORD *v6; // x1
  __int64 v7; // x8
  __int64 v8; // x20
  _QWORD *v9; // x1
  __int64 v10; // x8
  __int64 v11; // x20
  _QWORD *v12; // x1
  __int64 v13; // x8
  unsigned int v15; // [xsp+4h] [xbp-2Ch] BYREF

  file_line = (char *)lex_get_file_line(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL), &v15, nullptr, 0);
  sub_100022F74(a1, file_line, v15);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_QWORD *)(a1 + 144);
  v3 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v3 + 24) != 1 )
    return set_qerrno();
  v4 = *(_QWORD *)(v3 + 72);
  if ( v4 )
  {
    if ( v4 + *(int *)(a1 + 448) != *(_DWORD *)(v3 + 24) )
      return set_qerrno();
  }
  *(_BYTE *)(a1 + 212) = -91;
  v5 = *(_QWORD *)(a1 + 200);
  v6 = *(_QWORD **)v5;
  v7 = *(_QWORD *)(v5 + 8);
  if ( *(_QWORD *)(v5 + 16) < (unsigned __int64)(v7 + 1) )
  {
    v6 = qvector_reserve(*(_QWORD **)(a1 + 200), v6, v7 + 1, 1u);
    *(_QWORD *)v5 = v6;
    v7 = *(_QWORD *)(v5 + 8);
  }
  *((_BYTE *)v6 + v7) = -91;
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
  return 0;
}
