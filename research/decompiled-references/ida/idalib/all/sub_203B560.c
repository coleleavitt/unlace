__int64 __fastcall sub_203B560(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v13; // rcx
  __int64 v14; // r13
  unsigned __int8 v15; // al
  __int64 *v16; // rax
  size_t v17; // rax
  unsigned int v18; // r13d
  size_t v19; // rax
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // r13
  size_t v23; // rax
  size_t v24; // rax
  size_t v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // rax
  __int64 v28; // r13
  size_t v29; // rax
  unsigned __int8 v30; // al
  __int64 v31; // rax
  __int64 v32; // r13
  size_t v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 v36; // r13
  size_t v37; // rax
  unsigned __int8 v38; // al
  __int64 v39; // rax
  __int64 v40; // r13
  size_t v41; // rax
  unsigned __int8 v42; // al
  __int64 v43; // rax
  __int64 v44; // rbx
  size_t v45; // rax
  __int64 v47; // [rsp+0h] [rbp-48h] BYREF
  char v48; // [rsp+8h] [rbp-40h]
  char *v49; // [rsp+10h] [rbp-38h]
  __int64 v50; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DISubrangeType(");
  v50 = a3;
  v47 = a1;
  v48 = 1;
  v49 = ", ";
  v4 = sub_2031EC0(a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v47, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(_QWORD *)(a2 - 32);
  else
    v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("scope");
  v13 = v11;
  v14 = a2;
  sub_203A140((__int64)&v47, "scope", v12, v13);
  if ( *(_BYTE *)a2 != 16 )
  {
    v15 = *(_BYTE *)(a2 - 16);
    if ( (v15 & 2) != 0 )
      v16 = *(__int64 **)(a2 - 32);
    else
      v16 = (__int64 *)(a2 - 8LL * ((v15 >> 2) & 0xF) - 16);
    v14 = *v16;
  }
  v17 = j__strlen("file");
  sub_203A140((__int64)&v47, "file", v17, v14);
  v18 = *(_DWORD *)(a2 + 16);
  v19 = j__strlen("line");
  sub_2031290((__int64)&v47, "line", v19, v18);
  v20 = *(_BYTE *)(a2 - 16);
  if ( (v20 & 2) != 0 )
    v21 = *(_QWORD *)(a2 - 32);
  else
    v21 = a2 - 8LL * ((v20 >> 2) & 0xF) - 16;
  v22 = *(_QWORD *)(v21 + 24);
  v23 = j__strlen("size");
  sub_203A620((__int64)&v47, "size", v23, v22);
  LODWORD(v22) = sub_206CE70(a2);
  v24 = j__strlen("align");
  sub_2031290((__int64)&v47, "align", v24, v22);
  LODWORD(v22) = *(_DWORD *)(a2 + 20);
  v25 = j__strlen("flags");
  sub_20309B0(&v47, "flags", v25, v22);
  v26 = *(_BYTE *)(a2 - 16);
  if ( (v26 & 2) != 0 )
    v27 = *(_QWORD *)(a2 - 32);
  else
    v27 = a2 - 8LL * ((v26 >> 2) & 0xF) - 16;
  v28 = *(_QWORD *)(v27 + 40);
  v29 = j__strlen("baseType");
  sub_2039D00((__int64)&v47, "baseType", v29, v28, 0);
  v30 = *(_BYTE *)(a2 - 16);
  if ( (v30 & 2) != 0 )
    v31 = *(_QWORD *)(a2 - 32);
  else
    v31 = a2 - 8LL * ((v30 >> 2) & 0xF) - 16;
  v32 = *(_QWORD *)(v31 + 48);
  v33 = j__strlen("lowerBound");
  sub_203A140((__int64)&v47, "lowerBound", v33, v32);
  v34 = *(_BYTE *)(a2 - 16);
  if ( (v34 & 2) != 0 )
    v35 = *(_QWORD *)(a2 - 32);
  else
    v35 = a2 - 8LL * ((v34 >> 2) & 0xF) - 16;
  v36 = *(_QWORD *)(v35 + 56);
  v37 = j__strlen("upperBound");
  sub_203A140((__int64)&v47, "upperBound", v37, v36);
  v38 = *(_BYTE *)(a2 - 16);
  if ( (v38 & 2) != 0 )
    v39 = *(_QWORD *)(a2 - 32);
  else
    v39 = a2 - 8LL * ((v38 >> 2) & 0xF) - 16;
  v40 = *(_QWORD *)(v39 + 64);
  v41 = j__strlen("stride");
  sub_203A140((__int64)&v47, "stride", v41, v40);
  v42 = *(_BYTE *)(a2 - 16);
  if ( (v42 & 2) != 0 )
    v43 = *(_QWORD *)(a2 - 32);
  else
    v43 = a2 - 8LL * ((v42 >> 2) & 0xF) - 16;
  v44 = *(_QWORD *)(v43 + 72);
  v45 = j__strlen("bias");
  sub_203A140((__int64)&v47, "bias", v45, v44);
  return sub_995540(a1, ")");
}
