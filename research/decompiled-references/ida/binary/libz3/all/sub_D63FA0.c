__int64 __fastcall sub_D63FA0(_QWORD *a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 v7; // r15
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  _DWORD *v23; // rax
  bool v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rax
  void *v27; // r12
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  _DWORD *v31; // rax
  bool v32; // r12
  __int64 v33; // rdi
  __int64 v34; // rax
  void *v35; // r12
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  _DWORD *v39; // rax
  bool v40; // r15
  __int64 v41; // rdi
  __int64 v42; // rax
  void *v43; // r15
  __int64 v44; // rax
  __int64 v45; // rax
  __m128 v46; // xmm0
  __int64 v47; // r13
  int v48; // r12d
  __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // r14
  __int64 v52; // rdx
  bool v53; // zf
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  bool v57; // cf
  __int64 v58; // rax
  __int64 v59; // rdi
  void *v60; // r14
  __int64 v61; // rcx
  _QWORD *v62; // rax
  __int64 v63; // rsi
  void *v64; // r12
  int v65; // ecx
  int v66; // r8d
  int v67; // r9d
  __int64 v68; // rdi
  __int64 v69; // rax
  void *v70; // r12
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // r12
  __int64 v74; // rax
  void *v75; // r13
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // rax
  __int64 v80; // r13
  __int64 v81; // rax
  __int64 v82; // r14
  __int64 v83; // rsi
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdi
  void *v87; // r13
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  __int64 v97; // r12
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rax
  __int64 v101; // rdi
  _DWORD *v102; // rax
  void *v103; // r9
  __int64 v104; // rsi
  __int64 v105; // rdi
  __int64 v106; // rdi
  _DWORD *v107; // rax
  void *v108; // r9
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rbx
  __int64 v114; // rsi
  __int64 v115; // rdi
  __int64 result; // rax
  __int64 v117; // rbx
  __int64 v118; // rbx
  __int64 v119; // rbx
  __int64 *v120; // rbx
  __int64 v121; // rbx
  __int64 v122; // rbx
  __int64 v123; // rbx
  __int64 v124; // rbx
  __int64 v125; // rbx
  __int64 v126; // rbx
  __int64 v127; // rsi
  __int64 v128; // rdi
  __int64 v129; // rsi
  __int64 v130; // rdi
  __int64 v131; // rsi
  __int64 v132; // rdi
  __int64 v133; // rsi
  __int64 v134; // rdi
  __int64 v135; // rsi
  __int64 v136; // rdi
  __int64 v137; // rsi
  __int64 v138; // rdi
  void *v139; // [rsp+0h] [rbp-210h]
  __int64 v140; // [rsp+8h] [rbp-208h]
  __int64 v141; // [rsp+8h] [rbp-208h]
  int v142; // [rsp+10h] [rbp-200h]
  __int64 v143; // [rsp+10h] [rbp-200h]
  __int64 v144; // [rsp+18h] [rbp-1F8h]
  __int64 v145; // [rsp+18h] [rbp-1F8h]
  int v146; // [rsp+20h] [rbp-1F0h]
  __int64 v147; // [rsp+20h] [rbp-1F0h]
  __int64 *v149; // [rsp+28h] [rbp-1E8h]
  __int64 v150; // [rsp+30h] [rbp-1E0h]
  int v151; // [rsp+30h] [rbp-1E0h]
  unsigned int v152; // [rsp+34h] [rbp-1DCh]
  __int64 v153; // [rsp+38h] [rbp-1D8h]
  __int64 v154; // [rsp+38h] [rbp-1D8h]
  __int64 v155; // [rsp+40h] [rbp-1D0h]
  __int64 v156; // [rsp+40h] [rbp-1D0h]
  __int64 v157; // [rsp+48h] [rbp-1C8h]
  __int64 v158; // [rsp+48h] [rbp-1C8h]
  __int64 v159; // [rsp+50h] [rbp-1C0h]
  __int64 v160; // [rsp+50h] [rbp-1C0h]
  __int64 v161; // [rsp+58h] [rbp-1B8h]
  __int64 v162; // [rsp+58h] [rbp-1B8h]
  __int64 v163; // [rsp+60h] [rbp-1B0h]
  __int64 v164; // [rsp+60h] [rbp-1B0h]
  __int64 v165; // [rsp+68h] [rbp-1A8h]
  __int64 v166; // [rsp+68h] [rbp-1A8h]
  __int64 v167; // [rsp+70h] [rbp-1A0h]
  __int64 v168; // [rsp+70h] [rbp-1A0h]
  __int64 v169; // [rsp+78h] [rbp-198h]
  __int64 v170; // [rsp+78h] [rbp-198h]
  __int64 v171; // [rsp+80h] [rbp-190h]
  __int64 v172; // [rsp+80h] [rbp-190h]
  __int64 v173; // [rsp+88h] [rbp-188h]
  _QWORD *v174; // [rsp+88h] [rbp-188h]
  __int64 v175; // [rsp+88h] [rbp-188h]
  __int64 *v177; // [rsp+90h] [rbp-180h]
  int v178; // [rsp+98h] [rbp-178h]
  int v179[2]; // [rsp+98h] [rbp-178h]
  __int64 v180; // [rsp+A0h] [rbp-170h]
  __int64 v181; // [rsp+A0h] [rbp-170h]
  int v182; // [rsp+A8h] [rbp-168h]
  int v183[2]; // [rsp+A8h] [rbp-168h]
  __int64 v184; // [rsp+B0h] [rbp-160h] BYREF
  __int64 v185; // [rsp+B8h] [rbp-158h]
  __int64 v186; // [rsp+C0h] [rbp-150h]
  __int64 v187; // [rsp+C8h] [rbp-148h]
  __int64 v188; // [rsp+D0h] [rbp-140h]
  __int64 v189; // [rsp+D8h] [rbp-138h]
  __int64 v190; // [rsp+E0h] [rbp-130h]
  __int64 *v191; // [rsp+E8h] [rbp-128h]
  __int64 v192; // [rsp+F0h] [rbp-120h]
  __int64 v193; // [rsp+F8h] [rbp-118h]
  void *v194; // [rsp+100h] [rbp-110h]
  __int64 v195; // [rsp+108h] [rbp-108h]
  __int64 v196; // [rsp+118h] [rbp-F8h] BYREF
  int v197[2]; // [rsp+120h] [rbp-F0h] BYREF
  __int64 v198; // [rsp+128h] [rbp-E8h] BYREF
  __int64 v199; // [rsp+130h] [rbp-E0h] BYREF
  __int64 v200; // [rsp+138h] [rbp-D8h]
  __int64 v201; // [rsp+140h] [rbp-D0h] BYREF
  __int64 v202; // [rsp+148h] [rbp-C8h]
  int v203[2]; // [rsp+150h] [rbp-C0h] BYREF
  __int64 v204; // [rsp+158h] [rbp-B8h]
  __int64 v205; // [rsp+160h] [rbp-B0h] BYREF
  __int64 v206; // [rsp+168h] [rbp-A8h]
  __int64 v207; // [rsp+170h] [rbp-A0h] BYREF
  __int64 v208; // [rsp+178h] [rbp-98h]
  __int64 v209; // [rsp+180h] [rbp-90h] BYREF
  __int64 v210; // [rsp+188h] [rbp-88h]
  __int64 v211; // [rsp+190h] [rbp-80h] BYREF
  __int64 v212; // [rsp+198h] [rbp-78h]
  __int64 v213; // [rsp+1A0h] [rbp-70h] BYREF
  __int64 v214; // [rsp+1A8h] [rbp-68h]
  __m128 v215; // [rsp+1B0h] [rbp-60h] BYREF
  __int64 v216; // [rsp+1C0h] [rbp-50h] BYREF
  __int64 v217; // [rsp+1C8h] [rbp-48h]
  __int64 v218; // [rsp+1D0h] [rbp-40h] BYREF
  __int64 v219; // [rsp+1D8h] [rbp-38h]

  v6 = *a4;
  HIDWORD(v150) = a3;
  v7 = sub_15D1F10(*a4);
  LODWORD(v195) = sub_15C5540((int)a1 + 432, v7, v8, v9, v10, v11);
  v178 = sub_15C5560(a1 + 54, v7);
  v12 = sub_15D2CD0(a1[32], 5, 0, 0, 0);
  v199 = 0;
  v13 = v12;
  v14 = a1[1];
  v201 = 0;
  v200 = v14;
  v202 = v14;
  *(_QWORD *)v203 = 0;
  v204 = v14;
  sub_D5BB00(a1, v6, &v199);
  sub_D61A80(a1, v6, &v201);
  sub_D52DE0(
    (int)a1,
    v6,
    (int)v203,
    v15,
    v16,
    v17,
    v139,
    v140,
    v142,
    v144,
    v146,
    (__int64)a4,
    v150,
    a2,
    v155,
    v157,
    v159,
    v161,
    v163,
    v165,
    v167,
    v169,
    v171,
    v173,
    a5);
  v18 = a1[1];
  v207 = 0;
  v208 = v18;
  v209 = 0;
  v210 = v18;
  v211 = 0;
  v212 = v18;
  v205 = 0;
  v206 = v18;
  sub_D59470(a1, v6, &v205, &v207, &v209, &v211, 1);
  v216 = 0;
  v162 = v205;
  v217 = 0;
  v145 = v206;
  v19 = a1[1];
  v218 = 1;
  v184 = v19;
  v174 = a1 + 32;
  v219 = 0;
  v191 = &v218;
  sub_182CBA0(qword_1C7F2C0, &v218);
  v23 = *(_DWORD **)(v13 + 24);
  BYTE4(v218) &= ~1u;
  v24 = 0;
  LODWORD(v218) = 1;
  if ( v23 && *v23 == 5 )
    v24 = v23[1] == 1;
  v25 = a1[33];
  if ( !v25 )
  {
    v194 = &v216;
    sub_16669E0(v174);
    v25 = a1[33];
  }
  v194 = &v216;
  v26 = sub_166A700(v25, (unsigned int)&v216, v24, v20, v21, v22);
  v190 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v27, v191);
  v216 = 1;
  v217 = 0;
  v218 = 1;
  v219 = 0;
  sub_182CBA0(qword_1C7F2C0, v191);
  v31 = *(_DWORD **)(v13 + 24);
  BYTE4(v218) &= ~1u;
  v32 = 0;
  LODWORD(v218) = 1;
  if ( v31 && *v31 == 5 )
    v32 = v31[1] == 1;
  v33 = a1[33];
  if ( !v33 )
  {
    sub_16669E0(v174);
    v33 = a1[33];
  }
  v34 = sub_166A700(v33, (_DWORD)v194, v32, v28, v29, v30);
  v188 = v34;
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  v35 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v35, v191);
  v216 = 2;
  v217 = 0;
  v218 = 1;
  v219 = 0;
  sub_182CBA0(qword_1C7F2C0, v191);
  v39 = *(_DWORD **)(v13 + 24);
  BYTE4(v218) &= ~1u;
  v40 = 0;
  LODWORD(v218) = 1;
  if ( v39 && *v39 == 5 )
    v40 = v39[1] == 1;
  v41 = a1[33];
  if ( !v41 )
  {
    sub_16669E0(v174);
    v41 = a1[33];
  }
  v42 = sub_166A700(v41, (_DWORD)v194, v40, v36, v37, v38);
  v187 = v42;
  if ( v42 )
    ++*(_DWORD *)(v42 + 8);
  v43 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v43, v191);
  v180 = (__int64)(a1 + 29);
  v44 = sub_D50430((__int64)(a1 + 29), 1u);
  v158 = v44;
  if ( v44 )
    ++*(_DWORD *)(v44 + 8);
  v45 = sub_D50390(v180, 1u);
  v189 = v45;
  if ( v45 )
    ++*(_DWORD *)(v45 + 8);
  if ( v188 )
  {
    v213 = 0;
    v46 = _mm_loadh_ps((const double *)&v184);
    v214 = v184;
    v215 = v46;
    sub_D50220(&v213, (__int64 *)&v215);
    v47 = v213;
    v166 = v214;
    v48 = v178 - 2;
    if ( v178 != 1 )
    {
LABEL_28:
      v49 = 0;
      v186 = 0;
      v193 = 0;
      while ( 1 )
      {
        LODWORD(v216) = v48;
        LOBYTE(v217) = 0;
        v196 = v207;
        v59 = a1[30];
        LODWORD(v218) = v48;
        v60 = v194;
        LOBYTE(v219) = 0;
        v192 = v49;
        v49 = sub_15DCAD0(v59, (int)&v196, 0);
        sub_15D0DF0(v191);
        sub_15D0DF0(v60);
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
        v61 = v192;
        if ( v192 )
        {
          LODWORD(v185) = *(_DWORD *)(v192 + 8);
          v53 = (_DWORD)v185 == 1;
          *(_DWORD *)(v192 + 8) = v185 - 1;
          if ( v53 )
            sub_15D7BC0(v184, v61);
        }
        v50 = sub_15E1B70(a1[1]);
        v51 = v50;
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        v52 = v193;
        if ( v193 )
        {
          LODWORD(v192) = *(_DWORD *)(v193 + 8);
          v53 = (_DWORD)v192 == 1;
          *(_DWORD *)(v193 + 8) = v192 - 1;
          if ( v53 )
            sub_15D7BC0(v184, v52);
        }
        v54 = sub_15E1B70(a1[32]);
        v193 = v54;
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        v55 = v186;
        if ( v186 )
        {
          LODWORD(v192) = *(_DWORD *)(v186 + 8);
          v53 = (_DWORD)v192 == 1;
          *(_DWORD *)(v186 + 8) = v192 - 1;
          if ( v53 )
            sub_15D7BC0(v184, v55);
        }
        sub_15E1BF0(a1[1]);
        v56 = sub_15E1B70(a1[32]);
        v192 = v56;
        if ( v56 )
          ++*(_DWORD *)(v56 + 8);
        if ( v47 && (v53 = *(_DWORD *)(v47 + 8) == 1, --*(_DWORD *)(v47 + 8), v53) )
        {
          sub_15D7BC0(v166, v47);
          v57 = v48-- == 0;
          if ( v57 )
            goto LABEL_51;
        }
        else
        {
          v57 = v48-- == 0;
          if ( v57 )
            goto LABEL_51;
        }
        v58 = v193;
        v193 = v51;
        v47 = v192;
        v186 = v58;
      }
    }
  }
  else
  {
    v47 = 0;
    v166 = v184;
    v48 = v178 - 2;
    if ( v178 != 1 )
      goto LABEL_28;
  }
  v192 = v47;
  v51 = 0;
  v49 = 0;
  v193 = 0;
