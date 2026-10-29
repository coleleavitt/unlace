/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D4C8
// Address: 0x000000000040D4C8

//----- (000000000040D4C8) ----------------------------------------------------
__int64 __fastcall sub_40D4C8(_QWORD *a1, __int64 a2)
{
  __int64 v2; // x19
  __int64 v3; // x20
  __int64 v4; // x21
  __int64 v5; // x22
  __int64 v6; // x23
  __int64 v7; // x24
  __int64 v8; // x25
  __int64 v9; // x26
  __int64 v10; // x27
  __int64 v11; // x28
  __int64 v12; // x30
  const char *v15; // x0
  __int64 *v16; // x28
  const char *v17; // x20
  const char *v18; // x25
  int v19; // w23
  const char *v20; // x26
  size_t v21; // x0
  size_t v22; // x27
  size_t v23; // x22
  size_t v24; // x22
  const char *i; // x19
  unsigned __int64 v26; // x1
  __int64 v27; // x3
  unsigned __int64 v28; // x2
  void *v29; // x20
  unsigned __int64 v30; // x22
  char *v31; // x1
  size_t v32; // x0
  size_t v33; // x22
  size_t v34; // x20
  void **v35; // x1
  char *v36; // x2
  __int64 *v37; // x3
  void **v38; // x20
  int v39; // w22
  const char *v40; // x0
  size_t v41; // x0
  signed __int64 v42; // x22
  size_t v43; // x20
  void *v44; // x23
  size_t v45; // x20
  size_t v46; // x20
  __int64 v47; // x20
  __int64 v48; // x23
  __int64 v49; // x25
  char *v50; // x1
  size_t v51; // x2
  unsigned __int64 v52; // x0
  __int64 v53; // x25
  __int64 v54; // x22
  char *v55; // x19
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x20
  __int64 v59; // x23
  __int64 v60; // x25
  char *v61; // x1
  size_t v62; // x2
  unsigned __int64 v63; // x0
  __int64 v64; // x25
  __int64 v65; // x22
  char *v66; // x19
  __int64 v67; // x0
  int v68; // w22
  __int64 v69; // x20
  char *v70; // x1
  __int64 v71; // x21
  __int64 v72; // x19
  __int64 v73; // x20
  void *v74; // x0
  char *v75; // x1
  char *v77; // x0
  _WORD *v78; // x19
  unsigned __int64 v79; // x0
  __int64 v80; // x19
  size_t v81; // x22
  char *v82; // x23
  void *v83; // x0
  __int64 v84; // x7
  void *v85; // x0
  unsigned __int64 v86; // x20
  __int64 v87; // x23
  unsigned __int64 v88; // x22
  unsigned __int8 **v89; // x20
  unsigned __int8 *v90; // x2
  __int64 *v91; // x4
  __int64 *v92; // x5
  __int64 *v93; // x4
  void **v94; // x20
  int v95; // w22
  unsigned __int8 **v96; // x20
  unsigned __int8 *v97; // x2
  __int64 *v98; // x4
  size_t v99; // x0
  unsigned __int64 v100; // x20
  size_t v101; // x22
  char *v102; // x0
  __int64 v103; // x2
  char *v104; // x0
  __int64 v105; // x2
  __int64 v106; // [xsp+0h] [xbp-15E0h]
  __int64 v107; // [xsp+8h] [xbp-15D8h]
  __int64 v108; // [xsp+10h] [xbp-15D0h]
  __int64 v109; // [xsp+18h] [xbp-15C8h]
  __int64 v110; // [xsp+20h] [xbp-15C0h]
  __int64 v111; // [xsp+28h] [xbp-15B8h]
  __int64 v112; // [xsp+30h] [xbp-15B0h]
  __int64 v113; // [xsp+38h] [xbp-15A8h]
  __int64 v114; // [xsp+40h] [xbp-15A0h]
  __int64 v115; // [xsp+48h] [xbp-1598h]
  __int64 v116; // [xsp+50h] [xbp-1590h]
  __int64 v117; // [xsp+68h] [xbp-1578h]
  void *v118; // [xsp+70h] [xbp-1570h]
  void **v119; // [xsp+70h] [xbp-1570h]
  int v120; // [xsp+78h] [xbp-1568h]
  const char *v121; // [xsp+80h] [xbp-1560h]
  void *src; // [xsp+90h] [xbp-1550h] BYREF
  signed __int64 v123; // [xsp+98h] [xbp-1548h]
  __int64 v124; // [xsp+A0h] [xbp-1540h]
  void *v125; // [xsp+A8h] [xbp-1538h] BYREF
  size_t v126; // [xsp+B0h] [xbp-1530h]
  __int64 v127; // [xsp+B8h] [xbp-1528h]
  void *ptr; // [xsp+C0h] [xbp-1520h] BYREF
  unsigned __int64 v129; // [xsp+C8h] [xbp-1518h]
  void *v130; // [xsp+D0h] [xbp-1510h]
  size_t v131; // [xsp+D8h] [xbp-1508h]
  size_t v132; // [xsp+E0h] [xbp-1500h]
  void *v133; // [xsp+E8h] [xbp-14F8h]
  size_t v134; // [xsp+F0h] [xbp-14F0h]
  size_t v135; // [xsp+F8h] [xbp-14E8h]
  __int64 v136; // [xsp+100h] [xbp-14E0h] BYREF
  int v137; // [xsp+108h] [xbp-14D8h] BYREF
  _QWORD *v138; // [xsp+110h] [xbp-14D0h]
  int *v139; // [xsp+118h] [xbp-14C8h]
  int *v140; // [xsp+120h] [xbp-14C0h]
  __int64 v141; // [xsp+128h] [xbp-14B8h]
  void *v142; // [xsp+130h] [xbp-14B0h]
  __int64 v143; // [xsp+138h] [xbp-14A8h]
  __int64 v144; // [xsp+140h] [xbp-14A0h]
  void *v145; // [xsp+148h] [xbp-1498h]
  __int64 v146; // [xsp+150h] [xbp-1490h]
  __int64 v147; // [xsp+158h] [xbp-1488h]
  int v148; // [xsp+160h] [xbp-1480h]
  __int64 (__fastcall **v149)(); // [xsp+168h] [xbp-1478h] BYREF
  char v150[656]; // [xsp+170h] [xbp-1470h] BYREF
  void *v151; // [xsp+570h] [xbp-1070h] BYREF
  __int64 v152; // [xsp+578h] [xbp-1068h]
  unsigned __int64 v153; // [xsp+580h] [xbp-1060h]
  void *v154; // [xsp+588h] [xbp-1058h] BYREF
  size_t v155; // [xsp+590h] [xbp-1050h]
  __int64 v156; // [xsp+598h] [xbp-1048h]
  void *v157; // [xsp+5A0h] [xbp-1040h] BYREF
  unsigned __int64 v158; // [xsp+5A8h] [xbp-1038h]
  __int64 v159; // [xsp+5B0h] [xbp-1030h]
  void *v160; // [xsp+5B8h] [xbp-1028h] BYREF
  unsigned __int64 v161; // [xsp+5C0h] [xbp-1020h]
  __int64 v162; // [xsp+5C8h] [xbp-1018h]
  int v163; // [xsp+5D0h] [xbp-1010h]
  unsigned __int8 v164[4096]; // [xsp+5D8h] [xbp-1008h] BYREF
  __int64 v165; // [xsp+15D8h] [xbp-8h]

  v108 = v4;
  v109 = v5;
  v110 = v6;
  v111 = v7;
  v106 = v2;
  v107 = v3;
  v112 = v8;
  v113 = v9;
  v114 = v10;
  v115 = v11;
  v116 = v12;
  if ( *(_QWORD *)(a2 + 48) )
    v15 = *(const char **)(a2 + 40);
  else
    v15 = (const char *)&qword_4B2D48;
  v117 = (__int64)(a1 + 215);
  v121 = sub_49B950(v15, "libpthread");
  if ( v121 )
  {
    a1[271] = *(_QWORD *)a2;
    v117 = (__int64)(a1 + 221);
  }
  sub_40B4D8((__int64)a1, v117, (_QWORD *)a2);
  v16 = sub_461A30();
  if ( *(_QWORD *)(a2 + 24) )
    v17 = *(const char **)(a2 + 16);
  else
    v17 = (const char *)&qword_4B2D48;
  if ( *(_QWORD *)(a2 + 144) )
    v18 = *(const char **)(a2 + 136);
  else
    v18 = (const char *)&qword_4B2D48;
  v19 = *(_DWORD *)(a2 + 160);
  if ( *(_QWORD *)(a2 + 120) )
    v20 = *(const char **)(a2 + 112);
  else
    v20 = (const char *)&qword_4B2D48;
  v149 = off_519938;
  v151 = nullptr;
  v152 = 0;
  v153 = 0;
  v154 = nullptr;
  v155 = 0;
  v156 = 0;
  if ( v17 )
  {
    v21 = strlen(v17);
    v22 = v21 + 1;
    v23 = v21;
    v154 = sub_491288((__int64)&v154, nullptr, v21 + 1, 1u);
    v155 = v22;
    memmove(v154, v17, v23);
    *((_BYTE *)v154 + v23) = 0;
  }
  v157 = nullptr;
  v158 = 0;
  v159 = 0;
  if ( !v18 )
  {
    v160 = nullptr;
    v161 = 0;
    v162 = 0;
    if ( !v20 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v99 = strlen(v18);
  v100 = v99 + 1;
  v101 = v99;
  v157 = sub_491288((__int64)&v157, nullptr, v99 + 1, 1u);
  v158 = v100;
  memmove(v157, v18, v101);
  *((_BYTE *)v157 + v101) = 0;
  v160 = nullptr;
  v161 = 0;
  v162 = 0;
  if ( v20 )
  {
LABEL_15:
    v24 = strlen(v20);
    v160 = sub_491288((__int64)&v160, nullptr, v24 + 1, 1u);
    v161 = v24 + 1;
    memmove(v160, v20, v24);
    *((_BYTE *)v160 + v24) = 0;
  }
LABEL_16:
  v150[0] = 0;
  v163 = v19;
  sub_493350((unsigned __int64)v164, (unsigned __int8 *)v16, 4096);
  for ( i = sub_4930F8((char *)v164, ":", (const char **)&v125); i; i = sub_4930F8(nullptr, ":", (const char **)&v125) )
  {
    ptr = nullptr;
    v129 = 0;
    v130 = nullptr;
    v32 = strlen(i);
    v33 = v32 + 1;
    v34 = v32;
    ptr = sub_491288((__int64)&ptr, nullptr, v32 + 1, 1u);
    v129 = v33;
    memmove(ptr, i, v34);
    *((_BYTE *)ptr + v34) = 0;
    v77 = (char *)v151;
    if ( v151 <= &ptr )
    {
      v26 = v153;
      v27 = v152;
      v28 = v152 + 1;
      if ( &ptr < (void **)((char *)v151 + 24 * v153) )
      {
        v29 = ptr;
        v30 = v129;
        v118 = v130;
        ptr = nullptr;
        v129 = 0;
        v130 = nullptr;
        if ( v153 < v28 )
        {
          v77 = (char *)sub_491288((__int64)&v151, v151, v28, 0x18u);
          v27 = v152;
          v151 = v77;
        }
        v31 = &v77[24 * v27];
        *(_QWORD *)v31 = v29;
        *((_QWORD *)v31 + 1) = v30;
        *((_QWORD *)v31 + 2) = v118;
        ++v152;
        if ( ptr )
        {
          v129 = 0;
          j__free(ptr);
        }
        continue;
      }
    }
    else
    {
      v27 = v152;
      v26 = v153;
      v28 = v152 + 1;
    }
    if ( v28 > v26 )
    {
      v77 = (char *)sub_491288((__int64)&v151, v151, v28, 0x18u);
      v27 = v152;
      v151 = v77;
    }
    v35 = (void **)&v77[24 * v27];
    *v35 = ptr;
    v35[1] = (void *)v129;
    v35[2] = v130;
    ++v152;
  }
  if ( !v152 || v161 <= 3 )
    goto LABEL_31;
  v78 = v160;
  v125 = nullptr;
  v126 = 0;
  v127 = 0;
  v125 = sub_491288((__int64)&v125, nullptr, 3u, 1u);
  v126 = 3;
  *(_WORD *)v125 = *v78;
  *((_BYTE *)v125 + 2) = 0;
  if ( v161 )
  {
    v79 = v161 - 1;
    ptr = nullptr;
    v129 = 0;
    v130 = nullptr;
    v80 = 2;
    if ( v161 - 1 <= 2 )
      v80 = v161 - 1;
    v81 = v79 - v80;
    v82 = (char *)v160;
    if ( v79 != v80 )
    {
      v83 = nullptr;
      if ( v81 != -1 )
      {
        v83 = sub_491288((__int64)&ptr, nullptr, v81 + 1, 1u);
        ptr = v83;
      }
      v129 = v81 + 1;
      memmove(v83, &v82[v80], v81);
      *((_BYTE *)ptr + v81) = 0;
      v85 = ptr;
      if ( v129 )
      {
        v86 = v129 - 1;
        v87 = v129 + 5;
        v88 = v129 + 6;
      }
      else
      {
        v88 = 7;
        v87 = 6;
        v86 = 0;
      }
      if ( v88 <= (unsigned __int64)v130 )
        goto LABEL_104;
      goto LABEL_135;
    }
  }
  else
  {
    ptr = nullptr;
    v129 = 0;
    v130 = nullptr;
  }
  v85 = nullptr;
  v87 = 6;
  v88 = 7;
  v86 = 0;
LABEL_135:
  v85 = sub_491288((__int64)&ptr, v85, v88, 1u);
  ptr = v85;
LABEL_104:
  v129 = v88;
  *((_BYTE *)v85 + v87) = 0;
  qmemcpy((char *)ptr + v86, ".debug", 6);
  v89 = (unsigned __int8 **)v151;
  if ( 24 * v152 )
  {
    while ( 1 )
    {
      v90 = (unsigned __int8 *)&qword_4B2D48;
      if ( v89[1] )
        v90 = *v89;
      v91 = (__int64 *)v125;
      v92 = (__int64 *)ptr;
      if ( !v126 )
        v91 = &qword_4B2D48;
      if ( !v129 )
        v92 = &qword_4B2D48;
      sub_48F278(
        v150,
        1024,
        v90,
        ".build-id",
        v91,
        v92,
        0,
        v84,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      if ( (unsigned __int8)sub_490268(v150) )
        break;
      sub_40B410(
        (__int64)&v149,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "BUILDID",
        v150,
        0);
      v89 += 3;
      if ( v89 == (unsigned __int8 **)((char *)v151 + 24 * v152) )
        goto LABEL_137;
    }
    sub_40B410(
      (__int64)&v149,
      (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      v150,
      1);
    if ( ptr )
    {
      v129 = 0;
      j__free(ptr);
    }
    if ( v125 )
    {
      v126 = 0;
      j__free(v125);
    }
    goto LABEL_40;
  }
LABEL_137:
  if ( ptr )
  {
    v129 = 0;
    j__free(ptr);
  }
  if ( v125 )
  {
    v126 = 0;
    j__free(v125);
  }
LABEL_31:
  if ( v158 > 1 )
  {
    v36 = (char *)v154;
    if ( !v155 )
      v36 = (char *)&qword_4B2D48;
    if ( sub_48F310((char *)v164, 0x1000u, v36) )
    {
      v37 = (__int64 *)v157;
      if ( !v158 )
        v37 = &qword_4B2D48;
      sub_48F278(v150, 1024, v164, v37, 0);
      if ( !(unsigned __int8)sub_490268(v150)
        || (v38 = (void **)sub_48BF60(v150, 0), v39 = sub_47FF28((__int64)v38), sub_48C0F8(v38), v39 != v163) )
      {
        sub_40B410(
          (__int64)&v149,
          (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          v150,
          0);
        v93 = (__int64 *)v157;
        if ( !v158 )
          v93 = &qword_4B2D48;
        sub_48F278(v150, 1024, v164, ".debug", v93, 0);
        if ( !(unsigned __int8)sub_490268(v150)
          || (v94 = (void **)sub_48BF60(v150, 0), v95 = sub_47FF28((__int64)v94), sub_48C0F8(v94), v95 != v163) )
        {
          sub_40B410(
            (__int64)&v149,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            v150,
            0);
          v96 = (unsigned __int8 **)v151;
          if ( !(24 * v152) )
            goto LABEL_59;
          while ( 1 )
          {
            v97 = (unsigned __int8 *)&qword_4B2D48;
            if ( v96[1] )
              v97 = *v96;
            v98 = (__int64 *)v157;
            if ( !v158 )
              v98 = &qword_4B2D48;
            sub_48F278(v150, 1024, v97, v164, v98, 0);
            if ( (unsigned __int8)sub_490268(v150) )
            {
              v119 = (void **)sub_48BF60(v150, 0);
              v120 = sub_47FF28((__int64)v119);
              sub_48C0F8(v119);
              if ( v120 == v163 )
                break;
            }
            sub_40B410(
              (__int64)&v149,
              (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
              "DEBUGLINK",
              v150,
              0);
            v96 += 3;
            if ( v96 == (unsigned __int8 **)((char *)v151 + 24 * v152) )
              goto LABEL_59;
          }
        }
        sub_40B410(
          (__int64)&v149,
          (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          v150,
          1);
        if ( !*(_QWORD *)(a2 + 24) )
          goto LABEL_41;
        goto LABEL_130;
      }
      sub_40B410(
        (__int64)&v149,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        "DEBUGLINK",
        v150,
        1);
LABEL_40:
      if ( !*(_QWORD *)(a2 + 24) )
      {
LABEL_41:
        v40 = (const char *)&qword_4B2D48;
        goto LABEL_42;
      }
LABEL_130:
      v40 = *(const char **)(a2 + 16);
LABEL_42:
      if ( strcmp(v40, v150) )
      {
        sub_45CDF8((__int64)a1, (__int64)"load separate debug info '%s'\n", v150);
        src = nullptr;
        v123 = 0;
        v124 = 0;
        v41 = strlen(v150);
        v42 = v41 + 1;
        v43 = v41;
        v44 = *(void **)a2;
        src = sub_491288((__int64)&src, nullptr, v41 + 1, 1u);
        v123 = v42;
        memmove(src, v150, v43);
        *((_BYTE *)src + v43) = 0;
        v125 = nullptr;
        v126 = 0;
        v127 = 0;
        v125 = sub_491288((__int64)&v125, nullptr, 1u, 1u);
        v126 = 1;
        *(_BYTE *)v125 = 0;
        ptr = v44;
        v129 = 0;
        v45 = v123;
        v130 = nullptr;
        v131 = 0;
        v132 = 0;
        if ( v123 )
        {
          v130 = sub_491248(v123);
          v132 = v45;
          memcpy(v130, src, v45);
          v131 = v45;
        }
        v46 = v126;
        v133 = nullptr;
        v134 = 0;
        v135 = 0;
        if ( v126 )
        {
          v133 = sub_491248(v126);
          v135 = v46;
          memcpy(v133, v125, v46);
          v134 = v46;
        }
        v137 = 0;
        v138 = nullptr;
        v139 = &v137;
        v140 = &v137;
        v141 = 0;
        v142 = nullptr;
        v143 = 0;
        v144 = 0;
        v145 = nullptr;
        v146 = 0;
        v147 = 0;
        v148 = 0;
        if ( v125 )
        {
          v126 = 0;
          j__free(v125);
        }
        if ( src )
        {
          v123 = 0;
          j__free(src);
        }
        sub_40B4D8((__int64)a1, v117, &ptr);
        if ( v145 )
        {
          v146 = 0;
          j__free(v145);
        }
        if ( v142 )
        {
          v143 = 0;
          j__free(v142);
        }
        sub_40D410((__int64)&v136, v138);
        if ( v133 )
        {
          v134 = 0;
          j__free(v133);
        }
        if ( v130 )
        {
          v131 = 0;
          j__free(v130);
        }
      }
    }
  }
LABEL_59:
  if ( v121 )
  {
    v47 = 8LL * a1[222];
    v48 = v47 >> 3;
    if ( v47 >> 3 )
    {
      v49 = a1[216];
      v50 = (char *)a1[215];
      v51 = 0;
      v52 = v49 + v48;
      v53 = 8 * v49;
      v54 = a1[221];
      v55 = &v50[v53];
      if ( v52 > a1[217] )
      {
        v102 = (char *)sub_491288((__int64)(a1 + 215), v50, v52, 8u);
        v103 = a1[216];
        v55 = &v102[v53];
        a1[215] = v102;
        v51 = 8 * v103 - v53;
      }
      memmove(&v55[v47], v55, v51);
      if ( v54 != v54 + v47 )
      {
        v56 = 0;
        do
        {
          *(_QWORD *)&v55[v56] = *(_QWORD *)(v54 + v56);
          v56 += 8;
        }
        while ( v56 != v47 );
      }
      a1[216] += v48;
    }
    v57 = a1[225];
    v58 = 8 * v57;
    v59 = (8 * v57) >> 3;
    if ( v59 )
    {
      v60 = a1[219];
      v61 = (char *)a1[218];
      v62 = 0;
      v63 = v60 + v59;
      v64 = 8 * v60;
      v65 = a1[224];
      v66 = &v61[v64];
      if ( v63 > a1[220] )
      {
        v104 = (char *)sub_491288((__int64)(a1 + 218), v61, v63, 8u);
        v105 = a1[219];
        v66 = &v104[v64];
        a1[218] = v104;
        v62 = 8 * v105 - v64;
      }
      memmove(&v66[v58], v66, v62);
      if ( v65 != v65 + v58 )
      {
        v67 = 0;
        do
        {
          *(_QWORD *)&v66[v67] = *(_QWORD *)(v65 + v67);
          v67 += 8;
        }
        while ( v67 != v58 );
      }
      a1[219] += v59;
      v57 = a1[225];
    }
    if ( v57 )
    {
      v68 = 0;
      v69 = 0;
      do
      {
        ++v68;
        *(_QWORD *)(a1[224] + 8 * v69) = sub_4911C0(*(char **)(a1[224] + 8 * v69));
        v69 = v68;
      }
      while ( (unsigned __int64)v68 < a1[225] );
    }
  }
  v149 = off_519938;
  if ( v160 )
  {
    v161 = 0;
    j__free(v160);
  }
  if ( v157 )
  {
    v158 = 0;
    j__free(v157);
  }
  if ( v154 )
  {
    v155 = 0;
    j__free(v154);
  }
  v70 = (char *)v151;
  if ( v151 )
  {
    v71 = v152;
    if ( v152 )
    {
      v72 = 0;
      v73 = 0;
      do
      {
        v74 = *(void **)&v70[v72];
        v75 = &v70[v72];
        if ( v74 )
        {
          *((_QWORD *)v75 + 1) = 0;
          j__free(v74);
        }
        ++v73;
        v72 += 24;
        v70 = (char *)v151;
      }
      while ( v71 != v73 );
    }
    v152 = 0;
    j__free(v70);
  }
  return v165 ^ _stack_chk_guard;
}
// 40D4C8: could not find valid save-restore pair for x19
// 40D4C8: could not find valid save-restore pair for x20
// 40D4C8: could not find valid save-restore pair for x21
// 40D4C8: could not find valid save-restore pair for x22
// 40D4C8: could not find valid save-restore pair for x23
// 40D4C8: could not find valid save-restore pair for x24
// 40D4C8: could not find valid save-restore pair for x25
// 40D4C8: could not find valid save-restore pair for x26
// 40D4C8: could not find valid save-restore pair for x27
// 40D4C8: could not find valid save-restore pair for x28
// 40D4D0: variable 'v4' is possibly undefined
// 40D4D0: variable 'v5' is possibly undefined
// 40D4D8: variable 'v6' is possibly undefined
// 40D4D8: variable 'v7' is possibly undefined
// 40D4E4: variable 'v2' is possibly undefined
// 40D4E4: variable 'v3' is possibly undefined
// 40D4E8: variable 'v8' is possibly undefined
// 40D4E8: variable 'v9' is possibly undefined
// 40D4EC: variable 'v10' is possibly undefined
// 40D4EC: variable 'v11' is possibly undefined
// 40D4F0: variable 'v12' is possibly undefined
// 40DDA8: variable 'v84' is possibly undefined
// 40DDA8: variable 'v106' is possibly undefined
// 40DDA8: variable 'v107' is possibly undefined
// 40DDA8: variable 'v108' is possibly undefined
// 40DDA8: variable 'v109' is possibly undefined
// 40DDA8: variable 'v110' is possibly undefined
// 40DDA8: variable 'v111' is possibly undefined
// 40DDA8: variable 'v112' is possibly undefined
// 40DDA8: variable 'v113' is possibly undefined
// 40DDA8: variable 'v114' is possibly undefined
// 40DDA8: variable 'v115' is possibly undefined
// 40DDA8: variable 'v116' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519938: using guessed type __int64 (__fastcall *off_519938[3])();
