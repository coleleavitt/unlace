__int64 __fastcall sub_203D200(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // al
  __int64 *v5; // rax
  __int64 v6; // r13
  size_t v7; // rax
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // r13
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // r14
  size_t v16; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // r13
  size_t v20; // rax
  unsigned int v21; // ebx
  size_t v22; // rax
  __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  char v25; // [rsp+8h] [rbp-40h]
  char *v26; // [rsp+10h] [rbp-38h]
  __int64 v27; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DICommonBlock(");
  v24 = a1;
  v26 = ", ";
  v4 = *(_BYTE *)(a2 - 16);
  v25 = 1;
  v27 = a3;
  if ( (v4 & 2) != 0 )
    v5 = *(__int64 **)(a2 - 32);
  else
    v5 = (__int64 *)(a2 - 8LL * ((v4 >> 2) & 0xF) - 16);
  v6 = *v5;
  v7 = j__strlen("scope");
  sub_2039D00((__int64)&v24, "scope", v7, v6, 0);
  v8 = *(_BYTE *)(a2 - 16);
  if ( (v8 & 2) != 0 )
    v9 = *(_QWORD *)(a2 - 32);
  else
    v9 = a2 - 8LL * ((v8 >> 2) & 0xF) - 16;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = j__strlen("declaration");
  sub_2039D00((__int64)&v24, "declaration", v11, v10, 0);
  v12 = sub_2031EC0(a2, 2u);
  v14 = v13;
  v15 = v12;
  v16 = j__strlen("name");
  sub_2030E00(&v24, "name", v16, v15, v14);
  v17 = *(_BYTE *)(a2 - 16);
  if ( (v17 & 2) != 0 )
    v18 = *(_QWORD *)(a2 - 32);
  else
    v18 = a2 - 8LL * ((v17 >> 2) & 0xF) - 16;
  v19 = *(_QWORD *)(v18 + 24);
  v20 = j__strlen("file");
  sub_203A140((__int64)&v24, "file", v20, v19);
  v21 = *(_DWORD *)(a2 + 4);
  v22 = j__strlen("line");
  sub_2031290((__int64)&v24, "line", v22, v21);
  return sub_995540(a1, ")");
}
