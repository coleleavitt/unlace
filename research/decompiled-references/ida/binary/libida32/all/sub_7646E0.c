__int64 __fastcall sub_7646E0(__int64 a1)
{
  __int64 v1; // rax
  const char *file_line; // rsi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v12; // rax
  unsigned int v13; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 96);
  v14 = __readfsqword(0x28u);
  file_line = (const char *)lex_get_file_line(*(_QWORD *)(v1 + 32), &v13, 0, 0);
  sub_763B50(a1, file_line, v13, v3, v4, v5);
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL) = *(_QWORD *)(a1 + 136);
  v6 = *(_QWORD *)(a1 + 184);
  if ( *(_DWORD *)(a1 + 208) == 2 && *(_DWORD *)(v6 + 24) != 1 )
    return set_qerrno(1585, file_line);
  v7 = *(_QWORD *)(v6 + 72);
  if ( v7 && v7 + *(int *)(a1 + 440) != *(_DWORD *)(v6 + 24) )
    return set_qerrno(1268, file_line);
  v8 = *(__int64 **)(a1 + 192);
  *(_BYTE *)(a1 + 204) = -91;
  v9 = v8[1];
  v10 = *v8;
  if ( v8[2] < (unsigned __int64)(v9 + 1) )
  {
    v12 = qvector_reserve(v8, v10, v9 + 1, 1);
    *v8 = v12;
    v10 = v12;
    v9 = v8[1];
  }
  *(_BYTE *)(v10 + v9) = -91;
  ++v8[1];
  ++*(_DWORD *)(a1 + 200);
  sub_764370(a1, 0);
  return 0;
}

