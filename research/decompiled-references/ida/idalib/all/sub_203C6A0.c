__int64 __fastcall sub_203C6A0(__int64 a1, __int64 a2, const char *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r13
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r14
  size_t v14; // rax
  unsigned __int8 v15; // al
  __int64 v16; // rax
  __int64 v17; // r13
  size_t v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r13
  unsigned __int8 v21; // al
  __int64 *v22; // rax
  size_t v23; // rax
  unsigned int v24; // r13d
  size_t v25; // rax
  unsigned __int8 v26; // al
  __int64 v27; // rax
  __int64 v28; // r13
  size_t v29; // rax
  size_t v30; // rax
  unsigned __int8 v31; // al
  __int64 v32; // r13
  __int64 v33; // rax
  size_t v34; // rax
  unsigned int v35; // r13d
  int v36; // r13d
  size_t v37; // r14
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r13d
  size_t v42; // rax
  unsigned int v43; // r14d
  size_t v44; // rax
  __int64 v45; // rdi
  size_t v46; // r13
  __int64 v47; // rax
  unsigned int v48; // eax
  _BYTE *v49; // rcx
  char *v50; // r14
  char *v51; // r15
  const void *v52; // rax
  size_t v53; // rdx
  __int64 v54; // rdi
  __int64 v55; // rdi
  unsigned __int8 v56; // al
  __int64 v57; // rax
  __int64 v58; // r13
  size_t v59; // rax
  unsigned __int8 v60; // al
  __int64 v61; // r13
  __int64 v62; // rax
  size_t v63; // rax
  unsigned __int8 v64; // al
  __int64 v65; // rax
  __int64 v66; // r13
  size_t v67; // rax
  unsigned __int8 v68; // al
  __int64 v69; // rax
  __int64 v70; // r13
  size_t v71; // rax
  unsigned __int8 v72; // al
  __int64 v73; // r13
  __int64 v74; // rax
  size_t v75; // rax
  unsigned __int8 v76; // al
  __int64 v77; // r13
  __int64 v78; // rax
  size_t v79; // rax
  unsigned __int8 v80; // al
  __int64 v81; // r13
  __int64 v82; // rdx
  __int64 v83; // r14
  size_t v84; // rax
  __int64 v85; // rbx
  size_t v86; // rax
  size_t v88; // rax
  __int64 v89; // rax
  const void *v90; // [rsp+0h] [rbp-B8h]
  size_t v91; // [rsp+8h] [rbp-B0h]
  unsigned int v92; // [rsp+14h] [rbp-A4h]
  char v93; // [rsp+20h] [rbp-98h]
  char *v94; // [rsp+28h] [rbp-90h] BYREF
  __int64 v95; // [rsp+30h] [rbp-88h] BYREF
  char v96; // [rsp+38h] [rbp-80h]
  const char *v97[2]; // [rsp+40h] [rbp-78h] BYREF
  void *ptr; // [rsp+50h] [rbp-68h] BYREF
  __int64 v99; // [rsp+58h] [rbp-60h]
  _BYTE v100[88]; // [rsp+60h] [rbp-58h] BYREF

  sub_995540(a1, "!DISubprogram(");
  v97[1] = a3;
  v95 = a1;
  v96 = 1;
  v97[0] = ", ";
  v5 = sub_2031EC0(a2, 2u);
  v7 = v6;
  v8 = v5;
  v9 = j__strlen("name");
  sub_2030E00(&v95, "name", v9, v8, v7);
  v10 = sub_2031EC0(a2, 3u);
  v12 = v11;
  v13 = v10;
  v14 = j__strlen("linkageName");
  sub_2030E00(&v95, "linkageName", v14, v13, v12);
  v15 = *(_BYTE *)(a2 - 16);
  if ( (v15 & 2) != 0 )
    v16 = *(_QWORD *)(a2 - 32);
  else
    v16 = a2 - 8LL * ((v15 >> 2) & 0xF) - 16;
  v17 = *(_QWORD *)(v16 + 8);
  v18 = j__strlen("scope");
  v19 = v17;
  v20 = a2;
  sub_2039D00((__int64)&v95, "scope", v18, v19, 0);
  if ( *(_BYTE *)a2 != 16 )
  {
    v21 = *(_BYTE *)(a2 - 16);
    if ( (v21 & 2) != 0 )
      v22 = *(__int64 **)(a2 - 32);
    else
      v22 = (__int64 *)(a2 - 8LL * ((v21 >> 2) & 0xF) - 16);
    v20 = *v22;
  }
  v23 = j__strlen("file");
  sub_203A140((__int64)&v95, "file", v23, v20);
  v24 = *(_DWORD *)(a2 + 16);
  v25 = j__strlen("line");
  sub_2031290((__int64)&v95, "line", v25, v24);
  v26 = *(_BYTE *)(a2 - 16);
  if ( (v26 & 2) != 0 )
    v27 = *(_QWORD *)(a2 - 32);
  else
    v27 = a2 - 8LL * ((v26 >> 2) & 0xF) - 16;
  v28 = *(_QWORD *)(v27 + 32);
  v29 = j__strlen("type");
  sub_203A140((__int64)&v95, "type", v29, v28);
  LODWORD(v28) = *(_DWORD *)(a2 + 20);
  v30 = j__strlen("scopeLine");
  sub_2031290((__int64)&v95, "scopeLine", v30, v28);
  v31 = *(_BYTE *)(a2 - 16);
  if ( (v31 & 2) == 0 )
  {
    if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) <= 8 )
    {
      v32 = 0;
      goto LABEL_13;
    }
    v33 = a2 - 8LL * ((v31 >> 2) & 0xF) - 16;
    goto LABEL_12;
  }
  v32 = 0;
  if ( *(_DWORD *)(a2 - 24) > 8u )
  {
    v33 = *(_QWORD *)(a2 - 32);
LABEL_12:
    v32 = *(_QWORD *)(v33 + 64);
  }
