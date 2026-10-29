/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_62EC0
// Address: 0x0000000000062EC0

//----- (0000000000062EC0) ----------------------------------------------------
__int64 __fastcall sub_62EC0(__int64 a1)
{
  const char *file_line; // rax
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // rcx
  char *v6; // rax
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v10; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+8h] [rbp-20h]

  v11 = __readfsqword(0x28u);
  file_line = (const char *)lex_get_file_line(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 32LL), &v10, nullptr, 0);
  sub_60DD0(a1, file_line, v10);
  *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL) = *(_DWORD *)(a1 + 144);
  v2 = *(_QWORD *)(a1 + 192);
  if ( *(_DWORD *)(a1 + 216) == 2 && *(_DWORD *)(v2 + 24) != 1 )
  {
    v8 = 1585;
    return (unsigned int)set_qerrno(v8);
  }
  v3 = *(_QWORD *)(v2 + 72);
  if ( v3 && *(int *)(a1 + 448) + v3 != *(_DWORD *)(v2 + 24) )
  {
    v8 = 1268;
    return (unsigned int)set_qerrno(v8);
  }
  *(_BYTE *)(a1 + 212) = -91;
  v4 = *(_QWORD *)(a1 + 200);
  v5 = *(_QWORD *)(v4 + 8);
  if ( *(_QWORD *)(v4 + 16) >= (unsigned __int64)(v5 + 1) )
  {
    v6 = *(char **)v4;
  }
  else
  {
    v6 = (char *)qvector_reserve(*(_QWORD *)(a1 + 200), *(char **)v4, v5 + 1, 1u);
    *(_QWORD *)v4 = v6;
    v5 = *(_QWORD *)(v4 + 8);
  }
  v6[v5] = -91;
  ++*(_QWORD *)(v4 + 8);
  ++*(_DWORD *)(a1 + 208);
  v7 = 0;
  sub_616A0(a1, 0);
  return v7;
}
