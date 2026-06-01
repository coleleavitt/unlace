__int64 __fastcall sub_D78D90(_QWORD *a1, struct _Unwind_Exception *a2, __int64 a3, void *a4, __int64 *a5)
{
  __int64 v8; // rax
  unsigned int v9; // r12d
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  int v15; // r13d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  int v20; // eax
  void *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // esi
  __int64 v31; // rax
  void *v32; // r14
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // edx
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r12
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r13
  __m128 v43; // xmm0
  __int64 v44; // r12
  __int64 v45; // r13
  int v46; // r9d
  int v47; // r9d
  int v48; // r9d
  int v49; // r9d
  int v50; // r9d
  int v51; // r9d
  int v52; // r9d
  __int64 v53; // r15
  __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // r12
  char *v57; // rdx
  int v58; // r10d
  __int64 v59; // rax
  unsigned int v60; // ecx
  char *v61; // rsi
  __int64 v62; // rcx
  char *v63; // rdi
  char *v64; // rax
  int v65; // ecx
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // rdi
  _DWORD *v69; // rax
  int v70; // eax
  __int64 v71; // rdi
  _QWORD *v72; // rax
  void *v73; // rdi
  __int64 v74; // rdi
  __int64 v75; // rax
  void *v76; // rdi
  void *v77; // rdi
  void *v78; // r13
  void *v79; // r13
  void *v80; // r13
  __int64 v81; // rax
  _QWORD *v82; // rax
  void *v83; // r12
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rax
  __int64 v90; // r12
  __int64 v91; // rax
  __int64 v92; // rdi
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdi
  __int64 v97; // rax
  __int64 v98; // r12
  int v99; // r14d
  __int64 v100; // rax
  __int64 v101; // r13
  __int64 v102; // rax
  __int64 v103; // r12
  _DWORD *v104; // rax
  __int64 v105; // rdi
  __int64 v106; // rax
  void *v107; // r14
  int v108; // [rsp+0h] [rbp-350h]
  int v109; // [rsp+0h] [rbp-350h]
  __int64 v110; // [rsp+8h] [rbp-348h]
  __int64 v111; // [rsp+8h] [rbp-348h]
  __int64 v112; // [rsp+10h] [rbp-340h]
  __int64 v113; // [rsp+10h] [rbp-340h]
  int v114; // [rsp+14h] [rbp-33Ch]
  void *v115; // [rsp+18h] [rbp-338h]
  void *v116; // [rsp+18h] [rbp-338h]
  __int64 v117; // [rsp+20h] [rbp-330h]
  __int64 v118; // [rsp+20h] [rbp-330h]
  __int64 v119; // [rsp+20h] [rbp-330h]
  void *v120; // [rsp+28h] [rbp-328h]
  void *v121; // [rsp+28h] [rbp-328h]
  void *v122; // [rsp+28h] [rbp-328h]
  __int64 v123; // [rsp+30h] [rbp-320h] BYREF
  __int64 *v124; // [rsp+38h] [rbp-318h]
  __int64 v125; // [rsp+40h] [rbp-310h]
  __int64 v126; // [rsp+48h] [rbp-308h]
  __int64 v127; // [rsp+50h] [rbp-300h]
  __int64 v128; // [rsp+58h] [rbp-2F8h]
  __int64 v129; // [rsp+60h] [rbp-2F0h]
  __int64 v130; // [rsp+68h] [rbp-2E8h]
  __int64 v131; // [rsp+70h] [rbp-2E0h]
  __int64 v132; // [rsp+78h] [rbp-2D8h]
  __int64 v133; // [rsp+80h] [rbp-2D0h]
  void *v134; // [rsp+88h] [rbp-2C8h]
  __int64 v135; // [rsp+90h] [rbp-2C0h]
  __int64 v136; // [rsp+98h] [rbp-2B8h]
  __int64 v137; // [rsp+A0h] [rbp-2B0h]
  __int64 v138; // [rsp+A8h] [rbp-2A8h]
  __int64 v139; // [rsp+B0h] [rbp-2A0h]
  __int64 v140; // [rsp+B8h] [rbp-298h]
  __int64 v141; // [rsp+C0h] [rbp-290h]
  __int64 v142; // [rsp+C8h] [rbp-288h] BYREF
  __int64 v143; // [rsp+D0h] [rbp-280h]
  __int64 v144; // [rsp+D8h] [rbp-278h]
  __int64 v145; // [rsp+E0h] [rbp-270h]
  __int64 v146; // [rsp+E8h] [rbp-268h]
  __int64 v147; // [rsp+F0h] [rbp-260h]
  __int64 v148; // [rsp+F8h] [rbp-258h]
  __int64 *v149; // [rsp+100h] [rbp-250h]
  __int64 v150; // [rsp+108h] [rbp-248h]
  __int64 v151; // [rsp+110h] [rbp-240h]
  _QWORD *v152; // [rsp+118h] [rbp-238h] BYREF
  void *v153; // [rsp+120h] [rbp-230h]
  struct _Unwind_Exception *v154; // [rsp+128h] [rbp-228h]
  int v155[2]; // [rsp+138h] [rbp-218h] BYREF
  __int64 v156; // [rsp+140h] [rbp-210h] BYREF
  __int64 v157; // [rsp+148h] [rbp-208h]
  __int64 v158; // [rsp+150h] [rbp-200h] BYREF
  __int64 v159; // [rsp+158h] [rbp-1F8h]
  __int64 v160; // [rsp+160h] [rbp-1F0h] BYREF
  __int64 v161; // [rsp+168h] [rbp-1E8h]
  __int64 v162; // [rsp+170h] [rbp-1E0h] BYREF
  __int64 v163; // [rsp+178h] [rbp-1D8h]
  __int64 v164; // [rsp+180h] [rbp-1D0h] BYREF
  __int64 v165; // [rsp+188h] [rbp-1C8h]
  __int64 v166; // [rsp+190h] [rbp-1C0h] BYREF
  __int64 v167; // [rsp+198h] [rbp-1B8h]
  __int64 v168; // [rsp+1A0h] [rbp-1B0h] BYREF
  __int64 v169; // [rsp+1A8h] [rbp-1A8h]
  __int64 v170; // [rsp+1B0h] [rbp-1A0h] BYREF
  __int64 v171; // [rsp+1B8h] [rbp-198h]
  __int64 v172; // [rsp+1C0h] [rbp-190h] BYREF
  __int64 v173; // [rsp+1C8h] [rbp-188h]
  __int64 v174; // [rsp+1D0h] [rbp-180h] BYREF
  __int64 v175; // [rsp+1D8h] [rbp-178h]
  __int64 v176; // [rsp+1E0h] [rbp-170h] BYREF
  __int64 v177; // [rsp+1E8h] [rbp-168h]
  __int64 v178; // [rsp+1F0h] [rbp-160h] BYREF
  __int64 v179; // [rsp+1F8h] [rbp-158h]
  __int64 v180; // [rsp+200h] [rbp-150h] BYREF
  __int64 v181; // [rsp+208h] [rbp-148h]
  __int64 v182; // [rsp+210h] [rbp-140h] BYREF
  __int64 v183; // [rsp+218h] [rbp-138h]
  __m128i v184; // [rsp+220h] [rbp-130h] BYREF
  __int64 v185; // [rsp+230h] [rbp-120h] BYREF
  __int64 v186; // [rsp+238h] [rbp-118h]
  __int64 v187; // [rsp+240h] [rbp-110h] BYREF
  __int64 v188; // [rsp+248h] [rbp-108h]
  __m128 v189; // [rsp+250h] [rbp-100h] BYREF
  void *v190; // [rsp+260h] [rbp-F0h] BYREF
  __int64 v191; // [rsp+268h] [rbp-E8h]
  _QWORD *v192; // [rsp+270h] [rbp-E0h] BYREF
  __int64 v193; // [rsp+278h] [rbp-D8h]
  __m128 v194; // [rsp+280h] [rbp-D0h] BYREF
  __int64 v195; // [rsp+290h] [rbp-C0h] BYREF
  __int64 v196; // [rsp+298h] [rbp-B8h]
  __m128i v197; // [rsp+2A0h] [rbp-B0h] BYREF
  _QWORD v198[2]; // [rsp+2B0h] [rbp-A0h] BYREF
  __m128 v199; // [rsp+2C0h] [rbp-90h] BYREF
  _QWORD v200[2]; // [rsp+2D0h] [rbp-80h] BYREF
  __int64 v201; // [rsp+2E0h] [rbp-70h] BYREF
  void *v202; // [rsp+2E8h] [rbp-68h]
  int v203; // [rsp+2F0h] [rbp-60h] BYREF
  char v204; // [rsp+2F4h] [rbp-5Ch]
  __int64 v205; // [rsp+2F8h] [rbp-58h]
  __int64 v206; // [rsp+300h] [rbp-50h] BYREF
  __int64 v207; // [rsp+308h] [rbp-48h]
  __int64 v208; // [rsp+310h] [rbp-40h] BYREF
  __int64 v209; // [rsp+318h] [rbp-38h]

  v144 = a3;
  v154 = a2;
  v8 = sub_15D1F10(a4);
  v153 = a4;
  v9 = sub_15C5560(a1 + 54, v8);
  v10 = sub_15D1F10(a4);
  LODWORD(v150) = sub_15C5540((int)a1 + 432, v10, v11, v12, v13, v14);
  v15 = sub_15C5560(a1 + 54, a2);
  v20 = sub_15C5540((int)a1 + 432, (_DWORD)a2, v16, v17, v18, v19);
  LODWORD(v148) = v20;
  if ( v9 == v15 && (_DWORD)v150 == v20 )
  {
    v21 = v153;
    v22 = a5[1];
    v23 = *a5;
    ++*((_DWORD *)v153 + 2);
    result = sub_D50200(v23, v22);
    *a5 = (__int64)v21;
    return result;
  }
  v25 = a1[1];
  v156 = 0;
  v158 = 0;
  v151 = v25;
  v157 = v25;
  v159 = v25;
  v161 = v25;
  v163 = v25;
  v165 = v25;
  v177 = v25;
  v160 = 0;
  v162 = 0;
  v164 = 0;
  v176 = 0;
  v152 = a1 + 29;
  v26 = sub_D50390((__int64)(a1 + 29), 1u);
  v143 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v27 = a1[1];
  v149 = &v180;
  v180 = 0;
  v181 = v27;
  sub_D5B4A0((__int64)a1, (__int64)v154, &v180);
  v179 = v27;
  v178 = 0;
  v145 = v180;
  v127 = v181;
  sub_D5B6C0((__int64)a1, (__int64)v154, &v178);
  v147 = v178;
  v136 = v179;
  sub_D5BB00(a1, v153, &v156);
  v166 = 0;
  v167 = v151;
  sub_D5B8E0((__int64)a1, (__int64)v154, &v166);
  v137 = v166;
  sub_D53A50(
    (int)a1,
    (int)v153,
    (__int64)&v158,
    v108,
    v110,
    v112,
    (__int64)v115,
    v117,
    (__int64)v120,
    v123,
    (__int64)v124,
    v125,
    v126,
    v127,
    v167,
    v129,
    v130,
    v131,
    v132,
    v133);
  v168 = 0;
  v169 = v151;
  sub_D518E0((__int64)a1, (__int64)v154, &v168);
  v138 = v168;
  sub_D53650(
    (int)a1,
    (int)v153,
    (__int64)&v160,
    v109,
    v111,
    v113,
    (__int64)v116,
    v118,
    (__int64)v121,
    v123,
    (__int64)v124,
    v125,
    v126,
    v127,
    v128,
    v169,
    v130,
    v131,
    v132,
    v133);
  v170 = 0;
  v171 = v151;
  sub_D51670((__int64)a1, (__int64)v154, &v170);
  v139 = v170;
  v130 = v171;
  sub_D63CE0(a1, v153, &v162);
  if ( v145 )
  {
    v172 = 0;
    v173 = v151;
    sub_D50220(&v172, v149);
    v140 = v172;
    v131 = v173;
  }
  else
  {
    v140 = 0;
    v131 = v151;
  }
  sub_D63E40(a1, v153, &v164);
  if ( v147 )
  {
    v174 = 0;
    v175 = v151;
    sub_D50220(&v174, &v178);
    v141 = v174;
    v132 = v175;
  }
  else
  {
    v141 = 0;
    v132 = v151;
  }
  v28 = a1[1];
  v184.m128i_i64[0] = 0;
  v185 = 0;
  v184.m128i_i64[1] = v28;
  v186 = v28;
  v187 = 0;
  v188 = v28;
  v182 = 0;
  v183 = v28;
  sub_D59470(a1, (__int64)v153, &v182, v184.m128i_i64, &v185, &v187, 1);
  v190 = nullptr;
  v192 = nullptr;
  v126 = v183;
  v29 = a1[1];
  v146 = v182;
  v142 = v29;
  v191 = v29;
  v193 = v29;
  if ( v182 )
    ++*(_DWORD *)(v182 + 8);
  v30 = v15 + 3;
  if ( v9 < v15 + 3 )
  {
    v67 = sub_D50430((__int64)v152, v30 - v9);
    v68 = a1[30];
    v197 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v184), (__m128i)(unsigned __int64)v67);
    v69 = (_DWORD *)sub_15E1AF0(v68);
    v153 = v69;
    if ( v69 )
      ++v69[2];
    sub_D50200((__int64)v190, v191);
    v190 = v153;
  }
  else
  {
    v153 = (void *)v184.m128i_i64[0];
    if ( v30 < v9 )
    {
      v99 = v9 - v15;
      v100 = sub_D81CD0(v152, v9 - 1, v9 - v15 - 2, v184.m128i_i64[0]);
      v101 = v100;
      if ( v100 )
        ++*(_DWORD *)(v100 + 8);
      v102 = sub_D50160((__int64)v152, v99 - 3, v184.m128i_i64[0]);
      v103 = v102;
      if ( v102 )
        ++*(_DWORD *)(v102 + 8);
      v104 = (_DWORD *)sub_15E1A70(a1[1]);
      v153 = v104;
      if ( v104 )
        ++v104[2];
      v105 = a1[30];
      v199.m128_u64[0] = v101;
      v199.m128_u64[1] = (unsigned __int64)v104;
      v106 = sub_15E1AF0(v105);
      v107 = (void *)v106;
      if ( v106 )
        ++*(_DWORD *)(v106 + 8);
      sub_D50200((__int64)v190, v191);
      v190 = v107;
      sub_D50200(v101, v142);
      sub_D50200(v103, v142);
      sub_D50200((__int64)v153, v142);
      v153 = v190;
    }
    else if ( v153 )
    {
      sub_D50220((__int64 *)&v190, v184.m128i_i64);
      v153 = v190;
    }
  }
  v31 = sub_D81D60(v152, 1, v153);
  v32 = (void *)v31;
  if ( v31 )
    ++*(_DWORD *)(v31 + 8);
  sub_D50200((__int64)v190, v191);
  v33 = a1[1];
  v190 = v32;
  v34 = *(_QWORD *)(v33 + 864);
  v133 = v33;
  if ( v34 )
    *(_DWORD *)(v34 + 8) += 2;
  v35 = v150;
  v36 = v148 + 2;
  LODWORD(v125) = v148 + 2;
  if ( (unsigned int)v150 < (int)v148 + 2 )
  {
    LOBYTE(v207) = 0;
    LODWORD(v150) = v36 - v150;
    LODWORD(v206) = v36 - v35;
    v153 = &v206;
    v37 = a1[30];
    *(_QWORD *)v155 = v185;
    v38 = sub_15DCAD0(v37, (int)v155, 0);
    sub_15D0DF0(&v206);
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    sub_D50200((__int64)v192, v193);
    v192 = (_QWORD *)v38;
    v39 = a1[1];
    v40 = sub_D81D60(v152, (unsigned int)v150, v187);
    v152 = (_QWORD *)v40;
    if ( v40 )
      ++*(_DWORD *)(v40 + 8);
    sub_D50200(0, v39);
    v41 = sub_15E1B70(a1[30]);
    v42 = v41;
    if ( v41 )
      ++*(_DWORD *)(v41 + 8);
    sub_D50200((__int64)v192, v193);
    v192 = (_QWORD *)v42;
    sub_D50200((__int64)v152, v39);
    v134 = &v199;
    goto LABEL_28;
  }
  v114 = v150 + 1;
  sub_D50080((__int64)v152, v187);
  sub_D50080((__int64)v152, v185);
  v55 = sub_15E1B70(a1[30]);
  v135 = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  v56 = a1[62];
  v123 = a1[1];
  v57 = *(char **)(v56 + 768);
  v58 = v148 + 1;
  v59 = *(unsigned int *)(v56 + 776);
  LODWORD(v149) = v148 + 1;
  v60 = v59 - 1;
  v59 *= 24;
  v61 = &v57[v59];
  v62 = 24LL * (((_DWORD)v148 + 1) & v60);
  v63 = &v57[v62];
  if ( v62 == v59 )
  {
LABEL_53:
    if ( v57 != v63 )
    {
      while ( 1 )
      {
        v70 = *((_DWORD *)v57 + 1);
        if ( v70 == 2 )
        {
          if ( (_DWORD)v149 == *(_DWORD *)v57 && (_DWORD)v149 == *((_DWORD *)v57 + 2) )
          {
            v64 = v57;
            goto LABEL_42;
          }
        }
        else if ( !v70 )
        {
          goto LABEL_61;
        }
        v57 += 24;
        if ( v63 == v57 )
          goto LABEL_61;
      }
    }
    goto LABEL_61;
  }
  v64 = &v57[v62];
  while ( 1 )
  {
    v65 = *((_DWORD *)v64 + 1);
    if ( v65 == 2 )
      break;
    if ( !v65 )
    {
      LODWORD(v149) = v148 + 1;
      goto LABEL_61;
    }
LABEL_37:
    v64 += 24;
    if ( v61 == v64 )
    {
      LODWORD(v149) = v148 + 1;
      goto LABEL_53;
    }
  }
  if ( v58 != *(_DWORD *)v64 || v58 != *((_DWORD *)v64 + 2) )
    goto LABEL_37;
  LODWORD(v149) = v148 + 1;