LABEL_51:
  v62 = sub_D59FE0((__int64 *)(a1[55] + 760LL), v178 - 1);
  v63 = a1[1];
  v216 = 0;
  v217 = 0;
  v143 = v63;
  v64 = qword_1C7F2C0;
  v218 = 1;
  v219 = 0;
  if ( (*((_BYTE *)v62 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v194, v62);
  else
    LODWORD(v216) = *(_DWORD *)v62;
  sub_182CBA0(v64, v191);
  v68 = a1[33];
  BYTE4(v218) &= ~1u;
  LODWORD(v218) = 1;
  if ( !v68 )
  {
    sub_16669E0(v174);
    v68 = a1[33];
  }
  v69 = sub_166A700(v68, (_DWORD)v194, 0, v65, v66, v67);
  v164 = v69;
  if ( v69 )
    ++*(_DWORD *)(v69 + 8);
  v70 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v194);
  sub_182CBA0(v70, v191);
  v71 = sub_15E1B70(a1[32]);
  v160 = v71;
  if ( v71 )
    ++*(_DWORD *)(v71 + 8);
  v72 = v192;
  if ( v192 )
  {
    LODWORD(v186) = *(_DWORD *)(v192 + 8);
    v53 = (_DWORD)v186 == 1;
    *(_DWORD *)(v192 + 8) = v186 - 1;
    if ( v53 )
      sub_15D7BC0(v166, v72);
  }
  v73 = a1[1];
  v147 = v73;
  sub_D81CD0(v180, (unsigned int)(v195 - 1), (unsigned int)(v195 - 1), v209);
  v74 = sub_15E1B70(v73);
  v170 = v74;
  if ( v74 )
    ++*(_DWORD *)(v74 + 8);
  v216 = 1;
  v217 = 0;
  *(_QWORD *)v197 = v209;
  v75 = v194;
  v172 = sub_15DCAD0(a1[30], (int)v197, 0);
  sub_15D0DF0(v75);
  if ( v172 )
    ++*(_DWORD *)(v172 + 8);
  v76 = sub_15E1A70(a1[30]);
  v168 = v76;
  if ( v76 )
    ++*(_DWORD *)(v76 + 8);
  v77 = sub_15E1BF0(a1[1]);
  v181 = v77;
  if ( v77 )
    ++*(_DWORD *)(v77 + 8);
  v175 = a1[1];
  if ( v190 )
    ++*(_DWORD *)(v190 + 8);
  if ( (_DWORD)v195 == -1 )
  {
    v80 = v51;
    v186 = 0;
    v82 = 0;
    v141 = v175;
    v192 = v190;
  }
  else
  {
    v78 = v190;
    v186 = 0;
    v185 = 0;
    while ( 1 )
    {
      LOBYTE(v217) = 0;
      LOBYTE(v219) = 0;
      v198 = v181;
      v192 = v49;
      v86 = a1[30];
      LODWORD(v216) = v195;
      v87 = v194;
      LODWORD(v218) = v195;
      v49 = sub_15DCAD0(v86, (int)&v198, 0);
      sub_15D0DF0(v191);
      sub_15D0DF0(v87);
      if ( v49 )
        ++*(_DWORD *)(v49 + 8);
      v88 = v192;
      if ( v192 )
      {
        v182 = *(_DWORD *)(v192 + 8);
        *(_DWORD *)(v192 + 8) = v182 - 1;
        if ( v182 == 1 )
          sub_15D7BC0(v184, v88);
      }
      v79 = sub_15E1B70(a1[1]);
      v80 = v79;
      if ( v79 )
        ++*(_DWORD *)(v79 + 8);
      if ( v51 )
      {
        v53 = (*(_DWORD *)(v51 + 8))-- == 1;
        if ( v53 )
          sub_15D7BC0(v184, v51);
      }
      v81 = sub_15E1B70(a1[32]);
      v82 = v81;
      if ( v81 )
        ++*(_DWORD *)(v81 + 8);
      v83 = v185;
      if ( v185 )
      {
        LODWORD(v192) = *(_DWORD *)(v185 + 8);
        v53 = (_DWORD)v192 == 1;
        *(_DWORD *)(v185 + 8) = v192 - 1;
        if ( v53 )
          sub_15D7BC0(v175, v83);
      }
      sub_15E1BF0(a1[1]);
      v84 = sub_15E1B70(a1[32]);
      v192 = v84;
      if ( v84 )
        ++*(_DWORD *)(v84 + 8);
      if ( v78 )
      {
        v53 = (*(_DWORD *)(v78 + 8))-- == 1;
        if ( v53 )
          sub_15D7BC0(v175, v78);
      }
      v85 = v186;
      if ( v186 != v49 )
      {
        if ( v186 )
        {
          LODWORD(v185) = *(_DWORD *)(v186 + 8);
          v53 = (_DWORD)v185 == 1;
          *(_DWORD *)(v186 + 8) = v185 - 1;
          if ( v53 )
            sub_15D7BC0(v175, v85);
        }
        if ( v49 )
          ++*(_DWORD *)(v49 + 8);
      }
      LODWORD(v195) = v195 - 1;
      if ( (_DWORD)v195 == -1 )
        break;
      v186 = v49;
      v78 = v192;
      v185 = v82;
      v51 = v80;
    }
    v89 = a1[1];
    v186 = v49;
    v141 = v89;
  }
  v90 = sub_15E1B70(a1[32]);
  v191 = (__int64 *)v90;
  if ( v90 )
    ++*(_DWORD *)(v90 + 8);
  v91 = sub_15E1BF0(a1[1]);
  *(_QWORD *)v183 = v91;
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  v92 = v192;
  if ( v192 )
  {
    LODWORD(v195) = *(_DWORD *)(v192 + 8);
    v53 = (_DWORD)v195 == 1;
    *(_DWORD *)(v192 + 8) = v195 - 1;
    if ( v53 )
      sub_15D7BC0(v175, v92);
  }
  v156 = a1[1];
  v93 = sub_15E1B70(a1[32]);
  v185 = v93;
  if ( v93 )
    ++*(_DWORD *)(v93 + 8);
  v94 = sub_15E1B70(a1[32]);
  v195 = v94;
  if ( v94 )
    ++*(_DWORD *)(v94 + 8);
  v95 = sub_15E1A70(a1[32]);
  v192 = v95;
  if ( v95 )
    ++*(_DWORD *)(v95 + 8);
  v96 = sub_15E1B70(a1[1]);
  v97 = v96;
  if ( v96 )
    ++*(_DWORD *)(v96 + 8);
  v98 = sub_15E1BF0(a1[1]);
  *(_QWORD *)v179 = v98;
  if ( v98 )
    ++*(_DWORD *)(v98 + 8);
  v99 = v195;
  if ( v195 )
  {
    v151 = *(_DWORD *)(v195 + 8);
    *(_DWORD *)(v195 + 8) = v151 - 1;
    if ( v151 == 1 )
      sub_15D7BC0(v156, v99);
  }
  v100 = a1[1];
  v216 = 0;
  v217 = v100;
  sub_D614B0((__int64)a1, v153, v152, v149, (__int64 *)v194);
  v101 = a1[1];
  v195 = v216;
  v154 = v217;
  v102 = (_DWORD *)sub_15E1BF0(v101);
  v103 = v102;
  if ( v102 )
    ++v102[2];
  v104 = *v177;
  if ( *v177 )
  {
    v105 = v177[1];
    v53 = (*(_DWORD *)(v104 + 8))-- == 1;
    if ( v53 )
    {
      v194 = v102;
      sub_15D7BC0(v105, v104);
      v103 = v194;
    }
  }
  v106 = a1[1];
  *v177 = (__int64)v103;
  v107 = (_DWORD *)sub_15E1BF0(v106);
  v108 = v107;
  if ( v107 )
    ++v107[2];
  v109 = *v177;
  if ( *v177 )
  {
    v110 = v177[1];
    v53 = (*(_DWORD *)(v109 + 8))-- == 1;
    if ( v53 )
    {
      v194 = v107;
      sub_15D7BC0(v110, v109);
      v108 = v194;
    }
  }
  v111 = a1[1];
  *v177 = (__int64)v108;
  v112 = sub_15E1BF0(v111);
  v113 = v112;
  if ( v112 )
    ++*(_DWORD *)(v112 + 8);
  v114 = *v177;
  if ( *v177 )
  {
    v115 = v177[1];
    v53 = (*(_DWORD *)(v114 + 8))-- == 1;
    if ( v53 )
      sub_15D7BC0(v115, v114);
  }
  result = (__int64)v177;
  *v177 = v113;
  v117 = v195;
  if ( v195 )
  {
    LODWORD(v194) = *(_DWORD *)(v195 + 8);
    v53 = (_DWORD)v194 == 1;
    result = (unsigned int)((_DWORD)v194 - 1);
    *(_DWORD *)(v195 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v154, v117);
  }
  if ( v97 )
  {
    v53 = (*(_DWORD *)(v97 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v156, v97);
  }
  v118 = v192;
  if ( v192 )
  {
    LODWORD(v195) = *(_DWORD *)(v192 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v192 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v156, v118);
  }
  v119 = v185;
  if ( v185 )
  {
    LODWORD(v195) = *(_DWORD *)(v185 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v185 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v156, v119);
  }
  if ( *(_QWORD *)v179 )
  {
    LODWORD(v195) = *(_DWORD *)(*(_QWORD *)v179 + 8LL);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(*(_QWORD *)v179 + 8LL) = result;
    if ( v53 )
      result = sub_15D7BC0(v156, *(_QWORD *)v179);
  }
  v120 = v191;
  if ( v191 )
  {
    LODWORD(v195) = *((_DWORD *)v191 + 2);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *((_DWORD *)v191 + 2) = result;
    if ( v53 )
      result = sub_15D7BC0(v141, v120);
  }
  v121 = v186;
  if ( v186 )
  {
    LODWORD(v195) = *(_DWORD *)(v186 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v186 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v175, v121);
  }
  if ( v82 )
  {
    v53 = (*(_DWORD *)(v82 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v175, v82);
  }
  if ( *(_QWORD *)v183 )
  {
    LODWORD(v195) = *(_DWORD *)(*(_QWORD *)v183 + 8LL);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(*(_QWORD *)v183 + 8LL) = result;
    if ( v53 )
      result = sub_15D7BC0(v175, *(_QWORD *)v183);
  }
  if ( v181 )
  {
    LODWORD(v195) = *(_DWORD *)(v181 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v181 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v147, v181);
  }
  if ( v170 )
  {
    LODWORD(v195) = *(_DWORD *)(v170 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v170 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v147, v170);
  }
  if ( v172 )
  {
    LODWORD(v195) = *(_DWORD *)(v172 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v172 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v147, v172);
  }
  if ( v168 )
  {
    LODWORD(v195) = *(_DWORD *)(v168 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v168 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v147, v168);
  }
  if ( v164 )
  {
    LODWORD(v195) = *(_DWORD *)(v164 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v164 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v143, v164);
  }
  v122 = v189;
  if ( v189 )
  {
    LODWORD(v195) = *(_DWORD *)(v189 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v189 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v122);
  }
  if ( v158 )
  {
    LODWORD(v195) = *(_DWORD *)(v158 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v158 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v158);
  }
  v123 = v187;
  if ( v187 )
  {
    LODWORD(v195) = *(_DWORD *)(v187 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v187 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v123);
  }
  v124 = v188;
  if ( v188 )
  {
    LODWORD(v195) = *(_DWORD *)(v188 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v188 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v124);
  }
  v125 = v190;
  if ( v190 )
  {
    LODWORD(v195) = *(_DWORD *)(v190 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v190 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v125);
  }
  v126 = v193;
  if ( v193 )
  {
    LODWORD(v195) = *(_DWORD *)(v193 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v193 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v184, v126);
  }
  if ( v80 )
  {
    v53 = (*(_DWORD *)(v80 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v184, v80);
  }
  if ( v49 )
  {
    v53 = (*(_DWORD *)(v49 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v184, v49);
  }
  if ( v160 )
  {
    LODWORD(v195) = *(_DWORD *)(v160 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v160 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v166, v160);
  }
  v127 = v211;
  if ( v211 )
  {
    v128 = v212;
    v53 = (*(_DWORD *)(v211 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v128, v127);
  }
  v129 = v209;
  if ( v209 )
  {
    v130 = v210;
    v53 = (*(_DWORD *)(v209 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v130, v129);
  }
  v131 = v207;
  if ( v207 )
  {
    v132 = v208;
    v53 = (*(_DWORD *)(v207 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v132, v131);
  }
  if ( v162 )
  {
    LODWORD(v195) = *(_DWORD *)(v162 + 8);
    v53 = (_DWORD)v195 == 1;
    result = (unsigned int)(v195 - 1);
    *(_DWORD *)(v162 + 8) = result;
    if ( v53 )
      result = sub_15D7BC0(v145, v162);
  }
  v133 = *(_QWORD *)v203;
  if ( *(_QWORD *)v203 )
  {
    v134 = v204;
    v53 = (*(_DWORD *)(*(_QWORD *)v203 + 8LL))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v134, v133);
  }
  v135 = v201;
  if ( v201 )
  {
    v136 = v202;
    v53 = (*(_DWORD *)(v201 + 8))-- == 1;
    if ( v53 )
      result = sub_15D7BC0(v136, v135);
  }
  v137 = v199;
  if ( v199 )
  {
    v138 = v200;
    v53 = (*(_DWORD *)(v199 + 8))-- == 1;
    if ( v53 )
      return sub_15D7BC0(v138, v137);
  }
  return result;
}

