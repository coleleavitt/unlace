__int64 __fastcall sub_17AFA10(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        double a7,
        double a8)
{
  __int64 v9; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  char v18; // al
  __int64 result; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  char v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int v27; // r15d
  void *v28; // rax
  bool v29; // al
  __int64 v30; // rax
  char v31; // bp
  unsigned int v32; // eax
  void *v33; // rdx
  unsigned int v34; // edx
  __int64 v35; // rsi
  char v36; // bp
  int v37; // eax
  void *v38; // rcx
  unsigned int v39; // edx
  bool v40; // bp
  __int64 v41; // rsi
  _BYTE *v42; // rax
  __int64 *v43; // rsi
  __int64 v44; // rbp
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 *v52; // rsi
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // ebp
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  bool v61; // al
  void **v62; // rcx
  __int64 v63; // r10
  __int64 v64; // r15
  unsigned __int64 *v65; // r12
  unsigned __int64 v66; // rbx
  __int64 *v67; // rbp
  bool v68; // r15
  char v69; // bp
  __int64 *v70; // rsi
  __int64 v71; // rax
  char v72; // bp
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  bool v77; // al
  __int64 v78; // rdi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  unsigned int v82; // eax
  unsigned __int64 v83; // rax
  int v84; // eax
  __int64 v85; // r14
  __int64 v86; // r14
  __int64 v87; // r8
  bool v88; // al
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // [rsp-10h] [rbp-178h]
  __int64 v94; // [rsp+8h] [rbp-160h]
  _DWORD *v96; // [rsp+18h] [rbp-150h]
  void *v97; // [rsp+18h] [rbp-150h]
  unsigned int v98; // [rsp+20h] [rbp-148h]
  void *v99; // [rsp+28h] [rbp-140h]
  unsigned int v100; // [rsp+28h] [rbp-140h]
  __int64 *v101; // [rsp+28h] [rbp-140h]
  unsigned __int64 v102; // [rsp+28h] [rbp-140h]
  void *v103; // [rsp+30h] [rbp-138h]
  unsigned __int64 *v104; // [rsp+30h] [rbp-138h]
  __int64 v105; // [rsp+38h] [rbp-130h]
  __int64 v106; // [rsp+38h] [rbp-130h]
  __int64 v107; // [rsp+40h] [rbp-128h]
  bool v108; // [rsp+5Bh] [rbp-10Dh] BYREF
  int v109; // [rsp+5Ch] [rbp-10Ch] BYREF
  unsigned __int64 v110; // [rsp+60h] [rbp-108h] BYREF
  __int64 v111; // [rsp+68h] [rbp-100h] BYREF
  void *v112; // [rsp+70h] [rbp-F8h] BYREF
  unsigned int v113; // [rsp+78h] [rbp-F0h]
  char v114; // [rsp+7Ch] [rbp-ECh]
  void *v115; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v116; // [rsp+88h] [rbp-E0h]
  _QWORD v117[2]; // [rsp+90h] [rbp-D8h] BYREF
  void *v118; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v119; // [rsp+A8h] [rbp-C0h]
  __int64 v120; // [rsp+B0h] [rbp-B8h]
  __int64 v121; // [rsp+B8h] [rbp-B0h]

  v9 = a2;
  v11 = (__int64)a1;
  v113 = *(unsigned __int8 *)(*(_QWORD *)(a1[31] + 17448) + 14LL);
  if ( v113 > 0x40 )
    sub_2205470(&v112, 0, 0);
  else
    v112 = nullptr;
  v114 = 1;
  v110 = 0;
  if ( !a6 )
    goto LABEL_14;
  if ( (unsigned __int8)sub_1E534E0(a1, a6, 7) )
    goto LABEL_14;
  v96 = (_DWORD *)(sub_19146F0(a1, a6) & 0xFFFFFFFFFFFFFFFELL);
  v12 = (unsigned __int64)v96;
  if ( !v96 )
    goto LABEL_14;
  if ( (unsigned __int8)sub_B8E180(a2 + 64) || (v13 = (*v96 >> 14) & 0x1F, ((*v96 >> 14) & 0x14) != 0) )
  {
    v16 = a1[31];
    v17 = *(_QWORD *)(v16 + 19072);
LABEL_8:
    v110 = v17;
    v18 = *(_BYTE *)(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1[29] + 1) & 0x10) != 0 && (*(_BYTE *)(a2 + 77) & 2) != 0 )
  {
    v110 = sub_6F3660(a2);
    v30 = sub_1C0AEA0(a1, v96, v110, &v112, 1);
    if ( v30 == 1 )
      goto LABEL_14;
    v12 = v30 & 0xFFFFFFFFFFFFFFFELL;
    goto LABEL_28;
  }
  v13 = (*v96 >> 14) & 8;
  if ( !(_DWORD)v13 )
  {
    v46 = sub_1915F20(a1, v96, &v112, 1) & 0xFFFFFFFFFFFFFFFELL;
    if ( !v46 )
      goto LABEL_14;
    v12 = v46;
  }
  if ( (*(_BYTE *)(a2 + 74) & 1) == 0 && (*(_QWORD *)(a2 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v16 = a1[31];
    if ( (*(_BYTE *)(a1[29] + 1) & 8) == 0 )
    {
      if ( sub_AADFF0(a1[31], (__int64)&v112, *(_QWORD *)(v16 + 18720), v14, v15) )
      {
        v16 = a1[31];
        v13 = *(_QWORD *)(v16 + 18720);
        v89 = *(_QWORD *)&byte_8[*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL];
        v90 = v89 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v89 | (unsigned __int8)*(_QWORD *)(v12 + 8)) & 7;
        v14 = *(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)v13 | (unsigned __int8)*(_QWORD *)&byte_8[v13 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
        if ( v90 != v14 )
        {
          v91 = sub_160A600((__int64)a1, v12, v13, 0x1Bu, 0, 0, a7, a8, 0);
          v16 = a1[31];
          v12 = v91 & 0xFFFFFFFFFFFFFFFELL;
        }
      }
      else
      {
        sub_168B9F0((__int64)&v118, a1 + 1, a4, (*(_BYTE *)a1[29] & 8) == 0 ? 5508 : 6638, 0);
        v109 = 0;
        v85 = sub_1587D10((__int64)&v118, &v109);
        sub_C1DEB0(&v115, (int)&v112, 10, v114 ^ 1, 0, 1u, 0);
        v86 = sub_1682AF0(v85, (__int64)&v115);
        v111 = sub_EEC8C0(v12, (__int64)&v115, a7);
        v87 = sub_1587DB0(v86, &v111);
        v88 = v114;
        if ( !v114 )
          v88 = !sub_179A730((__int64 *)&v112);
        v108 = v88;
        sub_1588420(v87, (unsigned __int8 *)&v108);
        if ( v115 != v117 )
          operator delete(v115);
        sub_15F7200(&v118);
        v16 = a1[31];
      }
    }
    v17 = *(_QWORD *)(v12 + 8);
    goto LABEL_8;
  }
  v47 = sub_6F3660(a2);
  v48 = a1[31];
  v110 = v47;
  if ( !sub_AADFF0(v48, (__int64)&v112, v47, v49, v50) )
  {
    v51 = *(_QWORD *)(*(_QWORD *)(v11 + 248) + 17448LL);
    if ( *(_DWORD *)(v51 + 260) == 15 && ((v84 = *(_DWORD *)(v51 + 264), v84 == 27) || !v84) )
    {
      v52 = (__int64 *)(v11 + 8);
      v53 = 5543;
    }
    else
    {
      v52 = (__int64 *)(v11 + 8);
      v53 = 3733;
    }
    sub_168B9F0((__int64)&v118, v52, a4, v53, 0);
    sub_1605D30((__int64)&v118, (__int64 *)&v110);
    sub_15F7200(&v118);
  }
  v54 = 27;
  v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v55 + 16) == 13 )
    v54 = (((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) == 436) + 27;
  v56 = sub_160A600(v11, v12, v110, v54, 0, 0, a7, a8, 0);
  v14 = v92;
  v12 = v56 & 0xFFFFFFFFFFFFFFFELL;
LABEL_28:
  if ( v12 )
  {
LABEL_29:
    v16 = *(_QWORD *)(v11 + 248);
    v18 = *(_BYTE *)(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4;
    goto LABEL_9;
  }
LABEL_14:
  if ( (unsigned __int8)sub_B8E180(v9 + 64) )
  {
    v16 = *(_QWORD *)(v11 + 248);
    v20 = *(_QWORD *)(v16 + 19072);
    v110 = v20;
    goto LABEL_16;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)(v9 + 77) & 2) != 0 )
    {
      v20 = sub_6F3660(v9);
      v16 = *(_QWORD *)(v11 + 248);
    }
    else
    {
      v16 = *(_QWORD *)(v11 + 248);
      v20 = *(_QWORD *)(v16 + 18720);
    }
    v110 = v20;
