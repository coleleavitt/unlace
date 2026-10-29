__int64 __fastcall sub_E963B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 *v3; // rbp
  __int64 v4; // rax
  __int64 v6; // r13
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  __int64 *v11; // r15
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rax
  __int64 v15; // r15
  __int64 *v16; // rax
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r9
  unsigned int v20; // r15d
  __int64 *v21; // r8
  __int64 v22; // r9
  __int64 *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // r13
  unsigned int v27; // eax
  __int64 v28; // r9
  __int64 *v29; // r8
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 v33; // r15
  _QWORD *v34; // rax
  __int64 *v36; // rax
  const char *v37; // rsi
  size_t v38; // rdx
  __int64 v39; // rdi
  _QWORD *v40; // rax
  const char *v41; // rsi
  size_t v42; // rdx
  __int64 v43; // rdi
  __int64 *v44; // rax
  __int64 v45; // r13
  unsigned int v46; // eax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r15
  __int64 *v50; // r14
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 *v53; // rax
  __int64 v54; // r14
  __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 v57; // r13
  unsigned int v58; // eax
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r15
  __int64 *v62; // r14
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 *v65; // rax
  __int64 v66; // r14
  __int64 v67; // rax
  unsigned __int64 v68; // rax
  __int64 v69; // r13
  unsigned int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // r14d
  __int64 *v74; // r15
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 *v77; // rax
  __int64 v78; // r15
  __int64 *v79; // rax
  __int64 v80; // r13
  unsigned int v81; // eax
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned int v84; // r14d
  __int64 *v85; // r15
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 *v88; // rax
  __int64 v89; // r15
  __int64 *v90; // rax
  __int64 v91; // r13
  unsigned int v92; // eax
  __int64 v93; // r8
  __int64 v94; // r9
  __int64 *v95; // r15
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 *v98; // rax
  __int64 v99; // r15
  __int64 v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rdx
  unsigned int v103; // eax
  __int64 v104; // r8
  __int64 v105; // r9
  __int64 v106; // r15
  __int64 *v107; // r14
  __int64 *v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rdx
  unsigned __int64 v111; // rdx
  unsigned __int64 v112; // rcx
  __int64 v113; // r13
  unsigned int v114; // eax
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r15
  __int64 *v118; // r14
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 *v121; // rax
  __int64 v122; // r14
  __int64 v123; // rdi
  __int64 v124; // rdx
  unsigned __int64 v125; // rdx
  unsigned int v126; // eax
  __int64 v127; // r8
  __int64 v128; // r9
  __int64 v129; // r15
  __int64 *v130; // r14
  __int64 *v131; // rax
  __int64 v132; // rdi
  unsigned int v133; // eax
  __int64 v134; // r8
  __int64 v135; // r9
  __int64 v136; // r15
  __int64 *v137; // r14
  __int64 *v138; // rax
  __int64 v139; // rdi
  __int64 v140; // rdx
  unsigned __int64 v141; // rax
  unsigned int v142; // eax
  __int64 v143; // rdx
  unsigned __int64 v144; // rax
  __m128i v145; // xmm0
  unsigned int v146; // eax
  __int64 v147; // rdx
  unsigned __int64 v148; // rax
  unsigned int v149; // eax
  __int64 v150; // rdx
  unsigned __int64 v151; // rax
  __m128i si128; // xmm0
  unsigned int v153; // eax
  __int64 v154; // rdx
  unsigned __int64 v155; // rax
  __m128i v156; // xmm0
  unsigned int v157; // eax
  __int64 v158; // rdx
  unsigned __int64 v159; // rax
  unsigned int v160; // eax
  __int64 v161; // rdx
  unsigned __int64 v162; // rax
  unsigned int v163; // eax
  __int64 v164; // rdx
  unsigned __int64 v165; // rax
  unsigned int v166; // eax
  __int64 v167; // rdx
  unsigned __int64 v168; // rax
  unsigned int v169; // eax
  __int64 v170; // rdx
  unsigned __int64 v171; // rax
  __m128i v172; // xmm0
  unsigned int v173; // eax
  __int64 v174; // rdx
  unsigned __int64 v175; // rax
  __m128i v176; // xmm0
  unsigned int v177; // eax
  __int64 v178; // rdx
  unsigned __int64 v179; // rax
  __m128i v180; // xmm0
  unsigned int v181; // eax
  __int64 v182; // rdi
  __int64 v183; // rdx
  unsigned __int64 v184; // rdx
  unsigned __int64 v185; // rcx
  __int64 v186; // rdi
  __int64 v187; // rdx
  unsigned __int64 v188; // rdx
  __int64 v189; // rdi
  __int64 v190; // rdx
  unsigned __int64 v191; // rdx
  __int64 v192; // rdi
  __int64 v193; // rdx
  unsigned __int64 v194; // rdx
  __int64 v195; // rdi
  __int64 v196; // rdi
  __int64 v197; // rdx
  unsigned __int64 v198; // rdx
  __int64 v199; // rdi
  __int64 v200; // rdx
  unsigned __int64 v201; // rdx
  __int64 v202; // [rsp+0h] [rbp-78h]
  __int64 *v203; // [rsp+0h] [rbp-78h]
  int v204; // [rsp+0h] [rbp-78h]
  int v205; // [rsp+0h] [rbp-78h]
  __int64 v206; // [rsp+0h] [rbp-78h]
  __int64 *v207; // [rsp+8h] [rbp-70h]
  __int64 *v208; // [rsp+18h] [rbp-60h] BYREF
  __int64 *v209; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v210; // [rsp+28h] [rbp-50h]
  _QWORD *v211; // [rsp+30h] [rbp-48h]

  v2 = (int)a2;
  v3 = (__int64 *)(a1 + 8LL * (int)a2 + 232);
  v4 = *v3;
  if ( *v3 )
    return *(_QWORD *)(a1 + 8LL * (int)a2 + 232);
  switch ( a2 )
  {
    case 0LL:
      v45 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v46 = sub_2244B30("dictionary", 10);
      v49 = (unsigned int)sub_2244CB0(v45, "dictionary", 10, v46);
      v50 = (__int64 *)(*(_QWORD *)v45 + 8 * v49);
      if ( !*v50 )
        goto LABEL_127;
      if ( *v50 == -8 )
      {
        --*(_DWORD *)(v45 + 16);
LABEL_127:
        v164 = *(_QWORD *)(v45 + 24);
        *(_QWORD *)(v45 + 104) += 27LL;
        v165 = (v164 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v45 + 32) >= v165 + 27 && v164 )
          *(_QWORD *)(v45 + 24) = v165 + 27;
        else
          v165 = sub_986170(v45 + 24, 27, 27, 3, v47, v48);
        strcpy((char *)(v165 + 16), "dictionary");
        *(_QWORD *)v165 = 10;
        *(_QWORD *)(v165 + 8) = 0;
        *v50 = v165;
        ++*(_DWORD *)(v45 + 12);
        v166 = sub_22450D0(v45, (unsigned int)v49);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v45 + 8LL * v166), 0);
        v53 = v209;
      }
      else
      {
        sub_989490(&v209, v50, 0);
        v53 = v209;
      }
      v54 = *v53;
      v55 = *(_QWORD *)(*v53 + 8);
      if ( v55
        || (v182 = *(_QWORD *)(v45 + 120)) != 0
        && (v55 = (*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v182 + 16LL))(v182, "dictionary", 10),
            (*(_QWORD *)(v54 + 8) = v55) != 0) )
      {
        v56 = v55 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v183 = *(_QWORD *)(v45 + 24);
        *(_QWORD *)(v45 + 104) += 24LL;
        v56 = (v183 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v45 + 32) >= v56 + 24 && v183 )
        {
          *(_QWORD *)(v45 + 24) = v56 + 24;
          v184 = (v183 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v184 = sub_986170(v45 + 24, 24, 24, 3, v51, v52);
          v56 = v184 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v185 = *(_QWORD *)v184 & 0xFFFFF80000000000LL;
        *(_QWORD *)(v184 + 8) = 0;
        *(_QWORD *)v184 = v185 | 0x1FFFC05;
        *(_QWORD *)(v54 + 8) = v184;
        *(_QWORD *)(v184 + 16) = v54;
      }
      v4 = v56 | 1;
      break;
    case 1LL:
      v57 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v58 = sub_2244B30("dictionaryWithDictionary", 24);
      v61 = (unsigned int)sub_2244CB0(v57, "dictionaryWithDictionary", 24, v58);
      v62 = (__int64 *)(*(_QWORD *)v57 + 8 * v61);
      if ( !*v62 )
        goto LABEL_107;
      if ( *v62 == -8 )
      {
        --*(_DWORD *)(v57 + 16);
LABEL_107:
        v150 = *(_QWORD *)(v57 + 24);
        *(_QWORD *)(v57 + 104) += 41LL;
        v151 = (v150 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v57 + 32) >= v151 + 41 && v150 )
          *(_QWORD *)(v57 + 24) = v151 + 41;
        else
          v151 = sub_986170(v57 + 24, 41, 41, 3, v59, v60);
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8FB0);
        *(_QWORD *)v151 = 24;
        *(__m128i *)(v151 + 16) = si128;
        strcpy((char *)(v151 + 32), "ctionary");
        *(_QWORD *)(v151 + 8) = 0;
        *v62 = v151;
        ++*(_DWORD *)(v57 + 12);
        v153 = sub_22450D0(v57, (unsigned int)v61);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v57 + 8LL * v153), 0);
        v65 = v209;
      }
      else
      {
        sub_989490(&v209, v62, 0);
        v65 = v209;
      }
      v66 = *v65;
      v67 = *(_QWORD *)(*v65 + 8);
      if ( v67 )
        goto LABEL_33;
      v195 = *(_QWORD *)(v57 + 120);
      if ( v195 )
      {
        v67 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v195 + 16LL))(
                v195,
                "dictionaryWithDictionary",
                24);
        *(_QWORD *)(v66 + 8) = v67;
        if ( v67 )
          goto LABEL_33;
      }
      goto LABEL_62;
    case 2LL:
      v69 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v70 = sub_2244B30("dictionaryWithObject", 20);
      v73 = sub_2244CB0(v69, "dictionaryWithObject", 20, v70);
      v74 = (__int64 *)(*(_QWORD *)v69 + 8LL * v73);
      if ( !*v74 )
        goto LABEL_112;
      if ( *v74 == -8 )
      {
        --*(_DWORD *)(v69 + 16);
LABEL_112:
        v154 = *(_QWORD *)(v69 + 24);
        *(_QWORD *)(v69 + 104) += 37LL;
        v155 = (v154 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v69 + 32) >= v155 + 37 && v154 )
          *(_QWORD *)(v69 + 24) = v155 + 37;
        else
          v155 = sub_986170(v69 + 24, 37, 37, 3, v71, v72);
        v156 = _mm_load_si128((const __m128i *)&xmmword_23A8FC0);
        strcpy((char *)(v155 + 32), "ject");
        *(__m128i *)(v155 + 16) = v156;
        *(_QWORD *)v155 = 20;
        *(_QWORD *)(v155 + 8) = 0;
        *v74 = v155;
        ++*(_DWORD *)(v69 + 12);
        v157 = sub_22450D0(v69, v73);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v69 + 8LL * v157), 0);
        v77 = v209;
      }
      else
      {
        sub_989490(&v209, v74, 0);
        v77 = v209;
      }
      v78 = *v77;
      v79 = *(__int64 **)(*v77 + 8);
      if ( !v79 )
      {
        v189 = *(_QWORD *)(v69 + 120);
        if ( !v189
          || (v79 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v189 + 16LL))(
                                 v189,
                                 "dictionaryWithObject",
                                 20),
              (*(_QWORD *)(v78 + 8) = v79) == 0) )
        {
          v190 = *(_QWORD *)(v69 + 24);
          *(_QWORD *)(v69 + 104) += 24LL;
          v79 = (__int64 *)((v190 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v69 + 32) >= (unsigned __int64)(v79 + 3) && v190 )
            *(_QWORD *)(v69 + 24) = v79 + 3;
          else
            v79 = (__int64 *)sub_986170(v69 + 24, 24, 24, 3, v75, v76);
          v191 = *v79 & 0xFFFFF80000000000LL;
          v79[1] = 0;
          *v79 = v191 | 0x1FFFC05;
          *(_QWORD *)(v78 + 8) = v79;
          v79[2] = v78;
        }
      }
      v209 = v79;
      v40 = (_QWORD *)sub_6F3470(*(_QWORD *)(*(_QWORD *)a1 + 17504LL), "forKey", 6u);
      goto LABEL_20;
    case 3LL:
      v80 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v81 = sub_2244B30("dictionaryWithObjects", 21);
      v84 = sub_2244CB0(v80, "dictionaryWithObjects", 21, v81);
      v85 = (__int64 *)(*(_QWORD *)v80 + 8LL * v84);
      if ( !*v85 )
        goto LABEL_137;
      if ( *v85 == -8 )
      {
        --*(_DWORD *)(v80 + 16);
LABEL_137:
        v170 = *(_QWORD *)(v80 + 24);
        *(_QWORD *)(v80 + 104) += 38LL;
        v171 = (v170 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v80 + 32) >= v171 + 38 && v170 )
          *(_QWORD *)(v80 + 24) = v171 + 38;
        else
          v171 = sub_986170(v80 + 24, 38, 38, 3, v82, v83);
        v172 = _mm_load_si128((const __m128i *)&xmmword_23A8FC0);
        *(_BYTE *)(v171 + 36) = 115;
        *(_DWORD *)(v171 + 32) = 1952671082;
        *(__m128i *)(v171 + 16) = v172;
        *(_BYTE *)(v171 + 37) = 0;
        *(_QWORD *)v171 = 21;
        *(_QWORD *)(v171 + 8) = 0;
        *v85 = v171;
        ++*(_DWORD *)(v80 + 12);
        v173 = sub_22450D0(v80, v84);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v80 + 8LL * v173), 0);
        v88 = v209;
      }
      else
      {
        sub_989490(&v209, v85, 0);
        v88 = v209;
      }
      v89 = *v88;
      v90 = *(__int64 **)(*v88 + 8);
      if ( !v90 )
      {
        v196 = *(_QWORD *)(v80 + 120);
        if ( !v196
          || (v90 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v196 + 16LL))(
                                 v196,
                                 "dictionaryWithObjects",
                                 21),
              (*(_QWORD *)(v89 + 8) = v90) == 0) )
        {
          v197 = *(_QWORD *)(v80 + 24);
          *(_QWORD *)(v80 + 104) += 24LL;
          v90 = (__int64 *)((v197 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v80 + 32) >= (unsigned __int64)(v90 + 3) && v197 )
            *(_QWORD *)(v80 + 24) = v90 + 3;
          else
            v90 = (__int64 *)sub_986170(v80 + 24, 24, 24, 3, v86, v87);
          v198 = *v90 & 0xFFFFF80000000000LL;
          v90[1] = 0;
          *v90 = v198 | 0x1FFFC05;
          *(_QWORD *)(v89 + 8) = v90;
          v90[2] = v89;
        }
      }
      v209 = v90;
      v91 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v92 = sub_2244B30("forKeys", 7);
      v93 = (unsigned int)sub_2244CB0(v91, "forKeys", 7, v92);
      v95 = (__int64 *)(*(_QWORD *)v91 + 8 * v93);
      if ( !*v95 )
        goto LABEL_117;
      if ( *v95 == -8 )
      {
        --*(_DWORD *)(v91 + 16);
LABEL_117:
        v158 = *(_QWORD *)(v91 + 24);
        *(_QWORD *)(v91 + 104) += 24LL;
        v159 = (v158 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v91 + 32) >= v159 + 24 && v158 )
        {
          *(_QWORD *)(v91 + 24) = v159 + 24;
        }
        else
        {
          v205 = v93;
          v159 = sub_986170(v91 + 24, 24, 24, 3, v93, v94);
          LODWORD(v93) = v205;
        }
        *(_BYTE *)(v159 + 22) = 115;
        *(_WORD *)(v159 + 20) = 31077;
        *(_DWORD *)(v159 + 16) = 1265790822;
        *(_BYTE *)(v159 + 23) = 0;
        *(_QWORD *)v159 = 7;
        *(_QWORD *)(v159 + 8) = 0;
        *v95 = v159;
        ++*(_DWORD *)(v91 + 12);
        v160 = sub_22450D0(v91, (unsigned int)v93);
        sub_989490(&v208, (__int64 *)(*(_QWORD *)v91 + 8LL * v160), 0);
        v98 = v208;
      }
      else
      {
        sub_989490(&v208, v95, 0);
        v98 = v208;
      }
      v99 = *v98;
      v40 = *(_QWORD **)(*v98 + 8);
      if ( !v40 )
      {
        v100 = *(_QWORD *)(v91 + 120);
        if ( !v100
          || (v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v100 + 16LL))(
                                v100,
                                "forKeys",
                                7),
              (*(_QWORD *)(v99 + 8) = v40) == 0) )
        {
          v101 = *(_QWORD *)(v91 + 24);
          *(_QWORD *)(v91 + 104) += 24LL;
          v40 = (_QWORD *)((v101 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v91 + 32) >= (unsigned __int64)(v40 + 3) && v101 )
            *(_QWORD *)(v91 + 24) = v40 + 3;
          else
            v40 = (_QWORD *)sub_986170(v91 + 24, 24, 24, 3, v96, v97);
          v102 = *v40 & 0xFFFFF80000000000LL;
          v40[1] = 0;
          *v40 = v102 | 0x1FFFC05;
          *(_QWORD *)(v99 + 8) = v40;
          v40[2] = v99;
        }
      }
      goto LABEL_20;
    case 4LL:
      v6 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v7 = sub_2244B30("dictionaryWithObjects", 21);
      v10 = sub_2244CB0(v6, "dictionaryWithObjects", 21, v7);
      v11 = (__int64 *)(*(_QWORD *)v6 + 8LL * v10);
      if ( !*v11 )
        goto LABEL_142;
      if ( *v11 == -8 )
      {
        --*(_DWORD *)(v6 + 16);
LABEL_142:
        v174 = *(_QWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 104) += 38LL;
        v175 = (v174 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v6 + 32) >= v175 + 38 && v174 )
          *(_QWORD *)(v6 + 24) = v175 + 38;
        else
          v175 = sub_986170(v6 + 24, 38, 38, 3, v8, v9);
        v176 = _mm_load_si128((const __m128i *)&xmmword_23A8FC0);
        *(_BYTE *)(v175 + 36) = 115;
        *(_DWORD *)(v175 + 32) = 1952671082;
        *(__m128i *)(v175 + 16) = v176;
        *(_BYTE *)(v175 + 37) = 0;
        *(_QWORD *)v175 = 21;
        *(_QWORD *)(v175 + 8) = 0;
        *v11 = v175;
        ++*(_DWORD *)(v6 + 12);
        v177 = sub_22450D0(v6, v10);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v6 + 8LL * v177), 0);
        v14 = v209;
      }
      else
      {
        sub_989490(&v209, v11, 0);
        v14 = v209;
      }
      v15 = *v14;
      v16 = *(__int64 **)(*v14 + 8);
      if ( !v16 )
      {
        v192 = *(_QWORD *)(v6 + 120);
        if ( !v192
          || (v16 = (__int64 *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v192 + 16LL))(
                                 v192,
                                 "dictionaryWithObjects",
                                 21),
              (*(_QWORD *)(v15 + 8) = v16) == 0) )
        {
          v193 = *(_QWORD *)(v6 + 24);
          *(_QWORD *)(v6 + 104) += 24LL;
          v16 = (__int64 *)((v193 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v6 + 32) >= (unsigned __int64)(v16 + 3) && v193 )
            *(_QWORD *)(v6 + 24) = v16 + 3;
          else
            v16 = (__int64 *)sub_986170(v6 + 24, 24, 24, 3, v12, v13);
          v194 = *v16 & 0xFFFFF80000000000LL;
          v16[1] = 0;
          *v16 = v194 | 0x1FFFC05;
          *(_QWORD *)(v15 + 8) = v16;
          v16[2] = v15;
        }
      }
      v209 = v16;
      v17 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v18 = sub_2244B30("forKeys", 7);
      v20 = sub_2244CB0(v17, "forKeys", 7, v18);
      v21 = (__int64 *)(*(_QWORD *)v17 + 8LL * v20);
      if ( !*v21 )
        goto LABEL_122;
      if ( *v21 == -8 )
      {
        --*(_DWORD *)(v17 + 16);
LABEL_122:
        v161 = *(_QWORD *)(v17 + 24);
        *(_QWORD *)(v17 + 104) += 24LL;
        v162 = (v161 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v17 + 32) >= v162 + 24 && v161 )
        {
          *(_QWORD *)(v17 + 24) = v162 + 24;
        }
        else
        {
          v203 = v21;
          v162 = sub_986170(v17 + 24, 24, 24, 3, (__int64)v21, v19);
          v21 = v203;
        }
        *(_DWORD *)(v162 + 16) = 1265790822;
        *(_WORD *)(v162 + 20) = 31077;
        *(_BYTE *)(v162 + 22) = 115;
        *(_BYTE *)(v162 + 23) = 0;
        *(_QWORD *)v162 = 7;
        *(_QWORD *)(v162 + 8) = 0;
        *v21 = v162;
        ++*(_DWORD *)(v17 + 12);
        v163 = sub_22450D0(v17, v20);
        sub_989490(&v208, (__int64 *)(*(_QWORD *)v17 + 8LL * v163), 0);
        v23 = v208;
      }
      else
      {
        sub_989490(&v208, v21, 0);
        v23 = v208;
      }
      v24 = *v23;
      v25 = *(_QWORD **)(*v23 + 8);
      if ( !v25 )
      {
        v186 = *(_QWORD *)(v17 + 120);
        if ( !v186
          || (v202 = v24,
              v25 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v186 + 16LL))(
                                v186,
                                "forKeys",
                                7),
              v24 = v202,
              (*(_QWORD *)(v202 + 8) = v25) == 0) )
        {
          v187 = *(_QWORD *)(v17 + 24);
          *(_QWORD *)(v17 + 104) += 24LL;
          v25 = (_QWORD *)((v187 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v17 + 32) >= (unsigned __int64)(v25 + 3) && v187 )
          {
            *(_QWORD *)(v17 + 24) = v25 + 3;
          }
          else
          {
            v206 = v24;
            v25 = (_QWORD *)sub_986170(v17 + 24, 24, 24, 3, v24, v22);
            v24 = v206;
          }
          v188 = *v25 & 0xFFFFF80000000000LL;
          v25[1] = 0;
          *v25 = v188 | 0x1FFFC05;
          *(_QWORD *)(v24 + 8) = v25;
          v25[2] = v24;
        }
      }
      v210 = v25;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v27 = sub_2244B30("count", 5);
      v28 = (unsigned int)sub_2244CB0(v26, "count", 5, v27);
      v29 = (__int64 *)(*(_QWORD *)v26 + 8 * v28);
      if ( !*v29 )
        goto LABEL_102;
      if ( *v29 == -8 )
      {
        --*(_DWORD *)(v26 + 16);
LABEL_102:
        v147 = *(_QWORD *)(v26 + 24);
        *(_QWORD *)(v26 + 104) += 22LL;
        v148 = (v147 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v26 + 32) >= v148 + 22 && v147 )
        {
          *(_QWORD *)(v26 + 24) = v148 + 22;
        }
        else
        {
          v207 = v29;
          v204 = v28;
          v148 = sub_986170(v26 + 24, 22, 22, 3, (__int64)v29, v28);
          v29 = v207;
          LODWORD(v28) = v204;
        }
        *(_DWORD *)(v148 + 16) = 1853189987;
        *(_BYTE *)(v148 + 20) = 116;
        *(_BYTE *)(v148 + 21) = 0;
        *(_QWORD *)v148 = 5;
        *(_QWORD *)(v148 + 8) = 0;
        *v29 = v148;
        ++*(_DWORD *)(v26 + 12);
        v149 = sub_22450D0(v26, (unsigned int)v28);
        sub_989490(&v208, (__int64 *)(*(_QWORD *)v26 + 8LL * v149), 0);
        v32 = v208;
      }
      else
      {
        sub_989490(&v208, v29, 0);
        v32 = v208;
      }
      v33 = *v32;
      v34 = *(_QWORD **)(*v32 + 8);
      if ( !v34 )
      {
        v199 = *(_QWORD *)(v26 + 120);
        if ( !v199
          || (v34 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)v199 + 16LL))(
                                v199,
                                "count",
                                5),
              (*(_QWORD *)(v33 + 8) = v34) == 0) )
        {
          v200 = *(_QWORD *)(v26 + 24);
          *(_QWORD *)(v26 + 104) += 24LL;
          v34 = (_QWORD *)((v200 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v26 + 32) >= (unsigned __int64)(v34 + 3) && v200 )
            *(_QWORD *)(v26 + 24) = v34 + 3;
          else
            v34 = (_QWORD *)sub_986170(v26 + 24, 24, 24, 3, v30, v31);
          v201 = *v34 & 0xFFFFF80000000000LL;
          v34[1] = 0;
          *v34 = v201 | 0x1FFFC05;
          *(_QWORD *)(v33 + 8) = v34;
          v34[2] = v33;
        }
      }
      v211 = v34;
      v4 = sub_FE3230(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), 3, &v209);
      break;
    case 5LL:
      v67 = sub_6F3470(*(_QWORD *)(*(_QWORD *)a1 + 17504LL), "dictionaryWithObjectsAndKeys", 0x1Cu);
      goto LABEL_33;
    case 6LL:
      v57 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v126 = sub_2244B30("initWithDictionary", 18);
      v129 = (unsigned int)sub_2244CB0(v57, "initWithDictionary", 18, v126);
      v130 = (__int64 *)(*(_QWORD *)v57 + 8 * v129);
      if ( !*v130 )
        goto LABEL_147;
      if ( *v130 == -8 )
      {
        --*(_DWORD *)(v57 + 16);
LABEL_147:
        v178 = *(_QWORD *)(v57 + 24);
        *(_QWORD *)(v57 + 104) += 35LL;
        v179 = (v178 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v57 + 32) >= v179 + 35 && v178 )
          *(_QWORD *)(v57 + 24) = v179 + 35;
        else
          v179 = sub_986170(v57 + 24, 35, 35, 3, v127, v128);
        v180 = _mm_load_si128((const __m128i *)&xmmword_23A8FD0);
        strcpy((char *)(v179 + 32), "ry");
        *(__m128i *)(v179 + 16) = v180;
        *(_QWORD *)v179 = 18;
        *(_QWORD *)(v179 + 8) = 0;
        *v130 = v179;
        ++*(_DWORD *)(v57 + 12);
        v181 = sub_22450D0(v57, (unsigned int)v129);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v57 + 8LL * v181), 0);
        v131 = v209;
      }
      else
      {
        sub_989490(&v209, v130, 0);
        v131 = v209;
      }
      v66 = *v131;
      v67 = *(_QWORD *)(*v131 + 8);
      if ( !v67 )
      {
        v132 = *(_QWORD *)(v57 + 120);
        if ( !v132 )
          goto LABEL_62;
        v67 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v132 + 16LL))(
                v132,
                "initWithDictionary",
                18);
        *(_QWORD *)(v66 + 8) = v67;
        if ( !v67 )
          goto LABEL_62;
      }
      goto LABEL_33;
    case 7LL:
      v57 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v103 = sub_2244B30("initWithObjectsAndKeys", 22);
      v106 = (unsigned int)sub_2244CB0(v57, "initWithObjectsAndKeys", 22, v103);
      v107 = (__int64 *)(*(_QWORD *)v57 + 8 * v106);
      if ( !*v107 )
        goto LABEL_97;
      if ( *v107 == -8 )
      {
        --*(_DWORD *)(v57 + 16);
LABEL_97:
        v143 = *(_QWORD *)(v57 + 24);
        *(_QWORD *)(v57 + 104) += 39LL;
        v144 = (v143 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v57 + 32) >= v144 + 39 && v143 )
          *(_QWORD *)(v57 + 24) = v144 + 39;
        else
          v144 = sub_986170(v57 + 24, 39, 39, 3, v104, v105);
        v145 = _mm_load_si128((const __m128i *)&xmmword_23A8FE0);
        strcpy((char *)(v144 + 32), "ndKeys");
        *(__m128i *)(v144 + 16) = v145;
        *(_QWORD *)v144 = 22;
        *(_QWORD *)(v144 + 8) = 0;
        *v107 = v144;
        ++*(_DWORD *)(v57 + 12);
        v146 = sub_22450D0(v57, (unsigned int)v106);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v57 + 8LL * v146), 0);
        v108 = v209;
      }
      else
      {
        sub_989490(&v209, v107, 0);
        v108 = v209;
      }
      v66 = *v108;
      v67 = *(_QWORD *)(*v108 + 8);
      if ( !v67 )
      {
        v109 = *(_QWORD *)(v57 + 120);
        if ( !v109 )
          goto LABEL_62;
        v67 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v109 + 16LL))(
                v109,
                "initWithObjectsAndKeys",
                22);
        *(_QWORD *)(v66 + 8) = v67;
        if ( !v67 )
          goto LABEL_62;
      }
      goto LABEL_33;
    case 8LL:
      v209 = (__int64 *)sub_6F3470(*(_QWORD *)(*(_QWORD *)a1 + 17504LL), "initWithObjects", 0xFu);
      v113 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v114 = sub_2244B30("forKeys", 7);
      v117 = (unsigned int)sub_2244CB0(v113, "forKeys", 7, v114);
      v118 = (__int64 *)(*(_QWORD *)v113 + 8 * v117);
      if ( !*v118 )
        goto LABEL_92;
      if ( *v118 == -8 )
      {
        --*(_DWORD *)(v113 + 16);
LABEL_92:
        v140 = *(_QWORD *)(v113 + 24);
        *(_QWORD *)(v113 + 104) += 24LL;
        v141 = (v140 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v113 + 32) >= v141 + 24 && v140 )
          *(_QWORD *)(v113 + 24) = v141 + 24;
        else
          v141 = sub_986170(v113 + 24, 24, 24, 3, v115, v116);
        *(_BYTE *)(v141 + 22) = 115;
        *(_WORD *)(v141 + 20) = 31077;
        *(_DWORD *)(v141 + 16) = 1265790822;
        *(_BYTE *)(v141 + 23) = 0;
        *(_QWORD *)v141 = 7;
        *(_QWORD *)(v141 + 8) = 0;
        *v118 = v141;
        ++*(_DWORD *)(v113 + 12);
        v142 = sub_22450D0(v113, (unsigned int)v117);
        sub_989490(&v208, (__int64 *)(*(_QWORD *)v113 + 8LL * v142), 0);
        v121 = v208;
      }
      else
      {
        sub_989490(&v208, v118, 0);
        v121 = v208;
      }
      v122 = *v121;
      v40 = *(_QWORD **)(*v121 + 8);
      if ( !v40 )
      {
        v123 = *(_QWORD *)(v113 + 120);
        if ( !v123
          || (v40 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v123 + 16LL))(
                                v123,
                                "forKeys",
                                7),
              (*(_QWORD *)(v122 + 8) = v40) == 0) )
        {
          v124 = *(_QWORD *)(v113 + 24);
          *(_QWORD *)(v113 + 104) += 24LL;
          v40 = (_QWORD *)((v124 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( *(_QWORD *)(v113 + 32) >= (unsigned __int64)(v40 + 3) && v124 )
            *(_QWORD *)(v113 + 24) = v40 + 3;
          else
            v40 = (_QWORD *)sub_986170(v113 + 24, 24, 24, 3, v119, v120);
          v125 = *v40 & 0xFFFFF80000000000LL;
          v40[1] = 0;
          *v40 = v125 | 0x1FFFC05;
          *(_QWORD *)(v122 + 8) = v40;
          v40[2] = v122;
        }
      }
      goto LABEL_20;
    case 9LL:
      v57 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      v133 = sub_2244B30("objectForKey", 12);
      v136 = (unsigned int)sub_2244CB0(v57, "objectForKey", 12, v133);
      v137 = (__int64 *)(*(_QWORD *)v57 + 8 * v136);
      if ( !*v137 )
        goto LABEL_132;
      if ( *v137 == -8 )
      {
        --*(_DWORD *)(v57 + 16);
LABEL_132:
        v167 = *(_QWORD *)(v57 + 24);
        *(_QWORD *)(v57 + 104) += 29LL;
        v168 = (v167 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v57 + 32) >= v168 + 29 && v167 )
          *(_QWORD *)(v57 + 24) = v168 + 29;
        else
          v168 = sub_986170(v57 + 24, 29, 29, 3, v134, v135);
        strcpy((char *)(v168 + 16), "objectForKey");
        *(_QWORD *)v168 = 12;
        *(_QWORD *)(v168 + 8) = 0;
        *v137 = v168;
        ++*(_DWORD *)(v57 + 12);
        v169 = sub_22450D0(v57, (unsigned int)v136);
        sub_989490(&v209, (__int64 *)(*(_QWORD *)v57 + 8LL * v169), 0);
        v138 = v209;
      }
      else
      {
        sub_989490(&v209, v137, 0);
        v138 = v209;
      }
      v66 = *v138;
      v67 = *(_QWORD *)(*v138 + 8);
      if ( v67
        || (v139 = *(_QWORD *)(v57 + 120)) != 0
        && (v67 = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)v139 + 16LL))(
                    v139,
                    "objectForKey",
                    12),
            (*(_QWORD *)(v66 + 8) = v67) != 0) )
      {
LABEL_33:
        v68 = v67 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
LABEL_62:
        v110 = *(_QWORD *)(v57 + 24);
        *(_QWORD *)(v57 + 104) += 24LL;
        v68 = (v110 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v57 + 32) >= v68 + 24 && v110 )
        {
          *(_QWORD *)(v57 + 24) = v68 + 24;
          v111 = (v110 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v111 = sub_986170(v57 + 24, 24, 24, 3, v63, v64);
          v68 = v111 & 0xFFFFFFFFFFFFFFF8LL;
        }
        v112 = *(_QWORD *)v111 & 0xFFFFF80000000000LL;
        *(_QWORD *)(v111 + 8) = 0;
        *(_QWORD *)v111 = v112 | 0x1FFFC05;
        *(_QWORD *)(v66 + 8) = v111;
        *(_QWORD *)(v111 + 16) = v66;
      }
      v4 = v68 | 2;
      break;
    case 10LL:
      v41 = "setObject";
      v42 = 9;
      v43 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      goto LABEL_22;
    case 11LL:
      v36 = (__int64 *)sub_6F3470(*(_QWORD *)(*(_QWORD *)a1 + 17504LL), "setObject", 9u);
      v37 = "forKeyedSubscript";
      v38 = 17;
      v209 = v36;
      v39 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
      goto LABEL_19;
    case 12LL:
      v41 = "setValue";
      v42 = 8;
      v43 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
LABEL_22:
      v44 = (__int64 *)sub_6F3470(v43, v41, v42);
      v37 = "forKey";
      v38 = 6;
      v209 = v44;
      v39 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
LABEL_19:
      v40 = (_QWORD *)sub_6F3470(v39, v37, v38);
LABEL_20:
      v210 = v40;
      v4 = sub_FE3230(*(_QWORD *)(*(_QWORD *)a1 + 17512LL), 2, &v209);
      break;
    default:
      break;
  }
  *v3 = v4;
  return *(_QWORD *)(a1 + 8 * v2 + 232);
}
