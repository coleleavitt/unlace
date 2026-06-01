__int64 __fastcall sub_E34F40(__int64 *a1, _QWORD *a2, __int64 a3, __int64 *a4)
{
  __m128i *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ecx
  __m128i **v10; // rbp
  int v11; // r8d
  unsigned int v12; // r10d
  __int64 v13; // r11
  __m128i *v14; // r9
  __int64 v15; // rax
  __m128i *v16; // rsi
  __int64 v17; // rdi
  __m128i *i; // rax
  __int64 v19; // rdx
  __m128i **v20; // r13
  __m128i **v21; // r14
  bool v22; // zf
  __int64 v23; // rax
  _QWORD *v24; // r14
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __m128i **v28; // rdx
  __m128i *v29; // r13
  __int64 v30; // rax
  __m128i *v31; // r13
  unsigned int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __m128i **v35; // rdx
  _DWORD *v36; // rax
  unsigned int v37; // esi
  _QWORD *v38; // rcx
  __m128i **v39; // rax
  unsigned int v40; // esi
  _QWORD *v41; // r13
  __int64 v42; // rax
  __int64 v43; // r14
  char *v44; // rax
  int *v45; // rdi
  unsigned __int64 v46; // rax
  __int64 v47; // rdx
  __m128i *n; // rax
  __int64 v49; // rdx
  __m128i **v50; // r13
  __m128i **v51; // r14
  __m128i *v52; // rsi
  __int64 *v53; // rbp
  unsigned __int64 v54; // r13
  __int64 v55; // rsi
  _BYTE *v56; // rdi
  char *v57; // rcx
  char *v58; // rax
  __int64 v59; // rdx
  __int64 result; // rax
  __int64 v61; // r13
  __int64 v62; // rsi
  __int64 v63; // rdi
  __int64 v64; // rdx
  __m128i *j; // rax
  __int64 v66; // rdx
  _DWORD *v67; // rdx
  unsigned int v68; // ecx
  __int64 v69; // rax
  __m128i *k; // rax
  __int64 v71; // rdx
  _DWORD *v72; // rcx
  unsigned int v73; // eax
  __int64 v74; // rdx
  int v75; // eax
  __m128i **v76; // rdx
  unsigned int v77; // edx
  unsigned int v78; // ecx
  __int64 v79; // rax
  __int64 v80; // rdx
  unsigned int v81; // eax
  __int64 v82; // rcx
  int v83; // eax
  __int64 *v84; // rcx
  __int64 v85; // rdx
  char **exception; // r14
  __int64 v87; // rdx
  int v88; // eax
  __int64 v89; // rdx
  __int64 *v90; // rcx
  __int64 *v91; // r14
  __int64 v92; // r13
  int v93; // eax
  __int64 v94; // rax
  unsigned int v95; // r14d
  int v96; // ecx
  __m128i v97; // xmm0
  __int64 v98; // rax
  __m128i *v99; // rsi
  __m128i *v100; // rax
  __m128i *v101; // rdi
  __int64 v102; // rdx
  __int64 v103; // rdx
  int v104; // edx
  __int64 v105; // rax
  __int64 v106; // r13
  unsigned int v107; // eax
  __int64 *v108; // rcx
  int v109; // edx
  unsigned int v110; // r13d
  unsigned int v111; // ecx
  unsigned int *v112; // rax
  __int64 v113; // rcx
  unsigned int v114; // edx
  unsigned int v115; // ecx
  __int64 v116; // rax
  _DWORD *v117; // rdi
  unsigned int v118; // edx
  unsigned int v119; // ecx
  __int64 v120; // rax
  _QWORD *v121; // rbp
  __int64 v122; // rax
  __m128i *v123; // rcx
  __m128i *v124; // rdx
  __m128i *v125; // rax
  int v126; // edi
  const __m128i *v127; // r14
  __int64 v128; // rdx
  __m128i *v129; // rsi
  __m128i *v130; // rdx
  __int64 v131; // r13
  _DWORD *v132; // rax
  int v133; // r14d
  int v134; // eax
  int v135; // r8d
  _BYTE *v136; // rdi
  char *v137; // rcx
  char *v138; // rax
  __int64 v139; // rdx
  unsigned int v140; // eax
  __int64 v141; // rdx
  _DWORD *v142; // rcx
  int v143; // eax
  __int64 v144; // rsi
  __int64 *v145; // rdx
  __int64 v146; // rdi
  __int64 v147; // rax
  unsigned int v148; // edx
  unsigned int v149; // ecx
  _DWORD *v150; // rax
  __int64 v151; // rax
  __m128i **v152; // r14
  __m128i **v153; // r13
  __m128i *v154; // rsi
  _QWORD *v155; // rbp
  _QWORD *v156; // rax
  _QWORD *v157; // rbp
  unsigned int v158; // r14d
  unsigned int v159; // edx
  unsigned int *v160; // rax
  __int64 v161; // rdx
  int v162; // eax
  __int64 v163; // rax
  __int64 v164; // r13
  char **v165; // r14
  __int64 v166; // rdx
  _QWORD *v167; // rax
  __int64 v168; // rax
  __int64 v169; // r13
  __int64 v170; // rsi
  __int64 v171; // rdi
  int *v172; // rdi
  __int64 v173; // r13
  unsigned int v174; // r14d
  __int64 *m128i_i64; // rdx
  __int64 *v176; // rcx
  __int64 v177; // rsi
  __int64 v178; // rax
  __int64 v179; // rdx
  unsigned __int64 v180; // rax
  _QWORD *v181; // rax
  __int64 v182; // rax
  unsigned int v183; // edx
  int v184; // eax
  unsigned int v185; // r14d
  unsigned int v186; // eax
  unsigned int *v187; // rax
  _QWORD *v188; // rax
  char **v189; // r15
  __int64 v190; // rdx
  char **v191; // r14
  __int64 v192; // rdx
  char **v193; // r14
  __int64 v194; // rdx
  char **v195; // r14
  __int64 v196; // rdx
  char **v197; // r15
  __int64 v198; // rdx
  char **v199; // r14
  __int64 v200; // rdx
  char **v201; // r14
  __int64 v202; // rdx
  int v203; // [rsp+0h] [rbp-2D8h]
  __int64 v204; // [rsp+8h] [rbp-2D0h]
  __int64 v205; // [rsp+10h] [rbp-2C8h]
  __int64 *v206; // [rsp+18h] [rbp-2C0h]
  int v207; // [rsp+18h] [rbp-2C0h]
  __int64 *v208; // [rsp+20h] [rbp-2B8h]
  _QWORD *v209; // [rsp+28h] [rbp-2B0h]
  __int64 *p_ptr; // [rsp+30h] [rbp-2A8h]
  _BYTE *v211; // [rsp+38h] [rbp-2A0h]
  int v212[2]; // [rsp+40h] [rbp-298h]
  int *v213; // [rsp+40h] [rbp-298h]
  int v214[2]; // [rsp+40h] [rbp-298h]
  int v215[2]; // [rsp+40h] [rbp-298h]
  int v216[2]; // [rsp+40h] [rbp-298h]
  int v217[2]; // [rsp+40h] [rbp-298h]
  int v218[2]; // [rsp+40h] [rbp-298h]
  int v219[2]; // [rsp+40h] [rbp-298h]
  int v220[2]; // [rsp+40h] [rbp-298h]
  int v221[2]; // [rsp+40h] [rbp-298h]
  int v222[2]; // [rsp+40h] [rbp-298h]
  int v223[2]; // [rsp+40h] [rbp-298h]
  int v224[2]; // [rsp+40h] [rbp-298h]
  int v225[2]; // [rsp+40h] [rbp-298h]
  int v226[2]; // [rsp+40h] [rbp-298h]
  int v227[2]; // [rsp+40h] [rbp-298h]
  int v228[2]; // [rsp+40h] [rbp-298h]
  int v229[2]; // [rsp+40h] [rbp-298h]
  unsigned int v230; // [rsp+48h] [rbp-290h]
  _QWORD *v231; // [rsp+48h] [rbp-290h]
  int v232; // [rsp+48h] [rbp-290h]
  __int64 *v233; // [rsp+48h] [rbp-290h]
  const __m128i *v234; // [rsp+48h] [rbp-290h]
  void *v235; // [rsp+48h] [rbp-290h]
  _BYTE *v236; // [rsp+48h] [rbp-290h]
  __m128i *v237; // [rsp+48h] [rbp-290h]
  __m128i *v238; // [rsp+48h] [rbp-290h]
  __m128i *v239; // [rsp+48h] [rbp-290h]
  __m128i *v240; // [rsp+48h] [rbp-290h]
  __m128i *v241; // [rsp+48h] [rbp-290h]
  __m128i *v242; // [rsp+48h] [rbp-290h]
  int v243; // [rsp+48h] [rbp-290h]
  __m128i *v244; // [rsp+48h] [rbp-290h]
  __m128i *v245; // [rsp+48h] [rbp-290h]
  __m128i *v246; // [rsp+48h] [rbp-290h]
  void *v247; // [rsp+48h] [rbp-290h]
  int v248[2]; // [rsp+50h] [rbp-288h]
  char v249; // [rsp+50h] [rbp-288h]
  int v250[2]; // [rsp+50h] [rbp-288h]
  unsigned int v251; // [rsp+50h] [rbp-288h]
  int v252[2]; // [rsp+50h] [rbp-288h]
  unsigned int v253; // [rsp+50h] [rbp-288h]
  unsigned int v254; // [rsp+50h] [rbp-288h]
  int v255[2]; // [rsp+50h] [rbp-288h]
  int v256[2]; // [rsp+50h] [rbp-288h]
  unsigned int v257; // [rsp+50h] [rbp-288h]
  unsigned int v258; // [rsp+50h] [rbp-288h]
  unsigned int v259; // [rsp+50h] [rbp-288h]
  int v260[2]; // [rsp+50h] [rbp-288h]
  int v261[2]; // [rsp+50h] [rbp-288h]
  int v262[2]; // [rsp+50h] [rbp-288h]
  int v263[2]; // [rsp+50h] [rbp-288h]
  _QWORD *v264; // [rsp+58h] [rbp-280h]
  int m; // [rsp+60h] [rbp-278h]
  unsigned int v266; // [rsp+64h] [rbp-274h]
  void *v267; // [rsp+68h] [rbp-270h]
  __int64 v268; // [rsp+70h] [rbp-268h]
  __int64 v269; // [rsp+78h] [rbp-260h]
  __int64 v270; // [rsp+80h] [rbp-258h]
  __int64 v271; // [rsp+88h] [rbp-250h]
  __m128i *v272; // [rsp+90h] [rbp-248h]
  int v273; // [rsp+98h] [rbp-240h]
  int v274; // [rsp+9Ch] [rbp-23Ch]
  int v275; // [rsp+9Ch] [rbp-23Ch]
  int v276; // [rsp+9Ch] [rbp-23Ch]
  int v277; // [rsp+A0h] [rbp-238h]
  __int64 v278; // [rsp+A8h] [rbp-230h] BYREF
  _QWORD *v279; // [rsp+B0h] [rbp-228h]
  __int64 v280; // [rsp+B8h] [rbp-220h]
  __int64 v281; // [rsp+C0h] [rbp-218h] BYREF
  _QWORD *v282; // [rsp+C8h] [rbp-210h]
  int v283; // [rsp+D0h] [rbp-208h]
  int v284; // [rsp+D8h] [rbp-200h]
  _QWORD *v285; // [rsp+E0h] [rbp-1F8h] BYREF
  int v286; // [rsp+E8h] [rbp-1F0h]
  __int16 v287; // [rsp+ECh] [rbp-1ECh]
  int v288; // [rsp+F0h] [rbp-1E8h]
  void *v289; // [rsp+F8h] [rbp-1E0h]
  __int128 v290; // [rsp+108h] [rbp-1D0h]
  __int128 v291; // [rsp+118h] [rbp-1C0h]
  void *v292; // [rsp+128h] [rbp-1B0h]
  __int64 v293; // [rsp+130h] [rbp-1A8h]
  _BYTE v294[136]; // [rsp+138h] [rbp-1A0h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-118h] BYREF
  __int64 v296; // [rsp+1C8h] [rbp-110h]
  int v297[6]; // [rsp+1D0h] [rbp-108h] BYREF
  __int128 v298; // [rsp+1E8h] [rbp-F0h]
  __int128 v299; // [rsp+1F8h] [rbp-E0h]
  void *v300; // [rsp+208h] [rbp-D0h]
  __int64 v301; // [rsp+210h] [rbp-C8h]
  _BYTE v302[192]; // [rsp+218h] [rbp-C0h] BYREF

  v206 = a1;
  v208 = a4;
  v6 = (__m128i *)sub_186B270(0x80u);
  *v6 = 0;
  v6[1] = 0;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[6] = 0;
  v6[7] = 0;
  ptr = nullptr;
  v286 = 256;
  v211 = v294;
  v292 = v294;
  v285 = a2;
  v293 = 0x1000000000LL;
  v264 = &v285;
  v287 = 0;
  HIDWORD(v289) = 0;
  p_ptr = (__int64 *)&ptr;
  v290 = 0;
  v291 = 0;
  sub_14DC230(&v285, &ptr);
  sub_18572D0(&ptr);
  v7 = (_QWORD *)sub_186B270(0x18u);
  v7[1] = a3;
  *v7 = 0x100000002LL;
  v204 = (__int64)(v7 + 1);
  v8 = sub_15E1A70((int)a2);
  v205 = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  v279 = a2;
  v209 = nullptr;
  v9 = *(_DWORD *)(a3 + 12);
  v10 = nullptr;
  v11 = 7;
  LODWORD(v267) = 0;
  v273 = 0;
  v266 = 8;
  *(_QWORD *)v212 = 8;
LABEL_4:
  while ( 1 )
  {
    m = v11;
    v12 = *(_DWORD *)(v204 - 4);
    v13 = 16LL * *(_QWORD *)v212;
    v14 = &v6[*(_QWORD *)v212];
    v15 = 16LL * (v11 & v9);
    v16 = &v6[(unsigned __int64)v15 / 0x10];
    if ( !v12 )
      break;
    v17 = v12 - 1;
    if ( v15 != v13 )
    {
      for ( i = &v6[(unsigned __int64)v15 / 0x10]; i != v14; ++i )
      {
        v19 = i->m128i_i64[0];
        if ( i->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v19 + 12) == v9 && v19 == a3 )
          {
LABEL_117:
            *(_DWORD *)(v204 - 4) = v17;
            goto LABEL_4;
          }
        }
        else if ( !v19 )
        {
          goto LABEL_12;
        }
      }
    }
    if ( v6 != v16 )
    {
      for ( j = v6; j != v16; ++j )
      {
        v66 = j->m128i_i64[0];
        if ( j->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v66 + 12) == v9 && v66 == a3 )
            goto LABEL_117;
        }
        else if ( !v66 )
        {
          break;
        }
      }
    }
