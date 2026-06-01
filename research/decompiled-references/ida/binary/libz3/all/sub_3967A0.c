__int64 __fastcall sub_3967A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 *v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  std::chrono::_V2::steady_clock *v8; // r12
  __int64 *v9; // r14
  __int64 v10; // r13
  void *v11; // r15
  __int64 *v12; // r13
  __int64 *v13; // r14
  __int64 v14; // rsi
  int v15; // r13d
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  std::chrono::_V2::steady_clock *v22; // r13
  bool v23; // zf
  int v24; // r14d
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // r13
  int *v27; // r9
  int *v28; // rax
  __int64 v29; // r13
  _QWORD *v30; // r14
  __int64 v31; // r12
  int *v32; // r9
  __int64 v33; // r12
  std::chrono::_V2::steady_clock *v34; // rdi
  double v35; // xmm0_8
  int v36; // ecx
  int v37; // r8d
  int v38; // r9d
  __int64 (__fastcall *v39)(__int64); // rdx
  __int64 (__fastcall *v40)(__int64); // rax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  __int64 (__fastcall *v45)(__int64); // rax
  __int64 (__fastcall *v46)(__int64); // rax
  __int64 v47; // r13
  int *v48; // r9
  int *v49; // rax
  __int64 v50; // r13
  __int64 v51; // r13
  int *v52; // r9
  int *v53; // rax
  __int64 v54; // r13
  __int64 v55; // r13
  int *v56; // rcx
  __int64 v57; // r13
  __int64 (__fastcall *v58)(__int64); // rax
  __int64 v59; // rsi
  __int64 (__fastcall *v60)(__int64); // rax
  char *v61; // r15
  __int64 v62; // r15
  __int64 v63; // rax
  _QWORD *v64; // rcx
  int *v65; // r8
  void *v66; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  _QWORD *v69; // rcx
  _QWORD *v70; // r8
  std::chrono::_V2::steady_clock *v71; // r13
  __int64 v72; // rax
  __int64 v73; // r13
  int *v74; // rcx
  __int64 (__fastcall *v75)(__int64); // rax
  __int64 (__fastcall *v76)(__int64); // rax
  __int64 v77; // rsi
  __int64 (__fastcall *v78)(__int64); // rax
  __int64 (__fastcall *v79)(__int64); // rax
  __int64 (__fastcall *v80)(__int64); // rax
  __int64 (__fastcall *v81)(__int64); // rax
  __int64 v82; // r13
  int *v83; // rcx
  __int64 v84; // r13
  __int64 v85; // r13
  int *v86; // rcx
  __int64 v87; // r13
  char *v88; // rcx
  __int64 v89; // r13
  __int64 v90; // rax
  __int64 v91; // r13
  __int64 (__fastcall *v92)(__int64); // rax
  __int64 (__fastcall *v93)(__int64); // rax
  std::ostream *v94; // rdx
  _BYTE *v95; // rdi
  char v96; // si
  std::ostream *v97; // rax
  unsigned int v98; // eax
  __int64 v99; // r13
  __int64 v100; // r13
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 v103; // r13
  __int64 v104; // r13
  unsigned int v105; // eax
  __int64 v106; // rax
  _QWORD *v107; // rcx
  int *v108; // r9
  int *v109; // r13
  __int64 v110; // rax
  __int64 *v111; // r9
  __int64 v112; // rcx
  __int64 v113; // rdi
  char v114; // al
  int *v115; // r9
  _QWORD *v116; // r9
  __int64 v117; // rax
  __int64 *v118; // r9
  __int64 *v119; // rcx
  __int64 v120; // rdi
  char v121; // al
  __int64 *v122; // r9
  __int64 *v123; // r9
  __int64 v124; // rax
  __int64 *v125; // r9
  __int64 v126; // rcx
  __int64 v127; // rdi
  char v128; // al
  int *v129; // r9
  __int64 *v130; // r9
  __int64 (__fastcall *v131)(__int64, unsigned int); // rax
  char v132; // al
  __int64 v133; // rax
  __int64 v134; // r13
  _QWORD *v135; // rax
  int *v136; // r8
  _QWORD *v137; // rdi
  _QWORD *v138; // rdi
  __int64 v139; // r13
  _QWORD *v140; // rax
  _QWORD *v141; // r8
  _QWORD *v142; // rdi
  _QWORD *v143; // rdi
  unsigned int v144; // eax
  __int64 v145; // r12
  __int64 v146; // r12
  unsigned int v147; // eax
  __int64 v148; // rax
  __int64 *v149; // rcx
  __int64 v150; // rdi
  unsigned int v151; // eax
  __int64 v152; // rax
  __int64 v153; // r13
  __int64 v154; // r13
  unsigned int v155; // eax
  __int64 v156; // rax
  __int64 *v157; // rcx
  int *v158; // rdi
  unsigned int v159; // eax
  __int64 v160; // rax
  __int64 v161; // r13
  __int64 v162; // r13
  unsigned int v163; // eax
  __int64 v164; // rax
  __int64 *v165; // rcx
  __int64 v166; // rdi
  __int64 *v167; // rcx
  __int64 v168; // rdi
  unsigned int v169; // eax
  __int64 v170; // rax
  __int64 v171; // r13
  __int64 v172; // r13
  unsigned int v173; // eax
  __int64 v174; // rax
  __int64 v175; // rax
  _QWORD *v176; // rax
  int *v177; // r9
  _QWORD *v178; // rdi
  _QWORD *v179; // rdi
  __int64 v180; // rax
  __int64 *v181; // r9
  _QWORD *v182; // rax
  _QWORD *v183; // rdi
  _QWORD *v184; // rdi
  __int64 v185; // rax
  __int64 *v186; // r9
  _QWORD *v187; // rax
  _QWORD *v188; // rdi
  _QWORD *v189; // rdi
  __int64 v190; // rax
  __int64 *v191; // r9
  _QWORD *v192; // rax
  _QWORD *v193; // rdi
  _QWORD *v194; // rdi
  unsigned int v195; // eax
  __int64 v196; // r13
  __int64 v197; // r13
  unsigned int v198; // eax
  __int64 *v199; // rcx
  __int64 v200; // rdi
  unsigned int v201; // eax
  int *v202; // r13
  __int64 v203; // r13
  __int64 v204; // rsi
  unsigned int v205; // eax
  __int64 v206; // r13
  __int64 v207; // r13
  unsigned int v208; // eax
  unsigned int v209; // eax
  __int64 v210; // rax
  __int64 *v211; // rax
  __int64 *v212; // rdi
  __int64 *v213; // rdi
  __int64 v214; // rax
  __int64 *v215; // rax
  __int64 *v216; // rdi
  __int64 *v217; // rdi
  __int64 v218; // rax
  __int64 *v219; // rax
  __int64 *v220; // rdi
  __int64 *v221; // rdi
  __int64 v222; // rax
  __int64 *v223; // rax
  __int64 *v224; // rdi
  __int64 *v225; // rdi
  unsigned int v226; // eax
  __int64 v227; // r13
  __int64 v228; // rax
  __int64 *v229; // rax
  __int64 *v230; // rdi
  __int64 *v231; // rdi
  _QWORD *exception; // rbx
  int v233; // [rsp+0h] [rbp-1A0h]
  __int64 *v234; // [rsp+8h] [rbp-198h]
  __int64 *v235; // [rsp+10h] [rbp-190h]
  _QWORD *v236; // [rsp+10h] [rbp-190h]
  _QWORD *v237; // [rsp+10h] [rbp-190h]
  _QWORD *v238; // [rsp+10h] [rbp-190h]
  _QWORD *v239; // [rsp+10h] [rbp-190h]
  _QWORD *v240; // [rsp+10h] [rbp-190h]
  _QWORD *v241; // [rsp+10h] [rbp-190h]
  int *v242; // [rsp+18h] [rbp-188h]
  __int64 *v243; // [rsp+18h] [rbp-188h]
  __int64 *v244; // [rsp+18h] [rbp-188h]
  __int64 *v245; // [rsp+18h] [rbp-188h]
  void *v246; // [rsp+18h] [rbp-188h]
  __int64 *v247; // [rsp+18h] [rbp-188h]
  void *v248; // [rsp+18h] [rbp-188h]
  __int64 *v249; // [rsp+18h] [rbp-188h]
  void *v250; // [rsp+18h] [rbp-188h]
  __int64 *v251; // [rsp+18h] [rbp-188h]
  int *v252; // [rsp+20h] [rbp-180h]
  char *v253; // [rsp+20h] [rbp-180h]
  int *v254; // [rsp+20h] [rbp-180h]
  _QWORD *v255; // [rsp+20h] [rbp-180h]
  _QWORD *v256; // [rsp+20h] [rbp-180h]
  int *v257; // [rsp+28h] [rbp-178h]
  int *v258; // [rsp+28h] [rbp-178h]
  int *v259; // [rsp+28h] [rbp-178h]
  int **v260; // [rsp+28h] [rbp-178h]
  int *v261; // [rsp+28h] [rbp-178h]
  void *v262; // [rsp+28h] [rbp-178h]
  void *v263; // [rsp+28h] [rbp-178h]
  void *v264; // [rsp+28h] [rbp-178h]
  void *v265; // [rsp+28h] [rbp-178h]
  int *v266; // [rsp+28h] [rbp-178h]
  char *v267; // [rsp+30h] [rbp-170h]
  _QWORD *v268; // [rsp+30h] [rbp-170h]
  _QWORD *v269; // [rsp+40h] [rbp-160h]
  _QWORD *v270; // [rsp+40h] [rbp-160h]
  int *v271; // [rsp+40h] [rbp-160h]
  int *v272; // [rsp+40h] [rbp-160h]
  _QWORD *v273; // [rsp+40h] [rbp-160h]
  _QWORD *v274; // [rsp+40h] [rbp-160h]
  _QWORD *v275; // [rsp+40h] [rbp-160h]
  _QWORD *v276; // [rsp+40h] [rbp-160h]
  __int64 v277; // [rsp+48h] [rbp-158h]
  __int64 v278; // [rsp+50h] [rbp-150h] BYREF
  __int64 v279; // [rsp+58h] [rbp-148h] BYREF
  int v280; // [rsp+60h] [rbp-140h] BYREF
  int v281; // [rsp+68h] [rbp-138h] BYREF
  int v282; // [rsp+70h] [rbp-130h] BYREF
  __int64 v283; // [rsp+78h] [rbp-128h] BYREF
  int v284; // [rsp+80h] [rbp-120h] BYREF
  __int64 v285; // [rsp+88h] [rbp-118h] BYREF
  int *v286; // [rsp+90h] [rbp-110h] BYREF
  void *v287; // [rsp+98h] [rbp-108h]
  __int128 v288; // [rsp+A0h] [rbp-100h]
  __int128 v289; // [rsp+B0h] [rbp-F0h]
  __int64 v290; // [rsp+C0h] [rbp-E0h]
  __int16 v291; // [rsp+C8h] [rbp-D8h]
  __int64 v292; // [rsp+D0h] [rbp-D0h]
  void *ptr[2]; // [rsp+E0h] [rbp-C0h] BYREF
  _BYTE v294[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v277 = a1;
  if ( !v3 )
  {
    exception = __cxa_allocate_exception(0x30u);
    sub_305660(exception, "invalid query command, argument expected");
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'cmd_exception, (void (*)(void *))sub_3053E0);
  }
  result = sub_396220(*(_QWORD **)(a1 + 56), v3);
  if ( !(_BYTE)result )
  {
    v5 = *(__int64 **)(a1 + 56);
    v6 = v5[4];
    sub_DFBCB0(v6);
    v7 = *(_QWORD *)(v6 + 296);
    v8 = (std::chrono::_V2::steady_clock *)v5[10];
    if ( !v8 )
    {
      v68 = sub_186B270(0xBD8u);
      v69 = (_QWORD *)*v5;
      v70 = v5 + 1;
      v8 = (std::chrono::_V2::steady_clock *)v68;
      if ( !*v5 )
      {
        ptr[0] = nullptr;
        v139 = sub_186B270(0x2F8u);
        sub_2527E0(v139, (__int64)ptr);
        v140 = (_QWORD *)*v5;
        v141 = v5 + 1;
        if ( v139 != *v5 )
        {
          if ( v140 )
          {
            v142 = (_QWORD *)v140[17];
            if ( v142 != v140 + 19 )
            {
              v273 = (_QWORD *)*v5;
              operator delete(v142, v140[19] + 1LL);
              v141 = v5 + 1;
              v140 = v273;
            }
            v143 = (_QWORD *)v140[13];
            if ( v143 != v140 + 15 )
            {
              v268 = v141;
              v274 = v140;
              operator delete(v143, v140[15] + 1LL);
              v141 = v268;
              v140 = v274;
            }
            v275 = v141;
            sub_186B220(v140);
            v141 = v275;
          }
          *v5 = v139;
        }
        v276 = v141;
        sub_18572D0(ptr);
        v69 = (_QWORD *)*v5;
        v70 = v276;
      }
      sub_64C8D0(v8, v7, v5 + 5, v69, v70);
      v71 = (std::chrono::_V2::steady_clock *)v5[10];
      if ( v8 != v71 )
      {
        if ( v71 )
        {
          sub_64D370(v5[10]);
          sub_186B220(v71);
        }
        v5[10] = (__int64)v8;
      }
    }
    if ( !v5[9] )
    {
      sub_180C5A0(&v286, "datalog_relation");
      if ( (unsigned __int8)sub_15D1480(v7 + 560, &v286) && (v98 = sub_15D1320(v7 + 560, &v286), sub_15D2690(v7, v98)) )
      {
        v99 = v5[4];
        sub_DFBCB0(v99);
        v100 = *(_QWORD *)(v99 + 296);
        v101 = sub_15DA4C0(v7 + 560, &v286);
        v5[9] = sub_15D2690(v100, v101);
      }
      else
      {
        v67 = sub_186B270(0xA0u);
        sub_1624E10(v67);
        v5[9] = v67;
        sub_180C5A0(ptr, "datalog_relation");
        sub_15DA890(v7, ptr, v67);
      }
      v8 = (std::chrono::_V2::steady_clock *)v5[10];
    }
    v9 = *(__int64 **)(v277 + 56);
    v10 = v9[4];
    sub_DFBCB0(v10);
    v11 = (void *)v9[10];
    v267 = *(char **)(v10 + 296);
    if ( !v11 )
    {
      v63 = sub_186B270(0xBD8u);
      v64 = (_QWORD *)*v9;
      v65 = (int *)(v9 + 1);
      v11 = (void *)v63;
      if ( !*v9 )
      {
        v133 = sub_186B270(0x2F8u);
        ptr[0] = nullptr;
        v134 = v133;
        sub_2527E0(v133, (__int64)ptr);
        v135 = (_QWORD *)*v9;
        v136 = (int *)(v9 + 1);
        if ( v134 != *v9 )
        {
          if ( v135 )
          {
            v137 = (_QWORD *)v135[17];
            if ( v137 != v135 + 19 )
            {
              v257 = (int *)(v9 + 1);
              v269 = (_QWORD *)*v9;
              operator delete(v137, v135[19] + 1LL);
              v136 = (int *)(v9 + 1);
              v135 = v269;
            }
            v138 = (_QWORD *)v135[13];
            if ( v138 != v135 + 15 )
            {
              v257 = v136;
              v270 = v135;
              operator delete(v138, v135[15] + 1LL);
              v136 = v257;
              v135 = v270;
            }
            v271 = v136;
            sub_186B220(v135);
            v136 = v271;
          }
          *v9 = v134;
        }
        v272 = v136;
        sub_18572D0(ptr);
        v64 = (_QWORD *)*v9;
        v65 = v272;
      }
      sub_64C8D0(v11, v267, v9 + 5, v64, v65);
      v66 = (void *)v9[10];
      if ( v11 != v66 )
      {
        if ( v66 )
        {
          sub_64D370(v9[10]);
          sub_186B220(v66);
        }
        v9[10] = (__int64)v11;
      }
    }
    if ( !v9[9] )
    {
      sub_180C5A0(&v286, "datalog_relation");
      v61 = v267 + 560;
      if ( (unsigned __int8)sub_15D1480(v267 + 560, &v286) && (v102 = sub_15D1320(v61, &v286), sub_15D2690(v267, v102)) )
      {
        v103 = v9[4];
        sub_DFBCB0(v103);
        v104 = *(_QWORD *)(v103 + 296);
        v105 = sub_15DA4C0(v61, &v286);
        v9[9] = sub_15D2690(v104, v105);
      }
      else
      {
        v62 = sub_186B270(0xA0u);
        sub_1624E10(v62);
        v9[9] = v62;
        sub_180C5A0(ptr, "datalog_relation");
        sub_15DA890(v267, ptr, v62);
      }
      v11 = (void *)v9[10];
    }
    v12 = *(__int64 **)(a2 + 760);
    if ( v12 )
    {
      v13 = &v12[*((unsigned int *)v12 - 1)];
      while ( v13 != v12 )
      {
        v14 = *v12++;
        sub_64F1A0(v11, v14);
      }
    }
    sub_64C4C0(v8, v277 + 40);
    v15 = *(_DWORD *)(a2 + 116);
    v16 = *(_DWORD *)(a2 + 112);
    sub_DFBCB0(a2);
    v17 = *(_QWORD *)(a2 + 296);
    LODWORD(v287) = 0;
    v286 = &off_1C4C9C8;
    v290 = 0;
    v291 = 0;
    v292 = v17;
    v288 = 0;
    v289 = 0;
    if ( (unsigned int)sub_180B130(a2) > 9 )
    {
      if ( (unsigned __int8)sub_186A530() )
      {
        sub_186A4C0();
        v18 = sub_180B150(a2, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
        sub_186A500(v18, "(query)\n");
      }
      else
      {
        sub_180B150(a2, 0);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
    }
    sub_18086F0(ptr, &v286, 1);
    sub_18561B0((unsigned int)&v285, v15, (unsigned int)&v286, v19, v20, v21);
    sub_DFBCB0(a2);
    v22 = *(std::chrono::_V2::steady_clock **)(a2 + 296);
    sub_1829790(v22, v16);
    v23 = *(_BYTE *)(a2 + 904) == 0;
    *(_QWORD *)(a2 + 896) = 0;
    if ( v23 )
    {
      v43 = std::chrono::_V2::steady_clock::now(v22);
      *(_BYTE *)(a2 + 904) = 1;
      *(_QWORD *)(a2 + 888) = v43;
    }
    v24 = sub_654540(v8, 1, v277 + 64);
    if ( *(_BYTE *)(a2 + 904) )
    {
      v42 = std::chrono::_V2::steady_clock::now(v8);
      *(_BYTE *)(a2 + 904) = 0;
      *(_QWORD *)(a2 + 896) += v42 - *(_QWORD *)(a2 + 888);
    }
    sub_1829100(v22);
    sub_1856400(&v285);
    sub_1808900(ptr);
    if ( v24 )
    {
      if ( v24 != 1 )
      {
        if ( v24 != -1 )
          goto LABEL_26;
        v25 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v25 != sub_305010 )
          v25(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        v26 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
        v257 = *(int **)(v277 + 56);
        sub_DFBCB0(v26);
        v27 = v257;
        v28 = *(int **)(v26 + 296);
        v29 = *((_QWORD *)v257 + 10);
        v252 = v28;
        if ( !v29 )
        {
          v117 = sub_186B270(0xBD8u);
          v118 = (__int64 *)v257;
          v29 = v117;
          v119 = *(__int64 **)v257;
          v257 += 2;
          if ( !v119 )
          {
            v235 = v118;
            v185 = sub_186B270(0x2F8u);
            ptr[0] = nullptr;
            v248 = (void *)v185;
            sub_2527E0(v185, (__int64)ptr);
            v186 = v235;
            v187 = (_QWORD *)*v235;
            if ( v248 != (void *)*v235 )
            {
              if ( v187 )
              {
                v188 = (_QWORD *)v187[17];
                if ( v188 != v187 + 19 )
                {
                  v234 = v235;
                  v238 = (_QWORD *)*v235;
                  operator delete(v188, v187[19] + 1LL);
                  v186 = v234;
                  v187 = v238;
                }
                v189 = (_QWORD *)v187[13];
                if ( v189 != v187 + 15 )
                {
                  v234 = v186;
                  v239 = v187;
                  operator delete(v189, v187[15] + 1LL);
                  v186 = v234;
                  v187 = v239;
                }
                v235 = v186;
                sub_186B220(v187);
                v186 = v235;
              }
              *v186 = (__int64)v248;
            }
            v249 = v186;
            sub_18572D0(ptr);
            v118 = v249;
            v119 = (__int64 *)*v249;
          }
          v242 = (int *)v118;
          sub_64C8D0(v29, v252, v118 + 5, v119, v257);
          v27 = v242;
          v120 = *((_QWORD *)v242 + 10);
          if ( v29 != v120 )
          {
            if ( v120 )
            {
              v257 = *((int **)v242 + 10);
              sub_64D370(v120);
              sub_186B220(v257);
              v27 = v242;
            }
            *((_QWORD *)v27 + 10) = v29;
          }
        }
        if ( !*((_QWORD *)v27 + 9) )
        {
          v257 = v27;
          sub_180C5A0(ptr, "datalog_relation");
          v242 = v252 + 140;
          v114 = sub_15D1480(v252 + 140, ptr);
          v115 = v257;
          if ( v114 && (v151 = sub_15D1320(v242, ptr), v152 = sub_15D2690(v252, v151), v115 = v257, v152) )
          {
            v153 = *((_QWORD *)v257 + 4);
            sub_DFBCB0(v153);
            v154 = *(_QWORD *)(v153 + 296);
            v155 = sub_15DA4C0(v242, ptr);
            v156 = sub_15D2690(v154, v155);
            v116 = v257;
            *((_QWORD *)v257 + 9) = v156;
          }
          else
          {
            v243 = (__int64 *)v115;
            v257 = (int *)sub_186B270(0xA0u);
            sub_1624E10(v257);
            v243[9] = (__int64)v257;
            v235 = v243;
            v242 = (int *)&v278;
            sub_180C5A0(&v278, "datalog_relation");
            sub_15DA890(v252, &v278, v257);
            v116 = v235;
          }
          v29 = v116[10];
        }
        if ( !(unsigned __int8)sub_1859630(**(_QWORD **)(v29 + 32), "print_certificate", *(_QWORD *)(v29 + 32) + 8LL, 0) )
          goto LABEL_26;
        v73 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
        v257 = *(int **)(v277 + 56);
        sub_DFBCB0(v73);
        v74 = *(int **)(v73 + 296);
        v57 = *((_QWORD *)v257 + 10);
        v252 = v74;
        if ( !v57 )
        {
          v57 = sub_186B270(0xBD8u);
          v235 = (__int64 *)(v257 + 2);
          v149 = *(__int64 **)v257;
          if ( !*(_QWORD *)v257 )
          {
            v214 = sub_186B270(0x2F8u);
            ptr[0] = nullptr;
            v242 = (int *)v214;
            sub_2527E0(v214, (__int64)ptr);
            v215 = *(__int64 **)v257;
            if ( v242 != *(int **)v257 )
            {
              if ( v215 )
              {
                v216 = (__int64 *)v215[17];
                if ( v216 != v215 + 19 )
                {
                  v234 = *(__int64 **)v257;
                  operator delete(v216, v215[19] + 1);
                  v215 = v234;
                }
                v217 = (__int64 *)v215[13];
                if ( v217 != v215 + 15 )
                {
                  v234 = v215;
                  operator delete(v217, v215[15] + 1);
                  v215 = v234;
                }
                sub_186B220(v215);
              }
              *(_QWORD *)v257 = v242;
            }
            sub_18572D0(ptr);
            v149 = *(__int64 **)v257;
          }
          sub_64C8D0(v57, v252, v257 + 10, v149, v235);
          v150 = *((_QWORD *)v257 + 10);
          if ( v57 != v150 )
          {
            if ( v150 )
            {
              v242 = *((int **)v257 + 10);
              sub_64D370(v150);
              sub_186B220(v242);
            }
            *((_QWORD *)v257 + 10) = v57;
          }
        }
        if ( *((_QWORD *)v257 + 9) )
        {
LABEL_56:
          v58 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
          if ( v58 == sub_305010 )
            v59 = *(_QWORD *)(a2 + 408);
          else
            v59 = v58(a2);
          sub_6546B0(v57, v59);
          v60 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
          if ( v60 != sub_305010 )
            v60(a2);
          std::__ostream_insert<char,std::char_traits<char>>();
LABEL_26:
          sub_64C5F0(v8);
          if ( *(_BYTE *)(a2 + 194) )
          {
            *(_OWORD *)ptr = 0;
            v30 = *(_QWORD **)(v277 + 56);
            v31 = v30[4];
            sub_DFBCB0(v31);
            v32 = (int *)v30[10];
            v33 = *(_QWORD *)(v31 + 296);
            if ( !v32 )
            {
              v106 = sub_186B270(0xBD8u);
              v107 = (_QWORD *)*v30;
              v108 = (int *)v106;
              if ( !*v30 )
              {
                v252 = (int *)v106;
                v175 = sub_186B270(0x2F8u);
                v285 = 0;
                v265 = (void *)v175;
                sub_2527E0(v175, (__int64)&v285);
                v176 = (_QWORD *)*v30;
                v177 = v252;
                if ( v265 != (void *)*v30 )
                {
                  if ( v176 )
                  {
                    v178 = (_QWORD *)v176[17];
                    if ( v178 != v176 + 19 )
                    {
                      v242 = v252;
                      v255 = (_QWORD *)*v30;
                      operator delete(v178, v176[19] + 1LL);
                      v177 = v242;
                      v176 = v255;
                    }
                    v179 = (_QWORD *)v176[13];
                    if ( v179 != v176 + 15 )
                    {
                      v242 = v177;
                      v256 = v176;
                      operator delete(v179, v176[15] + 1LL);
                      v177 = v242;
                      v176 = v256;
                    }
                    v252 = v177;
                    sub_186B220(v176);
                    v177 = v252;
                  }
                  *v30 = v265;
                }
                v266 = v177;
                sub_18572D0(&v285);
                v107 = (_QWORD *)*v30;
                v108 = v266;
              }
              v257 = v108;
              sub_64C8D0(v108, v33, v30 + 5, v107, v30 + 1);
              v32 = v257;
              v109 = (int *)v30[10];
              if ( v257 != v109 )
              {
                if ( v109 )
                {
                  sub_64D370(v30[10]);
                  sub_186B220(v109);
                  v32 = v257;
                }
                v30[10] = v32;
              }
            }
            if ( !v30[9] )
            {
              v257 = &v284;
              sub_180C5A0(&v284, "datalog_relation");
              v252 = (int *)(v33 + 560);
              if ( (unsigned __int8)sub_15D1480(v33 + 560, &v284)
                && (v144 = sub_15D1320(v252, &v284), sub_15D2690(v33, v144)) )
              {
                v145 = v30[4];
                sub_DFBCB0(v145);
                v146 = *(_QWORD *)(v145 + 296);
                v147 = sub_15DA4C0(v252, &v284);
                v30[9] = sub_15D2690(v146, v147);
              }
              else
              {
                v257 = (int *)sub_186B270(0xA0u);
                sub_1624E10(v257);
                v30[9] = v257;
                sub_180C5A0(&v285, "datalog_relation");
                sub_15DA890(v33, &v285, v257);
              }
              v32 = (int *)v30[10];
            }
            v34 = (std::chrono::_V2::steady_clock *)v32;
            sub_64C770(v32, ptr);
            if ( *(_BYTE *)(a2 + 904) )
            {
              *(_QWORD *)(a2 + 896) += std::chrono::_V2::steady_clock::now(v34) - *(_QWORD *)(a2 + 888);
              *(_BYTE *)(a2 + 904) = 0;
              v72 = std::chrono::_V2::steady_clock::now(v34);
              *(_BYTE *)(a2 + 904) = 1;
              *(_QWORD *)(a2 + 888) = v72;
            }
            v35 = (double)(int)(*(_QWORD *)(a2 + 896) / 1000000LL) / 1000.0;
            sub_1818270(ptr, "time");
            v39 = sub_305010;
            v40 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v40 == sub_305010 )
              v41 = *(_QWORD *)(a2 + 408);
            else
              LODWORD(v41) = ((__int64 (__fastcall *)(__int64, double))v40)(a2, v35);
            sub_1816A00(
              (int)ptr,
              v41,
              (int)v39,
              v36,
              v37,
              v38,
              v233,
              v234,
              (int)v235,
              (int)v242,
              (int)v252,
              v257,
              (int)&v285,
              (int)ptr,
              (int)&v286,
              v277,
              v278,
              v279,
              v280,
              v281,
              v282,
              v283,
              v284,
              v285,
              (int)v286,
              v287);
            if ( ptr[1] )
              sub_186B220((char *)ptr[1] - 8);
            if ( ptr[0] )
              sub_186B220((char *)ptr[0] - 8);
          }
          v286 = &off_1C4C9C8;
          *(_QWORD *)(v277 + 64) = 0;
          result = (unsigned __int8)v291;
          if ( (_BYTE)v291 )
            result = sub_18296D0(v292);
          if ( HIBYTE(v291) )
            sub_1829760(v292);
          return result;
        }
        sub_180C5A0(ptr, "datalog_relation");
        v242 = v252 + 140;
        if ( !(unsigned __int8)sub_15D1480(v252 + 140, ptr) || (v205 = sub_15D1320(v242, ptr), !sub_15D2690(v252, v205)) )
        {
          v242 = (int *)sub_186B270(0xA0u);
          sub_1624E10(v242);
          *((_QWORD *)v257 + 9) = v242;
          v235 = &v279;
          sub_180C5A0(&v279, "datalog_relation");
          sub_15DA890(v252, &v279, v242);
          goto LABEL_82;
        }
        goto LABEL_269;
      }
      v46 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v46 != sub_305010 )
        v46(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v47 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
      v258 = *(int **)(v277 + 56);
      sub_DFBCB0(v47);
      v48 = v258;
      v49 = *(int **)(v47 + 296);
      v50 = *((_QWORD *)v258 + 10);
      v252 = v49;
      if ( !v50 )
      {
        v124 = sub_186B270(0xBD8u);
        v125 = (__int64 *)v258;
        v50 = v124;
        v126 = *(_QWORD *)v258;
        v263 = v258 + 2;
        if ( !v126 )
        {
          v235 = v125;
          v190 = sub_186B270(0x2F8u);
          ptr[0] = nullptr;
          v250 = (void *)v190;
          sub_2527E0(v190, (__int64)ptr);
          v191 = v235;
          v192 = (_QWORD *)*v235;
          if ( v250 != (void *)*v235 )
          {
            if ( v192 )
            {
              v193 = (_QWORD *)v192[17];
              if ( v193 != v192 + 19 )
              {
                v234 = v235;
                v240 = (_QWORD *)*v235;
                operator delete(v193, v192[19] + 1LL);
                v191 = v234;
                v192 = v240;
              }
              v194 = (_QWORD *)v192[13];
              if ( v194 != v192 + 15 )
              {
                v234 = v191;
                v241 = v192;
                operator delete(v194, v192[15] + 1LL);
                v191 = v234;
                v192 = v241;
              }
              v235 = v191;
              sub_186B220(v192);
              v191 = v235;
            }
            *v191 = (__int64)v250;
          }
          v251 = v191;
          sub_18572D0(ptr);
          v125 = v251;
          v126 = *v251;
        }
        v242 = (int *)v125;
        sub_64C8D0(v50, v252, v125 + 5, v126, v263);
        v48 = v242;
        v127 = *((_QWORD *)v242 + 10);
        if ( v50 != v127 )
        {
          if ( v127 )
          {
            v264 = *((void **)v242 + 10);
            sub_64D370(v127);
            sub_186B220(v264);
            v48 = v242;
          }
          *((_QWORD *)v48 + 10) = v50;
        }
      }
      if ( !*((_QWORD *)v48 + 9) )
      {
        v261 = v48;
        sub_180C5A0(ptr, "datalog_relation");
        v242 = v252 + 140;
        v121 = sub_15D1480(v252 + 140, ptr);
        v122 = (__int64 *)v261;
        if ( v121 && (v169 = sub_15D1320(v242, ptr), v170 = sub_15D2690(v252, v169), v122 = (__int64 *)v261, v170) )
        {
          v171 = *((_QWORD *)v261 + 4);
          sub_DFBCB0(v171);
          v172 = *(_QWORD *)(v171 + 296);
          v173 = sub_15DA4C0(v242, ptr);
          v174 = sub_15D2690(v172, v173);
          v123 = (__int64 *)v261;
          *((_QWORD *)v261 + 9) = v174;
        }
        else
        {
          v244 = v122;
          v262 = (void *)sub_186B270(0xA0u);
          sub_1624E10(v262);
          v244[9] = (__int64)v262;
          v235 = v244;
          v242 = &v280;
          sub_180C5A0(&v280, "datalog_relation");
          sub_15DA890(v252, &v280, v262);
          v123 = v235;
        }
        v50 = v123[10];
      }
      if ( (unsigned __int8)sub_1859630(**(_QWORD **)(v50 + 32), "print_answer", *(_QWORD *)(v50 + 32) + 8LL, 0) )
      {
        v87 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
        v260 = *(int ***)(v277 + 56);
        sub_DFBCB0(v87);
        v88 = *(char **)(v87 + 296);
        v89 = (__int64)v260[10];
        v253 = v88;
        if ( !v89 )
        {
          v89 = sub_186B270(0xBD8u);
          v235 = (__int64 *)(v260 + 1);
          v157 = (__int64 *)*v260;
          if ( !*v260 )
          {
            v222 = sub_186B270(0x2F8u);
            ptr[0] = nullptr;
            v242 = (int *)v222;
            sub_2527E0(v222, (__int64)ptr);
            v223 = (__int64 *)*v260;
            if ( v242 != *v260 )
            {
              if ( v223 )
              {
                v224 = (__int64 *)v223[17];
                if ( v224 != v223 + 19 )
                {
                  v234 = (__int64 *)*v260;
                  operator delete(v224, v223[19] + 1);
                  v223 = v234;
                }
                v225 = (__int64 *)v223[13];
                if ( v225 != v223 + 15 )
                {
                  v234 = v223;
                  operator delete(v225, v223[15] + 1);
                  v223 = v234;
                }
                sub_186B220(v223);
              }
              *v260 = v242;
            }
            sub_18572D0(ptr);
            v157 = (__int64 *)*v260;
          }
          sub_64C8D0(v89, v253, v260 + 5, v157, v235);
          v158 = v260[10];
          if ( (int *)v89 != v158 )
          {
            if ( v158 )
            {
              v242 = v260[10];
              sub_64D370(v158);
              sub_186B220(v242);
            }
            v260[10] = (int *)v89;
          }
        }
        if ( !v260[9] )
        {
          sub_180C5A0(ptr, "datalog_relation");
          v242 = (int *)(v253 + 560);
          if ( (unsigned __int8)sub_15D1480(v253 + 560, ptr) && (v201 = sub_15D1320(v242, ptr), sub_15D2690(v253, v201)) )
          {
            v202 = v260[4];
            sub_DFBCB0(v202);
            v203 = *((_QWORD *)v202 + 37);
            v204 = (unsigned int)sub_15DA4C0(v242, ptr);
            v260[9] = (int *)sub_15D2690(v203, v204);
          }
          else
          {
            v242 = (int *)sub_186B270(0xA0u);
            sub_1624E10(v242);
            v260[9] = v242;
            v235 = (__int64 *)&v281;
            sub_180C5A0(&v281, "datalog_relation");
            sub_15DA890(v253, &v281, v242);
          }
          v89 = (__int64)v260[10];
        }
        sub_DFBCB0(a2);
        v252 = *(int **)(a2 + 296);
        v90 = sub_6545A0(v89);
        v91 = v90;
        if ( v90 )
          ++*(_DWORD *)(v90 + 8);
        ptr[0] = v294;
        ptr[1] = (void *)0x1000000000LL;
        v92 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v92 == sub_305010 )
        {
          (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, const char *, void **))(*(_QWORD *)a2 + 96LL))(
            a2,
            *(_QWORD *)(a2 + 408),
            v91,
            0,
            0,
            "X",
            ptr);
        }
        else
        {
          v242 = *(int **)(*(_QWORD *)a2 + 96LL);
          v148 = v92(a2);
          ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, _QWORD, const char *, void **))v242)(
            a2,
            v148,
            v91,
            0,
            0,
            "X",
            ptr);
        }
        v93 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
        if ( v93 == sub_305010 )
          v94 = *(std::ostream **)(a2 + 408);
        else
          v94 = (std::ostream *)v93(a2);
        v95 = *(_BYTE **)((char *)v94 + *(_QWORD *)(*(_QWORD *)v94 - 24LL) + 240);
        if ( !v95 )
          std::__throw_bad_cast();
        if ( v95[56] )
        {
          v96 = v95[67];
        }
        else
        {
          v235 = (__int64 *)v94;
          LODWORD(v242) = *(_QWORD *)((char *)v94 + *(_QWORD *)(*(_QWORD *)v94 - 24LL) + 240);
          std::ctype<char>::_M_widen_init();
          v96 = 10;
          v94 = (std::ostream *)v235;
          v131 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v95 + 48LL);
          if ( v131 != sub_26BE90 )
          {
            LODWORD(v242) = (_DWORD)v235;
            v132 = v131((__int64)v95, 10u);
            v94 = (std::ostream *)v235;
            v96 = v132;
          }
        }
        v97 = (std::ostream *)std::ostream::put(v94, v96);
        std::ostream::flush(v97);
        if ( ptr[0] != v294 && ptr[0] )
          sub_186B220(ptr[0]);
        if ( v91 )
        {
          v23 = (*(_DWORD *)(v91 + 8))-- == 1;
          if ( v23 )
            sub_15D7BC0(v252, v91);
        }
      }
      v51 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
      v259 = *(int **)(v277 + 56);
      sub_DFBCB0(v51);
      v52 = v259;
      v53 = *(int **)(v51 + 296);
      v54 = *((_QWORD *)v259 + 10);
      v257 = v53;
      if ( !v54 )
      {
        v254 = v52;
        v110 = sub_186B270(0xBD8u);
        v111 = (__int64 *)v254;
        v54 = v110;
        v112 = *(_QWORD *)v254;
        v252 = v254 + 2;
        if ( !v112 )
        {
          v235 = v111;
          v180 = sub_186B270(0x2F8u);
          ptr[0] = nullptr;
          v246 = (void *)v180;
          sub_2527E0(v180, (__int64)ptr);
          v181 = v235;
          v182 = (_QWORD *)*v235;
          if ( v246 != (void *)*v235 )
          {
            if ( v182 )
            {
              v183 = (_QWORD *)v182[17];
              if ( v183 != v182 + 19 )
              {
                v234 = v235;
                v236 = (_QWORD *)*v235;
                operator delete(v183, v182[19] + 1LL);
                v181 = v234;
                v182 = v236;
              }
              v184 = (_QWORD *)v182[13];
              if ( v184 != v182 + 15 )
              {
                v234 = v181;
                v237 = v182;
                operator delete(v184, v182[15] + 1LL);
                v181 = v234;
                v182 = v237;
              }
              v235 = v181;
              sub_186B220(v182);
              v181 = v235;
            }
            *v181 = (__int64)v246;
          }
          v247 = v181;
          sub_18572D0(ptr);
          v111 = v247;
          v112 = *v247;
        }
        v242 = (int *)v111;
        sub_64C8D0(v54, v257, v111 + 5, v112, v252);
        v52 = v242;
        v113 = *((_QWORD *)v242 + 10);
        if ( v54 != v113 )
        {
          if ( v113 )
          {
            v252 = *((int **)v242 + 10);
            sub_64D370(v113);
            sub_186B220(v252);
            v52 = v242;
          }
          *((_QWORD *)v52 + 10) = v54;
        }
      }
      if ( !*((_QWORD *)v52 + 9) )
      {
        v252 = v52;
        sub_180C5A0(ptr, "datalog_relation");
        v242 = v257 + 140;
        v128 = sub_15D1480(v257 + 140, ptr);
        v129 = v252;
        if ( v128 && (v159 = sub_15D1320(v242, ptr), v160 = sub_15D2690(v257, v159), v129 = v252, v160) )
        {
          v161 = *((_QWORD *)v252 + 4);
          v257 = v252;
          sub_DFBCB0(v161);
          v162 = *(_QWORD *)(v161 + 296);
          v163 = sub_15DA4C0(v242, ptr);
          v164 = sub_15D2690(v162, v163);
          v130 = (__int64 *)v252;
          *((_QWORD *)v252 + 9) = v164;
        }
        else
        {
          v245 = (__int64 *)v129;
          v252 = (int *)sub_186B270(0xA0u);
          sub_1624E10(v252);
          v245[9] = (__int64)v252;
          v235 = v245;
          v242 = &v282;
          sub_180C5A0(&v282, "datalog_relation");
          sub_15DA890(v257, &v282, v252);
          v130 = v235;
        }
        v54 = v130[10];
      }
      if ( !(unsigned __int8)sub_1859630(**(_QWORD **)(v54 + 32), "print_certificate", *(_QWORD *)(v54 + 32) + 8LL, 0) )
        goto LABEL_26;
      v55 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
      v257 = *(int **)(v277 + 56);
      sub_DFBCB0(v55);
      v56 = *(int **)(v55 + 296);
      v57 = *((_QWORD *)v257 + 10);
      v252 = v56;
      if ( !v57 )
      {
        v57 = sub_186B270(0xBD8u);
        v235 = (__int64 *)(v257 + 2);
        v165 = *(__int64 **)v257;
        if ( !*(_QWORD *)v257 )
        {
          v218 = sub_186B270(0x2F8u);
          ptr[0] = nullptr;
          v242 = (int *)v218;
          sub_2527E0(v218, (__int64)ptr);
          v219 = *(__int64 **)v257;
          if ( v242 != *(int **)v257 )
          {
            if ( v219 )
            {
              v220 = (__int64 *)v219[17];
              if ( v220 != v219 + 19 )
              {
                v234 = *(__int64 **)v257;
                operator delete(v220, v219[19] + 1);
                v219 = v234;
              }
              v221 = (__int64 *)v219[13];
              if ( v221 != v219 + 15 )
              {
                v234 = v219;
                operator delete(v221, v219[15] + 1);
                v219 = v234;
              }
              sub_186B220(v219);
            }
            *(_QWORD *)v257 = v242;
          }
          sub_18572D0(ptr);
          v165 = *(__int64 **)v257;
        }
        sub_64C8D0(v57, v252, v257 + 10, v165, v235);
        v166 = *((_QWORD *)v257 + 10);
        if ( v57 != v166 )
        {
          if ( v166 )
          {
            v242 = *((int **)v257 + 10);
            sub_64D370(v166);
            sub_186B220(v242);
          }
          *((_QWORD *)v257 + 10) = v57;
        }
      }
      if ( *((_QWORD *)v257 + 9) )
        goto LABEL_56;
      sub_180C5A0(ptr, "datalog_relation");
      v242 = v252 + 140;
      if ( (unsigned __int8)sub_15D1480(v252 + 140, ptr) )
      {
        v209 = sub_15D1320(v242, ptr);
        if ( sub_15D2690(v252, v209) )
        {
LABEL_269:
          v206 = *((_QWORD *)v257 + 4);
          sub_DFBCB0(v206);
          v207 = *(_QWORD *)(v206 + 296);
          v208 = sub_15DA4C0(v242, ptr);
LABEL_270:
          *((_QWORD *)v257 + 9) = sub_15D2690(v207, v208);
          goto LABEL_82;
        }
      }
      v242 = (int *)sub_186B270(0xA0u);
      sub_1624E10(v242);
      *((_QWORD *)v257 + 9) = v242;
      v235 = &v283;
      sub_180C5A0(&v283, "datalog_relation");
      sub_15DA890(v252, &v283, v242);
    }
    else
    {
      v44 = sub_64C7C0(v8);
      v45 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
      if ( v44 != 5 )
      {
        if ( v45 != sub_305010 )
          v45(a2);
        std::__ostream_insert<char,std::char_traits<char>>();
        switch ( sub_64C7C0(v8) )
        {
          case 0LL:
            goto LABEL_26;
          case 1LL:
            v81 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v81 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v81)(a2, "unknown\n");
            goto LABEL_99;
          case 2LL:
            v80 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v80 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v80)(a2, "unknown\n");
            goto LABEL_99;
          case 3LL:
            v79 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v79 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v79)(a2, "unknown\n");
            goto LABEL_99;
          case 4LL:
            v78 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v78 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v78)(a2, "unknown\n");
