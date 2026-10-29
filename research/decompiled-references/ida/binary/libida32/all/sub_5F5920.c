__int64 __fastcall sub_5F5920(__int64 a1, unsigned int a2, const char *a3, __int64 *a4, int a5)
{
  unsigned int v6; // r15d
  __int64 result; // rax
  unsigned int v8; // ebx
  __int64 v10; // r8
  __int64 func; // r13
  unsigned int v12; // r9d
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 tinfo_property; // r14
  int v16; // eax
  char *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // r12
  __int64 v20; // rbp
  char *v21; // rbx
  void *v22; // rdi
  void *v23; // rdi
  char *v24; // rdi
  __int64 v25; // rbp
  char *v26; // rbx
  void *v27; // rdi
  void *v28; // rdi
  __int64 v29; // rcx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // r9d
  int v34; // r15d
  char *v35; // rsi
  int v36; // r15d
  int v37; // r15d
  __int64 v38; // r12
  __int64 v39; // rsi
  unsigned __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  int v43; // ecx
  int v44; // r9d
  int v45; // r8d
  int v46; // r15d
  unsigned __int8 v47; // al
  unsigned int v48; // r12d
  __int64 v49; // rax
  int v50; // edx
  char v51; // si
  unsigned int v52; // eax
  __int64 v53; // rdx
  unsigned int v54; // eax
  __int64 v55; // rdx
  unsigned __int8 v56; // dl
  char v57; // al
  unsigned __int64 v58; // rsi
  unsigned int v59; // eax
  int v60; // r13d
  char v61; // dl
  char v62; // al
  __int64 v63; // rcx
  char tinfo; // dl
  int v65; // eax
  char v66; // dl
  char *v67; // rdi
  __int64 v68; // r12
  __int64 v69; // rbp
  char *v70; // rbx
  void *v71; // rdi
  void *v72; // rdi
  char *v73; // r15
  unsigned int v74; // r12d
  int v75; // edx
  int v76; // ecx
  int v77; // r8d
  int v78; // r9d
  unsigned int v79; // eax
  __int64 v80; // rdx
  char *v81; // rsi
  char *v82; // r8
  char *v83; // rax
  __int64 v84; // rdx
  int v85; // ecx
  __int64 v86; // rcx
  __int64 v87; // rdx
  bool v88; // zf
  const char *v89; // rcx
  char *v90; // r15
  const char *v91; // r13
  char *v92; // rbx
  char *v93; // r12
  const char *v94; // rdi
  int v95; // edx
  const char *v96; // r12
  char *v97; // rdx
  char *v98; // r8
  char *v99; // rbx
  char *v100; // r15
  const char *v101; // rdi
  __int64 v102; // rdx
  __m128i v103; // xmm0
  bool v104; // al
  __int64 v105; // rax
  int v106; // edx
  int v107; // ecx
  int v108; // r15d
  __int64 v109; // rdx
  __m128 v110; // xmm0
  bool v111; // al
  unsigned int v112; // r15d
  int v113; // edx
  int v114; // ecx
  int v115; // r8d
  int v116; // r9d
  unsigned int v117; // eax
  __int64 v118; // rcx
  int v119; // eax
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned __int16 *v123; // r13
  char v124; // al
  char v125; // al
  int v126; // [rsp+0h] [rbp-248h]
  int v127; // [rsp+0h] [rbp-248h]
  int v128; // [rsp+0h] [rbp-248h]
  int *v129; // [rsp+8h] [rbp-240h]
  int v130; // [rsp+8h] [rbp-240h]
  int v131; // [rsp+8h] [rbp-240h]
  unsigned int v132; // [rsp+10h] [rbp-238h]
  __int64 v133; // [rsp+10h] [rbp-238h]
  int v134; // [rsp+10h] [rbp-238h]
  char v135; // [rsp+10h] [rbp-238h]
  char v136[8]; // [rsp+10h] [rbp-238h]
  unsigned int v137; // [rsp+10h] [rbp-238h]
  char v138; // [rsp+10h] [rbp-238h]
  void *v139; // [rsp+18h] [rbp-230h]
  unsigned int v140; // [rsp+18h] [rbp-230h]
  int v141; // [rsp+18h] [rbp-230h]
  int v142; // [rsp+18h] [rbp-230h]
  unsigned int v143; // [rsp+18h] [rbp-230h]
  unsigned int v144; // [rsp+18h] [rbp-230h]
  unsigned int v145; // [rsp+18h] [rbp-230h]
  unsigned int v146; // [rsp+18h] [rbp-230h]
  int v147; // [rsp+18h] [rbp-230h]
  int v148; // [rsp+18h] [rbp-230h]
  int v149; // [rsp+18h] [rbp-230h]
  void *v150; // [rsp+18h] [rbp-230h]
  void *v151; // [rsp+18h] [rbp-230h]
  unsigned int v152; // [rsp+1Ch] [rbp-22Ch]
  __int64 *v153; // [rsp+20h] [rbp-228h]
  __int64 v154; // [rsp+20h] [rbp-228h]
  __int64 v155; // [rsp+20h] [rbp-228h]
  __int64 *v156; // [rsp+28h] [rbp-220h]
  int v157; // [rsp+28h] [rbp-220h]
  __int64 v158; // [rsp+30h] [rbp-218h]
  __int64 v159; // [rsp+30h] [rbp-218h]
  __int64 v160; // [rsp+30h] [rbp-218h]
  __int64 v161; // [rsp+30h] [rbp-218h]
  unsigned __int64 tinfo_size; // [rsp+38h] [rbp-210h]
  char *v163; // [rsp+38h] [rbp-210h]
  char *v164; // [rsp+38h] [rbp-210h]
  __int64 v165; // [rsp+38h] [rbp-210h]
  bool v166; // [rsp+40h] [rbp-208h]
  char *v167; // [rsp+40h] [rbp-208h]
  bool v168; // [rsp+48h] [rbp-200h]
  __int64 v169; // [rsp+48h] [rbp-200h]
  char *v170; // [rsp+48h] [rbp-200h]
  char *v171; // [rsp+58h] [rbp-1F0h]
  unsigned int v172; // [rsp+58h] [rbp-1F0h]
  unsigned __int8 tinfo_details; // [rsp+6Bh] [rbp-1DDh]
  int v174; // [rsp+6Ch] [rbp-1DCh]
  int v175[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v176; // [rsp+78h] [rbp-1D0h] BYREF
  void *v177; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v178; // [rsp+88h] [rbp-1C0h]
  void *v179[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v180; // [rsp+C0h] [rbp-188h]
  __int128 v181; // [rsp+C8h] [rbp-180h]
  void *v182; // [rsp+E0h] [rbp-168h] BYREF
  __int128 v183; // [rsp+E8h] [rbp-160h]
  __int64 v184; // [rsp+F8h] [rbp-150h]
  int v185[2]; // [rsp+100h] [rbp-148h] BYREF
  __int64 v186; // [rsp+108h] [rbp-140h] BYREF
  __int64 v187; // [rsp+110h] [rbp-138h]
  int v188; // [rsp+118h] [rbp-130h]
  void *v189; // [rsp+120h] [rbp-128h]
  __int128 v190; // [rsp+128h] [rbp-120h]
  char v191; // [rsp+138h] [rbp-110h]
  void *v192; // [rsp+140h] [rbp-108h] BYREF
  __int128 v193; // [rsp+148h] [rbp-100h]
  __int64 v194; // [rsp+158h] [rbp-F0h]
  int v195[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v196; // [rsp+168h] [rbp-E0h] BYREF
  __int64 v197; // [rsp+170h] [rbp-D8h]
  int v198; // [rsp+178h] [rbp-D0h]
  void *v199; // [rsp+180h] [rbp-C8h]
  __int128 v200; // [rsp+188h] [rbp-C0h]
  char v201; // [rsp+198h] [rbp-B0h]
  void *v202; // [rsp+1A0h] [rbp-A8h] BYREF
  __int128 v203; // [rsp+1A8h] [rbp-A0h]
  __int64 v204; // [rsp+1B8h] [rbp-90h]
  __int64 v205; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v206; // [rsp+1C8h] [rbp-80h] BYREF
  __int64 v207; // [rsp+1D0h] [rbp-78h]
  int v208; // [rsp+1D8h] [rbp-70h]
  void *v209; // [rsp+1E0h] [rbp-68h]
  __int128 v210; // [rsp+1E8h] [rbp-60h]
  char v211; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v212; // [rsp+208h] [rbp-40h]

  v212 = __readfsqword(0x28u);
  LOBYTE(v139) = a4 == nullptr || a2 == -1;
  if ( !(_BYTE)v139 )
  {
    v6 = a5 + 1;
    result = 0;
    if ( a5 + 1 > 127 )
      return result;
    v8 = a2;
    *(_QWORD *)v175 = 0;
    func = get_func(a2);
    v12 = 0;
    v129 = v175;
    if ( func && *(_DWORD *)func == a2 )
      v12 = sub_5F8E20(*(_QWORD *)(a1 + 1480), func, v175, v6, v10, 0);
    v132 = v12;
    v176 = 0;
    v153 = &v176;
    v13 = sub_5EEAE0(a1, a2, a3, &v176, 1);
    if ( !v132 )
    {
      v29 = v176;
      v176 = *a4;
      *a4 = v29;
      goto LABEL_9;
    }
    if ( !v13 )
    {
      v14 = *a4;
      *a4 = *(_QWORD *)v175;
      *(_QWORD *)v175 = v14;
      v13 = v132;
LABEL_9:
      v140 = v13;
      clear_tinfo_t(v153);
      clear_tinfo_t(v129);
      return v140;
    }
    tinfo_property = get_tinfo_property(v176, 22);
    v13 = 0;
    if ( tinfo_property )
      goto LABEL_9;
    v182 = nullptr;
    v184 = 0;
    *(_QWORD *)v185 = 0;
    v186 = 0;
    v187 = 0;
    v188 = 0;
    v189 = nullptr;
    v191 = 16;
    v192 = nullptr;
    v194 = 0;
    *(_QWORD *)v195 = 0;
    v196 = 0;
    v197 = 0;
    v198 = 0;
    v199 = nullptr;
    v201 = 16;
    v183 = 0;
    v190 = 0;
    v193 = 0;
    v200 = 0;
    if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)v175, 12, &v182)
      || (tinfo_details = get_tinfo_details(v176, 12, &v192)) == 0 )
    {
      v16 = 0;
LABEL_14:
      if ( v199 )
      {
        v141 = v16;
        *(_QWORD *)&v200 = 0;
        qfree(v199);
        v16 = v141;
      }
      v142 = v16;
      cleanup_argloc(&v196);
      clear_tinfo_t(v195);
      v17 = (char *)v192;
      v18 = v142;
      if ( v192 )
      {
        v19 = v193;
        if ( (_QWORD)v193 )
        {
          v20 = 0;
          do
          {
            v21 = &v17[80 * v20];
            clear_tinfo_t(v21 + 64);
            v22 = *((void **)v21 + 5);
            if ( v22 )
            {
              *((_QWORD *)v21 + 6) = 0;
              qfree(v22);
            }
            v23 = *((void **)v21 + 2);
            if ( v23 )
            {
              *((_QWORD *)v21 + 3) = 0;
              qfree(v23);
            }
            ++v20;
            cleanup_argloc(v21);
            v17 = (char *)v192;
          }
          while ( v19 != v20 );
          v18 = v142;
        }
        v143 = v18;
        *(_QWORD *)&v193 = 0;
        qfree(v17);
        v18 = v143;
      }
      if ( v189 )
      {
        v144 = v18;
        *(_QWORD *)&v190 = 0;
        qfree(v189);
        v18 = v144;
      }
      v145 = v18;
      cleanup_argloc(&v186);
      clear_tinfo_t(v185);
      v24 = (char *)v182;
      v13 = v145;
      if ( v182 )
      {
        v25 = v183;
        if ( (_QWORD)v183 )
        {
          do
          {
            v26 = &v24[80 * tinfo_property];
            clear_tinfo_t(v26 + 64);
            v27 = *((void **)v26 + 5);
            if ( v27 )
            {
              *((_QWORD *)v26 + 6) = 0;
              qfree(v27);
            }
            v28 = *((void **)v26 + 2);
            if ( v28 )
            {
              *((_QWORD *)v26 + 3) = 0;
              qfree(v28);
            }
            ++tinfo_property;
            cleanup_argloc(v26);
            v24 = (char *)v182;
          }
          while ( v25 != tinfo_property );
          v13 = v145;
        }
        v146 = v13;
        *(_QWORD *)&v183 = 0;
        qfree(v24);
        v13 = v146;
      }
      goto LABEL_9;
    }
    v202 = nullptr;
    v204 = 0;
    v205 = 0;
    v206 = 0;
    v207 = 0;
    v208 = 0;
    v209 = nullptr;
    v211 = 16;
    v203 = 0;
    v210 = 0;
    if ( (v194 & 0x10) != 0 )
      LODWORD(v204) = 16;
    if ( (((unsigned __int8)v184 | (unsigned __int8)v194) & 2) != 0 )
    {
      LODWORD(v204) = v204 | 2;
      v179[0] = &dword_0 + 1;
      copy_tinfo_t(&v205);
      clear_tinfo_t(v179);
    }
    else
    {
      v112 = score_tinfo(
               (int)v185,
               12,
               v30,
               v31,
               v32,
               v33,
               v126,
               (int)v175,
               v132,
               v139,
               (__int64)&v176,
               (int)&v202,
               v158);
      v117 = score_tinfo((int)v195, 12, v113, v114, v115, v116, v128, v131, v138, v151, v155, (int)&v202, v161);
      if ( v117 < v112 || v112 == v117 && (int)v186 > (int)v196 )
      {
        v121 = v187;
        v187 = v207;
        v207 = v121;
        LODWORD(v121) = v186;
        LODWORD(v186) = v206;
        LODWORD(v206) = v121;
        v122 = *(_QWORD *)v185;
        *(_QWORD *)v185 = v205;
        v205 = v122;
      }
      else
      {
        v118 = v197;
        v197 = v207;
        v119 = v206;
        LODWORD(v206) = v196;
        LODWORD(v196) = v119;
        v120 = v205;
        v207 = v118;
        v205 = *(_QWORD *)v195;
        *(_QWORD *)v195 = v120;
      }
    }
    v34 = v193 - 1;
    HIDWORD(v159) = v193 - 1;
    HIDWORD(v139) = v183 - 1;
    v174 = sub_54C1C0(*(_QWORD **)(a1 + 1480));
    LODWORD(v159) = 0;
    v156 = (__int64 *)&v202;
    if ( v34 >= 0 )
    {
      do
      {
        v35 = (char *)v192 + 80 * (int)v159;
        v36 = v159;
        v133 = (__int64)v35;
        if ( SHIDWORD(v139) < (int)v159 )
          goto LABEL_117;
        tinfo_size = get_tinfo_size(0, *((_QWORD *)v35 + 8), 0);
        v166 = 0;
        if ( !(unsigned __int8)getinf_flag(3, 4) )
          v166 = ((2 * (unsigned __int16)getinf(59)) & 0x1FE) == tinfo_size;
        v168 = 0;
        if ( !(unsigned __int8)getinf_flag(3, 4) )
          v168 = (unsigned __int8)getinf(59) == tinfo_size;
        v37 = 0;
        if ( SHIDWORD(v139) < 0 )
          goto LABEL_57;
        while ( 1 )
        {
          v38 = 80LL * v37;
          if ( !(unsigned int)compare_arglocs((char *)v182 + v38, v35) )
            break;
          if ( SHIDWORD(v139) < ++v37 )
            goto LABEL_57;
        }
        v39 = *(_QWORD *)((char *)v182 + v38 + 64);
        v171 = (char *)v182 + v38;
        v40 = get_tinfo_size(0, v39, 0);
        v43 = tinfo_size;
        v44 = (int)v171;
        if ( v40 < tinfo_size && v166 )
        {
          if ( HIDWORD(v139) == v37 )
            goto LABEL_57;
          LODWORD(v39) = (_DWORD)v171;
          if ( sub_5E9AE0(v133, (__int64)v171, (__int64)v182 + 80 * v37 + 80, v174) )
            goto LABEL_57;
        }
        else if ( tinfo_size < v40 && v168 )
        {
          v36 = v159;
          if ( HIDWORD(v159) == (_DWORD)v159 )
          {
            v35 = (char *)v133;
LABEL_117:
            sub_5F5640(v156, (__int64)v35);
            v45 = v36 + 1;
            goto LABEL_59;
          }
          v165 = 80LL * ((int)v159 + 1);
          LODWORD(v39) = v133;
          v111 = sub_5E9AE0((__int64)v171, v133, (__int64)v192 + v165, v174);
          v42 = v159 + 1;
          if ( v111 )
          {
            sub_5F5640(v156, v133);
            v45 = v159 + 1;
            if ( SHIDWORD(v159) > (int)v159 )
            {
              sub_5F5640(v156, (__int64)v192 + v165);
              v45 = v159 + 2;
            }
            goto LABEL_59;
          }
        }
        v163 = (char *)v182 + v38;
        if ( (char *)v182 + v38 )
        {
          v73 = (char *)v182 + v38;
          v74 = score_tinfo(
                  (int)v133 + 64,
                  v39,
                  v41,
                  v43,
                  v42,
                  v44,
                  v126,
                  (int)v129,
                  v133,
                  v139,
                  (__int64)v153,
                  (int)v156,
                  v159);
          v79 = score_tinfo((int)v163 + 64, v39, v75, v76, v77, v78, v127, v130, v135, v150, v154, v157, v160);
          v80 = v203;
          if ( v74 >= v79 )
            v73 = *(char **)v136;
          v81 = (char *)v202;
          v82 = v73;
          if ( *((_QWORD *)&v203 + 1) < (unsigned __int64)(v203 + 1) )
          {
            v202 = (void *)qvector_reserve(v156, v202, v203 + 1, 80);
            v80 = v203;
            v81 = (char *)v202;
            v82 = v73;
          }
          v83 = &v81[80 * v80];
          *(_DWORD *)v83 = 0;
          *((_QWORD *)v83 + 1) = 0;
          *((_QWORD *)v83 + 8) = 0;
          *(_QWORD *)&v203 = v203 + 1;
          v84 = *((_QWORD *)v83 + 1);
          *((_QWORD *)v83 + 2) = 0;
          *((_QWORD *)v83 + 5) = 0;
          *((_DWORD *)v83 + 18) = 0;
          *(_OWORD *)(v83 + 24) = 0;
          *((_OWORD *)v83 + 3) = 0;
          *((_QWORD *)v83 + 1) = *((_QWORD *)v82 + 1);
          v85 = *(_DWORD *)v82;
          *((_QWORD *)v82 + 1) = v84;
          LODWORD(v84) = *(_DWORD *)v83;
          *(_DWORD *)v83 = v85;
          v86 = *((_QWORD *)v82 + 8);
          *(_DWORD *)v82 = v84;
          v87 = *((_QWORD *)v83 + 8);
          *((_QWORD *)v83 + 8) = v86;
          v88 = *((_QWORD *)v82 + 3) == 0;
          v89 = haystack;
          *((_QWORD *)v82 + 8) = v87;
          if ( !v88 )
            v89 = *((const char **)v82 + 2);
          if ( v89 && v202 != (char *)v202 + 80 * (_QWORD)v203 )
          {
            v169 = func;
            v90 = (char *)v202 + 80 * v203;
            v91 = v89;
            v172 = v8;
            v92 = (char *)v202;
            v93 = v83;
            v167 = v82;
            do
            {
              v94 = haystack;
              if ( *((_QWORD *)v92 + 3) )
                v94 = *((const char **)v92 + 2);
              if ( !strcmp(v94, v91) )
              {
                v82 = v167;
                func = v169;
                v83 = v93;
                v8 = v172;
                goto LABEL_133;
              }
              v92 += 80;
            }
            while ( v90 != v92 );
            v82 = v167;
            func = v169;
            v83 = v93;
            v8 = v172;
          }
          v102 = *((_QWORD *)v83 + 2);
          v103 = _mm_loadu_si128((const __m128i *)(v83 + 24));
          *((_QWORD *)v83 + 2) = *((_QWORD *)v82 + 2);
          *((_QWORD *)v83 + 3) = *((_QWORD *)v82 + 3);
          *((_QWORD *)v83 + 4) = *((_QWORD *)v82 + 4);
          *((_QWORD *)v82 + 2) = v102;
          *(__m128i *)(v82 + 24) = v103;
LABEL_133:
          v95 = *((_DWORD *)v82 + 18);
          if ( (v95 & 1) != 0 )
          {
            *((_DWORD *)v83 + 18) |= 1u;
            v95 = *((_DWORD *)v82 + 18);
          }
          if ( (v95 & 2) != 0 )
            *((_DWORD *)v83 + 18) |= 2u;
          if ( *((_QWORD *)v83 + 3) <= 1u )
          {
            v96 = haystack;
            v97 = v163 + 16;
            if ( v82 != *(char **)v136 )
              v97 = (char *)(*(_QWORD *)v136 + 16LL);
            v98 = v97;
            if ( *((_QWORD *)v97 + 1) )
              v96 = *(const char **)v97;
            if ( v96 && v202 != (char *)v202 + 80 * (_QWORD)v203 )
            {
              v137 = v8;
              v99 = (char *)v202;
              v100 = (char *)v202 + 80 * v203;
              v164 = v97;
              v170 = v83;
              do
              {
                v101 = haystack;
                if ( *((_QWORD *)v99 + 3) )
                  v101 = *((const char **)v99 + 2);
                if ( !strcmp(v101, v96) )
                {
                  v8 = v137;
                  goto LABEL_58;
                }
                v99 += 80;
              }
              while ( v100 != v99 );
              v98 = v164;
              v83 = v170;
              v8 = v137;
            }
            v109 = *((_QWORD *)v83 + 2);
            v110 = _mm_loadh_ps((const double *)v83 + 4);
            *((_QWORD *)v83 + 2) = *(_QWORD *)v98;
            *((_QWORD *)v83 + 3) = *((_QWORD *)v98 + 1);
            *((_QWORD *)v83 + 4) = *((_QWORD *)v98 + 2);
            *(_QWORD *)v98 = v109;
            *(__m128 *)(v98 + 8) = v110;
          }
          goto LABEL_58;
        }
LABEL_57:
        sub_5F5640(v156, v133);
LABEL_58:
        v45 = v159 + 1;
LABEL_59:
        LODWORD(v159) = v45;
      }
      while ( SHIDWORD(v159) >= v45 );
    }
    v46 = v191 & 0xF0;
    if ( (v191 & 0xF0) == 0xC0 )
      v46 = HIDWORD(v184);
    v47 = v201 & 0xF0;
    if ( (v201 & 0xF0) == 0xC0 )
    {
      v48 = HIDWORD(v194);
      if ( HIDWORD(v194) == v46 )
        goto LABEL_181;
    }
    else
    {
      v48 = v47;
      if ( v47 == v46 )
      {
        v61 = v211 & 0xF;
        goto LABEL_95;
      }
    }
    if ( !(_QWORD)v203 && (v48 == 32 || v46 == 32) )
    {
      v47 = 32;
      v61 = v211 & 0xF;
      goto LABEL_95;
    }
    if ( func && (*(_DWORD *)(func + 28) || (*(_BYTE *)(func + 9) & 0x40) != 0) )
    {
      v179[0] = nullptr;
      get_stock_tinfo(v179, 14);
      if ( (int)get_tinfo_property(v179[0], 21) > 0 )
      {
        clear_tinfo_t(v179);
        v134 = *(_DWORD *)(func + 28);
        if ( !(_QWORD)v203 )
          goto LABEL_84;
        v49 = 0;
        v50 = 0;
        while ( *((_DWORD *)v202 + 20 * v49) != 1 )
        {
          v49 = ++v50;
          if ( v50 >= (unsigned __int64)v203 )
            goto LABEL_84;
        }
        v51 = v134 > 0;
        v52 = v48 & 0xFFFFFFF0;
        if ( (v48 & 0xFFFFFFF0) > 0x70 )
        {
          if ( v52 == 224 )
            goto LABEL_78;
        }
        else if ( v52 > 0x4F )
        {
          v53 = 0x100010001LL;
          if ( _bittest64(&v53, v52 - 80) )
          {
LABEL_78:
            v54 = v46 & 0xFFFFFFF0;
            if ( v134 > 0 )
            {
              if ( v54 > 0x70 )
              {
                if ( v54 == 224 )
                  goto LABEL_84;
                goto LABEL_213;
              }
            }
            else
            {
              v48 = 0;
              if ( v54 > 0x70 )
              {
                if ( v54 == 224 )
                {
                  v125 = getinf_flag(3, 4);
                  v58 = v203;
                  v46 = 0;
                  if ( v125 )
                  {
                    v48 = 0;
                    goto LABEL_160;
                  }
LABEL_85:
                  if ( !v58 )
                  {
                    if ( v48 != 128 )
                    {
                      if ( v46 == 128 )
                        v46 = 0;
                      goto LABEL_89;
                    }
                    if ( v46 == 128 )
                    {
LABEL_216:
                      v60 = 0;
                      v107 = 0;
                      v48 = 0;
LABEL_167:
                      v152 = v107;
                      v108 = sub_5ED360(*(_QWORD **)(qword_2CA1698 + 1480)) == 0 ? 112 : 48;
                      if ( v48 < v152 )
                        v48 = v152;
                      if ( v48 <= 0x1F )
                      {
                        if ( v60 )
                        {
                          if ( (_BYTE)v139 )
                          {
                            v47 = 0x80;
                            v61 = v211 & 0xF;
                          }
                          else
                          {
                            v124 = getinf_flag(3, 4);
                            v61 = v211 & 0xF;
                            v88 = v124 == 0;
                            v47 = 112;
                            if ( !v88 )
                              v47 = v108;
                          }
                        }
                        else
                        {
                          v47 = 80;
                          v61 = v211 & 0xF;
                          if ( v134 <= 0 )
                            v47 = v108;
                        }
                        goto LABEL_95;
                      }
LABEL_181:
                      v61 = v211 & 0xF;
                      if ( (v48 & 0xFFFFFF0F) != 0 || v48 == 192 )
                        goto LABEL_155;
                      goto LABEL_183;
                    }
LABEL_196:
                    v48 = (v46 - 112) & 0xFFFFFFDF;
                    if ( !v48 )
                    {
LABEL_206:
                      v107 = 0;
                      v60 = 0;
                      goto LABEL_167;
                    }
                    v48 = v46;
                    v60 = 0;
                    v59 = 0;
LABEL_92:
                    if ( (v46 & 0xFFFFFFF0) == 0x40 || (v46 & 0xFFFFFFF0) == 0xD0 )
                    {
                      v47 = v46;
                      v61 = v211 & 0xF;
                      if ( (v46 & 0xFFFFFF0F) == 0 )
                      {
LABEL_95:
                        v62 = v61 | v47;
                        v48 = 0;
LABEL_96:
                        HIDWORD(v204) = v48;
                        v211 = v62;
                        sub_5E9E10((__int64)v156);
                        tinfo = create_tinfo(a4, 12, 12, v63);
                        v65 = 0;
                        if ( tinfo )
                        {
                          v177 = nullptr;
                          memset(v179, 0, 24);
                          v178 = 0;
                          v66 = serialize_tinfo(&v177, v179, 0, a4, 272);
                          v65 = 2;
                          if ( !v66 )
                          {
                            clear_tinfo_t(a4);
                            sub_365330();
                          }
                          if ( v179[0] )
                          {
                            v179[1] = nullptr;
                            qfree(v179[0]);
                            v65 = 2;
                          }
                          if ( v177 )
                          {
                            *(_QWORD *)&v178 = 0;
                            qfree(v177);
                            v65 = 2;
                          }
                        }
                        if ( v209 )
                        {
                          v147 = v65;
                          *(_QWORD *)&v210 = 0;
                          qfree(v209);
                          v65 = v147;
                        }
                        v148 = v65;
                        cleanup_argloc(&v206);
                        clear_tinfo_t(&v205);
                        v67 = (char *)v202;
                        v16 = v148;
                        if ( v202 )
                        {
                          v68 = v203;
                          v69 = 0;
                          if ( (_QWORD)v203 )
                          {
                            do
                            {
                              v70 = &v67[80 * v69];
                              clear_tinfo_t(v70 + 64);
                              v71 = *((void **)v70 + 5);
                              if ( v71 )
                              {
                                *((_QWORD *)v70 + 6) = 0;
                                qfree(v71);
                              }
                              v72 = *((void **)v70 + 2);
                              if ( v72 )
                              {
                                *((_QWORD *)v70 + 3) = 0;
                                qfree(v72);
                              }
                              ++v69;
                              cleanup_argloc(v70);
                              v67 = (char *)v202;
                            }
                            while ( v68 != v69 );
                            v16 = v148;
                          }
                          v149 = v16;
                          *(_QWORD *)&v203 = 0;
                          qfree(v67);
                          v16 = v149;
                        }
                        goto LABEL_14;
                      }
LABEL_155:
                      v62 = v61 | 0xC0;
                      goto LABEL_96;
                    }
                    v107 = v46;
                    v48 = v59;
                    goto LABEL_167;
                  }
                  memset(v179, 0, sizeof(v179));
                  v123 = (unsigned __int16 *)v202;
                  v180 = nullptr;
                  v181 = 0;
                  sub_375980(0x7D4u, v179, 128);
                  if ( HIDWORD(v179[0]) == 1 && *(_DWORD *)v123 == 3 && v123[4] == *(_DWORD *)v179[1] )
                  {
                    if ( v180 )
                    {
                      *(_QWORD *)&v181 = 0;
                      qfree(v180);
                      if ( v179[1] )
                      {
                        v179[2] = nullptr;
                        qfree(v179[1]);
                      }
                      goto LABEL_228;
                    }
                    if ( !v179[1] )
                    {
LABEL_228:
                      v58 = v203;
                      LOBYTE(v139) = tinfo_details;
                      goto LABEL_160;
                    }
                    v179[2] = nullptr;
                    qfree(v179[1]);
                    v58 = v203;
                    LOBYTE(v139) = tinfo_details;
LABEL_160:
                    if ( !v58 )
                      goto LABEL_89;
                    goto LABEL_161;
                  }
                  if ( v180 )
                  {
                    *(_QWORD *)&v181 = 0;
                    qfree(v180);
                  }
                  if ( v179[1] )
                  {
                    v179[2] = nullptr;
                    qfree(v179[1]);
                  }
                  v58 = v203;
LABEL_157:
                  if ( v48 == 128 )
                  {
                    if ( v46 == 128 )
                    {
                      v46 = 0;
                      v48 = 0;
                      if ( !v58 )
                        goto LABEL_216;
                    }
                    else
                    {
                      v48 = 0;
                      if ( !v58 )
                        goto LABEL_196;
                    }
LABEL_161:
                    v105 = 0;
                    v106 = 0;
                    v60 = 0;
                    do
                    {
                      v60 += (unsigned int)(*((_DWORD *)v202 + 20 * v105) - 3) < 2;
                      v105 = ++v106;
                    }
                    while ( v106 < v58 );
                    if ( v60 )
                    {
                      v59 = (v48 - 48) & 0xFFFFFFDF;
                      if ( !v59 )
                      {
                        v48 = (v46 - 48) & 0xFFFFFFDF;
                        if ( !v48 )
                        {
LABEL_166:
                          v107 = 0;
                          goto LABEL_167;
                        }
LABEL_175:
                        v48 = v46;
                        goto LABEL_92;
                      }
                      v104 = (v48 & 0xFFFFFFF0) == 208 || (v48 & 0xFFFFFFF0) == 64;
                      if ( ((v46 - 48) & 0xFFFFFFDF) == 0 )
                        goto LABEL_191;
LABEL_153:
                      if ( v104 )
                        goto LABEL_154;
                      v59 = v48;
                      goto LABEL_175;
                    }
LABEL_89:
                    v59 = (v48 - 112) & 0xFFFFFFDF;
                    if ( !v59 )
                    {
                      v48 = (v46 - 112) & 0xFFFFFFDF;
                      if ( v48 )
                      {
                        v48 = v46;
                        v60 = 0;
                        goto LABEL_92;
                      }
                      goto LABEL_206;
                    }
                    v60 = 0;
                    v104 = (v48 & 0xFFFFFFF0) == 208 || (v48 & 0xFFFFFFF0) == 64;
                    if ( ((v46 - 112) & 0xFFFFFFDF) == 0 )
                    {
LABEL_191:
                      if ( !v104 )
                        goto LABEL_166;
LABEL_154:
                      v61 = v211 & 0xF;
                      if ( (v48 & 0xFFFFFF0F) != 0 )
                        goto LABEL_155;
LABEL_183:
                      v47 = v48;
                      goto LABEL_95;
                    }
                    goto LABEL_153;
                  }
                  if ( v46 == 128 )
                    v46 = 0;
                  goto LABEL_160;
                }
                goto LABEL_213;
              }
            }
LABEL_80:
            if ( v54 > 0x4F )
            {
              v55 = 0x100010001LL;
              v56 = _bittest64(&v55, v54 - 80);
              if ( v56 )
              {
LABEL_82:
                if ( v51 != v56 )
                  v46 = 0;
LABEL_84:
                v57 = getinf_flag(3, 4);
                v58 = v203;
                if ( v57 )
                  goto LABEL_157;
                goto LABEL_85;
              }
            }
LABEL_213:
            v56 = (v46 & 0xFFFFFFE0) == 128;
            goto LABEL_82;
          }
        }
        if ( v51 != ((v48 & 0xFFFFFFE0) == 128) )
          v48 = 0;
        v54 = v46 & 0xFFFFFFF0;
        if ( (v46 & 0xFFFFFFF0) > 0x70 )
        {
          v56 = tinfo_details;
          if ( v54 == 224 )
            goto LABEL_82;
          goto LABEL_213;
        }
        goto LABEL_80;
      }
      clear_tinfo_t(v179);
    }
    v134 = -1;
    goto LABEL_84;
  }
  return 0;
}