LABEL_12:
    v268 = *(_QWORD *)(v204 + 8 * v17);
    if ( v10 )
    {
      v20 = v10;
      v21 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 < v21 )
      {
        do
        {
          while ( 1 )
          {
            v16 = *v20;
            if ( *v20 )
            {
              v22 = v16->m128i_i32[2]-- == 1;
              if ( v22 )
                break;
            }
            if ( ++v20 >= v21 )
              goto LABEL_19;
          }
          LODWORD(v270) = v11;
          v269 = (__int64)v14;
          *(_QWORD *)v248 = v13;
          v230 = v12;
          sub_15D7BC0(a2, v16);
          ++v20;
          v12 = v230;
          v13 = *(_QWORD *)v248;
          v14 = (__m128i *)v269;
          v11 = v270;
        }
        while ( v20 < v21 );
      }
LABEL_19:
      *((_DWORD *)v10 - 1) = 0;
      v23 = *(unsigned int *)(v268 + 24);
      if ( !(_DWORD)v23 )
      {
        if ( v12 >= *(_DWORD *)(v204 - 4) )
        {
LABEL_244:
          ++*(_DWORD *)(v268 + 8);
          v92 = v268;
          goto LABEL_174;
        }
LABEL_291:
        *((_DWORD *)v10 - 1) = 0;
        v9 = *(_DWORD *)(a3 + 12);
        continue;
      }
    }
    else
    {
      v23 = *(unsigned int *)(*(_QWORD *)(v204 + 8 * v17) + 24LL);
      if ( !(_DWORD)v23 )
        goto LABEL_244;
    }
    v249 = 0;
    v24 = (_QWORD *)v268;
    v231 = (_QWORD *)(v268 + 8 * v23);
    while ( 1 )
    {
LABEL_28:
      v29 = (__m128i *)v24[4];
      v30 = *v206;
      if ( v29 == (__m128i *)*v206 )
      {
        v31 = (__m128i *)a2[107];
        if ( v31 )
          ++v31->m128i_i32[2];
        if ( !v10 )
          goto LABEL_215;
        v32 = *((_DWORD *)v10 - 1);
        if ( v32 == *((_DWORD *)v10 - 2) )
        {
          v77 = (3 * v32 + 1) >> 1;
          v78 = 8 * v77 + 8;
          if ( 8 * v32 + 8 >= v78 || v32 >= v77 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v87);
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, p_ptr);
            sub_233E40((__int64)p_ptr);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_146:
          v16 = (__m128i *)v78;
          LODWORD(v272) = v11;
          v271 = (__int64)v14;
          v270 = v13;
          LODWORD(v269) = v77;
          v251 = v12;
          v79 = sub_186B300(v10 - 1, v78);
          v10 = (__m128i **)(v79 + 8);
          v12 = v251;
          v13 = v270;
          v14 = (__m128i *)v271;
          *(_DWORD *)v79 = v269;
          v11 = (int)v272;
          LODWORD(v79) = *(_DWORD *)(v79 + 4);
          v35 = &v10[(unsigned int)v79];
          v34 = v79 + 1;
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      if ( (__m128i *)v205 != v29 )
        break;
      v31 = (__m128i *)a2[108];
      if ( v31 )
        ++v31->m128i_i32[2];
      if ( !v10 )
      {
LABEL_215:
        LODWORD(v271) = v11;
        v270 = (__int64)v14;
        v269 = v13;
        v254 = v12;
        v121 = (_QWORD *)sub_186B270(0x18u);
        v12 = v254;
        *v121 = 2;
        v34 = 1;
        v10 = (__m128i **)(v121 + 1);
        v13 = v269;
        v14 = (__m128i *)v270;
        v11 = v271;
        v35 = v10;
        goto LABEL_34;
      }
      v32 = *((_DWORD *)v10 - 1);
      if ( v32 == *((_DWORD *)v10 - 2) )
      {
        v77 = (3 * v32 + 1) >> 1;
        v78 = 8 * v77 + 8;
        if ( 8 * v32 + 8 >= v78 || v32 >= v77 )
        {
          v199 = (char **)__cxa_allocate_exception(0x28u);
          sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v200);
          *v199 = (char *)off_1C63128;
          sub_2333C0(v199 + 1, p_ptr);
          sub_233E40((__int64)p_ptr);
          __cxa_throw(v199, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_146;
      }
LABEL_33:
      v33 = v32;
      v34 = v32 + 1;
      v35 = &v10[v33];
LABEL_34:
      *v35 = v31;
      ++v24;
      *((_DWORD *)v10 - 1) = v34;
      v249 = 1;
      if ( v24 == v231 )
        goto LABEL_35;
    }
    if ( v29->m128i_i16[2] )
    {
      ++v29->m128i_i32[2];
      if ( v10 )
      {
        v25 = *((_DWORD *)v10 - 1);
        if ( v25 == *((_DWORD *)v10 - 2) )
        {
          v118 = (3 * v25 + 1) >> 1;
          v119 = 8 * v118 + 8;
          if ( 8 * v25 + 8 >= v119 || v25 >= v118 )
          {
            v191 = (char **)__cxa_allocate_exception(0x28u);
            sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v192);
            *v191 = (char *)off_1C63128;
            sub_2333C0(v191 + 1, p_ptr);
            sub_233E40((__int64)p_ptr);
            __cxa_throw(v191, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (__m128i *)v119;
          v276 = v11;
          v272 = v14;
          v271 = v13;
          LODWORD(v270) = (3 * v25 + 1) >> 1;
          LODWORD(v269) = v12;
          v120 = sub_186B300(v10 - 1, v119);
          v10 = (__m128i **)(v120 + 8);
          v12 = v269;
          v13 = v271;
          v14 = v272;
          *(_DWORD *)v120 = v270;
          v11 = v276;
          LODWORD(v120) = *(_DWORD *)(v120 + 4);
          v28 = &v10[(unsigned int)v120];
          v27 = v120 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v10[v26];
        }
      }
      else
      {
        LODWORD(v272) = v11;
        v271 = (__int64)v14;
        v270 = v13;
        LODWORD(v269) = v12;
        v157 = (_QWORD *)sub_186B270(0x18u);
        *v157 = 2;
        v12 = v269;
        v27 = 1;
        v10 = (__m128i **)(v157 + 1);
        v13 = v270;
        v14 = (__m128i *)v271;
        v11 = (int)v272;
        v28 = v10;
      }
      *v28 = v29;
      *((_DWORD *)v10 - 1) = v27;
      goto LABEL_27;
    }
    v67 = *(_DWORD **)(v29[1].m128i_i64[0] + 24);
    if ( v67 && !*v67 )
    {
      v104 = v67[1];
      if ( v104 == 14 )
      {
        if ( v29[1].m128i_i32[2] != 1 || v30 != v29[2].m128i_i64[0] )
          goto LABEL_129;
        LODWORD(v272) = v11;
        v271 = (__int64)v14;
        v270 = v13;
        LODWORD(v269) = 1;
        v257 = v12;
        v147 = sub_15DE010(a2, v16);
        v12 = v257;
        v106 = v147;
        v13 = v270;
        v14 = (__m128i *)v271;
        v11 = (int)v272;
        if ( v147 )
          ++*(_DWORD *)(v147 + 8);
        if ( v10 )
        {
          v107 = *((_DWORD *)v10 - 1);
          if ( v107 == *((_DWORD *)v10 - 2) )
          {
            v148 = (3 * v107 + 1) >> 1;
            v149 = 8 * v148 + 8;
            if ( 8 * v107 + 8 >= v149 || v107 >= v148 )
            {
              v201 = (char **)__cxa_allocate_exception(0x28u);
              sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v202);
              *v201 = (char *)off_1C63128;
              sub_2333C0(v201 + 1, p_ptr);
              sub_233E40((__int64)p_ptr);
              __cxa_throw(v201, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            goto LABEL_282;
          }
LABEL_200:
          v108 = (__int64 *)&v10[v107];
          v109 = v107 + 1;
LABEL_201:
          *v108 = v106;
          *((_DWORD *)v10 - 1) = v109;
          v249 = 1;
          goto LABEL_27;
        }
      }
      else
      {
        if ( v104 != 34 || v29[1].m128i_i32[2] != 1 || v30 != v29[2].m128i_i64[0] )
          goto LABEL_129;
        LODWORD(v272) = v11;
        v271 = (__int64)v14;
        v270 = v13;
        LODWORD(v269) = 1;
        v253 = v12;
        v105 = sub_15DE010(a2, v16);
        v12 = v253;
        v106 = v105;
        v13 = v270;
        v14 = (__m128i *)v271;
        v11 = (int)v272;
        if ( v105 )
          ++*(_DWORD *)(v105 + 8);
        if ( v10 )
        {
          v107 = *((_DWORD *)v10 - 1);
          if ( v107 != *((_DWORD *)v10 - 2) )
            goto LABEL_200;
          v148 = (3 * v107 + 1) >> 1;
          v149 = 8 * v148 + 8;
          if ( 8 * v107 + 8 >= v149 || v107 >= v148 )
          {
            v165 = (char **)__cxa_allocate_exception(0x28u);
            sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v166);
            *v165 = (char *)off_1C63128;
            sub_2333C0(v165 + 1, p_ptr);
            sub_233E40((__int64)p_ptr);
            __cxa_throw(v165, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
LABEL_282:
          v16 = (__m128i *)v149;
          LODWORD(v272) = v11;
          v271 = (__int64)v14;
          v270 = v13;
          LODWORD(v269) = v148;
          v258 = v12;
          v150 = (_DWORD *)sub_186B300(v10 - 1, v149);
          v10 = (__m128i **)(v150 + 2);
          v12 = v258;
          v13 = v270;
          v14 = (__m128i *)v271;
          *v150 = v269;
          v151 = (unsigned int)v150[1];
          v11 = (int)v272;
          v108 = (__int64 *)&v10[v151];
          v109 = v151 + 1;
          goto LABEL_201;
        }
      }
      LODWORD(v272) = v11;
      v271 = (__int64)v14;
      v270 = v13;
      LODWORD(v269) = 1;
      v259 = v12;
      v167 = (_QWORD *)sub_186B270(0x18u);
      *v167 = 2;
      v109 = 1;
      v10 = (__m128i **)(v167 + 1);
      v12 = v259;
      v13 = v270;
      v14 = (__m128i *)v271;
      v11 = (int)v272;
      v108 = v167 + 1;
      goto LABEL_201;
    }
LABEL_129:
    v68 = v29->m128i_u32[3];
    v69 = 16LL * (v11 & v68);
    v16 = &v6[(unsigned __int64)v69 / 0x10];
    if ( v69 == v13 )
    {
LABEL_153:
      if ( v16 != v6 )
      {
        for ( k = v6; v16 != k; ++k )
        {
          v85 = k->m128i_i64[0];
          if ( k->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v85 + 12) == v68 && v29 == (__m128i *)v85 )
              goto LABEL_147;
          }
          else if ( !v85 )
          {
            break;
          }
        }
      }
LABEL_136:
      if ( v204 )
      {
        v72 = (_DWORD *)v204;
        v73 = *(_DWORD *)(v204 - 4);
        if ( v73 == *(_DWORD *)(v204 - 8) )
        {
          v114 = (3 * v73 + 1) >> 1;
          v115 = 8 * v114 + 8;
          if ( 8 * v73 + 8 >= v115 || v73 >= v114 )
          {
            v193 = (char **)__cxa_allocate_exception(0x28u);
            sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v194);
            *v193 = (char *)off_1C63128;
            sub_2333C0(v193 + 1, p_ptr);
            sub_233E40((__int64)p_ptr);
            __cxa_throw(v193, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v16 = (__m128i *)v115;
          v275 = v11;
          v272 = v14;
          v271 = v13;
          LODWORD(v270) = (3 * v73 + 1) >> 1;
          LODWORD(v269) = v12;
          v116 = sub_186B300((void *)(v204 - 8), v115);
          v117 = (_DWORD *)(v116 + 8);
          v12 = v269;
          v204 = v116 + 8;
          v13 = v271;
          v72 = (_DWORD *)(v116 + 8);
          *(_DWORD *)v116 = v270;
          v14 = v272;
          v11 = v275;
          LODWORD(v116) = *(_DWORD *)(v116 + 4);
          v76 = (__m128i **)&v117[2 * (unsigned int)v116];
          v75 = v116 + 1;
        }
        else
        {
          v74 = v73;
          v75 = v73 + 1;
          v76 = (__m128i **)(v204 + 8 * v74);
        }
      }
      else
      {
        LODWORD(v272) = v11;
        v271 = (__int64)v14;
        v270 = v13;
        LODWORD(v269) = v12;
        v156 = (_QWORD *)sub_186B270(0x18u);
        *v156 = 2;
        v12 = v269;
        v204 = (__int64)(v156 + 1);
        v76 = (__m128i **)(v156 + 1);
        v13 = v270;
        v75 = 1;
        v14 = (__m128i *)v271;
        v11 = (int)v272;
        v72 = (_DWORD *)v204;
      }
      *v76 = v29;
      *(v72 - 1) = v75;
      goto LABEL_27;
    }
    k = &v6[(unsigned __int64)v69 / 0x10];
    while ( 2 )
    {
      v71 = k->m128i_i64[0];
      if ( k->m128i_i64[0] <= 1uLL )
      {
        if ( !v71 )
          goto LABEL_136;
        goto LABEL_133;
      }
      if ( *(_DWORD *)(v71 + 12) != v68 || v29 != (__m128i *)v71 )
      {
LABEL_133:
        if ( ++k == v14 )
          goto LABEL_153;
        continue;
      }
      break;
    }
LABEL_147:
    v80 = k->m128i_i64[1];
    v249 |= v29 != (__m128i *)v80;
    if ( v80 )
      ++*(_DWORD *)(v80 + 8);
    if ( v10 )
    {
      v81 = *((_DWORD *)v10 - 1);
      if ( v81 != *((_DWORD *)v10 - 2) )
      {
        v82 = v81;
        v83 = v81 + 1;
        v84 = (__int64 *)&v10[v82];
        goto LABEL_152;
      }
      v110 = (3 * v81 + 1) >> 1;
      v111 = 8 * v110 + 8;
      if ( 8 * v81 + 8 >= v111 || v81 >= v110 )
      {
        v195 = (char **)__cxa_allocate_exception(0x28u);
        sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v196);
        *v195 = (char *)off_1C63128;
        sub_2333C0(v195 + 1, p_ptr);
        sub_233E40((__int64)p_ptr);
        __cxa_throw(v195, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (__m128i *)v111;
      v274 = v11;
      v272 = v14;
      v271 = v13;
      LODWORD(v270) = v12;
      v269 = v80;
      v112 = (unsigned int *)sub_186B300(v10 - 1, v111);
      v113 = v112[1];
      v10 = (__m128i **)(v112 + 2);
      *v112 = v110;
      LODWORD(v112) = v113;
      v84 = (__int64 *)&v10[v113];
      v83 = (_DWORD)v112 + 1;
    }
    else
    {
      v274 = v11;
      v272 = v14;
      v271 = v13;
      LODWORD(v270) = v12;
      v269 = v80;
      v155 = (_QWORD *)sub_186B270(0x18u);
      *v155 = 2;
      v83 = 1;
      v10 = (__m128i **)(v155 + 1);
      v84 = (__int64 *)v10;
    }
    v80 = v269;
    v12 = v270;
    v13 = v271;
    v14 = v272;
    v11 = v274;
LABEL_152:
    *v84 = v80;
    *((_DWORD *)v10 - 1) = v83;
LABEL_27:
    if ( ++v24 != v231 )
      goto LABEL_28;
LABEL_35:
    if ( v204 && v12 < *(_DWORD *)(v204 - 4) )
    {
      if ( !v10 )
      {
        v9 = *(_DWORD *)(a3 + 12);
        continue;
      }
      v152 = &v10[*((unsigned int *)v10 - 1)];
      if ( v10 < v152 )
      {
        v153 = v10;
        do
        {
          v154 = *v153;
          if ( *v153 )
          {
            v22 = v154->m128i_i32[2]-- == 1;
            if ( v22 )
            {
              v243 = v11;
              sub_15D7BC0(a2, v154);
              v11 = v243;
            }
          }
          ++v153;
        }
        while ( v153 < v152 );
      }
      goto LABEL_291;
    }
    if ( !v249 )
      goto LABEL_244;
    if ( *(_WORD *)(v268 + 4) || (v36 = *(_DWORD **)(*(_QWORD *)(v268 + 16) + 24LL)) == nullptr || *v36 || v36[1] != 36 )
    {
      if ( !v10 )
      {
        v89 = 0xFFFFFFFFLL;
        *(_QWORD *)v214 = MEMORY[0x7FFFFFFF8];
LABEL_166:
        v90 = (__int64 *)v10;
        v91 = (__int64 *)&v10[v89];
        while ( 1 )
        {
          v92 = *v90;
          if ( !*(_WORD *)(*v90 + 4) && *(_QWORD *)(*(_QWORD *)(v92 + 16) + 40LL) == a2[106] )
          {
            v93 = *(_DWORD *)(v92 + 24);
            if ( v93 )
            {
              v269 = (__int64)v14;
              *(_QWORD *)v252 = v13;
              v233 = v90;
              v94 = sub_15D1F10(*(_QWORD *)(v92 + 8LL * (unsigned int)(v93 - 1) + 32));
              v90 = v233;
              v13 = *(_QWORD *)v252;
              v14 = (__m128i *)v269;
              if ( a2[106] != v94
                && *(_QWORD *)v214 == *(_QWORD *)(v92 + 8LL * (unsigned int)(*(_DWORD *)(v92 + 24) - 1) + 32) )
              {
                break;
              }
            }
          }
          if ( ++v90 == v91 )
            goto LABEL_247;
        }
        ++*(_DWORD *)(v92 + 8);
        goto LABEL_174;
      }
      v88 = *((_DWORD *)v10 - 1);
      v89 = (unsigned int)(v88 - 1);
      *(_QWORD *)v214 = v10[v89];
      if ( v88 != 1 )
        goto LABEL_166;
LABEL_247:
      *(_QWORD *)v256 = v14;
      v131 = *(_QWORD *)(v268 + 16);
      *(_QWORD *)v216 = v13;
      v281 = 0;
      LODWORD(v296) = 256;
      v236 = v302;
      v300 = v302;
      v282 = a2;
      v278 = 0;
      ptr = a2;
      WORD2(v296) = 0;
      v297[3] = 0;
      v301 = 0x1000000000LL;
      v298 = 0;
      v299 = 0;
      sub_14DC230(p_ptr, &v278);
      sub_18572D0(&v278);
      v132 = *(_DWORD **)(v131 + 24);
      v13 = *(_QWORD *)v216;
      LOBYTE(v296) = 0;
      v14 = *(__m128i **)v256;
      if ( !v132 || *v132 )
      {
LABEL_249:
        if ( v10 )
        {
          v133 = *((_DWORD *)v10 - 1);
          goto LABEL_251;
        }
LABEL_316:
        v133 = 0;
        goto LABEL_251;
      }
      v162 = v132[1];
      if ( v162 == 6 )
      {
        if ( !v10 || !*((_DWORD *)v10 - 1) )
          goto LABEL_338;
        *(_QWORD *)v226 = *((unsigned int *)v10 - 1);
        v173 = 0;
        v174 = 0;
        do
        {
          m128i_i64 = v10[v173]->m128i_i64;
          if ( m128i_i64 != (__int64 *)a2[108] )
          {
            if ( v174 != (_DWORD)v173 )
            {
              v176 = (__int64 *)&v10[v174];
              if ( m128i_i64 )
                ++*((_DWORD *)m128i_i64 + 2);
              v177 = *v176;
              if ( *v176 )
              {
                v22 = (*(_DWORD *)(v177 + 8))-- == 1;
                if ( v22 )
                {
                  v271 = (__int64)v14;
                  v270 = v13;
                  LODWORD(v269) = (_DWORD)v10 + 8 * v174;
                  *(_QWORD *)v260 = m128i_i64;
                  sub_15D7BC0(a2, v177);
                  m128i_i64 = *(__int64 **)v260;
                  v176 = (__int64 *)&v10[v174];
                  v13 = v270;
                  v14 = (__m128i *)v271;
                }
              }
              *v176 = (__int64)m128i_i64;
            }
            ++v174;
          }
          ++v173;
        }
        while ( *(_QWORD *)v226 != v173 );
        if ( v174 > 1 )
        {
          *(_QWORD *)v261 = v14;
          *(_QWORD *)v227 = v13;
          v178 = sub_15E1AF0((int)a2);
          v13 = *(_QWORD *)v227;
          v14 = *(__m128i **)v261;
          v169 = v178;
        }
        else
        {
LABEL_338:
          v169 = (__int64)*v10;
        }
        if ( v169 )
          goto LABEL_311;
      }
      else
      {
        if ( v162 != 2 )
          goto LABEL_249;
        if ( !v10 )
          goto LABEL_316;
        v133 = *((_DWORD *)v10 - 1);
        if ( v133 == 2 )
        {
          v163 = sub_15E1B70((int)a2);
          v164 = v163;
          if ( v163 )
            ++*(_DWORD *)(v163 + 8);
          sub_E31BE0(v281, (__int64)v282);
          v281 = v164;
          v13 = *(_QWORD *)v216;
          v14 = *(__m128i **)v256;
          goto LABEL_252;
        }
LABEL_251:
        v134 = sub_14E38C0((int)p_ptr);
        v13 = *(_QWORD *)v216;
        v14 = *(__m128i **)v256;
        if ( v134 != 5 )
        {
LABEL_252:
          v136 = v300;
          v137 = (char *)v300 + 8 * (unsigned int)v301;
          v138 = (char *)v300;
          if ( v300 != v137 )
          {
            do
            {
              v139 = *(_QWORD *)v138;
              v138 += 8;
              *(_BYTE *)(v139 + 6) &= ~1u;
            }
            while ( v138 != v137 );
          }
          LODWORD(v301) = 0;
          if ( v136 != v236 && v136 )
          {
            v237 = v14;
            *(_QWORD *)v217 = v13;
            sub_186B220(v136);
            v14 = v237;
            v13 = *(_QWORD *)v217;
          }
          if ( *((_QWORD *)&v299 + 1) )
          {
            v238 = v14;
            *(_QWORD *)v218 = v13;
            sub_186B220((void *)(*((_QWORD *)&v299 + 1) - 8LL));
            v14 = v238;
            v13 = *(_QWORD *)v218;
          }
          if ( (_QWORD)v299 )
          {
            v239 = v14;
            *(_QWORD *)v219 = v13;
            sub_186B220((void *)(v299 - 8));
            v14 = v239;
            v13 = *(_QWORD *)v219;
          }
          if ( *((_QWORD *)&v298 + 1) )
          {
            v240 = v14;
            *(_QWORD *)v220 = v13;
            sub_186B220((void *)(*((_QWORD *)&v298 + 1) - 8LL));
            v14 = v240;
            v13 = *(_QWORD *)v220;
          }
          if ( (_QWORD)v298 )
          {
            v241 = v14;
            *(_QWORD *)v221 = v13;
            sub_186B220((void *)(v298 - 8));
            v14 = v241;
            v13 = *(_QWORD *)v221;
          }
          v92 = v281;
          if ( v281 )
            *(_DWORD *)(v281 + 8) += 2;
          if ( v209 )
          {
            v140 = *((_DWORD *)v209 - 1);
            if ( v140 == *((_DWORD *)v209 - 2) )
            {
              v158 = (3 * v140 + 1) >> 1;
              v159 = 8 * v158 + 8;
              if ( 8 * v140 + 8 >= v159 || v140 >= v158 )
              {
                v197 = (char **)__cxa_allocate_exception(0x28u);
                sub_180DB2(p_ptr, "Overflow encountered when expanding vector", v198);
                *v197 = (char *)off_1C63128;
                sub_2333C0(v197 + 1, p_ptr);
                sub_233E40((__int64)p_ptr);
                __cxa_throw(v197, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v244 = v14;
              *(_QWORD *)v223 = v13;
              v160 = (unsigned int *)sub_186B300(v209 - 1, v159);
              v161 = v160[1];
              v142 = v160 + 2;
              v13 = *(_QWORD *)v223;
              *v160 = v158;
              v209 = v142;
              v144 = v281;
              LODWORD(v160) = v161;
              v14 = v244;
              v145 = (__int64 *)&v142[2 * v161];
              v143 = (_DWORD)v160 + 1;
            }
            else
            {
              v141 = v140;
              v142 = v209;
              v143 = v140 + 1;
              v144 = v92;
              v145 = &v209[v141];
            }
          }
          else
          {
            v246 = v14;
            *(_QWORD *)v228 = v13;
            v181 = (_QWORD *)sub_186B270(0x18u);
            *v181 = 2;
            v13 = *(_QWORD *)v228;
            v209 = v181 + 1;
            v145 = v181 + 1;
            v14 = v246;
            v143 = 1;
            v144 = v281;
            v142 = v209;
          }
          *v145 = v92;
          *(v142 - 1) = v143;
          if ( v144 )
          {
            v146 = (__int64)v282;
            v22 = (*(_DWORD *)(v144 + 8))-- == 1;
            if ( v22 )
            {
              v242 = v14;
              *(_QWORD *)v222 = v13;
              sub_15D7BC0(v146, v144);
              v14 = v242;
              v13 = *(_QWORD *)v222;
            }
          }
          goto LABEL_174;
        }
        v168 = sub_15DC610(
                 (int)ptr,
                 v131,
                 v133,
                 (int)v10,
                 v135,
                 v256[0],
                 v203,
                 v204,
                 v205,
                 (int)v206,
                 (int)v208,
                 (char)v209,
                 (int)p_ptr,
                 (int)v211,
                 v216[0],
                 v302);
        v13 = *(_QWORD *)v224;
        v14 = *(__m128i **)v256;
        v169 = v168;
        if ( v168 )
LABEL_311:
          ++*(_DWORD *)(v169 + 8);
      }
      v170 = v281;
      if ( v281 )
      {
        v171 = (__int64)v282;
        v22 = (*(_DWORD *)(v281 + 8))-- == 1;
        if ( v22 )
        {
          *(_QWORD *)v262 = v14;
          *(_QWORD *)v229 = v13;
          sub_15D7BC0(v171, v170);
          v14 = *(__m128i **)v262;
          v13 = *(_QWORD *)v229;
        }
      }
      v281 = v169;
      goto LABEL_252;
    }
    v213 = v297;
    ptr = v297;
    v296 = 0x1000000000LL;
    if ( !v10 )
    {
      v37 = -1;
      goto LABEL_44;
    }
    v37 = *((_DWORD *)v10 - 1) - 1;
    if ( *((_DWORD *)v10 - 1) != 1 )
    {
LABEL_44:
      v38 = v10;
      v39 = &v10[v37];
      v40 = 0;
      *(_QWORD *)v250 = v39;
      do
      {
        v43 = *v38;
        if ( a2[107] != *(_QWORD *)(*v38 + 8LL * (unsigned int)(*(_DWORD *)(*v38 + 24LL) - 1) + 32) )
        {
          if ( v40 < HIDWORD(v296) )
          {
            v41 = ptr;
          }
          else
          {
            v271 = (__int64)v14;
            v232 = 2 * HIDWORD(v296);
            v270 = v13;
            v269 = (__int64)v38;
            v44 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v296)));
            v40 = v296;
            v38 = (_QWORD *)v269;
            v41 = v44;
            v45 = (int *)ptr;
            v13 = v270;
            v14 = (__m128i *)v271;
            if ( (_DWORD)v296 )
            {
              if ( (unsigned int)(v296 - 1) <= 2 || v44 == (char *)ptr + 8 )
              {
                v179 = 8LL * (unsigned int)v296;
                v180 = 0;
                do
                {
                  v41[v180 / 8] = *(_QWORD *)&v45[v180 / 4];
                  v180 += 8LL;
                }
                while ( v179 != v180 );
              }
              else
              {
                v46 = 0;
                v47 = 16LL * ((unsigned int)v296 >> 1);
                do
                {
                  *(__m128i *)&v41[v46 / 8] = _mm_loadu_si128((const __m128i *)&v45[v46 / 4]);
                  v46 += 16LL;
                }
                while ( v46 != v47 );
                if ( (v40 & 1) != 0 )
                  v41[v40 & 0xFFFFFFFE] = *(_QWORD *)&v45[2 * (v40 & 0xFFFFFFFE)];
              }
            }
            if ( v45 != v297 && v45 )
            {
              sub_186B220(v45);
              v40 = v296;
              v14 = (__m128i *)v271;
              v13 = v270;
              v38 = (_QWORD *)v269;
            }
            ptr = v41;
            HIDWORD(v296) = v232;
          }
          v42 = v40++;
          v41[v42] = v43;
          LODWORD(v296) = v40;
        }
        ++v38;
      }
      while ( *(_QWORD **)v250 != v38 );
      if ( v40 == 1 )
      {
        v172 = (int *)ptr;
        v92 = *(_QWORD *)ptr;
        if ( *(_QWORD *)ptr )
          ++*(_DWORD *)(v92 + 8);
        goto LABEL_321;
      }
    }
    v182 = sub_15DF030(
             (int)a2,
             v203,
             v204,
             v205,
             (int)v206,
             (int)v208,
             (int)v209,
             (int)p_ptr,
             (int)v211,
             (int)v297,
             v13,
             (int)v14,
             (int)v264,
             m,
             v267,
             v268,
             v269,
             v270,
             v271,
             (int)v272,
             v273,
             v277,
             v278,
             (int)v279,
             v280,
             v281,
             (int)v282,
             v283,
             v284,
             (int)v285,
             v286,
             v288,
             v289);
    v13 = (__int64)v247;
    v14 = *(__m128i **)v263;
    v92 = v182;
    if ( v182 )
      *(_DWORD *)(v182 + 8) += 2;
    if ( v209 )
    {
      v183 = *((_DWORD *)v209 - 2);
      if ( *((_DWORD *)v209 - 1) == v183 )
      {
        v185 = (3 * v183 + 1) >> 1;
        v186 = 8 * v185 + 8;
        if ( 8 * v183 + 8 >= v186 || v183 >= v185 )
        {
          v189 = (char **)__cxa_allocate_exception(0x28u);
          sub_180DB2(&v281, "Overflow encountered when expanding vector", v190);
          *v189 = (char *)off_1C63128;
          sub_2333C0(v189 + 1, &v281);
          sub_233E40((__int64)&v281);
          __cxa_throw(v189, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v187 = (unsigned int *)sub_186B300(v209 - 1, v186);
        *v187 = v185;
        v13 = (__int64)v247;
        v209 = v187 + 2;
        v14 = *(__m128i **)v263;
      }
    }
    else
    {
      v188 = (_QWORD *)sub_186B270(0x18u);
      *v188 = 2;
      v13 = (__int64)v247;
      v209 = v188 + 1;
      v14 = *(__m128i **)v263;
    }
    v172 = (int *)ptr;
    v184 = *((_DWORD *)v209 - 1);
    v209[v184] = v92;
    *((_DWORD *)v209 - 1) = v184 + 1;
LABEL_321:
    if ( v172 && v172 != v213 )
    {
      v245 = v14;
      *(_QWORD *)v225 = v13;
      sub_186B220(v172);
      v13 = *(_QWORD *)v225;
      v14 = v245;
    }
LABEL_174:
    v95 = 2 * v266;
    if ( 3 * v266 < 4 * ((int)v267 + v273) )
    {
      v234 = v14;
      v266 *= 2;
      v122 = sub_186B270(16LL * v95);
      v13 = 16LL * v95;
      v123 = (__m128i *)v122;
      v124 = (__m128i *)v122;
      v125 = (__m128i *)(v13 + v122);
      if ( v95 )
      {
        if ( (((_BYTE)v125 - (_BYTE)v123) & 0x10) == 0 || (v124 = v123 + 1, *v123 = 0, &v123[1] != v125) )
        {
          do
          {
            *v124 = 0;
            v124 += 2;
            v124[-1] = 0;
          }
          while ( v124 != v125 );
        }
      }
      v126 = v95 - 1;
      v127 = v6;
      for ( m = v126; v127 != v234; ++v127 )
      {
        if ( v127->m128i_i64[0] > 1uLL )
        {
          v128 = 16LL * (*(_DWORD *)(v127->m128i_i64[0] + 12) & (unsigned int)v126);
          v129 = &v123[(unsigned __int64)v128 / 0x10];
          if ( v13 == v128 )
          {
LABEL_235:
            if ( v123 == v129 )
            {
LABEL_273:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v130 = v123;
            while ( v130->m128i_i64[0] )
            {
              if ( v129 == ++v130 )
                goto LABEL_273;
            }
          }
          else
          {
            v130 = &v123[(unsigned __int64)v128 / 0x10];
            while ( v130->m128i_i64[0] )
            {
              if ( v125 == ++v130 )
                goto LABEL_235;
            }
          }
          *v130 = _mm_loadu_si128(v127);
        }
      }
      if ( v6 )
      {
        *(_QWORD *)v255 = v125;
        v235 = (void *)v13;
        *(_QWORD *)v215 = v123;
        sub_186B220(v6);
        v125 = *(__m128i **)v255;
        v13 = (__int64)v235;
        v123 = *(__m128i **)v215;
      }
      LODWORD(v267) = 0;
      v14 = v125;
      v6 = v123;
    }
    v96 = *(_DWORD *)(v268 + 12);
    v97 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v268, (__m128i)(unsigned __int64)v92);
    v98 = 16LL * (v96 & (unsigned int)m);
    v99 = &v6[(unsigned __int64)v98 / 0x10];
    if ( v98 == v13 )
    {
      v101 = nullptr;
LABEL_184:
      if ( v99 == v6 )
      {
LABEL_216:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v100 = v6;
      while ( 1 )
      {
        v103 = v100->m128i_i64[0];
        if ( v100->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v103 + 12) == v96 && v268 == v103 )
            goto LABEL_283;
        }
        else
        {
          if ( !v103 )
            goto LABEL_212;
          v101 = v100;
        }
        if ( v99 == ++v100 )
          goto LABEL_216;
      }
    }
    v100 = &v6[(unsigned __int64)v98 / 0x10];
    v101 = nullptr;
    while ( 2 )
    {
      v102 = v100->m128i_i64[0];
      if ( v100->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v102 + 12) == v96 && v268 == v102 )
        {
LABEL_283:
          *v100 = v97;
          goto LABEL_217;
        }
        goto LABEL_179;
      }
      if ( v102 )
      {
        v101 = v100;
LABEL_179:
        if ( ++v100 == v14 )
          goto LABEL_184;
        continue;
      }
      break;
    }
LABEL_212:
    if ( v101 )
      LODWORD(v267) = (_DWORD)v267 - 1;
    else
      v101 = v100;
    *v101 = v97;
    ++v273;
LABEL_217:
    --*(_DWORD *)(v204 - 4);
    if ( v92 )
    {
      v22 = (*(_DWORD *)(v92 + 8))-- == 1;
      if ( v22 )
        sub_15D7BC0(a2, v92);
    }
    v9 = *(_DWORD *)(a3 + 12);
    *(_QWORD *)v212 = v266;
    v11 = v266 - 1;
  }
  if ( v15 == v13 )
  {
LABEL_109:
    if ( v6 != v16 )
    {
      for ( n = v6; n != v16; ++n )
      {
        v64 = n->m128i_i64[0];
        if ( n->m128i_i64[0] > 1uLL )
        {
          if ( *(_DWORD *)(v64 + 12) == v9 && v64 == a3 )
            goto LABEL_104;
        }
        else if ( !v64 )
        {
          break;
        }
      }
    }
LABEL_68:
    sub_1872CE0("");
    sub_1873130(114, 234);
  }
  n = &v6[(unsigned __int64)v15 / 0x10];
  while ( 2 )
  {
    v49 = n->m128i_i64[0];
    if ( n->m128i_i64[0] <= 1uLL )
    {
      if ( !v49 )
        goto LABEL_68;
      goto LABEL_65;
    }
    if ( *(_DWORD *)(v49 + 12) != v9 || v49 != a3 )
    {
LABEL_65:
      if ( ++n == v14 )
        goto LABEL_109;
      continue;
    }
    break;
  }
LABEL_104:
  v61 = n->m128i_i64[1];
  if ( v61 )
    ++*(_DWORD *)(v61 + 8);
  v62 = *v208;
  if ( *v208 )
  {
    v63 = v208[1];
    v22 = (*(_DWORD *)(v62 + 8))-- == 1;
    if ( v22 )
      sub_15D7BC0(v63, v62);
  }
  *v208 = v61;
  if ( v10 )
  {
    v50 = v10;
    v51 = &v10[*((unsigned int *)v10 - 1)];
    if ( v10 < v51 )
    {
      do
      {
        while ( 1 )
        {
          v52 = *v50;
          if ( *v50 )
          {
            v22 = v52->m128i_i32[2]-- == 1;
            if ( v22 )
              break;
          }
          if ( ++v50 >= v51 )
            goto LABEL_76;
        }
        ++v50;
        sub_15D7BC0(a2, v52);
      }
      while ( v50 < v51 );
    }
LABEL_76:
    sub_186B220(v10 - 1);
  }
  if ( v205 )
  {
    v207 = *(_DWORD *)(v205 + 8);
    *(_DWORD *)(v205 + 8) = v207 - 1;
    if ( v207 == 1 )
      sub_15D7BC0(a2, v205);
  }
  sub_186B220((void *)(v204 - 8));
  if ( v209 )
  {
    v53 = v209;
    v54 = (unsigned __int64)&v209[*((unsigned int *)v209 - 1)];
    if ( (unsigned __int64)v209 < v54 )
    {
      do
      {
        while ( 1 )
        {
          v55 = *v53;
          if ( *v53 )
          {
            v22 = (*(_DWORD *)(v55 + 8))-- == 1;
            if ( v22 )
              break;
          }
          if ( (unsigned __int64)++v53 >= v54 )
            goto LABEL_87;
        }
        ++v53;
        sub_15D7BC0(a2, v55);
      }
      while ( (unsigned __int64)v53 < v54 );
    }
LABEL_87:
    sub_186B220(v209 - 1);
  }
  v56 = v292;
  v57 = (char *)v292 + 8 * (unsigned int)v293;
  v58 = (char *)v292;
  if ( v292 != v57 )
  {
    do
    {
      v59 = *(_QWORD *)v58;
      v58 += 8;
      *(_BYTE *)(v59 + 6) &= ~1u;
    }
    while ( v58 != v57 );
  }
  LODWORD(v293) = 0;
  result = (__int64)v211;
  if ( v56 != v211 && v56 )
    result = sub_186B220(v56);
  if ( *((_QWORD *)&v291 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v291 + 1) - 8LL));
  if ( (_QWORD)v291 )
    result = sub_186B220((void *)(v291 - 8));
  if ( *((_QWORD *)&v290 + 1) )
    result = sub_186B220((void *)(*((_QWORD *)&v290 + 1) - 8LL));
  if ( (_QWORD)v290 )
    result = sub_186B220((void *)(v290 - 8));
  if ( v6 )
    return sub_186B220(v6);
  return result;
}

