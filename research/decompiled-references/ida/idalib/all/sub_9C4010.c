void __fastcall sub_9C4010(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 *v8; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r15
  __int64 *v25; // r14
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rbx
  unsigned int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r14d
  __int64 *v41; // r15
  __int64 v42; // r9
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  unsigned __int64 v47; // r15
  _QWORD *v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  unsigned int v52; // eax
  __int64 v53; // rcx
  unsigned __int64 v54; // rdx
  __int64 v55; // rbx
  unsigned int v56; // eax
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 *v59; // r15
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rdx
  unsigned __int64 v65; // r15
  _QWORD *v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rdx
  unsigned __int64 v69; // rax
  unsigned int v70; // eax
  __int64 v71; // rcx
  unsigned __int64 v72; // rdx
  __int64 v73; // rdi
  __int64 v74; // rbx
  unsigned int v75; // eax
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 *v78; // r15
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // rdx
  unsigned __int64 v85; // r14
  _QWORD *v86; // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  unsigned int v90; // eax
  __int64 v91; // rcx
  unsigned __int64 v92; // rdx
  __int64 v93; // rdi
  __int64 v94; // rax
  _BYTE *v95; // rdi
  __int64 v96; // [rsp+8h] [rbp-80h]
  __int64 v97; // [rsp+8h] [rbp-80h]
  int v98; // [rsp+8h] [rbp-80h]
  int v99; // [rsp+8h] [rbp-80h]
  __int64 v100; // [rsp+8h] [rbp-80h]
  __int64 v101; // [rsp+8h] [rbp-80h]
  __int64 *v102; // [rsp+18h] [rbp-70h] BYREF
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v104; // [rsp+28h] [rbp-60h]
  _BYTE v105[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 17504);
  v4 = sub_2244B30("raise", 5);
  v7 = sub_2244CB0(v3, "raise", 5, v4);
  v8 = (__int64 *)(*(_QWORD *)v3 + 8LL * v7);
  if ( !*v8 )
  {
LABEL_11:
    v16 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 104) += 22LL;
    v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v3 + 32) >= v17 + 22 && v16 )
      *(_QWORD *)(v3 + 24) = v17 + 22;
    else
      v17 = sub_986170(v3 + 24, 22, 22, 3, v5, v6);
    *(_DWORD *)(v17 + 16) = 1936286066;
    *(_BYTE *)(v17 + 20) = 101;
    *(_BYTE *)(v17 + 21) = 0;
    *(_QWORD *)v17 = 5;
    *(_QWORD *)(v17 + 8) = 0;
    *v8 = v17;
    ++*(_DWORD *)(v3 + 12);
    v18 = sub_22450D0(v3, v7);
    sub_989490((__int64 **)&ptr, (__int64 *)(*(_QWORD *)v3 + 8LL * v18), 0);
    v11 = *(_QWORD *)ptr;
    v12 = *(_QWORD **)(*(_QWORD *)ptr + 8LL);
    if ( v12 )
      goto LABEL_15;
    goto LABEL_4;
  }
  if ( *v8 == -8 )
  {
    --*(_DWORD *)(v3 + 16);
    goto LABEL_11;
  }
  sub_989490((__int64 **)&ptr, v8, 0);
  v11 = *(_QWORD *)ptr;
  v12 = *(_QWORD **)(*(_QWORD *)ptr + 8LL);
  if ( v12 )
    goto LABEL_15;
LABEL_4:
  v13 = *(_QWORD *)(v3 + 120);
  if ( !v13
    || (v12 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v13 + 16LL))(
                          v13,
                          "raise",
                          5),
        (*(_QWORD *)(v11 + 8) = v12) == 0) )
  {
    v14 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 104) += 24LL;
    v12 = (_QWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v3 + 32) >= (unsigned __int64)(v12 + 3) && v14 )
      *(_QWORD *)(v3 + 24) = v12 + 3;
    else
      v12 = (_QWORD *)sub_986170(v3 + 24, 24, 24, 3, v9, v10);
    v15 = *v12 & 0xFFFFF80000000000LL;
    v12[1] = 0;
    *v12 = v15 | 0x1FFFC05;
    *(_QWORD *)(v11 + 8) = v12;
    v12[2] = v11;
  }