LABEL_13:
  v34 = j__strlen("containingType");
  sub_203A140((__int64)&v95, "containingType", v34, v32);
  v35 = *(_DWORD *)(a2 + 24);
  if ( (*(_BYTE *)(a2 + 36) & 3) != 0 || v35 )
  {
    v88 = j__strlen("virtualIndex");
    sub_2031410((__int64)&v95, "virtualIndex", v88, v35, 0);
  }
  v36 = *(_DWORD *)(a2 + 28);
  v37 = j__strlen("thisAdjustment");
  if ( v36 )
  {
    v38 = v95;
    if ( v96 )
      v96 = 0;
    else
      v38 = sub_202F8E0(v95, v97);
    v39 = sub_9954E0(v38, "thisAdjustment", v37);
    v40 = sub_995540(v39, ": ");
    sub_227B930(v40, v36);
  }
  v41 = *(_DWORD *)(a2 + 32);
  v42 = j__strlen("flags");
  sub_20309B0(&v95, "flags", v42, v41);
  v43 = *(_DWORD *)(a2 + 36);
  v44 = j__strlen("spFlags");
  v45 = v95;
  v46 = v44;
  if ( v96 )
    v96 = 0;
  else
    v45 = sub_202F8E0(v95, v97);
  v47 = sub_9954E0(v45, "spFlags", v46);
  sub_995540(v47, ": ");
  if ( !v43 )
  {
    sub_227B930(v95, 0);
    goto LABEL_33;
  }
  ptr = v100;
  v99 = 0x800000000LL;
  v48 = sub_206E7B0(v43, &ptr);
  v49 = ptr;
  v93 = 1;
  v92 = v48;
  v50 = (char *)ptr + 4 * (unsigned int)v99;
  v94 = " | ";
  if ( ptr != v50 )
  {
    v51 = (char *)ptr;
    do
    {
      while ( 1 )
      {
        v52 = (const void *)sub_206D790(*(unsigned int *)v51);
        if ( !v93 )
          break;
        v51 += 4;
        v93 = 0;
        sub_9954E0(v95, v52, v53);
        if ( v50 == v51 )
        {
          if ( v92 )
            goto LABEL_27;
          goto LABEL_64;
        }
      }
      v90 = v52;
      v51 += 4;
      v91 = v53;
      v89 = sub_202F8E0(v95, (const char **)&v94);
      sub_9954E0(v89, v90, v91);
    }
    while ( v50 != v51 );
    if ( v92 )
    {
LABEL_27:
      v54 = v95;
LABEL_28:
      v55 = sub_202F8E0(v54, (const char **)&v94);
      goto LABEL_29;
    }
LABEL_64:
    if ( !(_DWORD)v99 )
    {
      v54 = v95;
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( v48 || !(_DWORD)v99 )
  {
    v55 = v95;
LABEL_29:
    sub_227B910(v55, v92);
LABEL_30:
    v49 = ptr;
  }
  if ( v49 != v100 )
    free(v49);
LABEL_33:
  v56 = *(_BYTE *)(a2 - 16);
  if ( (v56 & 2) != 0 )
    v57 = *(_QWORD *)(a2 - 32);
  else
    v57 = a2 - 8LL * ((v56 >> 2) & 0xF) - 16;
  v58 = *(_QWORD *)(v57 + 40);
  v59 = j__strlen("unit");
  sub_203A140((__int64)&v95, "unit", v59, v58);
  v60 = *(_BYTE *)(a2 - 16);
  if ( (v60 & 2) != 0 )
  {
    v61 = 0;
    if ( *(_DWORD *)(a2 - 24) <= 9u )
      goto LABEL_39;
    v62 = *(_QWORD *)(a2 - 32);
    goto LABEL_38;
  }
  if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) > 9 )
  {
    v62 = a2 - 8LL * ((v60 >> 2) & 0xF) - 16;
LABEL_38:
    v61 = *(_QWORD *)(v62 + 72);
    goto LABEL_39;
  }
  v61 = 0;
