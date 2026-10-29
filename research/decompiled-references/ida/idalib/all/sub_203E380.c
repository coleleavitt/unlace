__int64 __fastcall sub_203E380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 *v10; // rax
  __int64 v11; // r13
  size_t v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v15; // r13
  size_t v16; // rax
  unsigned __int8 v17; // al
  __int64 v18; // rax
  __int64 v19; // r13
  size_t v20; // rax
  size_t v21; // rax
  unsigned __int8 v22; // al
  __int64 v23; // rax
  __int64 v24; // rbx
  size_t v25; // rax
  __int64 v27; // [rsp+0h] [rbp-48h] BYREF
  char v28; // [rsp+8h] [rbp-40h]
  char *v29; // [rsp+10h] [rbp-38h]
  __int64 v30; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIImportedEntity(");
  v30 = a3;
  v27 = a1;
  v29 = ", ";
  v28 = 1;
  sub_2030BB0((__int64)&v27, a2);
  v4 = sub_2031EC0(a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v27, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(__int64 **)(a2 - 32);
  else
    v10 = (__int64 *)(a2 - 8LL * ((v9 >> 2) & 0xF) - 16);
  v11 = *v10;
  v12 = j__strlen("scope");
  sub_2039D00((__int64)&v27, "scope", v12, v11, 0);
  v13 = *(_BYTE *)(a2 - 16);
  if ( (v13 & 2) != 0 )
    v14 = *(_QWORD *)(a2 - 32);
  else
    v14 = a2 - 8LL * ((v13 >> 2) & 0xF) - 16;
  v15 = *(_QWORD *)(v14 + 8);
  v16 = j__strlen("entity");
  sub_203A140((__int64)&v27, "entity", v16, v15);
  v17 = *(_BYTE *)(a2 - 16);
  if ( (v17 & 2) != 0 )
    v18 = *(_QWORD *)(a2 - 32);
  else
    v18 = a2 - 8LL * ((v17 >> 2) & 0xF) - 16;
  v19 = *(_QWORD *)(v18 + 24);
  v20 = j__strlen("file");
  sub_203A140((__int64)&v27, "file", v20, v19);
  LODWORD(v19) = *(_DWORD *)(a2 + 4);
  v21 = j__strlen("line");
  sub_2031290((__int64)&v27, "line", v21, v19);
  v22 = *(_BYTE *)(a2 - 16);
  if ( (v22 & 2) != 0 )
    v23 = *(_QWORD *)(a2 - 32);
  else
    v23 = a2 - 8LL * ((v22 >> 2) & 0xF) - 16;
  v24 = *(_QWORD *)(v23 + 32);
  v25 = j__strlen("elements");
  sub_203A140((__int64)&v27, "elements", v25, v24);
  return sub_995540(a1, ")");
}
