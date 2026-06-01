unsigned __int64 __fastcall sub_171C450(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __m128i a7,
        double a8,
        char a9)
{
  char v9; // r15
  _QWORD *v13; // rsi
  __m128i v14; // rax
  bool v15; // zf
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  _QWORD *v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  char *v29; // rax
  void *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int64 v43; // rbx
  __int64 v45; // r12
  int v46; // ebx
  __int64 v47; // rbx
  char v48; // al
  int v49; // eax
  char *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  char **v56; // rbp
  char *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  char *v61; // rax
  __m128i *v62; // rbp
  __int64 v63; // rax
  unsigned int v64; // ebx
  __int64 v65; // r9
  char v66; // al
  bool v67; // r10
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r9
  char **v71; // rdi
  char *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  char *v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // r14
  int v84; // ebp
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // rdi
  __int64 v90; // rbx
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rdi
  __int64 v97; // rbp
  int v98; // r12d
  unsigned __int64 v99; // rax
  __int64 v100; // r8
  __int64 v101; // r9
  __m128i v102; // kr00_16
  unsigned __int64 v103; // rbx
  __int64 v104; // r9
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __m128i v109; // kr10_16
  char *v110; // rsi
  unsigned __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  char *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r15
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  const char *v126; // r15
  size_t v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  char *v132; // rax
  unsigned __int64 v133; // rax
  __int64 v135; // [rsp+8h] [rbp-260h]
  char **v136; // [rsp+10h] [rbp-258h]
  unsigned __int64 v138; // [rsp+28h] [rbp-240h]
  __m128i v139; // [rsp+38h] [rbp-230h]
  __int64 v140; // [rsp+40h] [rbp-228h]
  bool v141; // [rsp+48h] [rbp-220h]
  __int64 v142; // [rsp+48h] [rbp-220h]
  __int64 v143; // [rsp+50h] [rbp-218h]
  __m128i v144; // [rsp+60h] [rbp-208h] BYREF
  void *v145; // [rsp+70h] [rbp-1F8h] BYREF
  __int64 v146; // [rsp+78h] [rbp-1F0h]
  _BYTE v147[16]; // [rsp+80h] [rbp-1E8h] BYREF
  void *v148; // [rsp+90h] [rbp-1D8h] BYREF
  __int64 v149; // [rsp+98h] [rbp-1D0h]
  __int64 v150[2]; // [rsp+A0h] [rbp-1C8h] BYREF
  __m128i v151; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v152; // [rsp+C0h] [rbp-1A8h] BYREF
  __int64 v153; // [rsp+D0h] [rbp-198h]
  char v154; // [rsp+D8h] [rbp-190h]
  int v155; // [rsp+DCh] [rbp-18Ch]
  void **v156; // [rsp+E0h] [rbp-188h]
  __m128i v157; // [rsp+F0h] [rbp-178h] BYREF
  __int64 v158; // [rsp+100h] [rbp-168h]
  __int64 v159; // [rsp+108h] [rbp-160h]
  __int64 v160; // [rsp+110h] [rbp-158h]
  __int64 v161; // [rsp+118h] [rbp-150h]
  void *v162; // [rsp+120h] [rbp-148h]
  __int64 v163; // [rsp+128h] [rbp-140h]
  _BYTE v164[64]; // [rsp+130h] [rbp-138h] BYREF
  void *ptr; // [rsp+170h] [rbp-F8h]
  __int64 v166; // [rsp+178h] [rbp-F0h]
  _BYTE v167[16]; // [rsp+180h] [rbp-E8h] BYREF
  __m128i v168; // [rsp+190h] [rbp-D8h] BYREF
  __int128 v169; // [rsp+1A0h] [rbp-C8h]
  __int64 v170; // [rsp+1B0h] [rbp-B8h]
  __int64 v171; // [rsp+1B8h] [rbp-B0h]
  void **v172; // [rsp+1C0h] [rbp-A8h]
  __int64 v173; // [rsp+1C8h] [rbp-A0h]
  _BYTE v174[64]; // [rsp+1D0h] [rbp-98h] BYREF
  _BYTE *v175; // [rsp+210h] [rbp-58h]
  __int64 v176; // [rsp+218h] [rbp-50h]
  _BYTE v177[72]; // [rsp+220h] [rbp-48h] BYREF

  v9 = (char)a6;
  v13 = *(_QWORD **)(a3 + 248);
  v14.m128i_i64[0] = sub_16FEC70(*(_QWORD **)(a3 + 240), v13, a3, a4, a5, a6);
  v157.m128i_i64[0] = a4;
  v144 = v14;
  v162 = v164;
  v144.m128i_i8[2] = v14.m128i_i8[2] | 0x20;
  v15 = *(_DWORD *)a1 == 4;
  ptr = v167;
  v157.m128i_i64[1] = a5;
  v158 = 1;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v163 = 0x400000000LL;
  v166 = 0x200000000LL;
  if ( !v15 )
  {
    v16 = sub_15A3370(a1);
    v19 = sub_15A33A0(a1, (__int64)v13, v17, v18);
    v22 = v19;
    if ( v19 && *(_BYTE *)(v19 + 16) != 26 )
      v22 = 0;
    if ( *(_DWORD *)a1 == 5 )
    {
      v168.m128i_i64[0] = (__int64)sub_995750(*(_QWORD *)(a1 + 8));
      LOWORD(v170) = 261;
      v168.m128i_i64[1] = v128;
      v132 = sub_15A4EB0((char **)v157.m128i_i64[0], (const void ***)&v168, v128, v129, v130, v131);
      sub_15A2FD0((__int64)&v157, (__int64)v132);
    }
    else
    {
      if ( v16 )
      {
        v23 = *(_QWORD **)(a3 + 248);
        if ( v9 )
        {
          v135 = *(_QWORD *)(a3 + 248);
          v117 = sub_15A3370(a1);
          v120 = v117;
          if ( v117 )
          {
            if ( a2 < (unsigned int)sub_B76070(v117, (__int64)v13, v118, v119) )
            {
              v121 = sub_A92C20(v135, *(_QWORD *)(*(_QWORD *)(v120 + 120) + 8LL * a2), nullptr);
              if ( v121 )
              {
                if ( (*(_BYTE *)(v121 + 32) & 2) != 0 )
                  v126 = *(const char **)(v121 + 24);
                else
                  v126 = (const char *)sub_ED2880(v121, *(__int64 **)(a3 + 248), v122, v123, v124, v125);
                v127 = 0;
                if ( v126 )
                  v127 = j__strlen(v126);
                sub_15A5E30((__int64)&v157, v126, v127, v123, v124, v125);
              }
            }
          }
          v23 = *(_QWORD **)(a3 + 248);
        }
        sub_1702F80(v23, &v144, v16, 0, (char ***)&v157);
        a7 = 0;
        v149 = 0;
        v172 = &v148;
        v148 = v150;
        v169 = 0;
        v168.m128i_i64[0] = (__int64)&off_2BEBE68;
        LOBYTE(v150[0]) = 0;
        v168.m128i_i32[2] = 0;
        LOBYTE(v171) = 0;
        HIDWORD(v171) = 1;
        v170 = 0;
        sub_227B8B0(&v168, 0, 0, 0);
        v151.m128i_i64[0] = *(_QWORD *)(v16 + 40);
        sub_B84F80(v151.m128i_i64, (__int64)&v168, &v144, v24, v25);
        LOWORD(v153) = 260;
        v151.m128i_i64[0] = (__int64)&v148;
        v29 = sub_15A4EB0((char **)v157.m128i_i64[0], (const void ***)&v151, v26, (__int64)&v148, v27, v28);
        sub_15A2FD0((__int64)&v157, (__int64)v29);
        v168.m128i_i64[0] = (__int64)&off_2BEBE68;
        sub_227B7A0(&v168);
        v30 = v148;
        if ( v148 == v150 )
          goto LABEL_10;
      }
      else
      {
        v136 = (char **)v157.m128i_i64[0];
        v148 = *(void **)(sub_15A33A0(a1, (__int64)v13, v20, v21) + 24);
        sub_F785A0((__int64)&v151, (unsigned __int64 *)&v148, &v144);
        LOWORD(v170) = 260;
        v168.m128i_i64[0] = (__int64)&v151;
        v116 = sub_15A4EB0(v136, (const void ***)&v168, v113, 260, v114, v115);
        sub_15A3150((__int64)&v157, (__int64)v116);
        v30 = (void *)v151.m128i_i64[0];
        if ( (__int128 *)v151.m128i_i64[0] == &v152 )
          goto LABEL_10;
      }
      operator delete(v30);
    }
LABEL_10:
    v31 = a9 == 0 ? 7 : 11;
    sub_15A3210((__int64)&v157, v31, (char *)&byte_22F0C30);
    if ( *(_DWORD *)a1 == 5 )
    {
      v83 = *(_QWORD *)(a1 + 8);
      v84 = 0;
      if ( (*(_BYTE *)(v83 + 28) & 0x7Fu) - 59 <= 2 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(v83 + 104) + 96LL), *(_QWORD *)(v83 + 104), v32, v33, v34, v35);
        v89 = *(_QWORD *)(v83 + 128);
        if ( (*(_BYTE *)(v89 + 24) & 1) != 0 )
          v90 = sub_B96980(v89);
        else
          v90 = *(_QWORD *)(v89 + 24);
        sub_7052B0((__int64 *)(*(_QWORD *)(v83 + 104) + 96LL), *(_QWORD *)(v83 + 104), v85, v86, v87, v88);
        v31 = *(_QWORD *)(v83 + 104);
        v91 = v90 + 24LL * *(unsigned int *)(*(_QWORD *)(v83 + 128) + 16LL);
        sub_7052B0((__int64 *)(v31 + 96), v31, v92, v93, v94, v95);
        v96 = *(_QWORD *)(v83 + 128);
        if ( (*(_BYTE *)(v96 + 24) & 1) != 0 )
          v142 = sub_B96980(v96);
        else
          v142 = *(_QWORD *)(v96 + 24);
        v97 = v142;
        if ( v91 == v142 )
        {
          v84 = 0;
        }
        else
        {
          v98 = 0;
          do
          {
            while ( 1 )
            {
              v99 = *(_QWORD *)(**(_QWORD **)(v97 + 16) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v99 + 8) & 0xF) != 0 )
                v99 = sub_F64F00(**(_QWORD **)(v97 + 16), v31, v32, v33, v34);
              v148 = (void *)(v99 & 0xFFFFFFFFFFFFFFF0LL);
              sub_F785A0((__int64)&v151, (unsigned __int64 *)&v148, &v144);
              v102 = v151;
              if ( v98 )
              {
                v139 = v151;
                sub_15A3210((__int64)&v157, 15, (char *)&byte_22F0C30);
                v102 = v139;
              }
              v168 = v102;
              LOWORD(v170) = 261;
              v31 = (__int64)sub_15A4EB0(
                               (char **)v157.m128i_i64[0],
                               (const void ***)&v168,
                               261,
                               v102.m128i_i64[0],
                               v100,
                               v101);
              if ( a2 == v98 )
                sub_15A31B0((__int64)&v157, v31);
              else
                sub_15A3090((__int64)&v157, v31);
              ++v98;
              if ( (__int128 *)v151.m128i_i64[0] == &v152 )
                break;
              operator delete((void *)v151.m128i_i64[0]);
              v97 += 24;
              if ( v97 == v91 )
                goto LABEL_57;
            }
            v97 += 24;
          }
          while ( v97 != v91 );
LABEL_57:
          v84 = -1431655765 * ((unsigned __int64)(v91 - 24 - v142) >> 3) + 1;
        }
      }
      v103 = sub_B7E900(v83, v31, v32, v33, v34, v35);
      if ( v103 )
      {
LABEL_59:
        LOBYTE(v150[0]) = 0;
        sub_171B530(&v151, &v144, v103, 0, 0, v104, (__int64)v148, v149, v150[0]);
        v109 = v151;
        if ( v84 )
          sub_15A3210((__int64)&v157, 15, (char *)&byte_22F0C30);
        v168 = v109;
        LOWORD(v170) = 261;
        v110 = sub_15A4EB0((char **)v157.m128i_i64[0], (const void ***)&v168, v105, v106, v107, v108);
        if ( a2 == v84 )
          sub_15A31B0((__int64)&v157, (__int64)v110);
        else
          sub_15A3090((__int64)&v157, (__int64)v110);
        if ( (__int128 *)v151.m128i_i64[0] != &v152 )
          operator delete((void *)v151.m128i_i64[0]);
        while ( 1 )
        {
          v111 = *(_QWORD *)(v103 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v103 = v111;
          if ( !v111 )
            break;
          if ( (*(_BYTE *)(v111 + 28) & 0x7Fu) - 49 <= 2 )
          {
            ++v84;
            goto LABEL_59;
          }
        }
      }
    }
    else
    {
      v36 = sub_15A3420(a1);
      sub_171BDF0(*(_QWORD *)(a3 + 248), &v144, v16, v22, v36, v37, a7, a8, &v157, a2, 0, 0);
    }
    v38 = a9 == 0 ? 8 : 12;
    sub_15A3210((__int64)&v157, v38, (char *)&byte_22F0C30);
    v43 = sub_15A5CA0((__int64)&v157, v38, v39, v40, v41, v42);
    goto LABEL_13;
  }
  v45 = *(_QWORD *)(a1 + 8);
  v46 = *(_DWORD *)(*(_QWORD *)(v45 + 56) + 20LL);
  v143 = *(_QWORD *)(v45 + 56);
  v173 = 0x400000000LL;
  v168.m128i_i64[0] = a4;
  v47 = 8LL * (v46 & 0x1FFFFFFF);
  v168.m128i_i64[1] = a5;
  v169 = 0u;
  v138 = v47 >> 3;
  v170 = 0;
  v171 = 0;
  v172 = (void **)v174;
  v175 = v177;
  v176 = 0x200000000LL;
  v48 = *(_BYTE *)(v45 + 28) & 0x7F;
  if ( v48 != 72 )
  {
    if ( v48 == 69 )
    {
      v112 = *(_QWORD *)(*(_QWORD *)(v45 + 48) + 48LL);
    }
    else
    {
      if ( v48 != 71 )
      {
        switch ( v48 )
        {
          case 'F':
            sub_17016D0(&v145, (char *)"type");
            break;
          case 'D':
            sub_17016D0(&v145, "class");
            break;
          case 'I':
            sub_17016D0(&v145, "concept");
            break;
          default:
            sub_17016D0(&v145, (char *)&byte_22F0C30);
            break;
        }
LABEL_21:
        v56 = (char **)v157.m128i_i64[0];
        if ( v146 )
        {
          LOWORD(v153) = 260;
          v151.m128i_i64[0] = (__int64)&v145;
          v57 = sub_15A4EB0((char **)v157.m128i_i64[0], (const void ***)&v151, v52, v53, v54, v55);
          sub_15A3150((__int64)&v157, (__int64)v57);
          v56 = (char **)v157.m128i_i64[0];
        }
        goto LABEL_23;
      }
      v112 = sub_C1D490(*(_QWORD *)(v45 + 48), (__int64)&v168, (__int64)v177, (__int64)v174);
    }
    v151.m128i_i64[0] = v112;
    sub_F785A0((__int64)&v145, (unsigned __int64 *)&v151, &v144);
    goto LABEL_21;
  }
  v49 = sub_F58620(*(_BYTE *)(*(_QWORD *)(v45 + 48) + 73LL) >> 5);
  v50 = sub_F58640(v49);
  if ( v50 )
  {
    v145 = v147;
    sub_1700210(&v145, v50, (__int64)&v50[v51]);
    goto LABEL_21;
  }
  v147[0] = 0;
  v56 = (char **)v157.m128i_i64[0];
  v145 = v147;
  v146 = 0;
