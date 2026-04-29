unsigned __int64 __fastcall sub_2D310(__int64 a1, _QWORD *a2, __int64 a3, const char *a4)
{
  int v6; // r14d
  char *v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  char *v13; // rdi
  char *v14; // rdi
  char **p_s; // rsi
  const char *v16; // rsi
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // r14
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // r9d
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  unsigned __int64 i; // r15
  int v32; // r12d
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r14
  int v37; // r8d
  int v38; // r9d
  __int64 v39; // rsi
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  unsigned __int64 j; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  size_t v47; // r14
  const char *v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rdx
  bool v51; // r14
  __int64 v52; // rax
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  const char *v56; // rdx
  const char *v57; // rdx
  __int64 k; // r15
  __int64 *v59; // rax
  __int64 v60; // r14
  __int64 v61; // r12
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rax
  int v67; // edx
  int v68; // ecx
  int v69; // r8d
  int v70; // r9d
  __int64 v71; // rax
  __int64 m; // rbx
  __int64 *v73; // rax
  __int64 v74; // r12
  int v75; // r8d
  int v76; // r9d
  unsigned __int64 v77; // rdx
  unsigned __int64 v78; // rdi
  __int64 v79; // rax
  __int64 n; // rbx
  __int64 *v81; // rax
  __int64 v82; // r12
  int v83; // r8d
  int v84; // r9d
  unsigned __int64 v85; // rdx
  unsigned __int64 v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rsi
  __int64 v90; // rax
  __int64 v91; // rax
  unsigned __int64 v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rax
  unsigned __int64 v95; // rsi
  __int64 v96; // rax
  __m128i v97; // xmm0
  __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rax
  __int64 v101; // rdx
  unsigned int *v102; // r14
  char *v103; // rdx
  __int64 v104; // r12
  __int64 v105; // r14
  char *v106; // rax
  __int64 v107; // rdi
  char *v108; // r15
  __int64 v109; // r12
  size_t v110; // r8
  __int128 v111; // rax
  char **v112; // r9
  __int64 v113; // r14
  __int64 v114; // rax
  size_t v115; // r12
  char *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rsi
  size_t v119; // rdx
  char *v120; // r14
  signed __int64 v121; // rcx
  signed __int64 v122; // r12
  __int64 v123; // rax
  __int64 v124; // rbx
  __int64 v125; // r15
  const char *v126; // rsi
  const char *v127; // rdi
  __int64 v128; // rax
  __int64 v129; // r15
  char *v130; // r15
  unsigned __int64 v131; // rdi
  __int64 v132; // rax
  int *v133; // rax
  __int64 (__fastcall *v134)(); // rsi
  __int64 *v135; // r14
  __int64 v136; // rax
  __int64 dirtree; // rax
  __int64 v138; // rdx
  __int64 v139; // r15
  int v140; // edx
  int v141; // ecx
  int v142; // r8d
  int v143; // r9d
  int v144; // edx
  int v145; // ecx
  int v146; // r8d
  int v147; // r9d
  __int64 v148; // rax
  const char *v149; // rdx
  __int64 v150; // rax
  __int64 v151; // rsi
  int v152; // edx
  int v153; // ecx
  int v154; // r8d
  int v155; // r9d
  int *v156; // rax
  double v157; // xmm0_8
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // r9d
  __m128i *v162; // r12
  __int64 v163; // rdi
  const char *v164; // rsi
  size_t v165; // [rsp+0h] [rbp-12B0h]
  signed __int64 v166; // [rsp+10h] [rbp-12A0h]
  __int64 v167; // [rsp+10h] [rbp-12A0h]
  char *v169; // [rsp+20h] [rbp-1290h]
  size_t v170; // [rsp+20h] [rbp-1290h]
  char v171; // [rsp+28h] [rbp-1288h]
  char *v172; // [rsp+28h] [rbp-1288h]
  __int64 v173; // [rsp+30h] [rbp-1280h]
  __int64 v174; // [rsp+30h] [rbp-1280h]
  const void **v175; // [rsp+30h] [rbp-1280h]
  __int64 v176; // [rsp+30h] [rbp-1280h]
  __int64 v177; // [rsp+30h] [rbp-1280h]
  char *v178; // [rsp+38h] [rbp-1278h]
  void *v179; // [rsp+38h] [rbp-1278h]
  __int64 v180; // [rsp+38h] [rbp-1278h]
  unsigned int *v181; // [rsp+38h] [rbp-1278h]
  __int64 v182; // [rsp+38h] [rbp-1278h]
  __int64 v183; // [rsp+38h] [rbp-1278h]
  __int64 v184; // [rsp+38h] [rbp-1278h]
  __int64 v185; // [rsp+40h] [rbp-1270h] BYREF
  __int64 v186; // [rsp+48h] [rbp-1268h] BYREF
  __int64 v187; // [rsp+50h] [rbp-1260h] BYREF
  char v188; // [rsp+58h] [rbp-1258h]
  char *s; // [rsp+60h] [rbp-1250h] BYREF
  __int128 v190; // [rsp+68h] [rbp-1248h]
  char **v191; // [rsp+80h] [rbp-1230h] BYREF
  __int128 v192; // [rsp+88h] [rbp-1228h]
  char *v193; // [rsp+A0h] [rbp-1210h] BYREF
  __int128 v194; // [rsp+A8h] [rbp-1208h]
  __int64 (__fastcall **v195)(); // [rsp+C0h] [rbp-11F0h] BYREF
  __int64 v196; // [rsp+C8h] [rbp-11E8h]
  __int128 v197; // [rsp+D0h] [rbp-11E0h]
  __int64 v198; // [rsp+E0h] [rbp-11D0h]
  const char *v199; // [rsp+E8h] [rbp-11C8h]
  int v200; // [rsp+F0h] [rbp-11C0h]
  __m128i v201; // [rsp+F8h] [rbp-11B8h] BYREF
  int v202; // [rsp+108h] [rbp-11A8h]
  char v203; // [rsp+110h] [rbp-11A0h] BYREF
  char v204; // [rsp+158h] [rbp-1158h] BYREF
  int v205; // [rsp+170h] [rbp-1140h] BYREF
  __int64 v206; // [rsp+178h] [rbp-1138h]
  char **v207; // [rsp+180h] [rbp-1130h]
  __int64 (__fastcall **v208)(); // [rsp+190h] [rbp-1120h] BYREF
  __int64 v209; // [rsp+198h] [rbp-1118h]
  __int128 v210; // [rsp+1A0h] [rbp-1110h]
  __int64 v211; // [rsp+1B0h] [rbp-1100h]
  const char *v212; // [rsp+1B8h] [rbp-10F8h]
  int v213; // [rsp+1C0h] [rbp-10F0h]
  __m128i v214; // [rsp+1C8h] [rbp-10E8h]
  int v215; // [rsp+1D8h] [rbp-10D8h]
  char v216; // [rsp+1E0h] [rbp-10D0h] BYREF
  int v217; // [rsp+240h] [rbp-1070h] BYREF
  __int64 *v218; // [rsp+248h] [rbp-1068h]
  __int64 v219; // [rsp+250h] [rbp-1060h]
  _QWORD *v220; // [rsp+258h] [rbp-1058h]
  char **v221; // [rsp+260h] [rbp-1050h]
  _BYTE v222[4104]; // [rsp+270h] [rbp-1040h] BYREF
  unsigned __int64 v223; // [rsp+1278h] [rbp-38h]

  v223 = __readfsqword(0x28u);
  v6 = (int)a4;
  v7 = strchr(a4, 40);
  if ( !v7 )
    sub_1A260((unsigned int)"invalid file format: %s", v6, v8, v9, v10, v11);
  v178 = strstr(v7, "complete image");
  if ( v178 )
  {
    *((_BYTE *)a2 + 160) = 1;
    return v223 - __readfsqword(0x28u);
  }
  v171 = netnode_exist(a2);
  if ( v171 )
  {
    v21 = netnode_altval(*a2, 3, 65);
    v22 = v21;
    if ( v21 )
    {
      if ( (unsigned __int8)is_loaded(v21) )
      {
        v16 = "AUTOHIDE DATABASE\nHIDECANCEL\nThis section has already been loaded. Do you want to load it again?";
        if ( (int)sub_19F30(
                    0,
                    (unsigned int)"AUTOHIDE DATABASE\n"
                                  "HIDECANCEL\n"
                                  "This section has already been loaded. Do you want to load it again?",
                    v23,
                    v24,
                    v25,
                    v26) <= 0 )
          goto LABEL_27;
      }
      a2[19] = v22;
    }
    for ( i = netnode_supfirst(*a2, 103); i != -1; i = netnode_supnext(*a2, i, 103) )
    {
      v32 = i;
      if ( i >= *(int *)(a3 + 632) )
      {
        sub_112F0((unsigned int)"Warning: invalid island number: %d\n", i, v27, v28, v29, v30);
      }
      else if ( a2[19] != -1
             || (v173 = *(_QWORD *)(*(_QWORD *)(a3 + 624) + 8LL * (int)i),
                 v36 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL),
                 !netnode_altval(*a2, i, 105))
             || (int)sub_19F30(
                       0,
                       (unsigned int)"AUTOHIDE DATABASE\n"
                                     "HIDECANCEL\n"
                                     "branch island %d at %a has already been loaded. Do you want to load it again?",
                       i,
                       (unsigned int)v36 & (unsigned int)v173,
                       v37,
                       v38) > 0 )
      {
        v96 = a2[8];
        v95 = a2[7];
        LODWORD(v193) = i;
        v33 = a2[9];
        v34 = v96 + 1;
        if ( (unsigned __int64)&v193 < v95 || (unsigned __int64)&v193 >= v95 + 4 * v33 )
        {
          if ( v33 < v34 )
          {
            v35 = qvector_reserve(a2 + 7, v95, v96 + 1, 4);
            v32 = (int)v193;
            a2[7] = v35;
            v95 = v35;
            v96 = a2[8];
          }
        }
        else if ( v33 < v34 )
        {
          v94 = qvector_reserve(a2 + 7, v95, v96 + 1, 4);
          a2[7] = v94;
          v95 = v94;
          v96 = a2[8];
        }
        *(_DWORD *)(v95 + 4 * v96) = v32;
        ++a2[8];
      }
    }
    v39 = 116;
    for ( j = netnode_supfirst(*a2, 116); j != -1; j = netnode_supnext(*a2, j, 116) )
    {
      if ( j < *(int *)(a3 + 560) )
      {
        v179 = 0;
        v45 = *(_QWORD *)(a3 + 600);
        v46 = v45 + 24LL * (int)j;
        v47 = *(_QWORD *)(v46 + 8);
        if ( v47 )
        {
          v175 = (const void **)(v45 + 24LL * (int)j);
          v179 = (void *)qalloc_or_throw(*(_QWORD *)(v46 + 8), v39, v46);
          memcpy(v179, *v175, v47);
        }
        if ( a2[19] != -1 || !netnode_altval(*a2, j, 109) )
          goto LABEL_52;
        v56 = s1;
        if ( v47 )
          LODWORD(v56) = (_DWORD)v179;
        if ( (int)sub_19F30(
                    0,
                    (unsigned int)"AUTOHIDE DATABASE\n"
                                  "HIDECANCEL\n"
                                  "module %s has already been loaded. Do you want to load it again?",
                    (_DWORD)v56,
                    v53,
                    v54,
                    v55) <= 0 )
        {
          if ( v179 )
            qfree(
              v179,
              "AUTOHIDE DATABASE\nHIDECANCEL\nmodule %s has already been loaded. Do you want to load it again?",
              v57);
        }
        else
        {
LABEL_52:
          v48 = (const char *)(unsigned int)j;
          v49 = sub_11E60(a2 + 1, (unsigned int)j);
          if ( v50 )
          {
            v51 = v171;
            if ( !v49 && (_QWORD *)v50 != a2 + 2 )
              v51 = *(_DWORD *)(v50 + 32) > (int)j;
            v174 = v50;
            v52 = operator new(0x28u);
            *(_DWORD *)(v52 + 32) = j;
            v48 = (const char *)v52;
            std::_Rb_tree_insert_and_rebalance(v51, v52, v174, a2 + 2);
            ++a2[6];
          }
          if ( v179 )
            qfree(v179, v48);
        }
      }
      else
      {
        sub_112F0((unsigned int)"Warning: invalid module number: %d\n", j, v40, v41, v42, v43);
      }
      v39 = j;
    }
    for ( k = netnode_supfirst(*a2, 104); k != -1; k = netnode_supnext(*a2, k, 104) )
    {
      v66 = sub_1C420(a3, k);
      if ( v66 && *(_BYTE *)(v66 + 860) )
      {
        v59 = *(__int64 **)(v66 + 528);
        v60 = *v59;
        v180 = *(_QWORD *)(*(_QWORD *)a3 + 16LL);
        v61 = *v59 & v180;
        v176 = v59[1];
        if ( !netnode_altval(*a2, v61, 107)
          || (int)sub_19F30(
                    0,
                    (unsigned int)"AUTOHIDE DATABASE\n"
                                  "HIDECANCEL\n"
                                  "branch mapping [%a, %a] has already been loaded. Do you want to load it again?",
                    v61,
                    v180 & (v60 + v176),
                    v62,
                    v63) > 0 )
        {
          v64 = a2[11];
          v65 = a2[10];
          if ( a2[12] < (unsigned __int64)(v64 + 1) )
          {
            v71 = qvector_reserve(a2 + 10, v65, v64 + 1, 8);
            a2[10] = v71;
            v65 = v71;
            v64 = a2[11];
          }
          *(_QWORD *)(v65 + 8 * v64) = v61;
          ++a2[11];
        }
      }
      else
      {
        sub_112F0((unsigned int)"Warning: invalid branch mapping address: %a\n", k, v67, v68, v69, v70);
      }
    }
    for ( m = netnode_supfirst(*a2, 102); m != -1; m = netnode_supnext(*a2, m, 102) )
    {
      v74 = netnode_altval(*a2, m, 102);
      if ( !netnode_altval(*a2, m, 111)
        || (int)sub_19F30(
                  0,
                  (unsigned int)"AUTOHIDE DATABASE\n"
                                "HIDECANCEL\n"
                                "GOT [%a, %a] has already been loaded. Do you want to load it again?",
                  m,
                  v74,
                  v75,
                  v76) > 0 )
      {
        v90 = a2[14];
        v89 = a2[13];
        v193 = (char *)m;
        *(_QWORD *)&v194 = v74;
        v77 = a2[15];
        v78 = v90 + 1;
        if ( (unsigned __int64)&v193 < v89 || (unsigned __int64)&v193 >= v89 + 16 * v77 )
        {
          if ( v77 < v78 )
          {
            v79 = qvector_reserve(a2 + 13, v89, v90 + 1, 16);
            a2[13] = v79;
            v89 = v79;
            v90 = a2[14];
          }
          *(__m128i *)(v89 + 16 * v90) = _mm_load_si128((const __m128i *)&v193);
        }
        else
        {
          if ( v77 < v78 )
          {
            v88 = qvector_reserve(a2 + 13, v89, v90 + 1, 16);
            a2[13] = v88;
            v89 = v88;
            v90 = a2[14];
          }
          v73 = (__int64 *)(v89 + 16 * v90);
          *v73 = m;
          v73[1] = v74;
        }
        ++a2[14];
      }
    }
    LODWORD(v16) = 112;
    for ( n = netnode_supfirst(*a2, 112); n != -1; n = netnode_supnext(*a2, n, 112) )
    {
      v82 = netnode_altval(*a2, n, 112);
      if ( !netnode_altval(*a2, n, 108)
        || (int)sub_19F30(
                  0,
                  (unsigned int)"AUTOHIDE DATABASE\n"
                                "HIDECANCEL\n"
                                "gap [%a, %a] has already been loaded. Do you want to load it again?",
                  n,
                  v82,
                  v83,
                  v84) > 0 )
      {
        v93 = a2[17];
        v92 = a2[16];
        v193 = (char *)n;
        *(_QWORD *)&v194 = v82;
        v85 = a2[18];
        v86 = v93 + 1;
        if ( (unsigned __int64)&v193 < v92 || (unsigned __int64)&v193 >= v92 + 16 * v85 )
        {
          if ( v85 < v86 )
          {
            v87 = qvector_reserve(a2 + 16, v92, v93 + 1, 16);
            a2[16] = v87;
            v92 = v87;
            v93 = a2[17];
          }
          *(__m128i *)(v92 + 16 * v93) = _mm_load_si128((const __m128i *)&v193);
        }
        else
        {
          if ( v85 < v86 )
          {
            v91 = qvector_reserve(a2 + 16, v92, v93 + 1, 16);
            a2[16] = v91;
            v92 = v91;
            v93 = a2[17];
          }
          v81 = (__int64 *)(v92 + 16 * v93);
          *v81 = n;
          v81[1] = v82;
        }
        ++a2[17];
      }
      LODWORD(v16) = n;
    }
    goto LABEL_21;
  }
  *((_BYTE *)a2 + 161) = 1;
  v190 = 0;
  s = 0;
  if ( (unsigned __int8)qgetenv("IDA_MACHO_PARTIAL_LOAD_EA", &s) )
  {
    v13 = (char *)s1;
    if ( (_QWORD)v190 )
      v13 = s;
    a2[19] = strtoull(v13, 0, 16);
  }
  v166 = 0;
  if ( (unsigned __int8)qgetenv("IDA_DYLD_CACHE_DEPTH", &s) )
  {
    v14 = (char *)s1;
    if ( (_QWORD)v190 )
      v14 = s;
    v166 = strtoull(v14, 0, 0);
  }
  p_s = &s;
  v191 = 0;
  v192 = 0;
  if ( !(unsigned __int8)qgetenv("IDA_DYLD_CACHE_MODULE", &s) )
  {
    if ( a2[19] != -1 )
      goto LABEL_16;
    v193 = 0;
    v208 = (__int64 (__fastcall **)())&unk_65AF8;
    v209 = 0x2A010007FF000004LL;
    v194 = 0;
    v212 = "Choose module(s) to load";
    v210 = -1;
    v211 = 0;
    v213 = 2;
    v215 = -1;
    v133 = (int *)&v216;
    v214 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_65290), (__m128i)(unsigned __int64)&off_64A10);
    do
    {
      *(_QWORD *)v133 = 0;
      v133 += 6;
      *((_OWORD *)v133 - 1) = 0;
    }
    while ( &v217 != v133 );
    v217 = 0;
    LODWORD(v134) = ((HIDWORD(v209) >> 19) & 0x3F) - 1;
    if ( ((HIDWORD(v209) >> 19) & 0x3F) != 0 )
    {
      if ( BYTE3(v209) != 0xFF )
        goto LABEL_202;
      BYTE3(v209) = ((HIDWORD(v209) >> 19) & 0x3F) - 1;
      HIDWORD(v209) &= 0xFE07FFFF;
    }
    v219 = a3;
    v208 = off_647B8;
    v220 = a2 + 1;
    v221 = &v193;
    v135 = (__int64 *)operator new(8u);
    v136 = operator new(0x30u);
    *(_DWORD *)(v136 + 8) = 0;
    LODWORD(v134) = v136;
    *(_QWORD *)(v136 + 16) = 0;
    *(_OWORD *)(v136 + 24) = 0;
    *(_QWORD *)v136 = &off_64770;
    *(_QWORD *)(v136 + 40) = a3 + 600;
    dirtree = create_dirtree(v135);
    v138 = v219;
    *v135 = dirtree;
    v218 = v135;
    v139 = *(int *)(v138 + 560);
    if ( *(_DWORD *)(v138 + 560) )
    {
      v184 = 0;
      while ( 1 )
      {
        v148 = *(_QWORD *)(v138 + 600);
        v149 = s1;
        v150 = v148 + 24LL * (int)v184;
        if ( *(_QWORD *)(v150 + 8) )
          v149 = *(const char **)v150;
        qdirname(v222, 4096, v149);
        v151 = *v218;
        v188 = 0;
        v187 = -1;
        dirtree_resolve_path(&v187, v151, v222);
        if ( (v187 == -1 || !v188) && (unsigned __int8)dirtree_mkdir(*v218, v222) )
          sub_112F0(
            (unsigned int)"Coherency check failed: dirtree->mkdir(dirbuf) == DTE_OK\n",
            (unsigned int)v222,
            v152,
            v153,
            v154,
            v155);
        if ( (unsigned __int8)dirtree_chdir(*v218, v222) )
          sub_112F0(
            (unsigned int)"Coherency check failed: dirtree->chdir(dirbuf) == DTE_OK\n",
            (unsigned int)v222,
            v140,
            v141,
            v142,
            v143);
        LODWORD(v134) = v184;
        if ( (unsigned __int8)dirtree_link_inode(*v218, v184, 1) )
          sub_112F0((unsigned int)"Coherency check failed: dirtree->link(i) == DTE_OK\n", v184, v144, v145, v146, v147);
        if ( v139 == ++v184 )
          break;
        v138 = v219;
      }
    }
    v198 = 0;
    v195 = (__int64 (__fastcall **)())&unk_65AF8;
    v196 = 0x10003FF000004LL;
    v199 = "Modules marked for loading";
    v197 = -1;
    v156 = (int *)&v203;
    v200 = 2;
    v202 = -1;
    v201 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_65298), (__m128i)(unsigned __int64)&off_64A00);
    v157 = 0.0;
    do
    {
      *(_QWORD *)v156 = 0;
      v156 += 6;
      *((_OWORD *)v156 - 1) = 0;
    }
    while ( &v205 != v156 );
    v205 = 0;
    if ( ((HIDWORD(v196) >> 19) & 0x3F) == 0 )
    {
LABEL_190:
      v206 = a3;
      v195 = off_64878;
      v134 = sub_3C420;
      v186 = 0;
      v207 = &v193;
      if ( (int)sub_19E60(
                  (unsigned int)"DYLD shared cache modules selection\n"
                                "\n"
                                "%/%*<Shared cache modules:E3::::><|><Modules marked for loading:E4::::>\n"
                                "\n"
                                "<#(-1 retrieves all dependencies)#Depth of dependencies:D5::10::>\n",
                  (unsigned int)sub_3C420,
                  (unsigned int)&v208,
                  (unsigned int)&v208,
                  0,
                  (unsigned int)&v195) > 0 )
      {
        v162 = (__m128i *)&v204;
        v195 = (__int64 (__fastcall **)())&unk_65AF8;
        do
        {
          v163 = v162->m128i_i64[0];
          if ( v162->m128i_i64[0] )
          {
            v162->m128i_i64[1] = 0;
            v157 = qfree(v163, (const char *)sub_3C420, v157);
          }
          v162 = (__m128i *)((char *)v162 - 24);
        }
        while ( &v201 != v162 );
        sub_13940(&v208, v157);
        if ( v193 )
        {
          *(_QWORD *)&v194 = 0;
          qfree(v193, (const char *)sub_3C420);
        }
        goto LABEL_16;
      }
LABEL_204:
      sub_1A260(0, (_DWORD)v134, v158, v159, v160, v161);
    }
    if ( BYTE3(v196) == 0xFF )
    {
      BYTE3(v196) = ((HIDWORD(v196) >> 19) & 0x3F) - 1;
      HIDWORD(v196) &= 0xFE07FFFF;
      goto LABEL_190;
    }
    if ( under_debugger )
