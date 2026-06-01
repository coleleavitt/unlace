__int64 __fastcall sub_203B920(__int64 a1, __int64 a2, __int64 a3)
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
  size_t v34; // rax
  unsigned __int8 v35; // al
  __int64 v36; // rax
  __int64 v37; // r13
  size_t v38; // rax
  size_t v39; // rax
  unsigned __int8 v40; // al
  __int64 v41; // rax
  __int64 v42; // r13
  size_t v43; // rax
  unsigned __int8 v44; // al
  __int64 v45; // rax
  __int64 v46; // r13
  size_t v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // r14
  size_t v52; // rax
  unsigned __int8 v53; // al
  __int64 v54; // rax
  __int64 v55; // r13
  size_t v56; // rax
  unsigned __int8 v57; // al
  __int64 v58; // rax
  __int64 v59; // r13
  size_t v60; // rax
  unsigned __int8 v61; // al
  __int64 v62; // rax
  __int64 v63; // r13
  size_t v64; // rax
  unsigned __int8 v65; // al
  __int64 v66; // rax
  __int64 v67; // r13
  size_t v68; // rax
  unsigned __int8 v69; // al
  __int64 v70; // rax
  __int64 v71; // r13
  __int64 v72; // rax
  unsigned int v73; // edx
  __int64 *v74; // rax
  __int64 v75; // r13
  size_t v76; // rax
  unsigned __int8 v77; // al
  __int64 v78; // rax
  __int64 v79; // r13
  size_t v80; // rax
  unsigned __int8 v81; // al
  __int64 v82; // rax
  __int64 v83; // r13
  size_t v84; // rax
  __int64 v85; // r13
  unsigned __int8 v86; // al
  __int64 v87; // rax
  __int64 v88; // rbx
  size_t v89; // rax
  size_t v91; // rax
  size_t v92; // rax
  __int64 v93; // [rsp+0h] [rbp-48h] BYREF
  char v94; // [rsp+8h] [rbp-40h]
  char *v95; // [rsp+10h] [rbp-38h]
  __int64 v96; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DICompositeType(");
  v96 = a3;
  v93 = a1;
  v95 = ", ";
  v94 = 1;
  sub_2030BB0((__int64)&v93, a2);
  v4 = sub_2031EC0(a2, 2u);
  v6 = v5;
  v7 = v4;
  v8 = j__strlen("name");
  sub_2030E00(&v93, "name", v8, v7, v6);
  v9 = *(_BYTE *)(a2 - 16);
  if ( (v9 & 2) != 0 )
    v10 = *(_QWORD *)(a2 - 32);
  else
    v10 = a2 - 8LL * ((v9 >> 2) & 0xF) - 16;
  v11 = *(_QWORD *)(v10 + 8);
  v12 = j__strlen("scope");
  v13 = v11;
  v14 = a2;
  sub_203A140((__int64)&v93, "scope", v12, v13);
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
  sub_203A140((__int64)&v93, "file", v17, v14);
  v18 = *(_DWORD *)(a2 + 16);
  v19 = j__strlen("line");
  sub_2031290((__int64)&v93, "line", v19, v18);
  v20 = *(_BYTE *)(a2 - 16);
  if ( (v20 & 2) != 0 )
    v21 = *(_QWORD *)(a2 - 32);
  else
    v21 = a2 - 8LL * ((v20 >> 2) & 0xF) - 16;
  v22 = *(_QWORD *)(v21 + 40);
  v23 = j__strlen("baseType");
  sub_203A140((__int64)&v93, "baseType", v23, v22);
  v24 = *(_BYTE *)(a2 - 16);
  if ( (v24 & 2) != 0 )
    v25 = *(_QWORD *)(a2 - 32);
  else
    v25 = a2 - 8LL * ((v24 >> 2) & 0xF) - 16;
  v26 = *(_QWORD *)(v25 + 24);
  v27 = j__strlen("size");
  sub_203A620((__int64)&v93, "size", v27, v26);
  LODWORD(v26) = sub_206CE70(a2);
  v28 = j__strlen("align");
  sub_2031290((__int64)&v93, "align", v28, v26);
  v29 = *(_BYTE *)(a2 - 16);
  if ( (v29 & 2) != 0 )
    v30 = *(_QWORD *)(a2 - 32);
  else
    v30 = a2 - 8LL * ((v29 >> 2) & 0xF) - 16;
  v31 = *(_QWORD *)(v30 + 32);
  v32 = j__strlen("offset");
  sub_203A620((__int64)&v93, "offset", v32, v31);
  LODWORD(v31) = *(_DWORD *)(a2 + 24);
  v33 = j__strlen("num_extra_inhabitants");
  sub_2031290((__int64)&v93, "num_extra_inhabitants", v33, v31);
  LODWORD(v31) = *(_DWORD *)(a2 + 20);
  v34 = j__strlen("flags");
  sub_20309B0(&v93, "flags", v34, v31);
  v35 = *(_BYTE *)(a2 - 16);
  if ( (v35 & 2) != 0 )
    v36 = *(_QWORD *)(a2 - 32);
  else
    v36 = a2 - 8LL * ((v35 >> 2) & 0xF) - 16;
  v37 = *(_QWORD *)(v36 + 48);
  v38 = j__strlen("elements");
  sub_203A140((__int64)&v93, "elements", v38, v37);
  LODWORD(v37) = *(_DWORD *)(a2 + 28);
  v39 = j__strlen("runtimeLang");
  sub_20316C0(&v93, "runtimeLang", v39, v37, (__int64 (__fastcall *)(_QWORD))sub_201E610, 1);
  v40 = *(_BYTE *)(a2 - 16);
  if ( (v40 & 2) != 0 )
    v41 = *(_QWORD *)(a2 - 32);
  else
    v41 = a2 - 8LL * ((v40 >> 2) & 0xF) - 16;
  v42 = *(_QWORD *)(v41 + 56);
  v43 = j__strlen("vtableHolder");
  sub_203A140((__int64)&v93, "vtableHolder", v43, v42);
  v44 = *(_BYTE *)(a2 - 16);
  if ( (v44 & 2) != 0 )
    v45 = *(_QWORD *)(a2 - 32);
  else
    v45 = a2 - 8LL * ((v44 >> 2) & 0xF) - 16;
  v46 = *(_QWORD *)(v45 + 64);
  v47 = j__strlen("templateParams");
  sub_203A140((__int64)&v93, "templateParams", v47, v46);
  v48 = sub_2031EC0(a2, 9u);
  v50 = v49;
  v51 = v48;
  v52 = j__strlen("identifier");
  sub_2030E00(&v93, "identifier", v52, v51, v50);
  v53 = *(_BYTE *)(a2 - 16);
  if ( (v53 & 2) != 0 )
    v54 = *(_QWORD *)(a2 - 32);
  else
    v54 = a2 - 8LL * ((v53 >> 2) & 0xF) - 16;
  v55 = *(_QWORD *)(v54 + 80);
  v56 = j__strlen("discriminator");
  sub_203A140((__int64)&v93, "discriminator", v56, v55);
  v57 = *(_BYTE *)(a2 - 16);
  if ( (v57 & 2) != 0 )
    v58 = *(_QWORD *)(a2 - 32);
  else
    v58 = a2 - 8LL * ((v57 >> 2) & 0xF) - 16;
  v59 = *(_QWORD *)(v58 + 88);
  v60 = j__strlen("dataLocation");
  sub_203A140((__int64)&v93, "dataLocation", v60, v59);
  v61 = *(_BYTE *)(a2 - 16);
  if ( (v61 & 2) != 0 )
    v62 = *(_QWORD *)(a2 - 32);
  else
    v62 = a2 - 8LL * ((v61 >> 2) & 0xF) - 16;
  v63 = *(_QWORD *)(v62 + 96);
  v64 = j__strlen("associated");
  sub_203A140((__int64)&v93, "associated", v64, v63);
  v65 = *(_BYTE *)(a2 - 16);
  if ( (v65 & 2) != 0 )
    v66 = *(_QWORD *)(a2 - 32);
  else
    v66 = a2 - 8LL * ((v65 >> 2) & 0xF) - 16;
  v67 = *(_QWORD *)(v66 + 104);
  v68 = j__strlen("allocated");
  sub_203A140((__int64)&v93, "allocated", v68, v67);
  v69 = *(_BYTE *)(a2 - 16);
  if ( (v69 & 2) != 0 )
    v70 = *(_QWORD *)(a2 - 32);
  else
    v70 = a2 - 8LL * ((v69 >> 2) & 0xF) - 16;
  v71 = *(_QWORD *)(v70 + 112);
  if ( v71 && *(_BYTE *)v71 == 1 && (v72 = *(_QWORD *)(v71 + 128)) != 0 && *(_BYTE *)v72 == 5 )
  {
    v73 = *(_DWORD *)(v72 + 32);
    v74 = *(__int64 **)(v72 + 24);
    if ( v73 > 0x40 )
    {
      v75 = *v74;
    }
    else
    {
      v75 = 0;
      if ( v73 )
        v75 = (__int64)((_QWORD)v74 << (64 - (unsigned __int8)v73)) >> (64 - (unsigned __int8)v73);
    }
    v76 = j__strlen("rank");
    sub_2031310((__int64)&v93, "rank", v76, v75, 0);
    v77 = *(_BYTE *)(a2 - 16);
    if ( (v77 & 2) != 0 )
      goto LABEL_37;
  }
  else
  {
    v91 = j__strlen("rank");
    sub_203A140((__int64)&v93, "rank", v91, v71);
    v77 = *(_BYTE *)(a2 - 16);
    if ( (v77 & 2) != 0 )
    {
LABEL_37:
      v78 = *(_QWORD *)(a2 - 32);
      goto LABEL_38;
    }
  }
  v78 = a2 - 8LL * ((v77 >> 2) & 0xF) - 16;
LABEL_38:
  v79 = *(_QWORD *)(v78 + 120);
  v80 = j__strlen("annotations");
  sub_203A140((__int64)&v93, "annotations", v80, v79);
  v81 = *(_BYTE *)(a2 - 16);
  if ( (v81 & 2) != 0 )
    v82 = *(_QWORD *)(a2 - 32);
  else
    v82 = a2 - 8LL * ((v81 >> 2) & 0xF) - 16;
  v83 = *(_QWORD *)(v82 + 128);
  if ( v83 )
  {
    v84 = j__strlen("specification");
    sub_203A140((__int64)&v93, "specification", v84, v83);
  }
  v85 = *(_QWORD *)(a2 + 32);
  if ( BYTE4(v85) )
  {
    v92 = j__strlen("enumKind");
    sub_20316C0(&v93, "enumKind", v92, v85, (__int64 (__fastcall *)(_QWORD))sub_201E5E0, 0);
  }
  v86 = *(_BYTE *)(a2 - 16);
  if ( (v86 & 2) != 0 )
    v87 = *(_QWORD *)(a2 - 32);
  else
    v87 = a2 - 8LL * ((v86 >> 2) & 0xF) - 16;
  v88 = *(_QWORD *)(v87 + 136);
  v89 = j__strlen("bitStride");
  sub_203A140((__int64)&v93, "bitStride", v89, v88);
  return sub_995540(a1, ")");
}