LABEL_99:
            std::__ostream_insert<char,std::char_traits<char>>();
            break;
          case 6LL:
            v75 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v75 != sub_305010 )
              ((void (__fastcall *)(__int64, const char *))v75)(a2, "unknown\n");
            std::__ostream_insert<char,std::char_traits<char>>();
            v76 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL);
            if ( v76 == sub_305010 )
              v77 = *(_QWORD *)(a2 + 408);
            else
              v77 = ((__int64 (__fastcall *)(__int64, const char *))v76)(a2, "canceled\n");
            sub_64C690(v8, v77);
            break;
          default:
            sub_1872CE0("");
            sub_1873130(114, 316);
        }
        goto LABEL_26;
      }
      if ( v45 != sub_305010 )
        v45(a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v82 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
      v257 = *(int **)(v277 + 56);
      sub_DFBCB0(v82);
      v83 = *(int **)(v82 + 296);
      v84 = *((_QWORD *)v257 + 10);
      v252 = v83;
      if ( !v84 )
      {
        v84 = sub_186B270(0xBD8u);
        v235 = (__int64 *)(v257 + 2);
        v167 = *(__int64 **)v257;
        if ( !*(_QWORD *)v257 )
        {
          v210 = sub_186B270(0x2F8u);
          ptr[0] = nullptr;
          v242 = (int *)v210;
          sub_2527E0(v210, (__int64)ptr);
          v211 = *(__int64 **)v257;
          if ( v242 != *(int **)v257 )
          {
            if ( v211 )
            {
              v212 = (__int64 *)v211[17];
              if ( v212 != v211 + 19 )
              {
                v234 = *(__int64 **)v257;
                operator delete(v212, v211[19] + 1);
                v211 = v234;
              }
              v213 = (__int64 *)v211[13];
              if ( v213 != v211 + 15 )
              {
                v234 = v211;
                operator delete(v213, v211[15] + 1);
                v211 = v234;
              }
              sub_186B220(v211);
            }
            *(_QWORD *)v257 = v242;
          }
          sub_18572D0(ptr);
          v167 = *(__int64 **)v257;
        }
        sub_64C8D0(v84, v252, v257 + 10, v167, v235);
        v168 = *((_QWORD *)v257 + 10);
        if ( v84 != v168 )
        {
          if ( v168 )
          {
            v242 = *((int **)v257 + 10);
            sub_64D370(v168);
            sub_186B220(v242);
          }
          *((_QWORD *)v257 + 10) = v84;
        }
      }
      if ( !*((_QWORD *)v257 + 9) )
      {
        sub_180C5A0(ptr, "datalog_relation");
        v242 = v252 + 140;
        if ( (unsigned __int8)sub_15D1480(v252 + 140, ptr) && (v195 = sub_15D1320(v242, ptr), sub_15D2690(v252, v195)) )
        {
          v196 = *((_QWORD *)v257 + 4);
          sub_DFBCB0(v196);
          v197 = *(_QWORD *)(v196 + 296);
          v198 = sub_15DA4C0(v242, ptr);
          *((_QWORD *)v257 + 9) = sub_15D2690(v197, v198);
        }
        else
        {
          v242 = (int *)sub_186B270(0xA0u);
          sub_1624E10(v242);
          *((_QWORD *)v257 + 9) = v242;
          sub_180C5A0(&v284, "datalog_relation");
          sub_15DA890(v252, &v284, v242);
        }
        v84 = *((_QWORD *)v257 + 10);
      }
      if ( !(unsigned __int8)sub_1859630(**(_QWORD **)(v84 + 32), "print_certificate", *(_QWORD *)(v84 + 32) + 8LL, 0) )
        goto LABEL_26;
      v85 = *(_QWORD *)(*(_QWORD *)(v277 + 56) + 32LL);
      v257 = *(int **)(v277 + 56);
      sub_DFBCB0(v85);
      v86 = *(int **)(v85 + 296);
      v57 = *((_QWORD *)v257 + 10);
      v252 = v86;
      if ( !v57 )
      {
        v57 = sub_186B270(0xBD8u);
        v235 = (__int64 *)(v257 + 2);
        v199 = *(__int64 **)v257;
        if ( !*(_QWORD *)v257 )
        {
          v228 = sub_186B270(0x2F8u);
          ptr[0] = nullptr;
          v242 = (int *)v228;
          sub_2527E0(v228, (__int64)ptr);
          v229 = *(__int64 **)v257;
          if ( v242 != *(int **)v257 )
          {
            if ( v229 )
            {
              v230 = (__int64 *)v229[17];
              if ( v230 != v229 + 19 )
              {
                v234 = *(__int64 **)v257;
                operator delete(v230, v229[19] + 1);
                v229 = v234;
              }
              v231 = (__int64 *)v229[13];
              if ( v231 != v229 + 15 )
              {
                v234 = v229;
                operator delete(v231, v229[15] + 1);
                v229 = v234;
              }
              sub_186B220(v229);
            }
            *(_QWORD *)v257 = v242;
          }
          sub_18572D0(ptr);
          v199 = *(__int64 **)v257;
        }
        sub_64C8D0(v57, v252, v257 + 10, v199, v235);
        v200 = *((_QWORD *)v257 + 10);
        if ( v57 != v200 )
        {
          if ( v200 )
          {
            v242 = *((int **)v257 + 10);
            sub_64D370(v200);
            sub_186B220(v242);
          }
          *((_QWORD *)v257 + 10) = v57;
        }
      }
      if ( *((_QWORD *)v257 + 9) )
        goto LABEL_56;
      sub_180C5A0(&v285, "datalog_relation");
      v242 = v252 + 140;
      if ( (unsigned __int8)sub_15D1480(v252 + 140, &v285) )
      {
        v226 = sub_15D1320(v242, &v285);
        if ( sub_15D2690(v252, v226) )
        {
          v227 = *((_QWORD *)v257 + 4);
          sub_DFBCB0(v227);
          v207 = *(_QWORD *)(v227 + 296);
          v208 = sub_15DA4C0(v242, &v285);
          goto LABEL_270;
        }
      }
      v242 = (int *)sub_186B270(0xA0u);
      sub_1624E10(v242);
      *((_QWORD *)v257 + 9) = v242;
      sub_180C5A0(ptr, "datalog_relation");
      sub_15DA890(v252, ptr, v242);
    }
LABEL_82:
    v57 = *((_QWORD *)v257 + 10);
    goto LABEL_56;
  }
  return result;
}

