__int64 __fastcall sub_203DC30(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  size_t v8; // rax
  size_t v9; // rax
  unsigned __int8 v10; // al
  __int64 *v11; // rax
  __int64 v12; // r13
  size_t v13; // rax
  unsigned __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // r13
  size_t v17; // rax
  size_t v18; // rax
  unsigned __int8 v19; // al
  __int64 v20; // rax
  __int64 v21; // r13
  size_t v22; // rax
  size_t v23; // rax
  size_t v24; // rax
  unsigned __int8 v25; // al
  __int64 v26; // rax
  __int64 v27; // rbx
  size_t v28; // rax
  __int64 v30; // [rsp+0h] [rbp-48h] BYREF
  char v31; // [rsp+8h] [rbp-40h]
  char *v32; // [rsp+10h] [rbp-38h]
  __int64 v33; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DILocalVariable(");
  v33 = a3;
  v30 = a1;
  v31 = 1;
  v32 = ", ";
  v4 = sub_2031EC0(a2, 1u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v30, "name", v8, v7, v6);
  LODWORD(v7) = *(unsigned __int16 *)(a2 + 20);
  v9 = j__strlen("arg");
  sub_2031290((__int64)&v30, "arg", v9, v7);
  v10 = *(_BYTE *)(a2 - 16);
  if ( (v10 & 2) != 0 )
    v11 = *(__int64 **)(a2 - 32);
  else
    v11 = (__int64 *)(a2 - 8LL * ((v10 >> 2) & 0xF) - 16);
  v12 = *v11;
  v13 = j__strlen("scope");
  sub_2039D00((__int64)&v30, "scope", v13, v12, 0);
  v14 = *(_BYTE *)(a2 - 16);
  if ( (v14 & 2) != 0 )
    v15 = *(_QWORD *)(a2 - 32);
  else
    v15 = a2 - 8LL * ((v14 >> 2) & 0xF) - 16;
  v16 = *(_QWORD *)(v15 + 16);
  v17 = j__strlen("file");
  sub_203A140((__int64)&v30, "file", v17, v16);
  LODWORD(v16) = *(_DWORD *)(a2 + 16);
  v18 = j__strlen("line");
  sub_2031290((__int64)&v30, "line", v18, v16);
  v19 = *(_BYTE *)(a2 - 16);
  if ( (v19 & 2) != 0 )
    v20 = *(_QWORD *)(a2 - 32);
  else
    v20 = a2 - 8LL * ((v19 >> 2) & 0xF) - 16;
  v21 = *(_QWORD *)(v20 + 24);
  v22 = j__strlen("type");
  sub_203A140((__int64)&v30, "type", v22, v21);
  LODWORD(v21) = *(_DWORD *)(a2 + 24);
  v23 = j__strlen("flags");
  sub_20309B0(&v30, "flags", v23, v21);
  LODWORD(v21) = *(_DWORD *)(a2 + 4);
  v24 = j__strlen("align");
  sub_2031290((__int64)&v30, "align", v24, v21);
  v25 = *(_BYTE *)(a2 - 16);
  if ( (v25 & 2) != 0 )
    v26 = *(_QWORD *)(a2 - 32);
  else
    v26 = a2 - 8LL * ((v25 >> 2) & 0xF) - 16;
  v27 = *(_QWORD *)(v26 + 32);
  v28 = j__strlen("annotations");
  sub_203A140((__int64)&v30, "annotations", v28, v27);
  return sub_995540(a1, ")");
}