LABEL_16:
    v12 = 0;
    if ( (*(_BYTE *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
      goto LABEL_10;
    goto LABEL_17;
  }
  v31 = *(_BYTE *)(a3 + 80);
  sub_179A760((__int64)&v118, *(_QWORD *)(a3 + 56), *(_DWORD *)(a3 + 64));
  v32 = v119;
  v33 = v118;
  if ( v113 > 0x40 && v112 )
  {
    v99 = v118;
    v98 = v119;
    operator delete[](v112);
    v33 = v99;
    v32 = v98;
  }
  v112 = v33;
  v114 = v31;
  v113 = v32;
  sub_2205900(&v112);
  v34 = *(_DWORD *)(a3 + 64);
  v35 = *(_QWORD *)(a3 + 56);
  v110 = *(_QWORD *)(a3 + 48);
  v36 = *(_BYTE *)(a3 + 80);
  sub_179A760((__int64)&v118, v35, v34);
  BYTE4(v116) = v36;
  LODWORD(v116) = v119;
  v115 = v118;
  v103 = v118;
  v100 = v119;
  if ( v114 )
  {
    v37 = sub_2205DB0(&v112, &v115);
    v39 = v100;
    v38 = v103;
  }
  else
  {
    v37 = sub_2205E20(&v112, &v115);
    v38 = v103;
    v39 = v100;
  }
  v40 = v37 < 0;
  if ( v39 > 0x40 && v38 )
    operator delete[](v38);
  v13 = v110;
  v16 = *(_QWORD *)(v11 + 248);
  v41 = *(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
  if ( v40 )
  {
    v105 = *(_QWORD *)(v11 + 248);
    v101 = (__int64 *)(v110 & 0xFFFFFFFFFFFFFFF0LL);
    v115 = *(void **)(v16 + 18712);
    v116 = *(_QWORD *)(v16 + 18720);
    v117[0] = *(_QWORD *)(v16 + 18728);
    v117[1] = *(_QWORD *)(v16 + 18736);
    v118 = *(void **)(v16 + 18760);
    v119 = *(_QWORD *)(v16 + 18768);
    v120 = *(_QWORD *)(v16 + 18776);
    v121 = *(_QWORD *)(v16 + 18784);
    v57 = sub_A97D20(v105, v41);
    v61 = sub_F65240(*v101, v41, v58, (__int64)v101, v59, v60);
    v62 = &v118;
    v63 = v105;
    v106 = v11;
    if ( v61 )
      v62 = &v115;
    v102 = v57;
    v64 = v63;
    v107 = v9;
    v65 = (unsigned __int64 *)v62;
    v104 = (unsigned __int64 *)(v62 + 4);
    while ( 1 )
    {
      v66 = *v65;
      v67 = (__int64 *)(*v65 & 0xFFFFFFFFFFFFFFF0LL);
      if ( v102 < sub_A97D20(v64, *v67) )
        break;
      if ( v104 == ++v65 )
      {
        v68 = 0;
        v11 = v106;
        v9 = v107;
        goto LABEL_75;
      }
    }
    v83 = v66;
    v9 = v107;
    v11 = v106;
    v68 = v67 != nullptr;
    if ( v67 && (*(_BYTE *)(v107 + 77) & 2) == 0 )
    {
      v110 = v83;
      goto LABEL_86;
    }
LABEL_75:
    v69 = *(_BYTE *)(a3 + 80);
    sub_179A760((__int64)&v118, *(_QWORD *)(a3 + 56), *(_DWORD *)(a3 + 64));
    BYTE4(v116) = v69;
    LODWORD(v116) = v119;
    v115 = v118;
    sub_C18DB0((__int64)&v112, (__int64)&v115);
    if ( (unsigned int)v116 > 0x40 && v115 )
      operator delete[](v115);
    sub_2206CD0(&v118, &v112, 2 * v113);
    if ( v113 > 0x40 && v112 )
      operator delete[](v112);
    v112 = v118;
    v113 = v119;
    sub_2205900(&v112);
    v70 = (__int64 *)(v11 + 8);
    if ( (*(_BYTE *)(v9 + 77) & 2) != 0 )
    {
      sub_168B9F0((__int64)&v118, v70, a4, 0xE96u, 0);
      sub_C1DEB0(&v115, (int)&v112, 10, v114 ^ 1, 0, 1u, 0);
      v71 = sub_1682AF0((__int64)&v118, (__int64)&v115);
      sub_1605D30(v71, (__int64 *)&v110);
    }
    else
    {
      sub_168B9F0((__int64)&v118, v70, a4, 0x15A6u, 0);
      sub_C1DEB0(&v115, (int)&v112, 10, v114 ^ 1, 0, 1u, 0);
      sub_1682AF0((__int64)&v118, (__int64)&v115);
    }
    if ( v115 != v117 )
      operator delete(v115);
    sub_15F7200(&v118);
LABEL_86:
    v72 = *(_BYTE *)(a3 + 80);
    sub_179A760((__int64)&v118, *(_QWORD *)(a3 + 56), *(_DWORD *)(a3 + 64));
    BYTE4(v116) = v72;
    LODWORD(v116) = v119;
    v115 = v118;
    sub_C18DB0((__int64)&v112, (__int64)&v115);
    if ( (unsigned int)v116 > 0x40 && v115 )
      operator delete[](v115);
    v77 = sub_F65240(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v115, v73, v74, v75, v76);
    v78 = *(_QWORD *)(v11 + 248);
    v114 = !v77;
    v82 = sub_AAC1F0(v78, v110, v79, v80, v81);
    sub_2206D90(&v118, &v112, v82);
    if ( v113 > 0x40 && v112 )
      operator delete[](v112);
    v112 = v118;
    v113 = v119;
    sub_2205900(&v112);
    v42 = *(_BYTE **)(v11 + 232);
    if ( (v42[1] & 8) != 0 || !v68 || (*(_BYTE *)(v9 + 77) & 2) != 0 )
      goto LABEL_49;
    v43 = (__int64 *)(v11 + 8);
LABEL_46:
    sub_168B9F0((__int64)&v118, v43, a4, (*v42 & 8) == 0 ? 5508 : 6638, 0);
    v109 = 1;
    v44 = sub_1587D10((__int64)&v118, &v109);
    sub_C1DEB0(&v115, (int)&v112, 10, v114 ^ 1, 0, 1u, 0);
    v45 = sub_1682AF0(v44, (__int64)&v115);
    LODWORD(v111) = 1;
    sub_1587D10(v45, (int *)&v111);
    if ( v115 != v117 )
      operator delete(v115);
    sub_15F7200(&v118);
LABEL_49:
    v16 = *(_QWORD *)(v11 + 248);
    v20 = v110;
    goto LABEL_16;
  }
  v14 = *(_QWORD *)(v11 + 232);
  v12 = 0;
  v18 = *(_BYTE *)(v41 + 17) & 4;
  if ( (*(_BYTE *)(v14 + 1) & 8) == 0 )
  {
    if ( v18 )
      goto LABEL_10;
    if ( sub_AADFF0(*(_QWORD *)(v11 + 248), (__int64)&v112, v110, v14, v15) )
      goto LABEL_29;
    v42 = *(_BYTE **)(v11 + 232);
    v43 = (__int64 *)(v11 + 8);
    goto LABEL_46;
  }
LABEL_9:
  if ( v18 )
    goto LABEL_10;
LABEL_17:
  v21 = sub_AAC1F0(v16, v110, v13, v14, v15);
  v22 = v114;
  if ( v114 )
    sub_2206D90(&v118, &v112, v21);
  else
    sub_2206DE0(&v118, &v112, v21);
  v27 = v119;
  v28 = v118;
  if ( v113 > 0x40 && v112 )
  {
    v97 = v118;
    operator delete[](v112);
    v28 = v97;
  }
  v112 = v28;
  v113 = v27;
  v114 = v22;
  v29 = sub_F65240(*(_QWORD *)(v110 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v112, v23, v24, v25, v26);
  v16 = *(_QWORD *)(v11 + 248);
  v114 = !v29;
LABEL_10:
  result = sub_B7A1B0(v16, v9, a4, a5, v110, v12, (__int64)&v112);
  if ( v113 > 0x40 )
  {
    if ( v112 )
    {
      v94 = result;
      operator delete[](v112);
      return v94;
    }
  }
  return result;
}