LABEL_15:
  v19 = *(_QWORD *)(a2 + 17512);
  ptr = v12;
  *a1 = sub_FE3230(v19, 0, &ptr);
  v20 = *(_QWORD *)(a2 + 17504);
  v21 = sub_2244B30("NSException", 11);
  v24 = (unsigned int)sub_2244CB0(v20, "NSException", 11, v21);
  v25 = (__int64 *)(*(_QWORD *)v20 + 8 * v24);
  if ( !*v25 )
  {
LABEL_25:
    v33 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)(v20 + 104) += 28LL;
    v34 = (v33 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v20 + 32) >= v34 + 28 && v33 )
      *(_QWORD *)(v20 + 24) = v34 + 28;
    else
      v34 = sub_986170(v20 + 24, 28, 28, 3, v22, v23);
    strcpy((char *)(v34 + 16), "NSException");
    *(_QWORD *)v34 = 11;
    *(_QWORD *)(v34 + 8) = 0;
    *v25 = v34;
    ++*(_DWORD *)(v20 + 12);
    v35 = sub_22450D0(v20, (unsigned int)v24);
    sub_989490((__int64 **)&ptr, (__int64 *)(*(_QWORD *)v20 + 8LL * v35), 0);
    v28 = *(_QWORD *)ptr;
    v29 = *(_QWORD **)(*(_QWORD *)ptr + 8LL);
    if ( v29 )
      goto LABEL_29;
    goto LABEL_18;
  }
  if ( *v25 == -8 )
  {
    --*(_DWORD *)(v20 + 16);
    goto LABEL_25;
  }
  sub_989490((__int64 **)&ptr, v25, 0);
  v28 = *(_QWORD *)ptr;
  v29 = *(_QWORD **)(*(_QWORD *)ptr + 8LL);
  if ( v29 )
    goto LABEL_29;
LABEL_18:
  v30 = *(_QWORD *)(v20 + 120);
  if ( !v30
    || (v29 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v30 + 16LL))(
                          v30,
                          "NSException",
                          11),
        (*(_QWORD *)(v28 + 8) = v29) == 0) )
  {
    v31 = *(_QWORD *)(v20 + 24);
    *(_QWORD *)(v20 + 104) += 24LL;
    v29 = (_QWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( *(_QWORD *)(v20 + 32) >= (unsigned __int64)(v29 + 3) && v31 )
      *(_QWORD *)(v20 + 24) = v29 + 3;
    else
      v29 = (_QWORD *)sub_986170(v20 + 24, 24, 24, 3, v26, v27);
    v32 = *v29 & 0xFFFFF80000000000LL;
    v29[1] = 0;
    *v29 = v32 | 0x1FFFC05;
    *(_QWORD *)(v28 + 8) = v29;
    v29[2] = v28;
  }
LABEL_29:
  a1[1] = v29;
  a1[2] = 0;
  a1[3] = 0;
  v36 = *(_QWORD *)(a2 + 17504);
  ptr = v105;
  v104 = 0x300000000LL;
  v37 = sub_2244B30("raise", 5);
  v40 = sub_2244CB0(v36, "raise", 5, v37);
  v41 = (__int64 *)(*(_QWORD *)v36 + 8LL * v40);
  if ( !*v41 )
  {
LABEL_39:
    v50 = *(_QWORD *)(v36 + 24);
    *(_QWORD *)(v36 + 104) += 22LL;
    v51 = (v50 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v36 + 32) >= v51 + 22 && v50 )
      *(_QWORD *)(v36 + 24) = v51 + 22;
    else
      v51 = sub_986170(v36 + 24, 22, 22, 3, v38, v39);
    *(_DWORD *)(v51 + 16) = 1936286066;
    *(_BYTE *)(v51 + 20) = 101;
    *(_BYTE *)(v51 + 21) = 0;
    *(_QWORD *)v51 = 5;
    *(_QWORD *)(v51 + 8) = 0;
    *v41 = v51;
    ++*(_DWORD *)(v36 + 12);
    v52 = sub_22450D0(v36, v40);
    sub_989490(&v102, (__int64 *)(*(_QWORD *)v36 + 8LL * v52), 0);
    v43 = *v102;
    v44 = *(_QWORD *)(*v102 + 8);
    if ( v44 )
      goto LABEL_43;
    goto LABEL_32;
  }
  if ( *v41 == -8 )
  {
    --*(_DWORD *)(v36 + 16);
    goto LABEL_39;
  }
  sub_989490(&v102, v41, 0);
  v43 = *v102;
  v44 = *(_QWORD *)(*v102 + 8);
  if ( v44 )
  {
LABEL_43:
    v47 = v44;
    goto LABEL_44;
  }
