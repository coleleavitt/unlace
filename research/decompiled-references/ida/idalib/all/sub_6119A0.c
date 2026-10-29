__int64 __fastcall sub_6119A0(__int64 a1, char *a2, const char *a3, __int64 *a4, int a5)
{
  unsigned int v6; // r15d
  __int64 result; // rax
  char *v8; // rbx
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
  __int64 v49; // r9
  __int64 v50; // rax
  int v51; // edx
  char v52; // si
  unsigned int v53; // eax
  __int64 v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rdx
  unsigned __int8 v57; // dl
  char v58; // al
  unsigned __int64 v59; // rsi
  unsigned int v60; // eax
  int v61; // r13d
  char v62; // dl
  char v63; // al
  __int64 v64; // rcx
  char tinfo; // dl
  int v66; // eax
  char v67; // dl
  char *v68; // rdi
  __int64 v69; // r12
  __int64 v70; // rbp
  char *v71; // rbx
  void *v72; // rdi
  void *v73; // rdi
  char *v74; // r15
  unsigned int v75; // r12d
  int v76; // edx
  int v77; // ecx
  int v78; // r8d
  int v79; // r9d
  unsigned int v80; // eax
  __int64 v81; // rdx
  char *v82; // rsi
  char *v83; // r8
  char *v84; // rax
  __int64 v85; // rdx
  int v86; // ecx
  __int64 v87; // rcx
  __int64 v88; // rdx
  bool v89; // zf
  const char *v90; // rcx
  char *v91; // r15
  const char *v92; // r13
  char *v93; // rbx
  char *v94; // r12
  const char *v95; // rdi
  int v96; // edx
  const char *v97; // r12
  char *v98; // rdx
  char *v99; // r8
  char *v100; // rbx
  char *v101; // r15
  const char *v102; // rdi
  __int64 v103; // rdx
  __m128i v104; // xmm0
  bool v105; // al
  __int64 v106; // rax
  int v107; // edx
  int v108; // ecx
  int v109; // r15d
  __int64 v110; // rdx
  __m128 v111; // xmm0
  bool v112; // al
  unsigned int v113; // r15d
  int v114; // edx
  int v115; // ecx
  int v116; // r8d
  int v117; // r9d
  unsigned int v118; // eax
  __int64 v119; // rcx
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rdx
  unsigned __int16 *v124; // r13
  char v125; // al
  char v126; // al
  int v127; // [rsp+0h] [rbp-248h]
  int v128; // [rsp+0h] [rbp-248h]
  int v129; // [rsp+0h] [rbp-248h]
  int *v130; // [rsp+8h] [rbp-240h]
  int v131; // [rsp+8h] [rbp-240h]
  int v132; // [rsp+8h] [rbp-240h]
  unsigned int v133; // [rsp+10h] [rbp-238h]
  __int64 v134; // [rsp+10h] [rbp-238h]
  int v135; // [rsp+10h] [rbp-238h]
  char v136; // [rsp+10h] [rbp-238h]
  char v137[8]; // [rsp+10h] [rbp-238h]
  char v138[8]; // [rsp+10h] [rbp-238h]
  char v139; // [rsp+10h] [rbp-238h]
  void *v140; // [rsp+18h] [rbp-230h]
  unsigned int v141; // [rsp+18h] [rbp-230h]
  int v142; // [rsp+18h] [rbp-230h]
  int v143; // [rsp+18h] [rbp-230h]
  unsigned int v144; // [rsp+18h] [rbp-230h]
  unsigned int v145; // [rsp+18h] [rbp-230h]
  unsigned int v146; // [rsp+18h] [rbp-230h]
  unsigned int v147; // [rsp+18h] [rbp-230h]
  int v148; // [rsp+18h] [rbp-230h]
  int v149; // [rsp+18h] [rbp-230h]
  int v150; // [rsp+18h] [rbp-230h]
  void *v151; // [rsp+18h] [rbp-230h]
  void *v152; // [rsp+18h] [rbp-230h]
  unsigned int v153; // [rsp+1Ch] [rbp-22Ch]
  __int64 *v154; // [rsp+20h] [rbp-228h]
  __int64 v155; // [rsp+20h] [rbp-228h]
  __int64 v156; // [rsp+20h] [rbp-228h]
  __int64 *v157; // [rsp+28h] [rbp-220h]
  int v158; // [rsp+28h] [rbp-220h]
  __int64 v159; // [rsp+30h] [rbp-218h]
  __int64 v160; // [rsp+30h] [rbp-218h]
  __int64 v161; // [rsp+30h] [rbp-218h]
  __int64 v162; // [rsp+30h] [rbp-218h]
  unsigned __int64 tinfo_size; // [rsp+38h] [rbp-210h]
  char *v164; // [rsp+38h] [rbp-210h]
  char *v165; // [rsp+38h] [rbp-210h]
  __int64 v166; // [rsp+38h] [rbp-210h]
  bool v167; // [rsp+40h] [rbp-208h]
  char *v168; // [rsp+40h] [rbp-208h]
  bool v169; // [rsp+48h] [rbp-200h]
  __int64 v170; // [rsp+48h] [rbp-200h]
  char *v171; // [rsp+48h] [rbp-200h]
  char *v172; // [rsp+58h] [rbp-1F0h]
  char *v173; // [rsp+58h] [rbp-1F0h]
  unsigned __int8 tinfo_details; // [rsp+6Bh] [rbp-1DDh]
  int v175; // [rsp+6Ch] [rbp-1DCh]
  int v176[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int64 v177; // [rsp+78h] [rbp-1D0h] BYREF
  void *v178; // [rsp+80h] [rbp-1C8h] BYREF
  __int128 v179; // [rsp+88h] [rbp-1C0h]
  void *v180[4]; // [rsp+A0h] [rbp-1A8h] BYREF
  void *v181; // [rsp+C0h] [rbp-188h]
  __int128 v182; // [rsp+C8h] [rbp-180h]
  void *v183; // [rsp+E0h] [rbp-168h] BYREF
  __int128 v184; // [rsp+E8h] [rbp-160h]
  __int64 v185; // [rsp+F8h] [rbp-150h]
  int v186[2]; // [rsp+100h] [rbp-148h] BYREF
  __int64 v187; // [rsp+108h] [rbp-140h] BYREF
  __int128 v188; // [rsp+110h] [rbp-138h]
  void *v189; // [rsp+120h] [rbp-128h]
  __int128 v190; // [rsp+128h] [rbp-120h]
  char v191; // [rsp+138h] [rbp-110h]
  void *v192; // [rsp+140h] [rbp-108h] BYREF
  __int128 v193; // [rsp+148h] [rbp-100h]
  __int64 v194; // [rsp+158h] [rbp-F0h]
  int v195[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int64 v196; // [rsp+168h] [rbp-E0h] BYREF
  __int128 v197; // [rsp+170h] [rbp-D8h]
  void *v198; // [rsp+180h] [rbp-C8h]
  __int128 v199; // [rsp+188h] [rbp-C0h]
  char v200; // [rsp+198h] [rbp-B0h]
  void *v201; // [rsp+1A0h] [rbp-A8h] BYREF
  __int128 v202; // [rsp+1A8h] [rbp-A0h]
  __int64 v203; // [rsp+1B8h] [rbp-90h]
  __int64 v204; // [rsp+1C0h] [rbp-88h] BYREF
  __int64 v205; // [rsp+1C8h] [rbp-80h] BYREF
  __int128 v206; // [rsp+1D0h] [rbp-78h]
  void *v207; // [rsp+1E0h] [rbp-68h]
  __int128 v208; // [rsp+1E8h] [rbp-60h]
  char v209; // [rsp+1F8h] [rbp-50h]
  unsigned __int64 v210; // [rsp+208h] [rbp-40h]

  v210 = __readfsqword(0x28u);
  LOBYTE(v140) = a4 == nullptr || a2 + 1 == nullptr;
  if ( !(_BYTE)v140 )
  {
    v6 = a5 + 1;
    result = 0;
    if ( a5 + 1 > 127 )
      return result;
    v8 = a2;
    *(_QWORD *)v176 = 0;
    func = get_func(a2);
    v12 = 0;
    v130 = v176;
    if ( func && *(char **)func == a2 )
      v12 = sub_614EC0(*(_QWORD *)(a1 + 1672), func, v176, v6, v10, 0);
    v133 = v12;
    v177 = 0;
    v154 = &v177;
    v13 = sub_60AA20(a1, a2, a3, &v177, 1);
    if ( !v133 )
    {
      v29 = v177;
      v177 = *a4;
      *a4 = v29;
      goto LABEL_9;
    }
    if ( !v13 )
    {
      v14 = *a4;
      *a4 = *(_QWORD *)v176;
      *(_QWORD *)v176 = v14;
      v13 = v133;
LABEL_9:
      v141 = v13;
      clear_tinfo_t(v154);
      clear_tinfo_t(v130);
      return v141;
    }
    tinfo_property = get_tinfo_property(v177, 22);
    v13 = 0;
    if ( tinfo_property )
      goto LABEL_9;
    v183 = nullptr;
    v185 = 0;
    *(_QWORD *)v186 = 0;
    v187 = 0;
    v189 = nullptr;
    v191 = 16;
    v192 = nullptr;
    v194 = 0;
    *(_QWORD *)v195 = 0;
    v196 = 0;
    v198 = nullptr;
    v200 = 16;
    v184 = 0;
    v188 = 0;
    v190 = 0;
    v193 = 0;
    v197 = 0;
    v199 = 0;
    if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)v176, 12, &v183)
      || (tinfo_details = get_tinfo_details(v177, 12, &v192)) == 0 )
    {
      v16 = 0;
LABEL_14:
      if ( v198 )
      {
        v142 = v16;
        *(_QWORD *)&v199 = 0;
        qfree(v198);
        v16 = v142;
      }
      v143 = v16;
      cleanup_argloc(&v196);
      clear_tinfo_t(v195);
      v17 = (char *)v192;
      v18 = v143;
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
          v18 = v143;
        }
        v144 = v18;
        *(_QWORD *)&v193 = 0;
        qfree(v17);
        v18 = v144;
      }
      if ( v189 )
      {
        v145 = v18;
        *(_QWORD *)&v190 = 0;
        qfree(v189);
        v18 = v145;
      }
      v146 = v18;
      cleanup_argloc(&v187);
      clear_tinfo_t(v186);
      v24 = (char *)v183;
      v13 = v146;
      if ( v183 )
      {
        v25 = v184;
        if ( (_QWORD)v184 )
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
            v24 = (char *)v183;
          }
          while ( v25 != tinfo_property );
          v13 = v146;
        }
        v147 = v13;
        *(_QWORD *)&v184 = 0;
        qfree(v24);
        v13 = v147;
      }
      goto LABEL_9;
    }
    v201 = nullptr;
    v203 = 0;
    v204 = 0;
    v205 = 0;
    v207 = nullptr;
    v209 = 16;
    v202 = 0;
    v206 = 0;
    v208 = 0;
    if ( (v194 & 0x10) != 0 )
      LODWORD(v203) = 16;
    if ( (((unsigned __int8)v185 | (unsigned __int8)v194) & 2) != 0 )
    {
      LODWORD(v203) = v203 | 2;
      v180[0] = &dword_0 + 1;
      copy_tinfo_t(&v204);
      clear_tinfo_t(v180);
    }
    else
    {
      v113 = score_tinfo(
               (int)v186,
               12,
               v30,
               v31,
               v32,
               v33,
               v127,
               (int)v176,
               v133,
               v140,
               (__int64)&v177,
               (int)&v201,
               v159);
      v118 = score_tinfo((int)v195, 12, v114, v115, v116, v117, v129, v132, v139, v152, v156, (int)&v201, v162);
      if ( v118 < v113 || v113 == v118 && (int)v187 > (int)v196 )
      {
        v122 = v188;
        *(_QWORD *)&v188 = v206;
        *(_QWORD *)&v206 = v122;
        LODWORD(v122) = v187;
        LODWORD(v187) = v205;
        LODWORD(v205) = v122;
        v123 = *(_QWORD *)v186;
        *(_QWORD *)v186 = v204;
        v204 = v123;
      }
      else
      {
        v119 = v197;
        *(_QWORD *)&v197 = v206;
        v120 = v205;
        LODWORD(v205) = v196;
        LODWORD(v196) = v120;
        v121 = v204;
        *(_QWORD *)&v206 = v119;
        v204 = *(_QWORD *)v195;
        *(_QWORD *)v195 = v121;
      }
    }
    v34 = v193 - 1;
    HIDWORD(v160) = v193 - 1;
    HIDWORD(v140) = v184 - 1;
    v175 = sub_565920(*(_QWORD **)(a1 + 1672));
    LODWORD(v160) = 0;
    v157 = (__int64 *)&v201;
    if ( v34 >= 0 )
    {
      do
      {
        v35 = (char *)v192 + 80 * (int)v160;
        v36 = v160;
        v134 = (__int64)v35;
        if ( SHIDWORD(v140) < (int)v160 )
          goto LABEL_117;
        tinfo_size = get_tinfo_size(0, *((_QWORD *)v35 + 8), 0);
        v167 = 0;
        if ( !(unsigned __int8)getinf_flag(3, 4) )
          v167 = ((2 * (unsigned __int16)getinf(59)) & 0x1FE) == tinfo_size;
        v169 = 0;
        if ( !(unsigned __int8)getinf_flag(3, 4) )
          v169 = (unsigned __int8)getinf(59) == tinfo_size;
        v37 = 0;
        if ( SHIDWORD(v140) < 0 )
          goto LABEL_57;
        while ( 1 )
        {
          v38 = 80LL * v37;
          if ( !(unsigned int)compare_arglocs((char *)v183 + v38, v35) )
            break;
          if ( SHIDWORD(v140) < ++v37 )
            goto LABEL_57;
        }
        v39 = *(_QWORD *)((char *)v183 + v38 + 64);
        v172 = (char *)v183 + v38;
        v40 = get_tinfo_size(0, v39, 0);
        v43 = tinfo_size;
        v44 = (int)v172;
        if ( v40 < tinfo_size && v167 )
        {
          if ( HIDWORD(v140) == v37 )
            goto LABEL_57;
          LODWORD(v39) = (_DWORD)v172;
          if ( sub_6059A0(v134, (__int64)v172, (__int64)v183 + 80 * v37 + 80, v175) )
            goto LABEL_57;
        }
        else if ( tinfo_size < v40 && v169 )
        {
          v36 = v160;
          if ( HIDWORD(v160) == (_DWORD)v160 )
          {
            v35 = (char *)v134;
LABEL_117:
            sub_6116C0(v157, (__int64)v35);
            v45 = v36 + 1;
            goto LABEL_59;
          }
          v166 = 80LL * ((int)v160 + 1);
          LODWORD(v39) = v134;
          v112 = sub_6059A0((__int64)v172, v134, (__int64)v192 + v166, v175);
          v42 = v160 + 1;
          if ( v112 )
          {
            sub_6116C0(v157, v134);
            v45 = v160 + 1;
            if ( SHIDWORD(v160) > (int)v160 )
            {
              sub_6116C0(v157, (__int64)v192 + v166);
              v45 = v160 + 2;
            }
            goto LABEL_59;
          }
        }
        v164 = (char *)v183 + v38;
        if ( (char *)v183 + v38 )
        {
          v74 = (char *)v183 + v38;
          v75 = score_tinfo(
                  (int)v134 + 64,
                  v39,
                  v41,
                  v43,
                  v42,
                  v44,
                  v127,
                  (int)v130,
                  v134,
                  v140,
                  (__int64)v154,
                  (int)v157,
                  v160);
          v80 = score_tinfo((int)v164 + 64, v39, v76, v77, v78, v79, v128, v131, v136, v151, v155, v158, v161);
          v81 = v202;
          if ( v75 >= v80 )
            v74 = *(char **)v137;
          v82 = (char *)v201;
          v83 = v74;
          if ( *((_QWORD *)&v202 + 1) < (unsigned __int64)(v202 + 1) )
          {
            v201 = (void *)qvector_reserve(v157, v201, v202 + 1, 80);
            v81 = v202;
            v82 = (char *)v201;
            v83 = v74;
          }
          v84 = &v82[80 * v81];
          *(_DWORD *)v84 = 0;
          *((_QWORD *)v84 + 1) = 0;
          *((_QWORD *)v84 + 8) = 0;
          *(_QWORD *)&v202 = v202 + 1;
          v85 = *((_QWORD *)v84 + 1);
          *((_QWORD *)v84 + 2) = 0;
          *((_QWORD *)v84 + 5) = 0;
          *((_DWORD *)v84 + 18) = 0;
          *(_OWORD *)(v84 + 24) = 0;
          *((_OWORD *)v84 + 3) = 0;
          *((_QWORD *)v84 + 1) = *((_QWORD *)v83 + 1);
          v86 = *(_DWORD *)v83;
          *((_QWORD *)v83 + 1) = v85;
          LODWORD(v85) = *(_DWORD *)v84;
          *(_DWORD *)v84 = v86;
          v87 = *((_QWORD *)v83 + 8);
          *(_DWORD *)v83 = v85;
          v88 = *((_QWORD *)v84 + 8);
          *((_QWORD *)v84 + 8) = v87;
          v89 = *((_QWORD *)v83 + 3) == 0;
          v90 = haystack;
          *((_QWORD *)v83 + 8) = v88;
          if ( !v89 )
            v90 = *((const char **)v83 + 2);
          if ( v90 && v201 != (char *)v201 + 80 * (_QWORD)v202 )
          {
            v170 = func;
            v91 = (char *)v201 + 80 * v202;
            v92 = v90;
            v173 = v8;
            v93 = (char *)v201;
            v94 = v84;
            v168 = v83;
            do
            {
              v95 = haystack;
              if ( *((_QWORD *)v93 + 3) )
                v95 = *((const char **)v93 + 2);
              if ( !strcmp(v95, v92) )
              {
                v83 = v168;
                func = v170;
                v84 = v94;
                v8 = v173;
                goto LABEL_133;
              }
              v93 += 80;
            }
            while ( v91 != v93 );
            v83 = v168;
            func = v170;
            v84 = v94;
            v8 = v173;
          }
          v103 = *((_QWORD *)v84 + 2);
          v104 = _mm_loadu_si128((const __m128i *)(v84 + 24));
          *((_QWORD *)v84 + 2) = *((_QWORD *)v83 + 2);
          *((_QWORD *)v84 + 3) = *((_QWORD *)v83 + 3);
          *((_QWORD *)v84 + 4) = *((_QWORD *)v83 + 4);
          *((_QWORD *)v83 + 2) = v103;
          *(__m128i *)(v83 + 24) = v104;
LABEL_133:
          v96 = *((_DWORD *)v83 + 18);
          if ( (v96 & 1) != 0 )
          {
            *((_DWORD *)v84 + 18) |= 1u;
            v96 = *((_DWORD *)v83 + 18);
          }
          if ( (v96 & 2) != 0 )
            *((_DWORD *)v84 + 18) |= 2u;
          if ( *((_QWORD *)v84 + 3) <= 1u )
          {
            v97 = haystack;
            v98 = v164 + 16;
            if ( v83 != *(char **)v137 )
              v98 = (char *)(*(_QWORD *)v137 + 16LL);
            v99 = v98;
            if ( *((_QWORD *)v98 + 1) )
              v97 = *(const char **)v98;
            if ( v97 && v201 != (char *)v201 + 80 * (_QWORD)v202 )
            {
              *(_QWORD *)v138 = v8;
              v100 = (char *)v201;
              v101 = (char *)v201 + 80 * v202;
              v165 = v98;
              v171 = v84;
              do
              {
                v102 = haystack;
                if ( *((_QWORD *)v100 + 3) )
                  v102 = *((const char **)v100 + 2);
                if ( !strcmp(v102, v97) )
                {
                  v8 = *(char **)v138;
                  goto LABEL_58;
                }
                v100 += 80;
              }
              while ( v101 != v100 );
              v99 = v165;
              v84 = v171;
              v8 = *(char **)v138;
            }
            v110 = *((_QWORD *)v84 + 2);
            v111 = _mm_loadh_ps((const double *)v84 + 4);
            *((_QWORD *)v84 + 2) = *(_QWORD *)v99;
            *((_QWORD *)v84 + 3) = *((_QWORD *)v99 + 1);
            *((_QWORD *)v84 + 4) = *((_QWORD *)v99 + 2);
            *(_QWORD *)v99 = v110;
            *(__m128 *)(v99 + 8) = v111;
          }
          goto LABEL_58;
        }
LABEL_57:
        sub_6116C0(v157, v134);
LABEL_58:
        v45 = v160 + 1;
LABEL_59:
        LODWORD(v160) = v45;
      }
      while ( SHIDWORD(v160) >= v45 );
    }
    v46 = v191 & 0xF0;
    if ( (v191 & 0xF0) == 0xC0 )
      v46 = HIDWORD(v185);
    v47 = v200 & 0xF0;
    if ( (v200 & 0xF0) == 0xC0 )
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
        v62 = v209 & 0xF;
        goto LABEL_95;
      }
    }
    if ( !(_QWORD)v202 && (v48 == 32 || v46 == 32) )
    {
      v47 = 32;
      v62 = v209 & 0xF;
      goto LABEL_95;
    }
    if ( func && (*(_QWORD *)(func + 48) || (*(_BYTE *)(func + 17) & 0x40) != 0) )
    {
      v180[0] = nullptr;
      get_stock_tinfo(v180, 14);
      if ( (int)get_tinfo_property(v180[0], 21) > 0 )
      {
        clear_tinfo_t(v180);
        v49 = *(_QWORD *)(func + 48);
        v135 = v49;
        if ( !(_QWORD)v202 )
          goto LABEL_84;
        v50 = 0;
        v51 = 0;
        while ( *((_DWORD *)v201 + 20 * v50) != 1 )
        {
          v50 = ++v51;
          if ( v51 >= (unsigned __int64)v202 )
            goto LABEL_84;
        }
        v52 = (int)v49 > 0;
        v53 = v48 & 0xFFFFFFF0;
        if ( (v48 & 0xFFFFFFF0) > 0x70 )
        {
          if ( v53 == 224 )
            goto LABEL_78;
        }
        else if ( v53 > 0x4F )
        {
          v54 = 0x100010001LL;
          if ( _bittest64(&v54, v53 - 80) )
          {
LABEL_78:
            v55 = v46 & 0xFFFFFFF0;
            if ( (int)v49 > 0 )
            {
              if ( v55 > 0x70 )
              {
                if ( v55 == 224 )
                  goto LABEL_84;
                goto LABEL_213;
              }
            }
            else
            {
              v48 = 0;
              if ( v55 > 0x70 )
              {
                if ( v55 == 224 )
                {
                  v126 = getinf_flag(3, 4);
                  v59 = v202;
                  v46 = 0;
                  if ( v126 )
                  {
                    v48 = 0;
                    goto LABEL_160;
                  }
LABEL_85:
                  if ( !v59 )
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
                      v61 = 0;
                      v108 = 0;
                      v48 = 0;
LABEL_167:
                      v153 = v108;
                      v109 = sub_609220(*(_QWORD **)(qword_2CCB598 + 1672)) == 0 ? 112 : 48;
                      if ( v48 < v153 )
                        v48 = v153;
                      if ( v48 <= 0x1F )
                      {
                        if ( v61 )
                        {
                          if ( (_BYTE)v140 )
                          {
                            v47 = 0x80;
                            v62 = v209 & 0xF;
                          }
                          else
                          {
                            v125 = getinf_flag(3, 4);
                            v62 = v209 & 0xF;
                            v89 = v125 == 0;
                            v47 = 112;
                            if ( !v89 )
                              v47 = v109;
                          }
                        }
                        else
                        {
                          v47 = 80;
                          v62 = v209 & 0xF;
                          if ( v135 <= 0 )
                            v47 = v109;
                        }
                        goto LABEL_95;
                      }
LABEL_181:
                      v62 = v209 & 0xF;
                      if ( (v48 & 0xFFFFFF0F) != 0 || v48 == 192 )
                        goto LABEL_155;
                      goto LABEL_183;
                    }
LABEL_196:
                    v48 = (v46 - 112) & 0xFFFFFFDF;
                    if ( !v48 )
                    {
LABEL_206:
                      v108 = 0;
                      v61 = 0;
                      goto LABEL_167;
                    }
                    v48 = v46;
                    v61 = 0;
                    v60 = 0;
LABEL_92:
                    if ( (v46 & 0xFFFFFFF0) == 0x40 || (v46 & 0xFFFFFFF0) == 0xD0 )
                    {
                      v47 = v46;
                      v62 = v209 & 0xF;
                      if ( (v46 & 0xFFFFFF0F) == 0 )
                      {
LABEL_95:
                        v63 = v62 | v47;
                        v48 = 0;
LABEL_96:
                        HIDWORD(v203) = v48;
                        v209 = v63;
                        sub_605CE0((__int64)v157);
                        tinfo = create_tinfo(a4, 12, 12, v64);
                        v66 = 0;
                        if ( tinfo )
                        {
                          v178 = nullptr;
                          memset(v180, 0, 24);
                          v179 = 0;
                          v67 = serialize_tinfo(&v178, v180, 0, a4, 272);
                          v66 = 2;
                          if ( !v67 )
                          {
                            clear_tinfo_t(a4);
                            sub_368890();
                          }
                          if ( v180[0] )
                          {
                            v180[1] = nullptr;
                            qfree(v180[0]);
                            v66 = 2;
                          }
                          if ( v178 )
                          {
                            *(_QWORD *)&v179 = 0;
                            qfree(v178);
                            v66 = 2;
                          }
                        }
                        if ( v207 )
                        {
                          v148 = v66;
                          *(_QWORD *)&v208 = 0;
                          qfree(v207);
                          v66 = v148;
                        }
                        v149 = v66;
                        cleanup_argloc(&v205);
                        clear_tinfo_t(&v204);
                        v68 = (char *)v201;
                        v16 = v149;
                        if ( v201 )
                        {
                          v69 = v202;
                          v70 = 0;
                          if ( (_QWORD)v202 )
                          {
                            do
                            {
                              v71 = &v68[80 * v70];
                              clear_tinfo_t(v71 + 64);
                              v72 = *((void **)v71 + 5);
                              if ( v72 )
                              {
                                *((_QWORD *)v71 + 6) = 0;
                                qfree(v72);
                              }
                              v73 = *((void **)v71 + 2);
                              if ( v73 )
                              {
                                *((_QWORD *)v71 + 3) = 0;
                                qfree(v73);
                              }
                              ++v70;
                              cleanup_argloc(v71);
                              v68 = (char *)v201;
                            }
                            while ( v69 != v70 );
                            v16 = v149;
                          }
                          v150 = v16;
                          *(_QWORD *)&v202 = 0;
                          qfree(v68);
                          v16 = v150;
                        }
                        goto LABEL_14;
                      }
LABEL_155:
                      v63 = v62 | 0xC0;
                      goto LABEL_96;
                    }
                    v108 = v46;
                    v48 = v60;
                    goto LABEL_167;
                  }
                  memset(v180, 0, sizeof(v180));
                  v124 = (unsigned __int16 *)v201;
                  v181 = nullptr;
                  v182 = 0;
                  sub_3792E0(0x7D4u, v180, 128);
                  if ( HIDWORD(v180[0]) == 1 && *(_DWORD *)v124 == 3 && v124[4] == *(_DWORD *)v180[1] )
                  {
                    if ( v181 )
                    {
                      *(_QWORD *)&v182 = 0;
                      qfree(v181);
                      if ( v180[1] )
                      {
                        v180[2] = nullptr;
                        qfree(v180[1]);
                      }
                      goto LABEL_228;
                    }
                    if ( !v180[1] )
                    {
LABEL_228:
                      v59 = v202;
                      LOBYTE(v140) = tinfo_details;
                      goto LABEL_160;
                    }
                    v180[2] = nullptr;
                    qfree(v180[1]);
                    v59 = v202;
                    LOBYTE(v140) = tinfo_details;
LABEL_160:
                    if ( !v59 )
                      goto LABEL_89;
                    goto LABEL_161;
                  }
                  if ( v181 )
                  {
                    *(_QWORD *)&v182 = 0;
                    qfree(v181);
                  }
                  if ( v180[1] )
                  {
                    v180[2] = nullptr;
                    qfree(v180[1]);
                  }
                  v59 = v202;
LABEL_157:
                  if ( v48 == 128 )
                  {
                    if ( v46 == 128 )
                    {
                      v46 = 0;
                      v48 = 0;
                      if ( !v59 )
                        goto LABEL_216;
                    }
                    else
                    {
                      v48 = 0;
                      if ( !v59 )
                        goto LABEL_196;
                    }
LABEL_161:
                    v106 = 0;
                    v107 = 0;
                    v61 = 0;
                    do
                    {
                      v61 += (unsigned int)(*((_DWORD *)v201 + 20 * v106) - 3) < 2;
                      v106 = ++v107;
                    }
                    while ( v107 < v59 );
                    if ( v61 )
                    {
                      v60 = (v48 - 48) & 0xFFFFFFDF;
                      if ( !v60 )
                      {
                        v48 = (v46 - 48) & 0xFFFFFFDF;
                        if ( !v48 )
                        {
LABEL_166:
                          v108 = 0;
                          goto LABEL_167;
                        }
LABEL_175:
                        v48 = v46;
                        goto LABEL_92;
                      }
                      v105 = (v48 & 0xFFFFFFF0) == 208 || (v48 & 0xFFFFFFF0) == 64;
                      if ( ((v46 - 48) & 0xFFFFFFDF) == 0 )
                        goto LABEL_191;
LABEL_153:
                      if ( v105 )
                        goto LABEL_154;
                      v60 = v48;
                      goto LABEL_175;
                    }
LABEL_89:
                    v60 = (v48 - 112) & 0xFFFFFFDF;
                    if ( !v60 )
                    {
                      v48 = (v46 - 112) & 0xFFFFFFDF;
                      if ( v48 )
                      {
                        v48 = v46;
                        v61 = 0;
                        goto LABEL_92;
                      }
                      goto LABEL_206;
                    }
                    v61 = 0;
                    v105 = (v48 & 0xFFFFFFF0) == 208 || (v48 & 0xFFFFFFF0) == 64;
                    if ( ((v46 - 112) & 0xFFFFFFDF) == 0 )
                    {
LABEL_191:
                      if ( !v105 )
                        goto LABEL_166;
LABEL_154:
                      v62 = v209 & 0xF;
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
            if ( v55 > 0x4F )
            {
              v56 = 0x100010001LL;
              v57 = _bittest64(&v56, v55 - 80);
              if ( v57 )
              {
LABEL_82:
                if ( v52 != v57 )
                  v46 = 0;
LABEL_84:
                v58 = getinf_flag(3, 4);
                v59 = v202;
                if ( v58 )
                  goto LABEL_157;
                goto LABEL_85;
              }
            }
LABEL_213:
            v57 = (v46 & 0xFFFFFFE0) == 128;
            goto LABEL_82;
          }
        }
        if ( v52 != ((v48 & 0xFFFFFFE0) == 128) )
          v48 = 0;
        v55 = v46 & 0xFFFFFFF0;
        if ( (v46 & 0xFFFFFFF0) > 0x70 )
        {
          v57 = tinfo_details;
          if ( v55 == 224 )
            goto LABEL_82;
          goto LABEL_213;
        }
        goto LABEL_80;
      }
      clear_tinfo_t(v180);
    }
    v135 = -1;
    goto LABEL_84;
  }
  return 0;
}
