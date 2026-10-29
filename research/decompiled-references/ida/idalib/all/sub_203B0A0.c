__int64 __fastcall sub_203B0A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r14
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
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // r13
  size_t v27; // rax
  size_t v28; // rax
  unsigned __int8 v29; // al
  __int64 v30; // rax
  __int64 v31; // r13
  size_t v32; // rax
  size_t v33; // rax
  unsigned __int8 v34; // al
  __int64 v35; // rax
  __int64 v36; // r13
  size_t v37; // rax
  __int64 v38; // r13
  unsigned __int8 v39; // al
  __int64 v40; // rax
  __int64 v41; // r13
  size_t v42; // rax
  __int64 v43; // rax
  unsigned int v44; // ebx
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  size_t v49; // rax
  size_t v50; // rax
  size_t v51; // rax
  __int64 v52; // [rsp+0h] [rbp-48h] BYREF
  char v53; // [rsp+8h] [rbp-40h]
  char *v54; // [rsp+10h] [rbp-38h]
  __int64 v55; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIDerivedType(");
  v55 = a3;
  v52 = a1;
  v54 = ", ";
  v53 = 1;
  sub_2030BB0((__int64)&v52, a2);
  v4 = sub_2031EC0(a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v52, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(_QWORD *)(a2 - 32);
  else
    v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("scope");
  v13 = v11;
  v14 = a2;
  sub_203A140((__int64)&v52, "scope", v12, v13);
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
  sub_203A140((__int64)&v52, "file", v17, v14);
  v18 = *(_DWORD *)(a2 + 16);
  v19 = j__strlen("line");
  sub_2031290((__int64)&v52, "line", v19, v18);
  v20 = *(_BYTE *)(a2 - 16);
  if ( (v20 & 2) != 0 )
    v21 = *(_QWORD *)(a2 - 32);
  else
    v21 = a2 - 8LL * ((v20 >> 2) & 0xF) - 16;
  v22 = *(_QWORD *)(v21 + 40);
  v23 = j__strlen("baseType");
  sub_2039D00((__int64)&v52, "baseType", v23, v22, 0);
  v24 = *(_BYTE *)(a2 - 16);
  if ( (v24 & 2) != 0 )
    v25 = *(_QWORD *)(a2 - 32);
  else
    v25 = a2 - 8LL * ((v24 >> 2) & 0xF) - 16;
  v26 = *(_QWORD *)(v25 + 24);
  v27 = j__strlen("size");
  sub_203A620((__int64)&v52, "size", v27, v26);
  LODWORD(v26) = sub_206CE70(a2);
  v28 = j__strlen("align");
  sub_2031290((__int64)&v52, "align", v28, v26);
  v29 = *(_BYTE *)(a2 - 16);
  if ( (v29 & 2) != 0 )
    v30 = *(_QWORD *)(a2 - 32);
  else
    v30 = a2 - 8LL * ((v29 >> 2) & 0xF) - 16;
  v31 = *(_QWORD *)(v30 + 32);
  v32 = j__strlen("offset");
  sub_203A620((__int64)&v52, "offset", v32, v31);
  LODWORD(v31) = *(_DWORD *)(a2 + 20);
  v33 = j__strlen("flags");
  sub_20309B0(&v52, "flags", v33, v31);
  v34 = *(_BYTE *)(a2 - 16);
  if ( (v34 & 2) != 0 )
    v35 = *(_QWORD *)(a2 - 32);
  else
    v35 = a2 - 8LL * ((v34 >> 2) & 0xF) - 16;
  v36 = *(_QWORD *)(v35 + 48);
  v37 = j__strlen("extraData");
  sub_203A140((__int64)&v52, "extraData", v37, v36);
  v38 = *(_QWORD *)(a2 + 28);
  if ( BYTE4(v38) )
  {
    v51 = j__strlen("dwarfAddressSpace");
    sub_2031410((__int64)&v52, "dwarfAddressSpace", v51, v38, 0);
  }
  v39 = *(_BYTE *)(a2 - 16);
  if ( (v39 & 2) != 0 )
    v40 = *(_QWORD *)(a2 - 32);
  else
    v40 = a2 - 8LL * ((v39 >> 2) & 0xF) - 16;
  v41 = *(_QWORD *)(v40 + 56);
  v42 = j__strlen("annotations");
  sub_203A140((__int64)&v52, "annotations", v42, v41);
  v43 = sub_206D500(a2);
  v44 = v43;
  if ( BYTE4(v43) )
  {
    v46 = j__strlen("ptrAuthKey");
    sub_2031290((__int64)&v52, "ptrAuthKey", v46, v44 & 0xF);
    v47 = j__strlen("ptrAuthIsAddressDiscriminated");
    sub_2030C50((__int64)&v52, "ptrAuthIsAddressDiscriminated", v47, (v44 & 0x10) != 0);
    v48 = j__strlen("ptrAuthExtraDiscriminator");
    sub_2031290((__int64)&v52, "ptrAuthExtraDiscriminator", v48, (unsigned __int16)(v44 >> 5));
    v49 = j__strlen("ptrAuthIsaPointer");
    sub_2030C50((__int64)&v52, "ptrAuthIsaPointer", v49, (v44 & 0x200000) != 0);
    v50 = j__strlen("ptrAuthAuthenticatesNullValues");
    sub_2030C50((__int64)&v52, "ptrAuthAuthenticatesNullValues", v50, (v44 & 0x400000) != 0);
  }
  return sub_995540(a1, ")");
}
