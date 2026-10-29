void __fastcall sub_172C560(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        __int64 a7)
{
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r12
  __int64 *v16; // r14
  __int64 v17; // rax
  __int64 *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  __int64 v25; // rcx
  char v26; // al
  unsigned __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned int *v39; // rax
  unsigned int *v40; // rdx
  __int64 v41; // rcx
  char *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  _QWORD *v56; // rdi
  __int64 v57; // rax
  __int64 (*v58)(void); // rdx
  __int64 (__fastcall *v59)(__int64); // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 *v62; // rsi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 *v81; // rdx
  __int64 *v82; // r14
  __int64 *v83; // r12
  __int64 *v84; // r15
  __int64 v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // r8
  __int64 v100; // r12
  __int64 v101; // r14
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 *v110; // rdx
  __int64 *v111; // r14
  __int64 *v112; // r15
  __int64 v113; // rdi
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned __int64 v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // rdi
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdi
  int v123; // r12d
  unsigned int v124; // r13d
  __int64 v125; // rdi
  int v126; // r15d
  __int64 v127; // rbp
  unsigned int v128; // eax
  __int64 v129; // rdi
  __int64 v130; // r14
  __int64 v131; // rax
  _QWORD *v132; // rsi
  __int64 v133; // rdx
  _QWORD *v134; // rdi
  char v135; // r8
  _QWORD *v136; // rdx
  _QWORD *v137; // r12
  unsigned __int64 v138; // r13
  __int64 v139; // rax
  __int64 *v140; // r13
  unsigned __int64 i; // rax
  __int64 j; // r15
  __int64 v143; // rbx
  __int64 *v144; // rax
  _QWORD *v145; // rax
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r9
  __int64 v151; // rbx
  int v152; // edi
  __int64 v153; // rsi
  _QWORD *v157; // [rsp+18h] [rbp-400h]
  __int64 v158; // [rsp+18h] [rbp-400h]
  __int64 v159; // [rsp+20h] [rbp-3F8h]
  void *v160; // [rsp+28h] [rbp-3F0h]
  __int64 v161; // [rsp+28h] [rbp-3F0h]
  __int64 v162; // [rsp+28h] [rbp-3F0h]
  __int64 v163; // [rsp+28h] [rbp-3F0h]
  __int64 v164; // [rsp+30h] [rbp-3E8h]
  __int64 v165; // [rsp+30h] [rbp-3E8h]
  void *v166; // [rsp+30h] [rbp-3E8h]
  __int64 v167; // [rsp+30h] [rbp-3E8h]
  _QWORD *v168; // [rsp+40h] [rbp-3D8h]
  __int64 *v169; // [rsp+48h] [rbp-3D0h]
  unsigned __int64 v170; // [rsp+68h] [rbp-3B0h]
  unsigned int v171[4]; // [rsp+70h] [rbp-3A8h] BYREF
  int v172; // [rsp+80h] [rbp-398h]
  __int64 v173; // [rsp+84h] [rbp-394h]
  int v174; // [rsp+90h] [rbp-388h]
  __m128 v175; // [rsp+98h] [rbp-380h] BYREF
  __int64 v176; // [rsp+A8h] [rbp-370h]
  char v177; // [rsp+B0h] [rbp-368h]
  __int64 v178; // [rsp+B8h] [rbp-360h]
  __int64 v179; // [rsp+C0h] [rbp-358h]
  __int64 v180; // [rsp+C8h] [rbp-350h]
  __m128 v181; // [rsp+D0h] [rbp-348h] BYREF
  __int64 v182; // [rsp+E0h] [rbp-338h]
  __int64 v183; // [rsp+F8h] [rbp-320h] BYREF
  void *ptr; // [rsp+130h] [rbp-2E8h] BYREF
  __int64 v185; // [rsp+138h] [rbp-2E0h]
  unsigned __int64 v186; // [rsp+140h] [rbp-2D8h]
  _QWORD v187[8]; // [rsp+148h] [rbp-2D0h] BYREF
  char v188; // [rsp+188h] [rbp-290h]
  __int64 *v189; // [rsp+190h] [rbp-288h]
  __int64 v190; // [rsp+198h] [rbp-280h]
  int v191; // [rsp+1A0h] [rbp-278h]
  char v192; // [rsp+1A4h] [rbp-274h]
  __int64 v193; // [rsp+1A8h] [rbp-270h] BYREF
  unsigned int *v194; // [rsp+1F0h] [rbp-228h] BYREF
  unsigned int *v195; // [rsp+1F8h] [rbp-220h]
  __int64 v196; // [rsp+200h] [rbp-218h]
  __int64 v197; // [rsp+208h] [rbp-210h]
  __int64 v198[9]; // [rsp+2D8h] [rbp-140h] BYREF
  int v199[62]; // [rsp+320h] [rbp-F8h] BYREF

  v8 = a1;
  v159 = a2;
  v157 = (_QWORD *)sub_168B6C0((__int64)a1);
  if ( !a3 )
    goto LABEL_78;
  a2 = a3;
  v12 = sub_19179A0(*a1, a3, 1);
  if ( v12 == 1 )
    return;
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  v14 = v13;
  if ( v13 )
  {
    v15 = *(_QWORD *)(v13 + 8);
    v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
  }
  else
  {
LABEL_78:
    if ( a7 )
    {
      v14 = 0;
      a2 = sub_A82070((__int64)v157, a7, 0, v9, v10, v11);
      v15 = sub_A74EC0((__int64)v157, a2);
      v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v93 = sub_A8A250(v157);
      v14 = *(_QWORD *)(v93 + 48);
      if ( v14 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFF0LL;
        v16 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
        v14 = 0;
      }
      else
      {
        a2 = v93;
        v15 = sub_A7AA70((__int64)v157, v93, v94, v9, v95, v11);
        v16 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
  }
  v17 = *v16;
  v18 = v16;
  if ( *(_BYTE *)(*v16 + 16) == 34 )
    goto LABEL_6;
  v51 = *(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v51 + 16) != 34 )
    goto LABEL_41;
  v17 = sub_F63050(*v16, a2, v51, v9);
  if ( v17 )
  {
LABEL_6:
    v19 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v20 = (unsigned int)*(unsigned __int8 *)(v19 + 16) - 35;
    if ( (unsigned int)v20 > 1 )
      v19 = sub_F63050(v19, a2, v20, v9);
    if ( !(*(_BYTE *)(v19 + 19) >> 2) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v21 + 16) == 13 && ((*(_WORD *)(v21 + 18) >> 3) & 0x1FF) == 0x1E9 )
        goto LABEL_11;
    }
  }
  v52 = *v16;
  if ( *(_BYTE *)(*v16 + 16) != 34 )
  {
    v92 = *(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v92 + 16) != 34 )
      goto LABEL_41;
    v52 = sub_F63050(*v16, a2, v92, v9);
    if ( !v52 )
      goto LABEL_41;
  }
  v53 = *(_QWORD *)(*(_QWORD *)(v52 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  v54 = (unsigned int)*(unsigned __int8 *)(v53 + 16) - 35;
  if ( (unsigned int)v54 > 1 )
  {
    v53 = sub_F63050(v53, a2, v54, v9);
    if ( *(_BYTE *)(v53 + 19) >> 2 )
      goto LABEL_41;
  }
  else if ( *(_BYTE *)(v53 + 19) >> 2 )
  {
    goto LABEL_41;
  }
  v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v55 + 16) != 13 || ((*(_WORD *)(v55 + 18) >> 3) & 0x1FF) != 0x1EA )
  {
LABEL_41:
    if ( v14 )
    {
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
      {
        v96 = sub_1BFF9E0(*a1, v14);
        if ( v96 > 1 )
        {
          v15 = *(_QWORD *)((v96 & 0xFFFFFFFFFFFFFFFELL) + 8);
          v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
    }
    goto LABEL_43;
  }
LABEL_11:
  if ( !v14 )
    goto LABEL_43;
  if ( (*(_WORD *)v14 & 0x1FF) != 0x21 )
    goto LABEL_43;
  v181.m128_u64[0] = sub_C9AC10(v14);
  if ( !v181.m128_u64[0] )
    goto LABEL_43;
  v24 = sub_FDE960((__int64 *)&v181, 0);
  if ( !v24 )
    goto LABEL_43;
  if ( (*(_BYTE *)(v14 + 27) & 1) == 0 )
    goto LABEL_43;
  v25 = *(_QWORD *)(v14 + 16);
  if ( !v25 )
    goto LABEL_43;
  v26 = *(_BYTE *)(v14 + 26);
  if ( v26 )
  {
    if ( v26 != 1 )
      goto LABEL_43;
    v27 = *(_QWORD *)(*(_QWORD *)(v14 + 40) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v28 = *(_QWORD *)v27;
    if ( *(_BYTE *)(*(_QWORD *)v27 + 16LL) != 34 )
    {
      v161 = *(_QWORD *)(v14 + 16);
      v114 = sub_16FF130(v28, 0, v22, v25);
      v25 = v161;
      v28 = v114;
      if ( !v114 )
        goto LABEL_43;
    }
    v164 = v25;
    v29 = sub_A5E7C0(v28, 0, v22, v25, v23);
    v33 = sub_9C7D40(v29, 0, v30, v31, v32);
    v36 = v164;
    v160 = (void *)v33;
  }
  else
  {
    v117 = *(_QWORD *)(v14 + 40);
    if ( v117 )
      v117 = *(_QWORD *)v117 & 0xFFFFFFFFFFFFFFF0LL;
    v118 = *(_QWORD *)v117;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v117 + 16LL) - 35 > 1 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v118 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1 )
        goto LABEL_43;
      v163 = *(_QWORD *)(v14 + 16);
      v120 = sub_F63050(v118, 0, v22, v25);
      v25 = v163;
      v118 = v120;
      if ( !v120 )
        goto LABEL_43;
    }
    v167 = v25;
    v119 = sub_9C7D40(v118, 0, v22, v25, v23);
    v36 = v167;
    v160 = (void *)v119;
  }
  if ( v160 )
  {
    v165 = v36;
    v37 = sub_BAB630((__int64)v160, 0, v34, v36, v35, v11);
    v38 = v165;
    v166 = (void *)v37;
    v39 = *(unsigned int **)(v24 + 16);
    v40 = (unsigned int *)*v39;
    if ( (*(_BYTE *)(v38 + 58) & 2) != 0 )
    {
      ptr = v160;
      v195 = v40;
      v194 = v39 + 4;
      v197 = 0;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "retain", 6);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "strong", 6);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "autorelease", 11);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "copy", 4);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "copyWithZone", 12);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "mutableCopy", 11);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "mutableCopyWithZone", 19);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "awakeFromCoder", 14);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "replacementObjectFromCoder", 26);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "class", 5);
      v41 = 13;
      v42 = "classForCoder";
    }
    else
    {
      v195 = (unsigned int *)*v39;
      v194 = v39 + 4;
      v197 = 0;
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "new", 3);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "alloc", 5);
      ptr = v160;
      sub_1712B50((__int64)&v194, (__int64 *)&ptr, "allocWithZone", 13);
      v41 = 5;
      v42 = "class";
    }
    ptr = v160;
    sub_1712B50((__int64)&v194, (__int64 *)&ptr, v42, v41);
    ptr = v166;
    sub_1712B50((__int64)&v194, (__int64 *)&ptr, "superclass", 10);
    if ( (_BYTE)v197 )
    {
      v45 = v196;
      if ( v196 )
      {
        v46 = *v16;
        if ( *(_BYTE *)(*v16 + 16) == 34
          || (v115 = *(_QWORD *)(*(_QWORD *)(v46 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v115 + 16) == 34)
          && (v162 = v196, v46 = sub_F63050(*v16, v196, v115, v43), v45 = v162, v46) )
        {
          v47 = *(_QWORD *)(*(_QWORD *)(v46 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          v48 = (unsigned int)*(unsigned __int8 *)(v47 + 16) - 35;
          if ( (unsigned int)v48 > 1 )
            v47 = sub_F63050(v47, v45, v48, v43);
          if ( !(*(_BYTE *)(v47 + 19) >> 2) )
          {
            v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(v49 + 16) == 13 && ((*(_WORD *)(v49 + 18) >> 3) & 0x1FF) == 0x1EA )
            {
              v50 = sub_A82070((__int64)v157, v45, 0, v43, v44, v11);
              sub_172C310(v8, v159, v50, a4, a5, a6, a7 != 0);
              return;
            }
          }
        }
        v116 = sub_A82070((__int64)v157, v45, 0, v43, v44, v11);
        v15 = sub_A74EC0((__int64)v157, v116);
        v18 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
  }
LABEL_43:
  v56 = (_QWORD *)v8[1];
  LODWORD(ptr) = 30;
  BYTE4(ptr) = 0;
  v187[0] = a4;
  v185 = 0;
  v187[1] = a5;
  v189 = &v193;
  v186 = v15;
  v57 = *v56;
  v188 = 0;
  v58 = *(__int64 (**)(void))(v57 + 48);
  v192 = 1;
  v190 = 8;
  v191 = 0;
  if ( (char *)v58 == (char *)sub_15A1860 )
  {
    v59 = *(__int64 (__fastcall **)(__int64))(v57 + 40);
    v60 = (__int64)(v56 + 3);
    if ( v59 == sub_15A1850 )
    {
LABEL_45:
      v61 = v56[6];
      goto LABEL_46;
    }
  }
  else
  {
    v90 = v58();
    v56 = (_QWORD *)v8[1];
    v60 = v90;
    v59 = *(__int64 (__fastcall **)(__int64))(*v56 + 40LL);
    if ( v59 == sub_15A1850 )
      goto LABEL_45;
  }
  v158 = v60;
  v91 = ((__int64 (*)(void))v59)();
  v60 = v158;
  v61 = v91;
LABEL_46:
  sub_16FF270((__int64)&v194, *v8, v61, v60, (unsigned int *)&ptr, v11, 0);
  sub_17038E0((__int64)&ptr);
  v62 = v198;
  sub_16FF160((__int64)v198, (std::__detail::_List_node_base *)v198);
  if ( a7 )
  {
    v62 = nullptr;
    v63 = sub_1713960(*v8, 0, a4, a5, (__int64)&v194);
    if ( v63 )
    {
      v62 = (__int64 *)v63;
      sub_17006C0((__int64)&v194, v63);
    }
  }
  v64 = sub_15F1670(*v8);
  if ( v64 )
    v198[8] = *(_QWORD *)(v64 + 40);
  BYTE4(v186) = 1;
  ptr = v187;
  v185 = 16;
  LODWORD(v186) = 0;
  v68 = *v18;
  if ( *(_BYTE *)(*v18 + 16) == 34 )
    goto LABEL_52;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 34 )
    goto LABEL_73;
  v68 = sub_F63050(v68, v62, v65, v66);
  if ( v68 )
  {
LABEL_52:
    v69 = sub_A5E7C0(v68, (__int64)v62, v65, v66, v67);
    v65 = *(unsigned __int8 *)(v69 + 19);
    LOBYTE(v65) = (unsigned __int8)v65 >> 2;
    if ( !(_BYTE)v65 )
    {
      v70 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v70 + 16) == 13 && ((*(_WORD *)(v70 + 18) >> 3) & 0x1FF) == 0x1EA )
      {
LABEL_55:
        v71 = sub_15F1670(*v8);
        if ( v71 )
        {
          v72 = sub_BA85D0(v71);
          if ( v72 )
            sub_1714F30(v72, 0, 0, a4, a5, *(_QWORD *)(*v8 + 544), (__int64)&ptr, a6, &v194, 1u, 0);
        }
        goto LABEL_58;
      }
    }
  }
  v68 = *v18;
  if ( *(_BYTE *)(*v18 + 16) == 34 )
    goto LABEL_69;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v68 = sub_F63050(v68, v62, v65, v66);
    if ( !v68 )
    {
LABEL_72:
      v68 = *v18;
      goto LABEL_73;
    }