LABEL_42:
  if ( v64 != v61 )
  {
    while ( *((_DWORD *)v64 + 1) != 2 )
    {
      v64 += 24;
      if ( v61 == v64 )
        goto LABEL_61;
    }
    if ( v64 != v61 )
    {
      v66 = *((_QWORD *)v64 + 2);
      goto LABEL_62;
    }
  }
LABEL_61:
  v66 = sub_186B270(0x10u);
  *(_QWORD *)v66 = 0;
  *(_QWORD *)(v66 + 8) = 0;
  v207 = v66;
  LODWORD(v206) = (_DWORD)v149;
  v153 = &v206;
  sub_D81F20(v56 + 768, &v206);
  v71 = *(_QWORD *)(v56 + 736);
  LODWORD(v206) = 2;
  BYTE4(v206) &= 0xFCu;
  v207 = 0;
  sub_18393F0(v71, &v206, (unsigned int)v149, v66);
  sub_1839100(*(_QWORD *)(v56 + 736), v66);
LABEL_62:
  v134 = (void *)sub_D50430((__int64)v152, 1u);
  v72 = sub_D58CA0((__int64 *)(a1[62] + 736LL), v148);
  v206 = 0;
  v207 = 0;
  v208 = 1;
  v73 = qword_1C7F2C0;
  v209 = 0;
  if ( (*((_BYTE *)v72 + 4) & 1) != 0 )
  {
    v153 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v206, v72);
    v73 = v153;
  }
  else
  {
    LODWORD(v206) = *(_DWORD *)v72;
  }
  v124 = &v208;
  sub_182CBA0(v73, &v208);
  BYTE4(v208) &= ~1u;
  LODWORD(v208) = 1;
  v153 = &v206;
  v201 = sub_1674520(v152, &v206, (unsigned int)v149);
  v74 = a1[30];
  v202 = v134;
  v75 = sub_15E1AF0(v74);
  v119 = v75;
  if ( v75 )
    ++*(_DWORD *)(v75 + 8);
  sub_25A130((char *)v153);
  v200[0] = 1;
  v195 = 2;
  v196 = 0;
  v199 = 0u;
  v200[1] = 0;
  v199.m128_i32[0] = 2;
  sub_182CBA0(qword_1C7F2C0, v200);
  BYTE4(v200[0]) &= ~1u;
  v76 = qword_1C7F2C0;
  LODWORD(v200[0]) = 1;
  v197 = 0u;
  v198[0] = 1;
  v198[1] = 0;
  if ( (*(_BYTE *)(v66 + 4) & 1) != 0 )
  {
    v134 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v197, v66);
  }
  else
  {
    v197.m128i_i32[0] = *(_DWORD *)v66;
  }
  sub_182CBA0(v76, v198);
  BYTE4(v198[0]) &= ~1u;
  v77 = qword_1C7F2C0;
  LODWORD(v198[0]) = 1;
  v206 = 0;
  v207 = 0;
  v208 = 1;
  v209 = 0;
  if ( (v197.m128i_i8[4] & 1) != 0 )
  {
    v134 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, v153, &v197);
  }
  else
  {
    LODWORD(v206) = v197.m128i_i32[0];
  }
  if ( (v198[0] & 0x100000000LL) != 0 )
  {
    sub_182C690(v77, v124, v198);
  }
  else
  {
    BYTE4(v208) &= ~1u;
    LODWORD(v208) = v198[0];
  }
  v78 = qword_1C7F2C0;
  if ( v199.m128_i32[0] )
  {
    if ( (_DWORD)v206 )
    {
      if ( (v208 & 0x100000000LL) != 0 || (_DWORD)v208 != 1 || (v200[0] & 0x100000000LL) != 0 || LODWORD(v200[0]) != 1 )
      {
        v134 = &v199;
        sub_1851D20(qword_1C7F2C0, v153, &v199, v153);
      }
      else
      {
        v134 = &v199;
        sub_1831A80(qword_1C7F2C0, v153, &v199, v153);
        sub_182CBA0(v78, v124);
        BYTE4(v208) &= ~1u;
        LODWORD(v208) = 1;
      }
    }
    else
    {
      if ( (v199.m128_i8[4] & 1) != 0 )
      {
        v134 = &v199;
        sub_182C690(qword_1C7F2C0, v153, &v199);
      }
      else
      {
        LODWORD(v206) = v199.m128_i32[0];
        BYTE4(v206) &= ~1u;
        v134 = &v199;
      }
      if ( (v200[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v78, v124, v200);
      }
      else
      {
        BYTE4(v208) &= ~1u;
        LODWORD(v208) = v200[0];
      }
    }
  }
  else
  {
    if ( (v206 & 0x100000000LL) != 0 )
    {
      v134 = &v199;
      sub_182C690(qword_1C7F2C0, v153, v153);
    }
    else
    {
      BYTE4(v206) &= ~1u;
    }
    if ( (v208 & 0x100000000LL) != 0 )
      sub_182C690(v78, v124, v124);
    else
      BYTE4(v208) &= ~1u;
    v134 = &v199;
  }
  BYTE4(v201) &= 0xFCu;
  v79 = qword_1C7F2C0;
  v204 &= 0xFCu;
  LODWORD(v201) = 0;
  v202 = nullptr;
  v203 = 1;
  v205 = 0;
  if ( (v206 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v201, v153);
  else
    LODWORD(v201) = v206;
  if ( (v208 & 0x100000000LL) != 0 )
  {
    sub_182C690(v79, &v203, v124);
  }
  else
  {
    v204 &= ~1u;
    v203 = v208;
  }
  v80 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v153);
  sub_182CBA0(v80, v124);
  v81 = sub_1674520(v152, &v201, (unsigned int)v125);
  v125 = v81;
  if ( v81 )
    ++*(_DWORD *)(v81 + 8);
  sub_25A130((char *)&v201);
  sub_25A130(v197.m128i_i8);
  sub_25A130((char *)v134);
  v122 = (void *)a1[1];
  v82 = sub_D58CA0((__int64 *)(a1[62] + 736LL), (unsigned int)v149);
  v206 = 0;
  v207 = 0;
  v83 = qword_1C7F2C0;
  v208 = 1;
  v209 = 0;
  if ( (*((_BYTE *)v82 + 4) & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v153, v82);
  else
    LODWORD(v206) = *(_DWORD *)v82;
  sub_182CBA0(v83, v124);
  LODWORD(v208) = 1;
  BYTE4(v208) &= ~1u;
  v84 = sub_1674520(v152, v153, (unsigned int)(v150 + 2));
  v85 = v84;
  if ( v84 )
    ++*(_DWORD *)(v84 + 8);
  sub_25A130((char *)v153);
  v86 = sub_D50390((__int64)v152, (unsigned int)v149);
  sub_D50390((__int64)v152, v114 - v148);
  v87 = sub_15E1A70(a1[30]);
  v88 = a1[30];
  v206 = v87;
  v207 = v86;
  v89 = sub_15E1AF0(v88);
  v90 = v89;
  if ( v89 )
    ++*(_DWORD *)(v89 + 8);
  v91 = sub_D50160((__int64)v152, (int)v149, v135);
  v152 = (_QWORD *)v91;
  if ( v91 )
    ++*(_DWORD *)(v91 + 8);
  sub_D50200(0, v123);
  v92 = a1[30];
  v148 = a1[1];
  v93 = sub_15E1B70(v92);
  v150 = v93;
  if ( v93 )
    ++*(_DWORD *)(v93 + 8);
  v94 = sub_15E1B70(a1[30]);
  v149 = (__int64 *)v94;
  if ( v94 )
    ++*(_DWORD *)(v94 + 8);
  if ( v152 != v192 )
  {
    v194 = _mm_loadh_ps((const double *)&v123);
    sub_D50220((__int64 *)&v192, (__int64 *)&v194);
  }
  v95 = sub_15E1BF0(a1[1]);
  if ( v95 )
    ++*(_DWORD *)(v95 + 8);
  v124 = (__int64 *)v95;
  sub_D50200((__int64)v192, v193);
  v96 = a1[1];
  v192 = v124;
  v97 = sub_15E1BF0(v96);
  if ( v97 )
    ++*(_DWORD *)(v97 + 8);
  v124 = (__int64 *)v97;
  sub_D50200((__int64)v192, v193);
  v192 = v124;
  sub_D50200((__int64)v149, v148);
  sub_D50200(v150, v148);
  sub_D50200(v90, (__int64)v122);
  sub_D50200(v85, (__int64)v122);
  v98 = v123;
  sub_D50200((__int64)v152, v123);
  sub_D50200(v125, v98);
  sub_D50200(v119, v98);
  sub_D50200(v135, v133);
LABEL_28:
  v152 = (_QWORD *)a1[1];
  v43 = _mm_loadh_ps((const double *)&v142);
  v199 = _mm_loadh_ps((const double *)&v152);
  if ( v144 )
    ++*(_DWORD *)(v144 + 8);
  v195 = 0;
  v189 = v43;
  v196 = (__int64)v152;
  sub_D66E50(a1, (__int64)v154, (__int64 *)v134, (__int64 *)&v189, (__int64 *)&v190, (__int64 *)&v192, &v195);
  v44 = v195;
  v202 = (void *)a1[1];
  v201 = 0;
  v45 = v196;
  v206 = 0;
  v207 = (__int64)v202;
  sub_D81DD0(a1 + 2, v146, v143, &v201);
  sub_D51DB0((__int64)a1, v201, v147, v145, (__int64 *)v153, v46);
  sub_D51DB0((__int64)a1, v34, v206, v44, &v176, v47);
  sub_D51DB0((__int64)a1, v164, v141, v176, a5, v48);
  sub_D51DB0((__int64)a1, v162, v140, *a5, a5, v49);
  sub_D51DB0((__int64)a1, v160, v139, *a5, a5, v50);
  sub_D51DB0((__int64)a1, v158, v138, *a5, a5, v51);
  sub_D51DB0((__int64)a1, v156, v137, *a5, a5, v52);
  sub_D50200(v206, v207);
  sub_D50200(v201, (__int64)v202);
  sub_D50200(v144, (__int64)v152);
  sub_D50200(v44, v45);
  v53 = v133;
  sub_D50200(v34, v133);
  sub_D50200(v34, v53);
  sub_D50200((__int64)v192, v193);
  sub_D50200((__int64)v190, v191);
  v54 = v146;
  sub_D50200(v146, v142);
  sub_D50200(v187, v188);
  sub_D50200(v185, v186);
  sub_D50200(v184.m128i_i64[0], v184.m128i_i64[1]);
  sub_D50200(v54, v126);
  sub_D50200(v145, v127);
  sub_D50200(v147, v136);
  sub_D50200(v143, v151);
  sub_D50200(v176, v177);
  sub_D50200(v141, v132);
  sub_D50200(v140, v131);
  sub_D50200(v139, v130);
  sub_D50200(v138, v129);
  sub_D50200(v137, v128);
  sub_D50200(v164, v165);
  sub_D50200(v162, v163);
  sub_D50200(v160, v161);
  sub_D50200(v158, v159);
  return sub_D50200(v156, v157);
}

