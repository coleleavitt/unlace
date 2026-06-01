__int64 __fastcall sub_203D8B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r14
  size_t v13; // rax
  unsigned __int8 v14; // al
  __int64 *v15; // rax
  __int64 v16; // r13
  size_t v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // rax
  __int64 v20; // r13
  size_t v21; // rax
  size_t v22; // rax
  unsigned __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // r13
  size_t v26; // rax
  char v27; // r14
  size_t v28; // rax
  char v29; // r14
  size_t v30; // rax
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // r13
  size_t v34; // rax
  unsigned __int8 v35; // al
  __int64 v36; // rax
  __int64 v37; // r13
  size_t v38; // rax
  size_t v39; // rax
  unsigned __int8 v40; // al
  __int64 v41; // rax
  __int64 v42; // rbx
  size_t v43; // rax
  __int64 v45; // [rsp+0h] [rbp-48h] BYREF
  char v46; // [rsp+8h] [rbp-40h]
  char *v47; // [rsp+10h] [rbp-38h]
  __int64 v48; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIGlobalVariable(");
  v48 = a3;
  v45 = a1;
  v46 = 1;
  v47 = ", ";
  v4 = sub_2031EC0(a2, 1u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v45, "name", v8, v7, v6);
  v9 = sub_2031EC0(a2, 5u);
  v11 = v10;
  v12 = v9;
  v13 = j__strlen("linkageName");
  sub_2030E00(&v45, "linkageName", v13, v12, v11);
  v14 = *(_BYTE *)(a2 - 16);
  if ( (v14 & 2) != 0 )
    v15 = *(__int64 **)(a2 - 32);
  else
    v15 = (__int64 *)(a2 - 8LL * ((v14 >> 2) & 0xF) - 16);
  v16 = *v15;
  v17 = j__strlen("scope");
  sub_2039D00((__int64)&v45, "scope", v17, v16, 0);
  v18 = *(_BYTE *)(a2 - 16);
  if ( (v18 & 2) != 0 )
    v19 = *(_QWORD *)(a2 - 32);
  else
    v19 = a2 - 8LL * ((v18 >> 2) & 0xF) - 16;
  v20 = *(_QWORD *)(v19 + 16);
  v21 = j__strlen("file");
  sub_203A140((__int64)&v45, "file", v21, v20);
  LODWORD(v20) = *(_DWORD *)(a2 + 16);
  v22 = j__strlen("line");
  sub_2031290((__int64)&v45, "line", v22, v20);
  v23 = *(_BYTE *)(a2 - 16);
  if ( (v23 & 2) != 0 )
    v24 = *(_QWORD *)(a2 - 32);
  else
    v24 = a2 - 8LL * ((v23 >> 2) & 0xF) - 16;
  v25 = *(_QWORD *)(v24 + 24);
  v26 = j__strlen("type");
  sub_203A140((__int64)&v45, "type", v26, v25);
  v27 = *(_BYTE *)(a2 + 20);
  v28 = j__strlen("isLocal");
  sub_2030C50((__int64)&v45, "isLocal", v28, v27);
  v29 = *(_BYTE *)(a2 + 21);
  v30 = j__strlen("isDefinition");
  sub_2030C50((__int64)&v45, "isDefinition", v30, v29);
  v31 = *(_BYTE *)(a2 - 16);
  if ( (v31 & 2) != 0 )
    v32 = *(_QWORD *)(a2 - 32);
  else
    v32 = a2 - 8LL * ((v31 >> 2) & 0xF) - 16;
  v33 = *(_QWORD *)(v32 + 48);
  v34 = j__strlen("declaration");
  sub_203A140((__int64)&v45, "declaration", v34, v33);
  v35 = *(_BYTE *)(a2 - 16);
  if ( (v35 & 2) != 0 )
    v36 = *(_QWORD *)(a2 - 32);
  else
    v36 = a2 - 8LL * ((v35 >> 2) & 0xF) - 16;
  v37 = *(_QWORD *)(v36 + 56);
  v38 = j__strlen("templateParams");
  sub_203A140((__int64)&v45, "templateParams", v38, v37);
  LODWORD(v37) = *(_DWORD *)(a2 + 4);
  v39 = j__strlen("align");
  sub_2031290((__int64)&v45, "align", v39, v37);
  v40 = *(_BYTE *)(a2 - 16);
  if ( (v40 & 2) != 0 )
    v41 = *(_QWORD *)(a2 - 32);
  else
    v41 = a2 - 8LL * ((v40 >> 2) & 0xF) - 16;
  v42 = *(_QWORD *)(v41 + 64);
  v43 = j__strlen("annotations");
  sub_203A140((__int64)&v45, "annotations", v43, v42);
  return sub_995540(a1, ")");
}