LABEL_69:
    v75 = sub_A5E7C0(v68, (__int64)v62, v65, v66, v67);
    if ( *(_BYTE *)(v75 + 19) >> 2 )
    {
      v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v75 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v76 + 16) == 13 && ((*(_WORD *)(v76 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_55;
    }
    goto LABEL_72;
  }
LABEL_73:
  v77 = sub_F675E0(v68);
  if ( v77 )
  {
    v82 = (__int64 *)sub_A5E9B0(v77, (__int64)v62, v78, v79, v80);
    if ( v82 == v81 )
      goto LABEL_58;
    v83 = v8;
    v84 = v81;
    do
    {
      v85 = *v82++;
      sub_1714F30(v85, 1, 0, a4, a5, *(_QWORD *)(*v8 + 544), (__int64)&ptr, a6, &v194, 1u, 0);
    }
    while ( v84 != v82 );
    goto LABEL_77;
  }
  v100 = sub_F67AB0(*v18, (__int64)v62, v78, v79, v80);
  if ( v100 )
  {
    v101 = *(_QWORD *)(*v8 + 544);
    v102 = sub_A5E7C0(v100, (__int64)v62, v97, v98, v99);
    v106 = sub_9C7D40(v102, (__int64)v62, v103, v104, v105);
    sub_1714F30(v106, 1, 0, a4, a5, v101, (__int64)&ptr, a6, &v194, 1u, 0);
    v111 = (__int64 *)sub_A5E9B0(v100, 1, v107, v108, v109);
    if ( v111 == v110 )
      goto LABEL_58;
    v83 = v8;
    v112 = v110;
    do
    {
      v113 = *v111++;
      sub_1714F30(v113, 1, 0, a4, a5, *(_QWORD *)(*v8 + 544), (__int64)&ptr, a6, &v194, 1u, 0);
    }
    while ( v112 != v111 );
LABEL_77:
    v8 = v83;
    goto LABEL_58;
  }
  if ( !sub_9C7DB0(*v18, (__int64)v62, v97, v98, v99) )
    goto LABEL_58;
  v121 = *v8;
  v122 = *(_QWORD *)(*v8 + 552);
  if ( v122 )
  {
    v123 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v122 + 32LL))(v122);
    if ( v123 )
    {
      v124 = 0;
      v121 = *v8;
      while ( 1 )
      {
        v130 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v121 + 552) + 24LL))(
                 *(_QWORD *)(v121 + 552),
                 v124);
        if ( !v130 )
          goto LABEL_124;
        v125 = *(_QWORD *)(*v8 + 736);
        v126 = *(_DWORD *)(v125 + 80);
        if ( !v126 )
          goto LABEL_151;
        v127 = *(_QWORD *)(v125 + 64);
        v128 = (v126 - 1) & sub_FDE780(v130);
        v129 = *(_QWORD *)(v127 + 40LL * v128);
        v121 = *v8;
        if ( v130 != v129 )
          break;
