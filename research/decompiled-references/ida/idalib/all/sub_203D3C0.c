__int64 __fastcall sub_203D3C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r13d
  size_t v5; // rax
  unsigned __int8 v6; // al
  __int64 *v7; // rax
  __int64 v8; // r13
  size_t v9; // rax
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 v12; // rbx
  size_t v13; // rax
  __int64 v15; // [rsp+0h] [rbp-48h] BYREF
  char v16; // [rsp+8h] [rbp-40h]
  char *v17; // [rsp+10h] [rbp-38h]
  __int64 v18; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIMacroFile(");
  v4 = *(_DWORD *)(a2 + 4);
  v18 = a3;
  v15 = a1;
  v16 = 1;
  v17 = ", ";
  v5 = j__strlen("line");
  sub_2031290((__int64)&v15, "line", v5, v4);
  v6 = *(_BYTE *)(a2 - 16);
  if ( (v6 & 2) != 0 )
    v7 = *(__int64 **)(a2 - 32);
  else
    v7 = (__int64 *)(a2 - 8LL * ((v6 >> 2) & 0xF) - 16);
  v8 = *v7;
  v9 = j__strlen("file");
  sub_2039D00((__int64)&v15, "file", v9, v8, 0);
  v10 = *(_BYTE *)(a2 - 16);
  if ( (v10 & 2) != 0 )
    v11 = *(_QWORD *)(a2 - 32);
  else
    v11 = a2 - 8LL * ((v10 >> 2) & 0xF) - 16;
  v12 = *(_QWORD *)(v11 + 8);
  v13 = j__strlen("nodes");
  sub_203A140((__int64)&v15, "nodes", v13, v12);
  return sub_995540(a1, ")");
}