LABEL_32:
  v45 = *(_QWORD *)(v36 + 120);
  if ( v45 )
  {
    v96 = v43;
    v44 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v45 + 16LL))(v45, "raise", 5);
    v43 = v96;
    *(_QWORD *)(v96 + 8) = v44;
    if ( v44 )
      goto LABEL_43;
  }
  v46 = *(_QWORD *)(v36 + 24);
  *(_QWORD *)(v36 + 104) += 24LL;
  v47 = (v46 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v36 + 32) >= v47 + 24 && v46 )
  {
    *(_QWORD *)(v36 + 24) = v47 + 24;
    v48 = (_QWORD *)((v46 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v101 = v43;
    v48 = (_QWORD *)sub_986170(v36 + 24, 24, 24, 3, v43, v42);
    v43 = v101;
    v47 = (unsigned __int64)v48;
  }
  v49 = *v48 & 0xFFFFF80000000000LL;
  v48[1] = 0;
  *v48 = v49 | 0x1FFFC05;
  *(_QWORD *)(v43 + 8) = v48;
  v48[2] = v43;
LABEL_44:
  v53 = (unsigned int)v104;
  v54 = (unsigned int)v104 + 1LL;
  if ( v54 > HIDWORD(v104) )
  {
    sub_2237220(&ptr, v105, v54, 8);
    v53 = (unsigned int)v104;
  }
  *((_QWORD *)ptr + v53) = v47;
  v55 = *(_QWORD *)(a2 + 17504);
  LODWORD(v104) = v104 + 1;
  v56 = sub_2244B30("format", 6);
  v57 = (unsigned int)sub_2244CB0(v55, "format", 6, v56);
  v59 = (__int64 *)(*(_QWORD *)v55 + 8 * v57);
  if ( !*v59 )
  {
LABEL_56:
    v68 = *(_QWORD *)(v55 + 24);
    *(_QWORD *)(v55 + 104) += 23LL;
    v69 = (v68 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v55 + 32) >= v69 + 23 && v68 )
    {
      *(_QWORD *)(v55 + 24) = v69 + 23;
    }
    else
    {
      v98 = v57;
      v69 = sub_986170(v55 + 24, 23, 23, 3, v57, v58);
      LODWORD(v57) = v98;
    }
    strcpy((char *)(v69 + 16), "format");
    *(_QWORD *)v69 = 6;
    *(_QWORD *)(v69 + 8) = 0;
    *v59 = v69;
    ++*(_DWORD *)(v55 + 12);
    v70 = sub_22450D0(v55, (unsigned int)v57);
    sub_989490(&v102, (__int64 *)(*(_QWORD *)v55 + 8LL * v70), 0);
    v61 = *v102;
    v62 = *(_QWORD *)(*v102 + 8);
    if ( v62 )
      goto LABEL_60;
    goto LABEL_49;
  }
  if ( *v59 == -8 )
  {
    --*(_DWORD *)(v55 + 16);
    goto LABEL_56;
  }
  sub_989490(&v102, v59, 0);
  v61 = *v102;
  v62 = *(_QWORD *)(*v102 + 8);
  if ( v62 )
  {
LABEL_60:
    v65 = v62;
    goto LABEL_61;
  }
LABEL_49:
  v63 = *(_QWORD *)(v55 + 120);
  if ( v63 )
  {
    v97 = v61;
    v62 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v63 + 16LL))(v63, "format", 6);
    v61 = v97;
    *(_QWORD *)(v97 + 8) = v62;
    if ( v62 )
      goto LABEL_60;
  }
  v64 = *(_QWORD *)(v55 + 24);
  *(_QWORD *)(v55 + 104) += 24LL;
  v65 = (v64 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v55 + 32) >= v65 + 24 && v64 )
  {
    *(_QWORD *)(v55 + 24) = v65 + 24;
    v66 = (_QWORD *)((v64 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v100 = v61;
    v66 = (_QWORD *)sub_986170(v55 + 24, 24, 24, 3, v61, v60);
    v61 = v100;
    v65 = (unsigned __int64)v66;
  }
  v67 = *v66 & 0xFFFFF80000000000LL;
  v66[1] = 0;
  *v66 = v67 | 0x1FFFC05;
  *(_QWORD *)(v61 + 8) = v66;
  v66[2] = v61;
LABEL_61:
  v71 = (unsigned int)v104;
  v72 = (unsigned int)v104 + 1LL;
  if ( v72 > HIDWORD(v104) )
  {
    sub_2237220(&ptr, v105, v72, 8);
    v71 = (unsigned int)v104;
  }
  *((_QWORD *)ptr + v71) = v65;
  v73 = *(_QWORD *)(a2 + 17512);
  LODWORD(v104) = v104 + 1;
  a1[2] = sub_FE3230(v73, (unsigned int)v104, ptr);
  v74 = *(_QWORD *)(a2 + 17504);
  v75 = sub_2244B30("arguments", 9);
  v76 = (unsigned int)sub_2244CB0(v74, "arguments", 9, v75);
  v78 = (__int64 *)(*(_QWORD *)v74 + 8 * v76);
  if ( *v78 )
  {
    if ( *v78 != -8 )
    {
      sub_989490(&v102, v78, 0);
      v81 = *v102;
      v82 = *(_QWORD *)(*v102 + 8);
      if ( v82 )
        goto LABEL_77;
      goto LABEL_66;
    }
    --*(_DWORD *)(v74 + 16);
  }
  v88 = *(_QWORD *)(v74 + 24);
  *(_QWORD *)(v74 + 104) += 26LL;
  v89 = (v88 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v74 + 32) >= v89 + 26 && v88 )
  {
    *(_QWORD *)(v74 + 24) = v89 + 26;
  }
  else
  {
    v99 = v76;
    v89 = sub_986170(v74 + 24, 26, 26, 3, v76, v77);
    LODWORD(v76) = v99;
  }
  strcpy((char *)(v89 + 16), "arguments");
  *(_QWORD *)v89 = 9;
  *(_QWORD *)(v89 + 8) = 0;
  *v78 = v89;
  ++*(_DWORD *)(v74 + 12);
  v90 = sub_22450D0(v74, (unsigned int)v76);
  sub_989490(&v102, (__int64 *)(*(_QWORD *)v74 + 8LL * v90), 0);
  v81 = *v102;
  v82 = *(_QWORD *)(*v102 + 8);
  if ( v82 )
    goto LABEL_77;
LABEL_66:
  v83 = *(_QWORD *)(v74 + 120);
  if ( !v83
    || (v82 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v83 + 16LL))(v83, "arguments", 9),
        (*(_QWORD *)(v81 + 8) = v82) == 0) )
  {
    v84 = *(_QWORD *)(v74 + 24);
    *(_QWORD *)(v74 + 104) += 24LL;
    v85 = (v84 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( *(_QWORD *)(v74 + 32) >= v85 + 24 && v84 )
    {
      *(_QWORD *)(v74 + 24) = v85 + 24;
      v86 = (_QWORD *)((v84 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
    else
    {
      v86 = (_QWORD *)sub_986170(v74 + 24, 24, 24, 3, v79, v80);
      v85 = (unsigned __int64)v86;
    }
    v87 = *v86 & 0xFFFFF80000000000LL;
    v86[1] = 0;
    *v86 = v87 | 0x1FFFC05;
    *(_QWORD *)(v81 + 8) = v86;
    v86[2] = v81;
    goto LABEL_78;
  }
LABEL_77:
  v85 = v82;
LABEL_78:
  v91 = (unsigned int)v104;
  v92 = (unsigned int)v104 + 1LL;
  if ( v92 > HIDWORD(v104) )
  {
    sub_2237220(&ptr, v105, v92, 8);
    v91 = (unsigned int)v104;
  }
  *((_QWORD *)ptr + v91) = v85;
  v93 = *(_QWORD *)(a2 + 17512);
  LODWORD(v104) = v104 + 1;
  v94 = sub_FE3230(v93, (unsigned int)v104, ptr);
  v95 = ptr;
  a1[3] = v94;
  if ( v95 != v105 )
    free(v95);
}
