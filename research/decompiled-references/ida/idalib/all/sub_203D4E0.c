__int64 __fastcall sub_203D4E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // r14
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r14
  __int64 v12; // r15
  size_t v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  size_t v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // r15
  size_t v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r14
  __int64 v27; // r15
  size_t v28; // rax
  unsigned __int8 v29; // al
  __int64 *v30; // rax
  size_t v31; // rax
  unsigned int v32; // r13d
  size_t v33; // rax
  __int64 v34; // rbx
  size_t v35; // rax
  __int64 v37; // [rsp+0h] [rbp-58h] BYREF
  char v38; // [rsp+8h] [rbp-50h]
  char *v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+18h] [rbp-40h]

  v4 = a2;
  sub_995540(a1, "!DIModule(");
  v37 = a1;
  v39 = ", ";
  v5 = *(_BYTE *)(a2 - 16);
  v38 = 1;
  v40 = a3;
  if ( (v5 & 2) != 0 )
    v6 = *(_QWORD *)(a2 - 32);
  else
    v6 = a2 - 8LL * ((v5 >> 2) & 0xF) - 16;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = j__strlen("scope");
  sub_2039D00((__int64)&v37, "scope", v8, v7, 0);
  v9 = sub_2031EC0(a2, 2u);
  v11 = v10;
  v12 = v9;
  v13 = j__strlen("name");
  sub_2030E00(&v37, "name", v13, v12, v11);
  v14 = sub_2031EC0(a2, 3u);
  v16 = v15;
  v17 = v14;
  v18 = j__strlen("configMacros");
  sub_2030E00(&v37, "configMacros", v18, v17, v16);
  v19 = sub_2031EC0(a2, 4u);
  v21 = v20;
  v22 = v19;
  v23 = j__strlen("includePath");
  sub_2030E00(&v37, "includePath", v23, v22, v21);
  v24 = sub_2031EC0(a2, 5u);
  v26 = v25;
  v27 = v24;
  v28 = j__strlen("apinotes");
  sub_2030E00(&v37, "apinotes", v28, v27, v26);
  if ( *(_BYTE *)a2 != 16 )
  {
    v29 = *(_BYTE *)(a2 - 16);
    if ( (v29 & 2) != 0 )
      v30 = *(__int64 **)(a2 - 32);
    else
      v30 = (__int64 *)(a2 - 8LL * ((v29 >> 2) & 0xF) - 16);
    v4 = *v30;
  }
  v31 = j__strlen("file");
  sub_203A140((__int64)&v37, "file", v31, v4);
  v32 = *(_DWORD *)(a2 + 4);
  v33 = j__strlen("line");
  sub_2031290((__int64)&v37, "line", v33, v32);
  v34 = *(_QWORD *)a2;
  v35 = j__strlen("isDecl");
  sub_2030CE0((__int64)&v37, "isDecl", v35, BYTE1(v34) >> 7, 0);
  return sub_995540(a1, ")");
}