LABEL_206:
      BUG();
    interr(0);
LABEL_202:
    if ( !under_debugger )
    {
      interr(0);
      goto LABEL_204;
    }
    goto LABEL_206;
  }
  v193 = 0;
  v194 = 0;
  if ( !(_QWORD)v190 || (v108 = s, v172 = &s[v190 - 1], s >= v172) )
  {
LABEL_114:
    v100 = v192;
    goto LABEL_115;
  }
  v109 = 0;
  while ( 1 )
  {
    p_s = (char **)&word_3A;
    *(_QWORD *)&v111 = strchr(v108, 58);
    v113 = v111;
    if ( !(_QWORD)v111 )
      break;
    v110 = v111 - (_QWORD)v108;
    if ( (char *)v111 != v108 )
      goto LABEL_134;
LABEL_131:
    v108 = (char *)(v113 + 1);
    if ( v113 + 1 >= (unsigned __int64)v172 )
      goto LABEL_141;
  }
  v110 = v172 - v108;
LABEL_134:
  if ( *((_QWORD *)&v194 + 1) < (unsigned __int64)(v109 + 1) )
  {
    v170 = v110;
    v178 = (char *)qvector_reserve(&v193, v178, v109 + 1, 24);
    v109 = v194;
    v193 = v178;
    v110 = v170;
  }
  v114 = 3 * v109;
  v115 = v110;
  v116 = &v178[8 * v114];
  *(_OWORD *)(v116 + 8) = 0;
  *(_QWORD *)v116 = 0;
  *(_QWORD *)&v194 = v194 + 1;
  v117 = *((_QWORD *)v116 + 1);
  v182 = v117;
  if ( v117 )
  {
    v182 = v117 - 1;
    v115 = v117 - 1 + v110;
  }
  v118 = *(_QWORD *)v116;
  v119 = v115 + 1;
  if ( v115 != -1 )
  {
    v165 = v110;
    v132 = qvector_reserve(v116, v118, v119, 1);
    v110 = v165;
    v118 = v132;
    v119 = v115 + 1;
    *(_QWORD *)v116 = v132;
  }
  *((_QWORD *)v116 + 1) = v119;
  *(_BYTE *)(v118 + v115) = 0;
  p_s = (char **)v108;
  memmove((void *)(*(_QWORD *)v116 + v182), v108, v110);
  v109 = v194;
  v178 = v193;
  if ( v113 )
    goto LABEL_131;
