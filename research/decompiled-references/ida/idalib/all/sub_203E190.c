__int64 __fastcall sub_203E190(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // r13
  size_t v8; // rax
  unsigned __int8 v9; // al
  __int64 v10; // rax
  __int64 v11; // r13
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // r14
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  __int64 v22; // r14
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

  sub_995540(a1, "!DIObjCProperty(");
  v33 = a3;
  v30 = a1;
  v31 = 1;
  v32 = ", ";
  v4 = sub_2031EC0(a2, 0);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v30, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(_QWORD *)(a2 - 32);
  else
    v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("file");
  sub_203A140((__int64)&v30, "file", v12, v11);
  LODWORD(v11) = *(_DWORD *)(a2 + 16);
  v13 = j__strlen("line");
  sub_2031290((__int64)&v30, "line", v13, v11);
  v14 = sub_2031EC0(a2, 3u);
  v16 = v15;
  v17 = v14;
  v18 = j__strlen("setter");
  sub_2030E00(&v30, "setter", v18, v17, v16);
  v19 = sub_2031EC0(a2, 2u);
  v21 = v20;
  v22 = v19;
  v23 = j__strlen("getter");
  sub_2030E00(&v30, "getter", v23, v22, v21);
  LODWORD(v21) = *(_DWORD *)(a2 + 20);
  v24 = j__strlen("attributes");
  sub_2031290((__int64)&v30, "attributes", v24, v21);
  v25 = *(_BYTE *)(a2 - 16);
  if ( (v25 & 2) != 0 )
    v26 = *(_QWORD *)(a2 - 32);
  else
    v26 = a2 - 8LL * ((v25 >> 2) & 0xF) - 16;
  v27 = *(_QWORD *)(v26 + 32);
  v28 = j__strlen("type");
  sub_203A140((__int64)&v30, "type", v28, v27);
  return sub_995540(a1, ")");
}