LABEL_23:
  sub_B86A00((__int64)&v148, (__int64 *)(v45 + 40));
  LOWORD(v153) = 260;
  v151.m128i_i64[0] = (__int64)&v148;
  v61 = sub_15A4EB0(v56, (const void ***)&v151, v58, v59, v60, 260);
  sub_15A2FD0((__int64)&v157, (__int64)v61);
  if ( v148 != v150 )
    operator delete(v148);
  sub_15A3210((__int64)&v157, 13, (char *)&byte_22F0C30);
  if ( v47 )
  {
    v62 = &v157;
    v63 = 0;
    v64 = 0;
    do
    {
      while ( 1 )
      {
        v65 = *(_QWORD *)(v143 + 8 * v63 + 24);
        v66 = *(_BYTE *)(v65 + 28) & 0x7F;
        if ( v66 == 67 || v66 == 47 || (v67 = 0, v66 == 68) )
          v67 = (*(_QWORD *)(v65 + 72) & 0xFFFFFFFFFFFFFFF8LL) != 0;
        v141 = v67;
        v148 = v150;
        v156 = &v148;
        v152 = 0;
        v151.m128i_i64[0] = (__int64)&off_2BEBE68;
        v140 = v65;
        v149 = 0;
        LOBYTE(v150[0]) = 0;
        v151.m128i_i32[2] = 0;
        v154 = 0;
        v155 = 1;
        v153 = 0;
        sub_227B8B0(&v151, 0, 0, 0);
        sub_BB7900(v140, (__int64)&v151, &v144, 0, 0);
        v151.m128i_i64[0] = (__int64)&off_2BEBE68;
        sub_227B7A0(&v151);
        if ( v141 )
          v62 = &v168;
        if ( v64 )
          sub_15A3210((__int64)v62, 15, (char *)&byte_22F0C30);
        v71 = (char **)v62->m128i_i64[0];
        LOWORD(v153) = 260;
        v151.m128i_i64[0] = (__int64)&v148;
        v72 = sub_15A4EB0(v71, (const void ***)&v151, v68, v69, 260, v70);
        v73 = 3 * (unsigned int)(a2 == v64) + 3;
        sub_15A3210((__int64)v62, v73, v72);
        if ( v148 == v150 )
          break;
        operator delete(v148);
        v63 = ++v64;
        if ( v138 <= v64 )
          goto LABEL_35;
      }
      v63 = ++v64;
    }
    while ( v138 > v64 );
LABEL_35:
    if ( v62 == &v168 )
    {
      v133 = sub_15A5CA0((__int64)&v168, v73, v74, v75, v76, v77);
      sub_15A3030((__int64)&v157, v133);
    }
  }
  v78 = byte_9 + 5;
  sub_15A3210((__int64)&v157, 14, (char *)&byte_22F0C30);
  if ( (*(_BYTE *)(v45 + 28) & 0x7F) == 0x47 )
  {
    v78 = "()";
    sub_15A30F0((__int64)&v157, (__int64)"()");
  }
  v43 = sub_15A5CA0((__int64)&v157, (__int64)v78, v79, v80, v81, v82);
  if ( v145 != v147 )
    operator delete(v145);
  sub_1704B40(&v168);
LABEL_13:
  if ( ptr != v167 )
    free(ptr);
  if ( v162 != v164 )
    free(v162);
  return v43;
}
