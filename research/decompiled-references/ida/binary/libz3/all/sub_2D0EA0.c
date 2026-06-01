__int64 *__fastcall sub_2D0EA0(_QWORD *a1, int a2)
{
  __int64 v3; // rbx
  _OWORD *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rax
  int v7; // edx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  void *v15; // r15
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  __int64 v20; // rax
  void *v21; // rbx
  __int64 v22; // rbp
  _QWORD *v23; // rax
  _QWORD *v24; // rbx
  unsigned int *v25; // rbp
  __int64 v26; // rax
  int v27; // edx
  __int64 v28; // rdx
  void *v29; // r15
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edi
  __int64 v34; // r15
  unsigned int v35; // edx
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // r13
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 *v43; // r14
  unsigned __int64 v44; // r15
  __int64 v45; // rsi
  bool v46; // zf
  int v47; // r8d
  int v48; // r9d
  _QWORD *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 *v52; // rax
  int v53; // ecx
  __int64 v54; // rbx
  _QWORD *v55; // rbx
  _QWORD *v56; // rbp
  int v57; // ecx
  int v58; // r8d
  int v59; // r9d
  __int64 *v60; // rbp
  __int64 *i; // rbx
  __int64 v62; // rdx
  int *v63; // rax
  __int64 *v64; // rbx
  __int64 *j; // rbp
  int v66; // ecx
  int v67; // r8d
  int v68; // r9d
  __int64 v69; // r13
  _DWORD *v70; // rax
  __int64 v71; // r13
  int v72; // ecx
  int v73; // r8d
  int v74; // r9d
  _QWORD *v75; // rbp
  _QWORD *v76; // rbx
  __int64 v77; // rdi
  __int64 *v78; // rbx
  unsigned __int64 v79; // rbp
  __int64 v80; // rsi
  __int64 v81; // rdi
  __int64 *v82; // rbx
  unsigned __int64 v83; // rbp
  __int64 v84; // rsi
  __int64 v85; // rdi
  __int64 *v86; // rbx
  unsigned __int64 v87; // rbp
  __int64 v88; // rsi
  __int64 v89; // rdi
  __int64 *result; // rax
  unsigned int v91; // ebx
  size_t v92; // rsi
  unsigned int *v93; // rax
  __int64 v94; // rax
  __int64 v95; // rbx
  _QWORD *v96; // rax
  char **exception; // r12
  char **v98; // r12
  void *v99; // [rsp+0h] [rbp-3A8h]
  void *v100; // [rsp+0h] [rbp-3A8h]
  __int64 *v101; // [rsp+8h] [rbp-3A0h]
  __int64 v102; // [rsp+8h] [rbp-3A0h]
  __int64 *v103; // [rsp+10h] [rbp-398h]
  __int64 *v104; // [rsp+10h] [rbp-398h]
  void *v105; // [rsp+18h] [rbp-390h]
  unsigned int v106; // [rsp+18h] [rbp-390h]
  int v107; // [rsp+18h] [rbp-390h]
  int v108; // [rsp+18h] [rbp-390h]
  int v109; // [rsp+18h] [rbp-390h]
  unsigned int *v110; // [rsp+20h] [rbp-388h]
  __int64 v111; // [rsp+20h] [rbp-388h]
  _QWORD *v112; // [rsp+28h] [rbp-380h]
  int v113; // [rsp+28h] [rbp-380h]
  __int64 v114; // [rsp+28h] [rbp-380h]
  __int64 v115; // [rsp+30h] [rbp-378h]
  __int64 v116; // [rsp+30h] [rbp-378h]
  __int64 v117; // [rsp+38h] [rbp-370h]
  int v118; // [rsp+38h] [rbp-370h]
  int *v119; // [rsp+40h] [rbp-368h]
  _QWORD *v120; // [rsp+48h] [rbp-360h]
  int v121; // [rsp+50h] [rbp-358h]
  _QWORD *v122; // [rsp+58h] [rbp-350h]
  int v123; // [rsp+60h] [rbp-348h]
  _QWORD *v124; // [rsp+68h] [rbp-340h] BYREF
  int v125; // [rsp+70h] [rbp-338h] BYREF
  void *v126; // [rsp+78h] [rbp-330h]
  __int64 v127; // [rsp+80h] [rbp-328h]
  __int64 v128; // [rsp+88h] [rbp-320h]
  void *v129; // [rsp+90h] [rbp-318h] BYREF
  __int64 v130; // [rsp+98h] [rbp-310h]
  __int64 v131; // [rsp+A0h] [rbp-308h] BYREF
  void *v132; // [rsp+A8h] [rbp-300h]
  __int64 v133; // [rsp+B0h] [rbp-2F8h] BYREF
  void *v134; // [rsp+B8h] [rbp-2F0h]
  __int64 v135; // [rsp+C0h] [rbp-2E8h]
  int v136; // [rsp+C8h] [rbp-2E0h]
  __int64 *v137; // [rsp+D0h] [rbp-2D8h]
  void *v138; // [rsp+D8h] [rbp-2D0h] BYREF
  void *v139; // [rsp+F0h] [rbp-2B8h]
  __int64 v140; // [rsp+108h] [rbp-2A0h]
  char v141[16]; // [rsp+110h] [rbp-298h] BYREF
  char v142[24]; // [rsp+120h] [rbp-288h] BYREF
  char v143[16]; // [rsp+138h] [rbp-270h] BYREF
  char v144[64]; // [rsp+148h] [rbp-260h] BYREF
  __int64 v145; // [rsp+188h] [rbp-220h] BYREF
  __m128 v146; // [rsp+190h] [rbp-218h]
  int v147; // [rsp+1A0h] [rbp-208h]
  __int64 *v148; // [rsp+1A8h] [rbp-200h]
  __int64 v149; // [rsp+1B0h] [rbp-1F8h]
  int v150; // [rsp+1B8h] [rbp-1F0h]
  __int64 *v151; // [rsp+1C0h] [rbp-1E8h]
  __int64 v152; // [rsp+1C8h] [rbp-1E0h]
  int v153; // [rsp+1D0h] [rbp-1D8h]
  __int64 v154; // [rsp+1D8h] [rbp-1D0h]
  __int64 v155; // [rsp+1E0h] [rbp-1C8h]
  __int64 *v156; // [rsp+1E8h] [rbp-1C0h]
  __int64 v157; // [rsp+1F0h] [rbp-1B8h]
  __int64 v158; // [rsp+1F8h] [rbp-1B0h]
  __int64 v159; // [rsp+200h] [rbp-1A8h]
  __int64 v160; // [rsp+208h] [rbp-1A0h]
  char v161[24]; // [rsp+210h] [rbp-198h] BYREF
  char v162[8]; // [rsp+228h] [rbp-180h] BYREF
  void *v163; // [rsp+230h] [rbp-178h]
  void *v164; // [rsp+238h] [rbp-170h]
  int v165; // [rsp+248h] [rbp-160h]
  __int64 v166; // [rsp+250h] [rbp-158h]
  int v167; // [rsp+258h] [rbp-150h]
  __int64 v168; // [rsp+260h] [rbp-148h]
  int v169; // [rsp+268h] [rbp-140h]
  __int64 v170; // [rsp+270h] [rbp-138h]
  __int64 v171; // [rsp+280h] [rbp-128h]
  void *v172; // [rsp+288h] [rbp-120h]
  __int64 v173; // [rsp+290h] [rbp-118h]
  __int64 *v174; // [rsp+298h] [rbp-110h]
  __int64 v175; // [rsp+2A0h] [rbp-108h]
  char v176[8]; // [rsp+2A8h] [rbp-100h] BYREF
  __int64 v177; // [rsp+2B0h] [rbp-F8h]
  __int64 v178; // [rsp+2B8h] [rbp-F0h]
  __int64 v179; // [rsp+2C0h] [rbp-E8h]
  __int64 v180; // [rsp+2C8h] [rbp-E0h]
  __int64 v181; // [rsp+2D0h] [rbp-D8h]
  __int64 v182; // [rsp+2D8h] [rbp-D0h]
  __int64 (__fastcall **v183)(); // [rsp+2E0h] [rbp-C8h]
  void *v184; // [rsp+2F8h] [rbp-B0h]
  void *ptr; // [rsp+310h] [rbp-98h]
  __int64 v186; // [rsp+318h] [rbp-90h]
  __int64 *v187; // [rsp+320h] [rbp-88h]
  __int64 v188; // [rsp+328h] [rbp-80h]
  __int64 v189; // [rsp+368h] [rbp-40h]

  v120 = a1;
  v133 = *a1;
  v3 = v133;
  v4 = (_OWORD *)sub_186B270(0x40u);
  v135 = 8;
  v134 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v136 = 0;
  sub_16511B0(&v138);
  v140 = v3;
  v137 = (__int64 *)&off_1C63D10;
  sub_16669D0(v141, v3);
  sub_16744A0(v142, v3);
  sub_1684300(v143, v3);
  sub_15C5470(v144, v3);
  v145 = v3;
  v103 = (__int64 *)&v129;
  sub_180C5A0(&v129, "seq");
  v5 = sub_15DA4C0(v3 + 560, &v129);
  v6 = sub_15D2690(v3, v5);
  v146 = _mm_loadh_ps((const double *)(v6 + 88));
  v7 = *(_DWORD *)(v6 + 16);
  v148 = &v145;
  v149 = v145;
  v152 = v145;
  v155 = v145;
  v147 = v7;
  v150 = v7;
  v151 = &v145;
  v153 = v7;
  v154 = 0;
  v156 = nullptr;
  v157 = 0;
  v158 = 0;
  v159 = 0xFFFFFFFFLL;
  v160 = 0;
  sub_15F01E0(v161, v3);
  sub_1624F90(v162, v3);
  v166 = 0;
  v165 = 0;
  v168 = 0;
  v167 = 0;
  v170 = 0;
  v169 = 0;
  v171 = 0;
  v172 = nullptr;
  v173 = v3;
  v174 = nullptr;
  v175 = 0;
  sub_15C0990(v176, v3);
  sub_11888D0((unsigned int)&v124, (_DWORD)a1 + 8, v8, v9, v10, v11);
  if ( !v124 )
    goto LABEL_68;
  v12 = *((unsigned int *)v124 - 1);
  v122 = &v124[2 * v12];
  if ( v124 == v122 )
    goto LABEL_62;
  v112 = v124;
  v119 = &v125;
  v101 = &v133;
  do
  {
    v13 = *(unsigned int *)v112;
    v115 = v120[553] + 16 * v13;
    sub_16669D0(v119, *v120);
    v129 = nullptr;
    v14 = *v120;
    v130 = 0;
    v117 = v14;
    v127 = v14;
    v15 = qword_1C7F2C0;
    v131 = 1;
    v132 = nullptr;
    if ( (int)v13 < 0 )
      sub_1830C40(qword_1C7F2C0, v103, v13);
    else
      LODWORD(v129) = v13;
    sub_182CBA0(v15, &v131);
    v19 = (int)v126;
    BYTE4(v131) &= ~1u;
    LODWORD(v131) = 1;
    if ( !v126 )
    {
      sub_16669E0(v119);
      v19 = (int)v126;
    }
    v20 = sub_166A700(v19, (_DWORD)v103, 1, v16, v17, v18);
    v21 = qword_1C7F2C0;
    v22 = v20;
    sub_182CBA0(qword_1C7F2C0, v103);
    sub_182CBA0(v21, &v131);
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    v23 = (_QWORD *)sub_186B270(0x18u);
    v23[1] = v22;
    v24 = v23 + 1;
    *v23 = 0x100000002LL;
    v25 = (unsigned int *)v112[1];
    if ( v25 && (v110 = &v25[*(v25 - 1)], v25 != v110) )
    {
      do
      {
        v28 = *v25;
        v29 = qword_1C7F2C0;
        v129 = nullptr;
        v130 = 0;
        v131 = 1;
        v132 = nullptr;
        if ( (int)v28 < 0 )
          sub_1830C40(qword_1C7F2C0, v103, v28);
        else
          LODWORD(v129) = v28;
        sub_182CBA0(v29, &v131);
        v33 = (int)v126;
        BYTE4(v131) &= ~1u;
        LODWORD(v131) = 1;
        if ( !v126 )
        {
          sub_16669E0(v119);
          v33 = (int)v126;
        }
        v34 = sub_166A700(v33, (_DWORD)v103, 1, v30, v31, v32);
        v105 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v103);
        sub_182CBA0(v105, &v131);
        if ( v34 )
          ++*(_DWORD *)(v34 + 8);
        v35 = *((_DWORD *)v24 - 1);
        if ( v35 == *((_DWORD *)v24 - 2) )
        {
          v36 = (3 * v35 + 1) >> 1;
          v37 = 8 * v36 + 8;
          if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v103, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v103);
            sub_233E40((__int64)v103);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v106 = (3 * v35 + 1) >> 1;
          v38 = (unsigned int *)sub_186B300(v24 - 1, v37);
          v35 = v38[1];
          v24 = v38 + 2;
          *v38 = v106;
        }
        v26 = v35;
        v27 = v35 + 1;
        ++v25;
        v24[v26] = v34;
        *((_DWORD *)v24 - 1) = v27;
      }
      while ( v110 != v25 );
      v39 = *v120;
      v40 = *(_QWORD *)(*v120 + 848LL);
    }
    else
    {
      v27 = 1;
      v39 = *v120;
      v40 = *(_QWORD *)(*v120 + 848LL);
    }
    v107 = v27;
    sub_180C5A0(v103, "deps");
    v41 = sub_15E3760(v39, (int)v103, v107, (int)v24, v40, (int)v99, (int)v101, (int)v103, v107, (int)v110, v112);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    v43 = v24;
    v44 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
    if ( (unsigned __int64)v24 < v44 )
    {
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v46 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v44 )
            goto LABEL_34;
        }
        ++v43;
        sub_15D7BC0(v117, v45);
      }
      while ( (unsigned __int64)v43 < v44 );
    }