LABEL_141:
  v169 = &v178[24 * v109];
  if ( v169 == v178 )
    goto LABEL_114;
  v120 = v178;
  do
  {
    v121 = *(_QWORD *)(a3 + 600);
    v122 = v121 + 24LL * *(_QWORD *)(a3 + 608);
    if ( v121 == v122 )
    {
LABEL_197:
      v164 = s1;
      if ( *((_QWORD *)v120 + 1) )
        v164 = *(const char **)v120;
      sub_1A260((unsigned int)"Invalid module: %s", (_DWORD)v164, DWORD2(v111), v121, v110, (_DWORD)v112);
    }
    v177 = *(_QWORD *)(a3 + 600);
    v183 = *((_QWORD *)v120 + 1);
    v123 = a3;
    v124 = v177;
    v125 = v123;
    while ( *(_QWORD *)(v124 + 8) )
    {
      v126 = *(const char **)v124;
      v127 = s1;
      if ( v183 )
        goto LABEL_151;
LABEL_146:
      if ( !strcmp(v127, v126) )
        goto LABEL_152;
      v124 += 24;
      if ( v122 == v124 )
        goto LABEL_197;
    }
    if ( v183 )
    {
      v126 = s1;
LABEL_151:
      v127 = *(const char **)v120;
      goto LABEL_146;
    }
LABEL_152:
    v128 = v125;
    v129 = v124;
    LODWORD(v121) = v177;
    a3 = v128;
    if ( v122 == v129 )
      goto LABEL_197;
    *((_QWORD *)&v111 + 1) = v129 - v177;
    v121 = 0xAAAAAAAAAAAAAAABLL * ((v129 - v177) >> 3);
    v130 = (char *)v121;
    if ( v111 < 0 || *(int *)(v128 + 560) <= v121 )
      goto LABEL_197;
    v111 = v192;
    p_s = v191;
    v187 = v121;
    v131 = v192 + 1;
    if ( &v187 < (__int64 *)v191 || (v112 = &v191[*((_QWORD *)&v192 + 1)], &v187 >= (__int64 *)v112) )
    {
      if ( *((_QWORD *)&v192 + 1) < v131 )
      {
        v191 = (char **)qvector_reserve(&v191, v191, v192 + 1, 8);
        p_s = v191;
        v121 = v187;
        *(_QWORD *)&v111 = v192;
      }
      p_s[(_QWORD)v111] = (char *)v121;
    }
    else
    {
      if ( *((_QWORD *)&v192 + 1) < v131 )
      {
        v191 = (char **)qvector_reserve(&v191, v191, v192 + 1, 8);
        p_s = v191;
        *(_QWORD *)&v111 = v192;
      }
      p_s[(_QWORD)v111] = v130;
    }
    v120 += 24;
    v100 = v192 + 1;
    *(_QWORD *)&v192 = v192 + 1;
  }
  while ( v169 != v120 );