LABEL_122:
        if ( v123 == ++v124 )
          goto LABEL_125;
      }
      if ( v129 != -1 )
      {
        v152 = 1;
        do
        {
          v128 = (v126 - 1) & (v152 + v128);
          v153 = *(_QWORD *)(v127 + 40LL * v128);
          if ( v130 == v153 )
            goto LABEL_122;
          ++v152;
        }
        while ( v153 != -1 );
      }
      v125 = *(_QWORD *)(v121 + 736);
LABEL_151:
      sub_18953D0(v125, v130);
LABEL_124:
      v121 = *v8;
      goto LABEL_122;
    }
    v121 = *v8;
  }
LABEL_125:
  v131 = *(_QWORD *)(v121 + 736);
  v132 = *(_QWORD **)(v131 + 64);
  v133 = *(unsigned int *)(v131 + 80);
  v134 = &v132[5 * v133];
  if ( *(_DWORD *)(v131 + 72) )
  {
    v135 = 0;
    v136 = &v132[5 * v133];
  }
  else
  {
    v135 = 1;
    v136 = &v132[5 * v133];
    v132 = v134;
  }
  sub_171EC50(&v181, v132, v136, v131 + 64, v135);
  __SET_PAIR__((unsigned __int64)v168, v138, *(_OWORD *)&v181);
  v137 = (_QWORD *)v181.m128_u64[0];
  v139 = *(_QWORD *)(*v8 + 736);
  sub_171EC50(
    &v181,
    (_QWORD *)(*(_QWORD *)(v139 + 64) + 40LL * *(unsigned int *)(v139 + 80)),
    (_QWORD *)(*(_QWORD *)(v139 + 64) + 40LL * *(unsigned int *)(v139 + 80)),
    v139 + 64,
    1);
  v170 = v181.m128_u64[0];
  if ( v138 != v181.m128_u64[0] )
  {
    v169 = v8;
    while ( 1 )
    {
      v140 = v137 + 1;
      if ( v137 != (_QWORD *)-8LL )
      {
        for ( i = v137[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *v144 & 0xFFFFFFFFFFFFFFF8LL )
        {
          v181.m128_u64[0] = *(_QWORD *)(i + 40);
          if ( (unsigned int)a5 <= (unsigned int)sub_FDE930((__int64 *)&v181) )
          {
            if ( (_DWORD)a5 )
            {
              for ( j = 0; ; ++j )
              {
                v143 = *(_QWORD *)(a4 + 8 * j);
                if ( v143 != sub_FDE960((__int64 *)&v181, j) )
                  break;
                if ( (_DWORD)a5 - 1 == j )
                  goto LABEL_147;
              }
            }
            else
            {
LABEL_147:
              sub_1706730(&v181, (__int64)&ptr, *(_QWORD *)((*v140 & 0xFFFFFFFFFFFFFFF8LL) + 40));
              if ( (_BYTE)v182 )
              {
                v182 = 0;
                v181 = 0;
                v146 = sub_16FE9F0((__int64)&v194, *v140 & 0xFFFFFFFFFFFFFFF8LL);
                v147 = *v140;
                v172 = v146;
                v173 = 0;
                v175 = v181;
                *(_QWORD *)v171 = v147 & 0xFFFFFFFFFFFFFFF8LL;
                v181 = 0;
                v176 = v182;
                v174 = 0;
                v182 = 0;
                v178 = 0;
                v177 = v177 & 0x80 | 0x40;
                v179 = 0;
                v180 = 0;
                sub_15A3440(v171, 1, v147 & 0xFFFFFFFFFFFFFFF8LL, v148, v149, v150);
                sub_1705410((__int64)&v181);
                v177 &= ~0x10u;
                LODWORD(v173) = a5;
                v151 = *(_QWORD *)(*v169 + 544);
                sub_17048E0((__int64)&v181, (__int64)v171);
                sub_17143A0(&v194, &v181, v151);
                sub_1705410((__int64)&v183);
                sub_1705410((__int64)&v175);
              }
            }
          }
          v144 = (__int64 *)(v140[1] & 0xFFFFFFFFFFFFFFF8LL);
          v140 = v144;
          if ( !v144 )
            break;
        }
      }
      if ( v137 + 5 != v168 )
      {
        if ( v137[5] < 0xFFFFFFFFFFFFFFFELL )
        {
          v137 += 5;
          goto LABEL_145;
        }
        v145 = v137 + 10;
        while ( 1 )
        {
          v137 = v145;
          if ( v145 == v168 )
            break;
          v145 += 5;
          if ( *v137 < 0xFFFFFFFFFFFFFFFELL )
            goto LABEL_145;
        }
      }
      v137 = v168;
LABEL_145:
      if ( v137 == (_QWORD *)v170 )
      {
        v8 = v169;
        break;
      }
    }
  }
LABEL_58:
  sub_16FF8C0((__int64)v198, v198[1]);
  if ( a6 )
  {
    v86 = sub_17020B0((__int64)&v194, a5);
    if ( (v86 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      sub_172C2C0(v8, v159, v86, 0, v88, v89);
    else
      sub_172A9A0(v8, v159, 7u, v87, v88, v89);
  }
  else
  {
    v73 = v8[1];
    v74 = 0;
    if ( v194 != v195 )
      v74 = (__int64)v194;
    if ( v73 )
      sub_1700D50(*v8, v73, v199, v74, -1431655765 * (((char *)v195 - (char *)v194) >> 5));
  }
  if ( !BYTE4(v186) )
    free(ptr);
  sub_1700A70((__int64)&v194);
}
