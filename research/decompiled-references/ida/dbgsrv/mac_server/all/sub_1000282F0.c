/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000282F0
// Address: 0x00000001000282F0

//----- (00000001000282F0) ----------------------------------------------------
__int64 __fastcall sub_1000282F0(__int64 a1)
{
  const char *file_line; // rax
  __int64 v2; // rax
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
  unsigned int v14; // [rsp+4h] [rbp-1Ch] BYREF

  file_line = (const char *)lex_get_file_line(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL), &v14, nullptr, 0);
  sub_1000260C0(a1, file_line, v14);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_DWORD *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v2 + 24) != 1 )
    return set_qerrno();
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 )
  {
    if ( *(int *)(a1 + 448) + v3 != *(_DWORD *)(v2 + 24) )
      return set_qerrno();
  }
  *(_BYTE *)(a1 + 212) = -91;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(void **)v4;
  v6 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) < (unsigned __int64)(v6 + 1) )
  {
    v5 = qvector_reserve(*(_QWORD *)(a1 + 200), v5, v6 + 1, 1u);
    *(_QWORD *)v4 = v5;
    v6 = *(_QWORD *)(v4 + 8);
  }
  *((_BYTE *)v5 + v6) = -91;
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
  return 0;
}