LABEL_115:
  if ( v166 < -1 )
  {
    v167 = -1;
  }
  else
  {
    v101 = -1;
    if ( *(int *)(a3 + 560) >= v166 )
      v101 = v166;
    v167 = v101;
  }
  v102 = (unsigned int *)v191;
  v181 = (unsigned int *)&v191[v100];
  if ( v181 != (unsigned int *)v191 )
  {
    do
    {
      p_s = (char **)(a2 + 1);
      sub_2CE00(a3, a2 + 1, *v102, v167);
      v102 += 2;
    }
    while ( v181 != v102 );
  }
  v103 = v193;
  if ( v193 )
  {
    v104 = v194;
    if ( (_QWORD)v194 )
    {
      v105 = 0;
      do
      {
        v106 = &v103[24 * v105];
        v107 = *(_QWORD *)v106;
        if ( *(_QWORD *)v106 )
        {
          *((_QWORD *)v106 + 1) = 0;
          qfree(v107, (const char *)p_s);
          v103 = v193;
        }
        ++v105;
      }
      while ( v104 != v105 );
    }
    *(_QWORD *)&v194 = 0;
    qfree(v103, (const char *)p_s);
  }
LABEL_16:
  v16 = "$ dscu";
  if ( (unsigned __int8)netnode_check(a2, "$ dscu", 0, 1) )
  {
    v194 = 0;
    v193 = 0;
    v193 = (char *)qvector_reserve(&v193, 0, 16, 1);
    memset(&v193[v194], 0, 16 - v194);
    v97 = _mm_loadu_si128((const __m128i *)(a3 + 104));
    *(_QWORD *)&v194 = 16;
    v185 = 2;
    *(__m128i *)v193 = v97;
    netnode_supset(*a2, 0, &v185, 8, 65);
    netnode_supset(*a2, 1, v193, v194, 83);
    netnode_supset(*a2, 5, a1 + 32, 0, 83);
    v98 = 0;
    if ( a2[6] == 1 )
      v98 = *(_DWORD *)(a2[4] + 32LL) + 1;
    v99 = *a2;
    v186 = v98;
    netnode_supset(v99, 4, &v186, 8, 65);
    v16 = (_BYTE *)(&dword_0 + 1);
    find_plugin("dscu", 1);
    if ( v193 )
    {
      *(_QWORD *)&v194 = 0;
      qfree(v193, (_BYTE *)&dword_0 + 1);
    }
  }
  if ( v191 )
  {
    *(_QWORD *)&v192 = 0;
    qfree(v191, v16);
  }
  if ( s )
  {
    *(_QWORD *)&v190 = 0;
    qfree(s, v16);
  }
LABEL_21:
  if ( a2[19] == -1 && !a2[6] && !a2[8] && !a2[11] && !a2[14] && !a2[17] )
LABEL_27:
    sub_1A260(0, (_DWORD)v16, v17, v18, v19, v20);
  return v223 - __readfsqword(0x28u);
}