LABEL_39:
  v63 = j__strlen("templateParams");
  sub_203A140((__int64)&v95, "templateParams", v63, v61);
  v64 = *(_BYTE *)(a2 - 16);
  if ( (v64 & 2) != 0 )
    v65 = *(_QWORD *)(a2 - 32);
  else
    v65 = a2 - 8LL * ((v64 >> 2) & 0xF) - 16;
  v66 = *(_QWORD *)(v65 + 48);
  v67 = j__strlen("declaration");
  sub_203A140((__int64)&v95, "declaration", v67, v66);
  v68 = *(_BYTE *)(a2 - 16);
  if ( (v68 & 2) != 0 )
    v69 = *(_QWORD *)(a2 - 32);
  else
    v69 = a2 - 8LL * ((v68 >> 2) & 0xF) - 16;
  v70 = *(_QWORD *)(v69 + 56);
  v71 = j__strlen("retainedNodes");
  sub_203A140((__int64)&v95, "retainedNodes", v71, v70);
  v72 = *(_BYTE *)(a2 - 16);
  if ( (v72 & 2) != 0 )
  {
    v73 = 0;
    if ( *(_DWORD *)(a2 - 24) <= 0xAu )
      goto LABEL_47;
    v74 = *(_QWORD *)(a2 - 32);
    goto LABEL_46;
  }
  if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) > 0xA )
  {
    v74 = a2 - 8LL * ((v72 >> 2) & 0xF) - 16;
LABEL_46:
    v73 = *(_QWORD *)(v74 + 80);
    goto LABEL_47;
  }
  v73 = 0;
LABEL_47:
  v75 = j__strlen("thrownTypes");
  sub_203A140((__int64)&v95, "thrownTypes", v75, v73);
  v76 = *(_BYTE *)(a2 - 16);
  if ( (v76 & 2) != 0 )
  {
    v77 = 0;
    if ( *(_DWORD *)(a2 - 24) <= 0xBu )
      goto LABEL_51;
    v78 = *(_QWORD *)(a2 - 32);
    goto LABEL_50;
  }
  if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) > 0xB )
  {
    v78 = a2 - 8LL * ((v76 >> 2) & 0xF) - 16;
LABEL_50:
    v77 = *(_QWORD *)(v78 + 88);
    goto LABEL_51;
  }
  v77 = 0;
LABEL_51:
  v79 = j__strlen("annotations");
  sub_203A140((__int64)&v95, "annotations", v79, v77);
  v80 = *(_BYTE *)(a2 - 16);
  if ( (v80 & 2) == 0 )
  {
    if ( ((*(_WORD *)(a2 - 16) >> 6) & 0xFu) > 0xC )
    {
      v81 = *(_QWORD *)(a2 - 8LL * ((v80 >> 2) & 0xF) - 16 + 96);
      if ( v81 )
        goto LABEL_54;
LABEL_77:
      v83 = 0;
      goto LABEL_55;
    }
LABEL_82:
    v83 = 0;
    v81 = 0;
    goto LABEL_55;
  }
  if ( *(_DWORD *)(a2 - 24) <= 0xCu )
    goto LABEL_82;
  v81 = *(_QWORD *)(*(_QWORD *)(a2 - 32) + 96LL);
  if ( !v81 )
    goto LABEL_77;
LABEL_54:
  v81 = sub_2031EC0(a2, 0xCu);
  v83 = v82;
LABEL_55:
  v84 = j__strlen("targetFuncName");
  sub_2030E00(&v95, "targetFuncName", v84, v81, v83);
  v85 = *(_QWORD *)a2;
  v86 = j__strlen("keyInstructions");
  sub_2030CE0((__int64)&v95, "keyInstructions", v86, BYTE1(v85) >> 7, 0);
  return sub_995540(a1, ")");
}