LABEL_34:
    sub_186B220(v24 - 1);
    v49 = *(_QWORD **)(v115 + 8);
    if ( v49 )
    {
      v50 = *((unsigned int *)v49 - 1);
      if ( (_DWORD)v50 == *((_DWORD *)v49 - 2) )
      {
        v91 = (unsigned int)(3 * v50 + 1) >> 1;
        v92 = 8 * v91 + 8;
        if ( 8 * (int)v50 + 8 >= (unsigned int)v92 || (unsigned int)v50 >= v91 )
        {
          v98 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v104, "Overflow encountered when expanding vector");
          *v98 = (char *)off_1C63128;
          sub_2333C0(v98 + 1, v104);
          sub_233E40((__int64)v104);
          __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v93 = (unsigned int *)sub_186B300(v49 - 1, v92);
        v49 = v93 + 2;
        *(_QWORD *)(v115 + 8) = v93 + 2;
        *v93 = v91;
        v94 = v93[1];
        v95 = (unsigned int)(v94 + 1);
        v52 = &v49[v94];
        v53 = v95;
        v54 = v95;
      }
      else
      {
        v51 = (unsigned int)(v50 + 1);
        v52 = &v49[v50];
        v53 = v51;
        v54 = v51;
      }
    }
    else
    {
      v96 = (_QWORD *)sub_186B270(0x18u);
      v49 = v96 + 1;
      v54 = 1;
      v53 = 1;
      *v96 = 2;
      *(_QWORD *)(v115 + 8) = v96 + 1;
      v52 = v96 + 1;
    }
    v55 = &v49[v54];
    *v52 = v42;
    v56 = v49;
    for ( *((_DWORD *)v49 - 1) = v53; v55 != v56; ++v56 )
      sub_168ACC0(v102, *v56);
    sub_168C010(
      v102,
      a2,
      (int)v49,
      v53,
      v47,
      v48,
      v100,
      v102,
      (int)v104,
      v108,
      v111,
      v113,
      v115,
      v117,
      (int)v119,
      (int)v120,
      v121,
      (int)v122,
      v123,
      (int)v124,
      v125,
      (__int64)v126,
      v127,
      v128,
      v129,
      v130,
      v131,
      v132);
    v60 = *(__int64 **)(v116 + 8);
    if ( v60 )
    {
      for ( i = &v60[*((unsigned int *)v60 - 1)]; i != v60; ++v60 )
      {
        v62 = *v60;
        if ( !*(_WORD *)(*v60 + 4) )
        {
          v63 = *(int **)(*(_QWORD *)(v62 + 16) + 24LL);
          if ( v63 )
          {
            v57 = *v63;
            if ( !*v63 && v63[1] == 8 && *(_DWORD *)(v62 + 24) == 1 )
              v62 = *(_QWORD *)(v62 + 32);
          }
        }
        sub_168C720(
          (int)v101,
          a2,
          v62,
          v57,
          v58,
          v59,
          v99,
          (__int64)v101,
          (int)v103,
          v109,
          (int)v110,
          v114,
          v116,
          v118,
          (int)v119,
          (int)v120,
          v121,
          (char)v122,
          v123,
          (int)v124,
          v125,
          v126);
      }
    }
    std::__ostream_insert<char,std::char_traits<char>>();
    v64 = *(__int64 **)(v116 + 8);
    if ( v64 )
    {
      for ( j = &v64[*((unsigned int *)v64 - 1)]; j != v64; ++v64 )
      {
        while ( 1 )
        {
          v69 = *v64;
          if ( !*(_WORD *)(*v64 + 4) )
          {
            v70 = *(_DWORD **)(*(_QWORD *)(v69 + 16) + 24LL);
            if ( v70 )
            {
              if ( !*v70 && v70[1] == 8 && *(_DWORD *)(v69 + 24) == 1 )
                break;
            }
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_168BF80((_DWORD)v101, a2, v69, v66, v67, v68, (_DWORD)v99, (char)v101);
          if ( j == ++v64 )
            goto LABEL_59;
        }
        v71 = *(_QWORD *)(v69 + 32);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_168BF80((_DWORD)v101, a2, v71, v72, v73, v74, (_DWORD)v99, (char)v101);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
LABEL_59:
    std::__ostream_insert<char,std::char_traits<char>>();
    v112 = (_QWORD *)(v114 + 16);
  }
  while ( v122 != v112 );
  v122 = v124;
  if ( v124 )
  {
    v12 = *((unsigned int *)v124 - 1);
LABEL_62:
    if ( (_DWORD)v12 )
    {
      v75 = v122;
      v76 = &v122[2 * v12];
      do
      {
        while ( 1 )
        {
          v77 = v75[1];
          if ( !v77 )
            break;
          v75 += 2;
          sub_186B220((void *)(v77 - 8));
          if ( v76 == v75 )
          {
            v122 = v124;
            goto LABEL_67;
          }
        }
        v75 += 2;
      }
      while ( v76 != v75 );
      v122 = v124;
    }
LABEL_67:
    sub_186B220(v122 - 1);
  }
LABEL_68:
  if ( v189 )
    sub_186B220((void *)(v189 - 8));
  if ( v188 )
    sub_186B220((void *)(v188 - 8));
  v78 = v187;
  if ( v187 )
  {
    v79 = (unsigned __int64)&v187[*((unsigned int *)v187 - 1)];
    if ( (unsigned __int64)v187 >= v79 )
      goto LABEL_80;
    do
    {
      while ( 1 )
      {
        v80 = *v78;
        if ( *v78 )
        {
          v81 = v186;
          v46 = (*(_DWORD *)(v80 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++v78 >= v79 )
          goto LABEL_79;
      }
      sub_15D7BC0(v81, v80);
      ++v78;
    }
    while ( (unsigned __int64)v78 < v79 );
LABEL_79:
    v78 = v187;
    if ( v187 )
LABEL_80:
      sub_186B220(v78 - 1);
  }
  v183 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v184 )
    sub_186B220(v184);
  if ( v182 )
    sub_186B220((void *)(v182 - 8));
  if ( v181 )
    sub_186B220((void *)(v181 - 8));
  if ( v180 )
    sub_186B220((void *)(v180 - 8));
  if ( v179 )
    sub_186B220((void *)(v179 - 8));
  if ( v178 )
    sub_186B220((void *)(v178 - 8));
  if ( v177 )
    sub_186B220((void *)(v177 - 8));
  if ( v175 )
    sub_186B220((void *)(v175 - 8));
  v82 = v174;
  if ( v174 )
  {
    v83 = (unsigned __int64)&v174[*((unsigned int *)v174 - 1)];
    if ( (unsigned __int64)v174 >= v83 )
      goto LABEL_107;
    do
    {
      while ( 1 )
      {
        v84 = *v82;
        if ( *v82 )
        {
          v85 = v173;
          v46 = (*(_DWORD *)(v84 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++v82 >= v83 )
          goto LABEL_106;
      }
      sub_15D7BC0(v85, v84);
      ++v82;
    }
    while ( (unsigned __int64)v82 < v83 );
LABEL_106:
    v82 = v174;
    if ( v174 )
LABEL_107:
      sub_186B220(v82 - 1);
  }
  if ( v172 )
    sub_186B220(v172);
  if ( v170 )
    sub_186B220((void *)(v170 - 8));
  if ( v168 )
    sub_186B220((void *)(v168 - 8));
  if ( v166 )
    sub_186B220((void *)(v166 - 8));
  v137 = (__int64 *)&off_1C63D10;
  if ( v164 )
    sub_186B220(v164);
  if ( v163 )
    sub_186B220(v163);
  v86 = v156;
  if ( v156 )
  {
    v87 = (unsigned __int64)&v156[*((unsigned int *)v156 - 1)];
    if ( (unsigned __int64)v156 >= v87 )
      goto LABEL_128;
    do
    {
      while ( 1 )
      {
        v88 = *v86;
        if ( *v86 )
        {
          v89 = v155;
          v46 = (*(_DWORD *)(v88 + 8))-- == 1;
          if ( v46 )
            break;
        }
        if ( (unsigned __int64)++v86 >= v87 )
          goto LABEL_127;
      }
      sub_15D7BC0(v89, v88);
      ++v86;
    }
    while ( (unsigned __int64)v86 < v87 );
LABEL_127:
    v86 = v156;
    if ( v156 )
LABEL_128:
      sub_186B220(v86 - 1);
  }
  if ( v154 )
    sub_186B220((void *)(v154 - 8));
  result = qword_1C7A350;
  v137 = qword_1C7A350;
  if ( v139 )
    result = (__int64 *)sub_186B220(v139);
  if ( v138 )
    result = (__int64 *)sub_186B220(v138);
  if ( v134 )
    return (__int64 *)sub_186B220(v134);
  return result;
}

