__int64 __fastcall sub_1B8B420(
        __int64 *a1,
        unsigned int **a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // r15
  unsigned int **v15; // rcx
  unsigned int *v16; // r10
  unsigned int v17; // esi
  unsigned int **v18; // rax
  unsigned int **v19; // rdx
  unsigned int *v20; // r11
  char v21; // al
  unsigned int *v22; // r11
  unsigned int *v23; // r10
  char v24; // al
  unsigned int *v25; // r10
  unsigned int *v26; // r11
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  unsigned int v29; // eax
  unsigned __int64 v30; // rbx
  void **v31; // r13
  void **v32; // r12
  _QWORD *v33; // r13
  _QWORD *v34; // r12
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  _DWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int32 v43; // edx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdi
  __int64 v52; // r8
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // r10
  __int16 v59; // ax
  _QWORD *v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  unsigned int v65; // eax
  _QWORD *v66; // rax
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r11
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  unsigned int v78; // eax
  unsigned __int64 v79; // rcx
  __int64 v80; // r8
  unsigned __int64 v81; // r11
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  unsigned int v88; // eax
  _QWORD *v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  unsigned __int64 v93; // r10
  __int64 v94; // rax
  unsigned __int64 v95; // rdi
  unsigned int v96; // eax
  __int64 v97; // r11
  __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  unsigned int v102; // eax
  _QWORD *v103; // r10
  __int64 v104; // rsi
  _QWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // r9
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  int v112; // eax
  __int64 v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r10
  __int16 v117; // ax
  int v118; // ecx
  int v119; // ecx
  __int64 v120; // rdx
  __int64 v121; // r8
  unsigned int v122; // eax
  __int64 v123; // rbx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  unsigned int v127; // eax
  __int64 v128; // rsi
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rbx
  __int64 v131; // rbx
  __int64 v132; // [rsp-20h] [rbp-598h]
  __int64 v133; // [rsp-8h] [rbp-580h]
  __int64 v135; // [rsp+10h] [rbp-568h]
  unsigned int v136; // [rsp+10h] [rbp-568h]
  unsigned int *v137; // [rsp+20h] [rbp-558h]
  unsigned int *v138; // [rsp+20h] [rbp-558h]
  unsigned int *v139; // [rsp+20h] [rbp-558h]
  unsigned int *v140; // [rsp+20h] [rbp-558h]
  unsigned int *v141; // [rsp+28h] [rbp-550h]
  unsigned __int64 v142; // [rsp+28h] [rbp-550h]
  unsigned int *v143; // [rsp+28h] [rbp-550h]
  int v144; // [rsp+28h] [rbp-550h]
  int v145; // [rsp+30h] [rbp-548h]
  __int64 v146; // [rsp+30h] [rbp-548h]
  __int64 v147; // [rsp+30h] [rbp-548h]
  _QWORD *v148; // [rsp+30h] [rbp-548h]
  __int64 v149; // [rsp+30h] [rbp-548h]
  __int64 v150; // [rsp+30h] [rbp-548h]
  __int64 v151; // [rsp+30h] [rbp-548h]
  __int64 v152; // [rsp+30h] [rbp-548h]
  unsigned __int64 v153; // [rsp+30h] [rbp-548h]
  __int64 v154; // [rsp+30h] [rbp-548h]
  __int64 v155; // [rsp+30h] [rbp-548h]
  __int64 v156; // [rsp+30h] [rbp-548h]
  __int64 v157; // [rsp+30h] [rbp-548h]
  int v158; // [rsp+30h] [rbp-548h]
  unsigned int *v159; // [rsp+38h] [rbp-540h]
  __int64 v160; // [rsp+38h] [rbp-540h]
  __int64 v161; // [rsp+38h] [rbp-540h]
  _QWORD *v162; // [rsp+38h] [rbp-540h]
  unsigned __int64 v163; // [rsp+38h] [rbp-540h]
  __int64 v164; // [rsp+38h] [rbp-540h]
  unsigned __int64 v165; // [rsp+38h] [rbp-540h]
  __int64 v166; // [rsp+38h] [rbp-540h]
  unsigned __int64 v167; // [rsp+38h] [rbp-540h]
  __int64 v168; // [rsp+40h] [rbp-538h]
  unsigned __int64 v169; // [rsp+40h] [rbp-538h]
  __int64 v170; // [rsp+48h] [rbp-530h]
  unsigned __int64 v171; // [rsp+48h] [rbp-530h]
  __int64 v172; // [rsp+48h] [rbp-530h]
  int v173; // [rsp+50h] [rbp-528h]
  __int64 v174; // [rsp+50h] [rbp-528h]
  __int64 v175; // [rsp+50h] [rbp-528h]
  __int64 v176; // [rsp+50h] [rbp-528h]
  _QWORD *v177; // [rsp+50h] [rbp-528h]
  __int64 v178; // [rsp+50h] [rbp-528h]
  unsigned __int64 v179; // [rsp+50h] [rbp-528h]
  __int64 v180; // [rsp+50h] [rbp-528h]
  unsigned __int64 v181; // [rsp+50h] [rbp-528h]
  _QWORD *v182; // [rsp+58h] [rbp-520h]
  _QWORD *v183; // [rsp+58h] [rbp-520h]
  unsigned __int64 v184; // [rsp+58h] [rbp-520h]
  int v185; // [rsp+60h] [rbp-518h]
  __int64 v186; // [rsp+60h] [rbp-518h]
  int v187; // [rsp+68h] [rbp-510h]
  int v188; // [rsp+6Ch] [rbp-50Ch]
  void **p_ptr; // [rsp+70h] [rbp-508h]
  void **v190; // [rsp+78h] [rbp-500h]
  void **v191; // [rsp+80h] [rbp-4F8h]
  _QWORD *v192; // [rsp+88h] [rbp-4F0h]
  unsigned __int64 v193; // [rsp+90h] [rbp-4E8h]
  _QWORD *v194; // [rsp+98h] [rbp-4E0h]
  unsigned __int64 v195; // [rsp+A0h] [rbp-4D8h]
  unsigned __int64 v196; // [rsp+A8h] [rbp-4D0h]
  unsigned __int64 v197; // [rsp+B8h] [rbp-4C0h] BYREF
  __int64 v198; // [rsp+C0h] [rbp-4B8h] BYREF
  __int64 v199; // [rsp+C8h] [rbp-4B0h] BYREF
  _QWORD v200[3]; // [rsp+D0h] [rbp-4A8h] BYREF
  int v201; // [rsp+E8h] [rbp-490h]
  void *v202[2]; // [rsp+F0h] [rbp-488h] BYREF
  __int64 v203; // [rsp+100h] [rbp-478h] BYREF
  void *v204[4]; // [rsp+110h] [rbp-468h] BYREF
  void *v205[6]; // [rsp+130h] [rbp-448h] BYREF
  __int64 v206; // [rsp+160h] [rbp-418h]
  int v207; // [rsp+168h] [rbp-410h]
  __m128i v208; // [rsp+170h] [rbp-408h] BYREF
  __int64 v209; // [rsp+180h] [rbp-3F8h]
  int v210; // [rsp+188h] [rbp-3F0h]
  __int16 v211; // [rsp+190h] [rbp-3E8h]
  __m128i v212; // [rsp+1A0h] [rbp-3D8h] BYREF
  __int64 v213; // [rsp+1B0h] [rbp-3C8h]
  unsigned int v214; // [rsp+1B8h] [rbp-3C0h]
  __int16 v215; // [rsp+1C0h] [rbp-3B8h]
  void **v216; // [rsp+1D0h] [rbp-3A8h] BYREF
  __int64 v217; // [rsp+1D8h] [rbp-3A0h]
  _BYTE v218[32]; // [rsp+1E0h] [rbp-398h] BYREF
  void *ptr; // [rsp+200h] [rbp-378h] BYREF
  __int64 v220; // [rsp+208h] [rbp-370h]
  __int64 v221; // [rsp+210h] [rbp-368h] BYREF
  __m128i v222; // [rsp+230h] [rbp-348h] BYREF
  _QWORD v223[2]; // [rsp+240h] [rbp-338h] BYREF
  unsigned __int8 *v224; // [rsp+250h] [rbp-328h] BYREF
  char v225; // [rsp+2A8h] [rbp-2D0h]
  char v226; // [rsp+2B4h] [rbp-2C4h]
  __int64 v227; // [rsp+2C0h] [rbp-2B8h] BYREF
  __int64 v228; // [rsp+2C8h] [rbp-2B0h]
  _BYTE v229[680]; // [rsp+2D0h] [rbp-2A8h] BYREF

  v187 = a6;
  v12 = sub_168B6C0((__int64)a1);
  if ( !a4 )
    return 1;
  v13 = *a1;
  v14 = (_QWORD *)v12;
  v135 = *(_QWORD *)(*a1 + 608);
  v227 = 0x270000004FLL;
  if ( (unsigned __int8)sub_1B28C40(v13, a2, a3, &v227) )
    return 1;
  v15 = &a2[a3];
  if ( v15 == a2 )
  {
    v20 = nullptr;
  }
  else
  {
    v16 = *a2;
    v17 = (*a2)[2];
    if ( v17 != 39 )
    {
      v18 = a2 + 1;
      v19 = a2 + 1;
      while ( v15 != v19 )
      {
        v20 = *v19++;
        if ( v20[2] == 39 )
          goto LABEL_9;
      }
      v20 = nullptr;
LABEL_9:
      if ( v17 != 79 )
        goto LABEL_12;
LABEL_36:
      v143 = v20;
      v227 = (__int64)v229;
      v228 = 0x100000000LL;
      v139 = v16;
      v197 = 0;
      sub_1B50610((__int64)&v227, 1u);
      v216 = (void **)v218;
      v217 = 0x200000000LL;
      v36 = sub_1AFD830((__int64)a1, 104, a4, 1, (__int64)&v227, (__int64)&v197, (__int64)&v216);
      v23 = v139;
      v22 = v143;
      v145 = 1;
      if ( !v36 )
        goto LABEL_22;
LABEL_15:
      v141 = v22;
      v138 = v23;
      v24 = sub_B8E180(*(_QWORD *)(*a1 + 544));
      v25 = v138;
      v26 = v141;
      if ( v24 )
      {
        v67 = sub_EF6880((__int64)v14, a5, v187, a2, a3, a4, v145, 0);
      }
      else
      {
        v159 = v141;
        v142 = v227;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v227 + 16);
          v28 = sub_1B11600(a1, v27, 0x27u, 0, 1, a7, a8);
          v25 = v138;
          if ( v28 <= 1 )
          {
            v29 = sub_EEB7E0(a4, v27, *(double *)a7.m128_u64);
            sub_168B9F0((__int64)&v222, a1, v29, 0x121Du, 0);
            sub_15F7200(&v222);
            sub_168B9F0((__int64)&v222, a1, *v159, 0x1818u, 0);
            if ( v225 )
            {
              sub_AE9DF0(&v224, (__int64)"#pragma omp unroll full", 1u);
            }
            else if ( v226 )
            {
              sub_1B132F0((__int64)&v222, (__int64)"#pragma omp unroll full");
            }
            sub_15F7200(&v222);
            goto LABEL_22;
          }
        }
        if ( v145 )
        {
          v140 = v25;
          v198 = 0;
          sub_1AE75D0(a4, (__int64)&v198, 1);
          p_ptr = &ptr;
          ptr = &v221;
          v220 = 0x400000000LL;
          sub_1AF60D0(v14, v142, v198, *v216, *((unsigned int *)v216 + 2), (__int64)&ptr);
          v160 = *(_QWORD *)v142;
          v39 = **(_QWORD **)(v142 + 152);
          v40 = *((_DWORD **)v140 + 2);
          v146 = *(_QWORD *)(*(_QWORD *)v142 + 8LL);
          if ( v40 && (*v40 & 0x40000) == 0 )
          {
            v68 = *((_QWORD *)v140 + 2);
            v171 = **(_QWORD **)(v142 + 152);
            sub_C3EB00((__int64)&v222, (unsigned __int64)v40, (__int64)v14, nullptr, v38, v39);
            v69 = v171;
            v70 = v222.m128i_i64[0];
            if ( v222.m128i_i32[2] > 0x40u )
              v70 = *(_QWORD *)v222.m128i_i64[0];
            v172 = v70;
            v169 = v69;
            sub_98E4B0((__int64)&v222);
            v41 = sub_C00A40(v68, v68, v71, v72, v73);
            v39 = v169;
            v42 = v172;
          }
          else
          {
            v41 = 0;
            v42 = 2;
          }
          v200[1] = v42;
          v168 = v39;
          v200[2] = v146;
          v200[0] = a1;
          v201 = v41;
          v173 = sub_C00A40(v39, v146, v42, v37, v38);
          v185 = sub_16C50A0(v168);
          v188 = sub_BF7FE0(v168);
          v43 = *(_DWORD *)(v168 + 4);
          v44 = *(_QWORD *)(v168 + 16);
          v192 = (_QWORD *)v168;
          v45 = *(_QWORD *)(v44 + 40);
          v46 = *(_QWORD *)(v168 + 24);
          v222.m128i_i32[2] = v43;
          v222.m128i_i64[0] = v45;
          v223[0] = v46;
          sub_B87650((__int64)v202, v222.m128i_i64);
          v215 = 260;
          v212.m128i_i64[0] = (__int64)v202;
          v208.m128i_i64[0] = (__int64)".unrolled.iv.";
          v211 = 259;
          sub_A41580(&v222, &v208, &v212, v47, 259, (__int64)&v212);
          v190 = v204;
          sub_2253560(v204, &v222);
          v211 = 259;
          v212.m128i_i64[0] = (__int64)v202;
          v208.m128i_i64[0] = (__int64)".unroll_inner.iv.";
          v215 = 260;
          sub_A41580(&v222, &v208, &v212, v48, v49, 260);
          v191 = v205;
          sub_2253560(v205, &v222);
          v170 = sub_1AFE760((_QWORD *)*a1, 0, v146, v204[0], (size_t)v204[1], v168);
          v50 = *a1;
          v207 = v173;
          v51 = *(_QWORD *)(v50 + 240);
          v161 = *(_QWORD *)(v160 + 16);
          v206 = v146;
          *(_QWORD *)(v161 + 40) = sub_6F3470(v51 + 552, v205[0], (size_t)v205[1]);
          v52 = *a1;
          v209 = v146;
          v147 = v52;
          v210 = v173;
          v212 = (__m128i)(unsigned __int64)v52;
          v213 = 0;
          v214 = 0;
          v53 = (_QWORD *)sub_1AE9760(v52, v170, v206, v207);
          v57 = sub_19146F0(v147, v53, v54, v55, v147, v56, a7, a8);
          sub_17ED4C0(*a1, v161, v57 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
          v58 = sub_EEE9A0(24, v14, 8u);
          v59 = *(_WORD *)v58 & 0xFE00;
          LOBYTE(v59) = -11;
          *(_WORD *)v58 = v59;
          if ( unk_2CD7484 )
          {
            v149 = v58;
            sub_EE9B50(245);
            v58 = v149;
          }
          v148 = (_QWORD *)v58;
          *(_QWORD *)(v58 + 8) = v161;
          *(_DWORD *)(v58 + 16) = v185;
          *(_DWORD *)(v58 + 20) = v188;
          if ( v58 == 1 )
            goto LABEL_46;
          v174 = *a1;
          v194 = v200;
          v60 = (_QWORD *)sub_1AE6DA0((__int64)v200);
          v61 = *a1;
          v193 = (unsigned __int64)v60;
          v192 = (_QWORD *)sub_1AE9760(v61, v170, v206, v207);
          v65 = sub_C00A40(*(_QWORD *)(v142 + 40), v142, v62, v63, v64);
          v66 = (_QWORD *)sub_1929BB0(v174, v135, v65, 5u, (__int64)v192, (_QWORD *)v193, a7, a8, 0);
          if ( (unsigned __int64)v66 <= 1 )
            goto LABEL_46;
          v74 = *a1;
          v192 = v148;
          v193 = (unsigned __int64)v66;
          v175 = v74;
          v150 = sub_1AE9760(v74, v161, v209, v210);
          v78 = sub_C00A40(*(_QWORD *)(v142 + 40), v161, v75, v76, v77);
          v81 = sub_1929BB0(v175, v135, v78, 0xAu, v150, (_QWORD *)(v193 & 0xFFFFFFFFFFFFFFFELL), a7, a8, 0);
          if ( v81 <= 1
            || (v82 = *a1,
                v195 = v81,
                v193 = (unsigned __int64)v192,
                v151 = v82,
                v83 = sub_1B7CAD0(v212.m128i_i64, *(unsigned __int16 **)(v142 + 16), a7, a8, v133, v79, v80),
                v84 = *a1,
                v192 = (_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFELL),
                v176 = sub_1AE9760(v84, v161, v209, v210),
                v88 = sub_C00A40(*(_QWORD *)(v142 + 40), v161, v85, v86, v87),
                v89 = (_QWORD *)sub_1929BB0(v151, v135, v88, 0xAu, v176, v192, a7, a8, 0),
                v93 = v193,
                (unsigned __int64)v89 <= 1)
            || (v193 = (unsigned __int64)v89,
                v94 = *a1,
                v177 = (_QWORD *)v93,
                v95 = *(_QWORD *)(v142 + 40),
                v192 = (_QWORD *)v195,
                v152 = v94,
                v96 = sub_C00A40(v95, v142, v90, v91, v92),
                v153 = sub_1929BB0(
                         v152,
                         v135,
                         v96,
                         0x13u,
                         v195 & 0xFFFFFFFFFFFFFFFELL,
                         (_QWORD *)(v193 & 0xFFFFFFFFFFFFFFFELL),
                         a7,
                         a8,
                         0),
                v153 <= 1)
            || (v97 = *a1,
                v192 = v177,
                v98 = v161,
                v178 = v97,
                v162 = (_QWORD *)sub_1AE9760(v97, v161, v209, v210),
                v102 = sub_C00A40(*(_QWORD *)(v142 + 56), v98, v99, v100, v101),
                v179 = sub_1925670(v178, v135, v102, 2, v162, 0, a7, a8),
                v179 <= 1) )
          {
LABEL_46:
            v30 = 1;
          }
          else
          {
            v222.m128i_i64[0] = (__int64)v223;
            v222.m128i_i64[1] = 0x600000000LL;
            sub_1AF67E0(
              (__int64)&v222,
              *(unsigned __int64 **)(v142 + 296),
              *(_QWORD *)(v142 + 296) + 8LL * *(unsigned int *)(v142 + 304));
            v103 = v192;
            if ( (*(_WORD *)v198 & 0x1FF) == 0xFC )
            {
              sub_183F100((__int64)&v222, *(_QWORD *)(v198 + 56));
              v103 = v192;
            }
            v104 = v197;
            v196 = (unsigned __int64)v103;
            sub_183F100((__int64)&v222, v197);
            v163 = v197;
            LODWORD(v195) = sub_EEC140(v197);
            LODWORD(v193) = sub_EEB7E0(v163, v104, *(double *)a7.m128_u64);
            v192 = (_QWORD *)v222.m128i_i64[0];
            v164 = v222.m128i_u32[2];
            v105 = (_QWORD *)sub_168B6C0((__int64)a1);
            v165 = sub_EEF560(v105, v192, v164, 0, (unsigned int)v193, (unsigned int)v195);
            v192 = *(_QWORD **)(v142 + 48);
            LODWORD(v195) = sub_EEB7E0((unsigned __int64)v192, v142, *(double *)a7.m128_u64);
            LODWORD(v193) = sub_EEB7E0((unsigned __int64)v192, v142, *(double *)a7.m128_u64);
            LODWORD(v192) = sub_EEC140(*(_QWORD *)(v142 + 56));
            v132 = v165;
            v166 = sub_EEE9A0(56, v14, 8u);
            sub_EEF330(
              v166,
              v14,
              v196 & 0xFFFFFFFFFFFFFFFELL,
              v153 & 0xFFFFFFFFFFFFFFFELL,
              0,
              v179 & 0xFFFFFFFFFFFFFFFELL,
              v132,
              v195,
              v193,
              (int)v192);
            v106 = sub_1AE6DA0((__int64)v194);
            v199 = sub_B31B60((__int64)v14, 5, 2, v106, 0, 0);
            v107 = (_QWORD *)sub_168B6C0((__int64)a1);
            v167 = sub_EEEE70(v107, a5, &v199, 1, v166, v108);
            v154 = *a1;
            v112 = sub_C00A40(*(_QWORD *)(v142 + 48), v142, v109, v110, v111);
            v113 = sub_18C1B30(v154, v112, 0);
            sub_17ED4C0(v154, v170, v113 & 0xFFFFFFFFFFFFFFFELL, 0, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
            v116 = sub_EEE9A0(24, v14, 8u);
            v117 = *(_WORD *)v116 & 0xFE00;
            LOBYTE(v117) = -11;
            *(_WORD *)v116 = v117;
            if ( unk_2CD7484 )
            {
              v156 = v116;
              sub_EE9B50(245);
              v116 = v156;
            }
            v118 = v185;
            v186 = v116;
            *(_DWORD *)(v116 + 16) = v118;
            v119 = v188;
            *(_QWORD *)(v116 + 8) = v170;
            *(_DWORD *)(v116 + 20) = v119;
            if ( v116 == 1
              || (v155 = *a1,
                  v182 = (_QWORD *)(sub_1B7CAD0(
                                      v212.m128i_i64,
                                      *(unsigned __int16 **)(v142 + 16),
                                      a7,
                                      a8,
                                      v114,
                                      v142,
                                      v115)
                                  & 0xFFFFFFFFFFFFFFFELL),
                  v180 = sub_1AE9760(*a1, v170, v206, v207),
                  v122 = sub_C00A40(*(_QWORD *)(v142 + 40), v170, v120, v142, v121),
                  v181 = sub_1929BB0(v155, v135, v122, 0xAu, v180, v182, a7, a8, 0),
                  v181 <= 1)
              || (v157 = *a1,
                  v183 = (_QWORD *)sub_1AE6DA0((__int64)v194),
                  v123 = sub_1AE9760(*a1, v170, v206, v207),
                  v127 = sub_C00A40(*(_QWORD *)(v142 + 56), v142, v124, v125, v126),
                  v128 = v135,
                  v129 = sub_1929BB0(v157, v135, v127, 0x19u, v123, v183, a7, a8, 0),
                  v129 <= 1) )
            {
              v30 = 1;
            }
            else
            {
              v184 = v129;
              v130 = *(_QWORD *)(v142 + 48);
              v136 = sub_EEB7E0(v130, v135, *(double *)a7.m128_u64);
              v158 = sub_EEB7E0(v130, v128, *(double *)a7.m128_u64);
              v144 = sub_EEC140(*(_QWORD *)(v142 + 56));
              v131 = sub_EEE9A0(56, v14, 8u);
              sub_EEF330(
                v131,
                v14,
                v186 & 0xFFFFFFFFFFFFFFFELL,
                v181 & 0xFFFFFFFFFFFFFFFELL,
                0,
                v184 & 0xFFFFFFFFFFFFFFFELL,
                v167,
                v136,
                v158,
                v144);
              sub_1AEC4E0(v14, (__int64 *)ptr, (unsigned int)v220);
              v30 = sub_EF6880((__int64)v14, a5, v187, a2, a3, a4, 1, v131);
            }
            if ( (_QWORD *)v222.m128i_i64[0] != v223 )
              free((void *)v222.m128i_i64[0]);
          }
          operator delete(v212.m128i_i64[1], 16LL * v214, 8);
          if ( v205[0] != v191 + 2 )
            operator delete(v205[0]);
          if ( v204[0] != v190 + 2 )
            operator delete(v204[0]);
          if ( v202[0] != &v203 )
            operator delete(v202[0]);
          if ( ptr != p_ptr + 2 )
            free(ptr);
          goto LABEL_23;
        }
        v67 = sub_EF6880((__int64)v14, a5, v187, a2, a3, a4, 0, 0);
      }
      v30 = v67;
      goto LABEL_23;
    }
    v20 = *a2;
    v18 = a2 + 1;
LABEL_12:
    while ( v15 != v18 )
    {
      v16 = *v18++;
      if ( v16[2] == 79 )
        goto LABEL_36;
    }
  }
  v137 = v20;
  v227 = (__int64)v229;
  v228 = 0x100000000LL;
  v197 = 0;
  sub_1B50610((__int64)&v227, 1u);
  v216 = (void **)v218;
  v217 = 0x200000000LL;
  v21 = sub_1AFD830((__int64)a1, 104, a4, 1, (__int64)&v227, (__int64)&v197, (__int64)&v216);
  v22 = v137;
  if ( v21 )
  {
    v145 = 0;
    v23 = nullptr;
    goto LABEL_15;
  }
LABEL_22:
  v30 = 1;
LABEL_23:
  v31 = v216;
  v32 = &v216[2 * (unsigned int)v217];
  if ( v216 != v32 )
  {
    do
    {
      while ( 1 )
      {
        v32 -= 2;
        if ( *v32 == v32 + 2 )
          break;
        free(*v32);
        if ( v31 == v32 )
          goto LABEL_26;
      }
    }
    while ( v31 != v32 );
LABEL_26:
    v32 = v216;
  }
  if ( v32 != (void **)v218 )
    free(v32);
  v33 = (_QWORD *)v227;
  v34 = (_QWORD *)(v227 + 616LL * (unsigned int)v228);
  if ( (_QWORD *)v227 != v34 )
  {
    do
    {
      v34 -= 77;
      sub_1AF4340(v34);
    }
    while ( v33 != v34 );
    v34 = (_QWORD *)v227;
  }
  if ( v34 != (_QWORD *)v229 )
    free(v34);
  return v30;
}
