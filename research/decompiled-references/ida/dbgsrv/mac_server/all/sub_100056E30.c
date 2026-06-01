/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056E30
// Address: 0x0000000100056E30

//----- (0000000100056E30) ----------------------------------------------------
void **__fastcall sub_100056E30(void **a1, __int64 a2, unsigned int *a3)
{
  __int64 v4; // rax
  char *v5; // r15
  char *v6; // r14
  void *v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  int v10; // ebx
  __int64 v11; // r15
  __int64 v12; // r12
  int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  char *v16; // rax
  void *v17; // rsi
  void *v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  char *v22; // rax
  void *v23; // rsi
  void *v24; // rdi
  int v25; // eax
  int v26; // r14d
  _QWORD *v27; // rbx
  __int64 v28; // r14
  __int64 v29; // r15
  unsigned int v30; // eax
  unsigned int v31; // ebx
  unsigned __int64 v32; // r15
  unsigned __int8 v33; // al
  unsigned __int8 v34; // r14
  int v35; // ebx
  unsigned int v36; // r12d
  unsigned int v37; // ebx
  unsigned __int64 v38; // r14
  unsigned int v39; // r15d
  unsigned int v40; // r12d
  __int64 v41; // rbx
  unsigned int v42; // r14d
  unsigned int v43; // ebx
  _QWORD *v44; // r14
  __int64 v45; // rax
  __int64 v46; // r15
  void *v47; // rdi
  void *v48; // rdi
  unsigned int v49; // ebx
  unsigned int v50; // r14d
  signed int v51; // r14d
  char v52; // al
  unsigned int v53; // eax
  unsigned int v54; // eax
  off_t v55; // r15
  int v56; // eax
  unsigned int v57; // r12d
  void *v58; // rbx
  unsigned int v59; // r13d
  unsigned int v60; // r15d
  unsigned int v61; // r12d
  signed int v62; // r14d
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // ecx
  void *v66; // rsi
  unsigned int v67; // r13d
  __int64 v68; // rbx
  const char *v69; // r13
  unsigned __int64 v70; // r12
  char *v71; // rax
  void *v72; // r15
  bool v73; // zf
  _QWORD *v74; // r14
  _QWORD *v75; // rbx
  size_t v76; // rax
  size_t v77; // r15
  unsigned __int64 v78; // r12
  void *v79; // rax
  off_t v80; // r15
  unsigned int v81; // eax
  unsigned int v82; // r12d
  size_t v83; // rbx
  void *v84; // r13
  void *v85; // rsi
  unsigned int v86; // eax
  unsigned int v87; // ebx
  void *v88; // rdi
  signed int v89; // ebx
  void *v90; // rdi
  unsigned int v91; // ebx
  unsigned int v92; // ebx
  __int64 v93; // r14
  unsigned int v94; // r15d
  __int64 v95; // rcx
  signed int v96; // eax
  unsigned int v97; // ebx
  unsigned int v98; // ebx
  __int64 v99; // r14
  unsigned int v100; // r15d
  unsigned int v101; // eax
  unsigned int v102; // r14d
  signed int v103; // ebx
  __int64 v104; // rbx
  __int64 v105; // r14
  int v106; // eax
  unsigned int v107; // ebx
  char *v108; // rbx
  char *v109; // rax
  char *v110; // r15
  unsigned __int64 v111; // r14
  const char *v112; // r15
  char *v113; // rcx
  void *v114; // rdx
  __int64 v115; // rdi
  __int64 v116; // r13
  size_t v117; // rax
  size_t v118; // rbx
  size_t v119; // r12
  void *v120; // rdi
  signed int v121; // ebx
  unsigned int v122; // eax
  signed int v123; // ebx
  __int64 v124; // rax
  unsigned __int64 v125; // r15
  size_t v126; // r12
  unsigned __int8 *v127; // r14
  unsigned __int64 v128; // r15
  void *v129; // rsi
  __int64 v130; // rbx
  char v131; // al
  char *v132; // rax
  void *v133; // rcx
  unsigned __int64 v134; // r15
  size_t v135; // r12
  unsigned __int8 *v136; // r14
  unsigned __int64 v137; // r15
  __int64 v138; // rbx
  char v139; // al
  unsigned int v140; // ebx
  unsigned __int64 v141; // r14
  unsigned int v142; // r15d
  unsigned int v143; // eax
  __int64 v144; // r14
  FILE *v145; // rbx
  unsigned int v146; // r15d
  int v147; // eax
  char *v148; // rax
  void *v149; // rcx
  unsigned __int64 v150; // r15
  unsigned int v151; // eax
  int v152; // r14d
  signed int v153; // ebx
  __int64 v154; // rbx
  __int64 v155; // r14
  __int64 v156; // rbx
  __int64 v157; // r14
  __int64 v158; // r15
  void *v159; // rdi
  unsigned __int64 v160; // rbx
  unsigned int v161; // r15d
  unsigned int v162; // r12d
  int v163; // r14d
  __int64 *v164; // rdx
  __int64 v165; // rbx
  __int128 v166; // kr00_16
  void *v167; // r15
  void *v168; // rdi
  char *v169; // rax
  char *v170; // r12
  char *v171; // rax
  void *v172; // rcx
  void *v173; // r14
  char *v174; // rax
  void *v175; // rcx
  unsigned int v176; // eax
  int v177; // r12d
  int v178; // r14d
  FILE *v179; // rax
  char *v180; // rax
  char v181; // cl
  char v182; // r14
  void **v183; // rcx
  __int64 v184; // rax
  void *v185; // rdi
  __int64 v186; // rbx
  __int64 v187; // r14
  __int64 v188; // r15
  void *v189; // rdi
  int v190; // eax
  int v191; // r13d
  char *v192; // rbx
  unsigned __int64 v193; // rcx
  void *v194; // rax
  __int64 v195; // rsi
  __int64 v196; // r14
  __int64 v197; // r15
  char *v198; // rax
  __int64 v199; // rax
  __int64 v200; // rax
  __int64 v201; // r12
  char *v202; // rax
  unsigned __int64 v203; // rdx
  signed int v204; // edx
  const char *v205; // rcx
  const char *v206; // r8
  const char *v207; // r9
  signed int v208; // ebx
  void *v209; // rdi
  __int64 v210; // rbx
  __int64 v211; // r14
  __int64 v212; // r15
  void *v213; // rdi
  void *v214; // rdi
  __int64 v215; // rbx
  __int64 v216; // r14
  __int64 v217; // r15
  void *v218; // rdi
  unsigned int v219; // r15d
  __int64 v220; // rbx
  char v221; // cl
  int v222; // r14d
  int i; // r12d
  void *v224; // r15
  __int64 v225; // r13
  char *v226; // rax
  void *v227; // rdi
  char *v228; // rbx
  __int64 v229; // r14
  char *v230; // r15
  void *v231; // rdi
  int *v232; // rax
  unsigned int v233; // ebx
  int *v234; // rax
  void *v235; // rdi
  __int64 v236; // rbx
  __int64 v237; // r14
  __int64 v238; // r15
  void *v239; // rdi
  void *v240; // rdi
  __int64 v241; // rbx
  __int64 v242; // r14
  __int64 v243; // r15
  void *v244; // rdi
  const char *v245; // rax
  void *v246; // rcx
  _QWORD *v247; // r14
  _QWORD *v248; // rbx
  size_t v249; // rax
  size_t v250; // r15
  unsigned __int64 v251; // r12
  void *v252; // rax
  unsigned int v253; // ebx
  const char *v254; // rbx
  size_t v255; // rax
  __int64 v256; // r13
  __int64 v257; // r13
  __int64 v258; // rbx
  const char *v259; // r15
  int v260; // eax
  bool v261; // cf
  int *v262; // rax
  __int64 v263; // rbx
  __int64 v265; // [rsp+10h] [rbp-CE0h]
  char *v266; // [rsp+20h] [rbp-CD0h]
  void *v267; // [rsp+28h] [rbp-CC8h]
  unsigned __int64 v268; // [rsp+30h] [rbp-CC0h]
  unsigned __int64 v269; // [rsp+38h] [rbp-CB8h]
  char *v270; // [rsp+38h] [rbp-CB8h]
  unsigned int v271; // [rsp+44h] [rbp-CACh]
  int v272; // [rsp+48h] [rbp-CA8h]
  char v273; // [rsp+4Ch] [rbp-CA4h]
  __int64 v274; // [rsp+50h] [rbp-CA0h]
  const char *v275; // [rsp+50h] [rbp-CA0h]
  char *v276; // [rsp+50h] [rbp-CA0h]
  __int64 v277; // [rsp+58h] [rbp-C98h]
  unsigned int v278; // [rsp+58h] [rbp-C98h]
  int v279; // [rsp+58h] [rbp-C98h]
  unsigned int v280; // [rsp+58h] [rbp-C98h]
  unsigned int v281; // [rsp+58h] [rbp-C98h]
  int v282; // [rsp+58h] [rbp-C98h]
  __int128 v285; // [rsp+70h] [rbp-C80h] BYREF
  __int64 v286; // [rsp+80h] [rbp-C70h]
  __int128 v287; // [rsp+90h] [rbp-C60h] BYREF
  __int64 v288; // [rsp+A0h] [rbp-C50h]
  void *__src; // [rsp+B0h] [rbp-C40h] BYREF
  char *v290; // [rsp+B8h] [rbp-C38h]
  char __s[16]; // [rsp+C0h] [rbp-C30h] BYREF
  __int64 v292; // [rsp+D0h] [rbp-C20h]
  void *__dst[2]; // [rsp+4C0h] [rbp-830h] BYREF
  __int128 v294; // [rsp+4D0h] [rbp-820h]
  __int128 v295; // [rsp+4E0h] [rbp-810h]
  __int64 v296; // [rsp+4F0h] [rbp-800h]
  __int128 v297; // [rsp+8C0h] [rbp-430h] BYREF
  _OWORD v298[63]; // [rsp+8D0h] [rbp-420h] BYREF

  v273 = *(_BYTE *)(a2 + 289);
  *(_BYTE *)(a2 + 289) = 0;
  v4 = *a3;
  v5 = (char *)a3 + 5;
  __src = (char *)a3 + 5;
  v6 = (char *)a3 + v4 + 5;
  v290 = v6;
  sub_10006B790((__int64)a1, 0);
  switch ( *((_BYTE *)a3 + 4) )
  {
    case 5:
      v7 = *a1;
      if ( *a1 )
      {
        a1[1] = nullptr;
        qfree(v7);
        *a1 = nullptr;
        a1[2] = nullptr;
      }
      goto LABEL_464;
    case 0xA:
      *(_QWORD *)(*(_QWORD *)(a2 + 440) + 672LL) = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v279 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      if ( v279 )
        *(_BYTE *)(a2 + 184) = 1;
      v69 = (const char *)__src;
      v70 = (unsigned __int64)v290;
      v71 = (char *)__src;
      break;
    case 0xB:
      goto LABEL_464;
    case 0xC:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      v107 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, void **))(**(_QWORD **)(a2 + 440) + 72LL))(
               *(_QWORD *)(a2 + 440),
               &v297,
               __dst);
      sub_100032FE0(a1, v107);
      if ( v107 == 1 )
        sub_100065FE0(a1, (__int64 *)&v297);
      else
        sub_100055750((__int64)a1, (__int64)__dst);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"get_processes() => %d\n", v107);
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v185 = (void *)v297;
      if ( (_QWORD)v297 )
      {
        v186 = *((_QWORD *)&v297 + 1);
        if ( *((_QWORD *)&v297 + 1) )
        {
          v187 = 8;
          do
          {
            v188 = v297;
            v189 = *(void **)(v297 + v187);
            if ( v189 )
            {
              *(_QWORD *)(v297 + v187 + 8) = 0;
              qfree(v189);
              *(_QWORD *)(v188 + v187) = 0;
              *(_QWORD *)(v188 + v187 + 16) = 0;
            }
            v187 += 32;
            --v186;
          }
          while ( v186 );
          v185 = (void *)v297;
        }
        *((_QWORD *)&v297 + 1) = 0;
        qfree(v185);
      }
      goto LABEL_464;
    case 0xD:
      v108 = v5;
      v109 = v5;
      while ( v109 < v6 )
      {
        v110 = v109 + 1;
        v73 = *v109++ == 0;
        if ( v73 )
        {
          __src = v110;
LABEL_215:
          v169 = v110;
          while ( v169 < v6 )
          {
            v170 = v169 + 1;
            v73 = *v169++ == 0;
            if ( v73 )
            {
              __src = v170;
LABEL_220:
              v171 = v170;
              while ( v171 < v6 )
              {
                v172 = v171 + 1;
                v73 = *v171++ == 0;
                if ( v73 )
                {
                  __src = v172;
LABEL_225:
                  v271 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
                  v173 = __src;
                  v174 = (char *)__src;
                  while ( v174 < v290 )
                  {
                    v175 = v174 + 1;
                    v73 = *v174++ == 0;
                    if ( v73 )
                    {
                      __src = v175;
                      goto LABEL_236;
                    }
                  }
                  v173 = nullptr;
LABEL_236:
                  v272 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
                  *(_OWORD *)__dst = 0;
                  *(_QWORD *)&v294 = 0;
                  v297 = 0;
                  *(_QWORD *)&v298[0] = 0;
                  BYTE8(v298[0]) = 1;
                  v180 = (char *)__src;
                  v276 = v108;
                  v270 = v110;
                  v266 = v170;
                  v267 = v173;
                  if ( __src >= v290 )
                  {
                    v181 = 0;
                  }
                  else
                  {
                    v181 = *(_BYTE *)__src;
                    v180 = (char *)__src + 1;
                  }
                  __src = v180;
                  BYTE8(v298[0]) = v181 != 0;
                  v190 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
                  if ( v190 > 0 )
                  {
                    v191 = 0;
                    v282 = v190;
                    do
                    {
                      v192 = (char *)__src;
                      v193 = (unsigned __int64)v290;
                      if ( __src >= v290 )
                        break;
                      v195 = *((_QWORD *)&v297 + 1);
                      v194 = (void *)v297;
                      if ( *(_QWORD *)&v298[0] < (unsigned __int64)(*((_QWORD *)&v297 + 1) + 1LL) )
                      {
                        v194 = qvector_reserve((__int64)&v297, (void *)v297, *((_QWORD *)&v297 + 1) + 1LL, 0x18u);
                        *(_QWORD *)&v297 = v194;
                        v195 = *((_QWORD *)&v297 + 1);
                        v192 = (char *)__src;
                        v193 = (unsigned __int64)v290;
                      }
                      v196 = (__int64)v194 + 24 * v195;
                      *(_OWORD *)v196 = 0;
                      *(_QWORD *)(v196 + 16) = 0;
                      ++*((_QWORD *)&v297 + 1);
                      v197 = 0;
                      do
                      {
                        v198 = &v192[v197];
                        if ( (unsigned __int64)&v192[v197] >= v193 )
                          goto LABEL_267;
                        ++v197;
                      }
                      while ( *v198 );
                      __src = &v192[v197];
                      if ( v192 )
                      {
                        v199 = *(_QWORD *)(v196 + 8);
                        v261 = v199 == 0;
                        v200 = v199 - 1;
                        v201 = 0;
                        if ( !v261 )
                          v201 = v200;
                        v202 = *(char **)v196;
                        v203 = v201 + v197;
                        if ( *(_QWORD *)(v196 + 16) < (unsigned __int64)(v201 + v197) )
                        {
                          v202 = (char *)qvector_reserve(v196, *(void **)v196, v203, 1u);
                          *(_QWORD *)v196 = v202;
                          v203 = v201 + v197;
                        }
                        *(_QWORD *)(v196 + 8) = v203;
                        v202[v201 - 1 + v197] = 0;
                        memmove((void *)(*(_QWORD *)v196 + v201), v192, v197 - 1);
                      }
LABEL_267:
                      ++v191;
                    }
                    while ( v191 != v282 );
                  }
                  v204 = -3;
                  if ( v267 != nullptr && v276 != nullptr && v266 != nullptr )
                  {
                    v204 = (*(__int64 (__fastcall **)(_QWORD, char *, char *, __int128 *, char *, _QWORD, void *, int, void **))(**(_QWORD **)(a2 + 440) + 128LL))(
                             *(_QWORD *)(a2 + 440),
                             v276,
                             v270,
                             &v297,
                             v266,
                             v271,
                             v267,
                             v272,
                             __dst);
                    if ( *(_BYTE *)(a2 + 184) == 1 )
                    {
                      v205 = " is_dll";
                      if ( (v271 & 1) == 0 )
                        v205 = &_s;
                      v206 = " under_gui";
                      if ( (v271 & 2) == 0 )
                        v206 = &_s;
                      v207 = " hide_window";
                      if ( (v271 & 0x20) == 0 )
                        v207 = &_s;
                      LODWORD(v265) = v272;
                      v208 = v204;
                      sub_100000AE0(
                        (int)"start_process(path=%s args=%s flags=%s%s%s\n"
                             "              sdir=%s\n"
                             "              input=%s crc32=%x) => %d\n",
                        v276,
                        v270,
                        v205,
                        v206,
                        v207,
                        v266,
                        v267,
                        v265,
                        v204);
                      v204 = v208;
                    }
                  }
                  sub_100056CC0(a2, a1, v204, (__int64)__dst);
                  v209 = (void *)v297;
                  if ( (_QWORD)v297 )
                  {
                    v210 = *((_QWORD *)&v297 + 1);
                    if ( *((_QWORD *)&v297 + 1) )
                    {
                      v211 = 0;
                      do
                      {
                        v212 = v297;
                        v213 = *(void **)(v297 + v211);
                        if ( v213 )
                        {
                          *(_QWORD *)(v297 + v211 + 8) = 0;
                          qfree(v213);
                          *(_QWORD *)(v212 + v211) = 0;
                          *(_QWORD *)(v212 + v211 + 16) = 0;
                        }
                        v211 += 24;
                        --v210;
                      }
                      while ( v210 );
                      v209 = (void *)v297;
                    }
                    *((_QWORD *)&v297 + 1) = 0;
                    qfree(v209);
                  }
                  if ( __dst[0] )
                  {
                    __dst[1] = nullptr;
                    qfree(__dst[0]);
                  }
                  goto LABEL_464;
                }
              }
              v170 = nullptr;
              goto LABEL_225;
            }
          }
          v170 = v110;
          v110 = nullptr;
          goto LABEL_220;
        }
      }
      v110 = v108;
      v108 = nullptr;
      goto LABEL_215;
    case 0xE:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v89 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a2 + 440) + 160LL))(
              *(_QWORD *)(a2 + 440),
              &v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"exit_process() => %d\n", (unsigned int)v89);
      sub_100032FE0(a1, v89);
      if ( v89 < 0 )
        sub_100055750((__int64)a1, (__int64)&v297);
      v90 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_210;
      goto LABEL_464;
    case 0xF:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v96 = sub_100056C10(a2, (__int64)&v297, (unsigned __int64 *)&__src);
      sub_100056CC0(a2, a1, v96, (__int64)&v297);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x10:
      v97 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 440) + 120LL))(*(_QWORD *)(a2 + 440));
      sub_100032FE0(a1, v97);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"detach_process() => %d\n", v97);
      goto LABEL_464;
    case 0x11:
      v122 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v123 = 0;
      if ( !*(_BYTE *)(a2 + 288) )
        v123 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a2 + 440) + 136LL))(
                 *(_QWORD *)(a2 + 440),
                 a2 + 296,
                 v122);
      sub_100032FE0(a1, v123);
      if ( v123 <= 0 )
      {
        v221 = 1;
        if ( *(_BYTE *)(a2 + 288) )
          v221 = v273;
        v273 = v221;
      }
      else
      {
        sub_100066550(a1, a2 + 296);
        if ( *(_BYTE *)(a2 + 184) == 1 )
        {
          v124 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64))loc_100061690)(a2 + 296, &v297, 1024);
          sub_100000AE0((int)"got event: %s\n", v124);
        }
      }
      goto LABEL_464;
    case 0x12:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v121 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a2 + 440) + 152LL))(
               *(_QWORD *)(a2 + 440),
               &v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"prepare_to_pause_process() => %d\n", (unsigned int)v121);
      sub_100032FE0(a1, v121);
      if ( v121 < 0 )
        sub_100055750((__int64)a1, (__int64)&v297);
      v90 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_210;
      goto LABEL_464;
    case 0x13:
      if ( v5 >= v6 )
      {
        v52 = 0;
      }
      else
      {
        v52 = *((_BYTE *)a3 + 5);
        v5 = (char *)a3 + 6;
      }
      if ( v5 >= v6 )
        v182 = 0;
      else
        v182 = *v5++;
      __src = v5;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      v183 = __dst;
      if ( !v182 )
        v183 = nullptr;
      (*(void (__fastcall **)(_QWORD, __int128 *, bool, void **))(**(_QWORD **)(a2 + 440) + 192LL))(
        *(_QWORD *)(a2 + 440),
        &v297,
        v52 != 0,
        v183);
      sub_10005A4B0(a2, (__int64 **)&v297);
      v184 = sub_1000619A0(*(_QWORD *)(a2 + 440));
      if ( v184 )
      {
        v281 = sub_10005A6E0(a2, *(__int64 **)v184, *(const char ***)(v184 + 24), *(_DWORD *)(v184 + 8));
        sub_1000612F0(*(_QWORD **)(a2 + 440));
      }
      else
      {
        v281 = 0;
      }
      if ( v182 )
      {
        v222 = (int)__dst[1];
        sub_100032FE0(a1, (unsigned int)__dst[1]);
        if ( v222 )
        {
          for ( i = 0; i != v222; ++i )
          {
            v224 = __dst[0];
            v225 = 32LL * i;
            sub_100032FE0(a1, *(_DWORD *)((char *)__dst[0] + v225));
            sub_100055750((__int64)a1, (__int64)v224 + v225 + 8);
          }
        }
      }
      if ( *(_BYTE *)(a2 + 184) == 1 )
      {
        v226 = sub_10005AA70(v281);
        sub_100000AE0((int)"stopped_at_debug_event => %s\n", v226);
      }
      v227 = __dst[0];
      if ( __dst[0] )
      {
        v228 = (char *)__dst[1];
        if ( __dst[1] )
        {
          v229 = 8;
          do
          {
            v230 = (char *)__dst[0];
            v231 = *(void **)((char *)__dst[0] + v229);
            if ( v231 )
            {
              *(_QWORD *)((char *)__dst[0] + v229 + 8) = 0;
              qfree(v231);
              *(_QWORD *)&v230[v229] = 0;
              *(_QWORD *)&v230[v229 + 16] = 0;
            }
            v229 += 32;
            --v228;
          }
          while ( v228 );
          v227 = __dst[0];
        }
        __dst[1] = nullptr;
        qfree(v227);
      }
      sub_10005F840((char **)&v297);
      goto LABEL_464;
    case 0x14:
      ((void (__fastcall *)(__int64, void **))loc_100066320)(a2 + 296, &__src);
      v91 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 168LL))(
              *(_QWORD *)(a2 + 440),
              a2 + 296);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"continue_after_event(...) => %d\n", v91);
      sub_100032FE0(a1, v91);
      goto LABEL_464;
    case 0x15:
      v68 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 200LL))(*(_QWORD *)(a2 + 440), v68);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"thread_suspend(tid=%d) => %d\n", (unsigned int)v68, v42);
      goto LABEL_47;
    case 0x16:
      v41 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a2 + 440) + 208LL))(*(_QWORD *)(a2 + 440), v41);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"thread_continue(tid=%d) => %d\n", (unsigned int)v41, v42);
LABEL_47:
      sub_100032FE0(a1, v42);
      goto LABEL_464;
    case 0x17:
      v98 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v99 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v100 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a2 + 440) + 216LL))(
               *(_QWORD *)(a2 + 440),
               v98,
               v99);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"set_resume_mode(tid=%d, resmod=%d) => %d\n", v98, (unsigned int)v99, v100);
      sub_100032FE0(a1, v100);
      goto LABEL_464;
    case 0x18:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      v101 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, void **))(**(_QWORD **)(a2 + 440) + 256LL))(
               *(_QWORD *)(a2 + 440),
               &v297,
               __dst);
      v102 = v101;
      v103 = DWORD2(v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"get_memory_info() => %d (qty=%d)\n", v101, DWORD2(v297));
      sub_100032FE0(a1, v102 + 4);
      if ( v102 == 1 )
      {
        sub_100032FE0(a1, v103);
        if ( v103 > 0 )
        {
          v104 = v103 & 0x7FFFFFFF;
          v105 = 0;
          do
          {
            sub_100065CA0(a1, v105 + v297);
            v105 += 80;
            --v104;
          }
          while ( v104 );
        }
      }
      else
      {
        sub_100055750((__int64)a1, (__int64)__dst);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      sub_10000C380((char **)&v297);
      goto LABEL_464;
    case 0x19:
      v134 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v135 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v136 = (unsigned __int8 *)operator new[](v135);
      v137 = v134 - 1;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v138 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int8 *, size_t, __int128 *))(**(_QWORD **)(a2 + 440) + 288LL))(
               *(_QWORD *)(a2 + 440),
               v137,
               v136,
               v135,
               &v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"read_memory(ea=%a size=%zu) => %zd", v137, v135, v138);
      v139 = *(_BYTE *)(a2 + 184);
      if ( v138 > 0 && (_DWORD)v135 == 1 )
      {
        if ( v139 )
          sub_100000AE0((int)" (0x%02X)\n", *v136);
      }
      else if ( v139 )
      {
        sub_100000AE0((int)"\n");
      }
      sub_100032FE0(a1, v138);
      if ( v138 <= 0 )
        sub_100055750((__int64)a1, (__int64)&v297);
      else
        sub_100055660((__int64)a1, v136, v138);
      operator delete[](v136);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x1A:
      v125 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v126 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v127 = (unsigned __int8 *)operator new[](v126);
      v128 = v125 - 1;
      v129 = __src;
      if ( (char *)__src + v126 >= __src && (char *)__src + v126 <= v290 )
      {
        __src = (char *)__src + v126;
        memcpy(v127, v129, v126);
      }
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v130 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int8 *, size_t, __int128 *))(**(_QWORD **)(a2 + 440) + 296LL))(
               *(_QWORD *)(a2 + 440),
               v128,
               v127,
               v126,
               &v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"write_memory(ea=%a size=%zu) => %zd", v128, v126, v130);
      v131 = *(_BYTE *)(a2 + 184);
      if ( v130 != 0 && (_DWORD)v126 == 1 )
      {
        if ( v131 )
          sub_100000AE0((int)" (0x%02X)\n", *v127);
      }
      else if ( v131 )
      {
        sub_100000AE0((int)"\n");
      }
      sub_100032FE0(a1, v130);
      if ( v130 <= 0 )
        sub_100055750((__int64)a1, (__int64)&v297);
      operator delete[](v127);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x1B:
      if ( !(unsigned int)sub_100054EC0(a2, a1, (unsigned __int64 *)&__src) && *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"rpc_update_bpts failed!\n");
      goto LABEL_464;
    case 0x1C:
      sub_1000558F0(a2, a1, (unsigned __int64 *)&__src);
      goto LABEL_464;
    case 0x1D:
      v140 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v141 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290) - 1;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v142 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int128 *))(**(_QWORD **)(a2 + 440) + 360LL))(
               *(_QWORD *)(a2 + 440),
               v140,
               v141,
               &v297);
      sub_100032FE0(a1, v142);
      if ( v142 != 1 )
        sub_100055750((__int64)a1, (__int64)&v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"eval_lowcnd(tid=%d, ea=%a) => %d\n", v140, v141, v142);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x1E:
      v37 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v38 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290) - 1;
      v39 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290) - 1;
      v40 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, _QWORD))(**(_QWORD **)(a2 + 440) + 304LL))(
              *(_QWORD *)(a2 + 440),
              v37,
              v38,
              v39);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"isok_bpt(type=%d ea=%a len=%d) => %d\n", v37, v38, v39, v40);
      sub_100032FE0(a1, v40);
      goto LABEL_464;
    case 0x1F:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      *(_OWORD *)__s = 0;
      v292 = 0;
      v60 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v61 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v62 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v63 = *(_QWORD *)(a2 + 440);
      v64 = *(_QWORD *)(v63 + 552);
      if ( !v64 )
        LODWORD(v64) = *(_DWORD *)(v63 + 648);
      if ( v62 <= 0 || v62 > (int)v64 )
      {
        v67 = 0;
        sub_100002D00(
          (__int64)&v297,
          "read_regs(tid=%d, mask=%x, nregs=%d) => 0 (incorrect nregs, should be in range 0..%d)\n",
          v60,
          v61,
          v62,
          v64);
      }
      else
      {
        v65 = v62 + 14;
        if ( v62 + 7 >= 0 )
          v65 = v62 + 7;
        sub_100010830((__int64)__dst, v65 >> 3);
        v66 = __src;
        if ( (char *)__src + (unsigned __int64)__dst[1] >= __src && (char *)__src + (unsigned __int64)__dst[1] <= v290 )
        {
          __src = (char *)__src + (unsigned __int64)__dst[1];
          memcpy(__dst[0], v66, (size_t)__dst[1]);
        }
        sub_10005AB70((__int64)__s, (unsigned int)v64);
        v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int128 *))(**(_QWORD **)(a2 + 440) + 224LL))(
                *(_QWORD *)(a2 + 440),
                v60,
                v61,
                *(_QWORD *)__s,
                &v297);
        if ( *(_BYTE *)(a2 + 184) == 1 )
          sub_100000AE0((int)"read_regs(tid=%d, mask=%x) => %d\n", v60, v61, v67);
      }
      sub_100032FE0(a1, v67);
      if ( v67 == 1 )
        sub_100066E80(a1, *(__int64 *)__s, v62, (__int64)__dst[0]);
      else
        sub_100055750((__int64)a1, (__int64)&v297);
      v214 = *(void **)__s;
      if ( *(_QWORD *)__s )
      {
        v215 = *(_QWORD *)&__s[8];
        if ( *(_QWORD *)&__s[8] )
        {
          v216 = 0;
          do
          {
            v217 = *(_QWORD *)__s;
            if ( *(int *)(*(_QWORD *)__s + v216) >= -1 )
            {
              v218 = *(void **)(*(_QWORD *)__s + v216 + 8);
              if ( v218 )
              {
                *(_QWORD *)(*(_QWORD *)__s + v216 + 16) = 0;
                qfree(v218);
                *(_QWORD *)(v217 + v216 + 8) = 0;
                *(_QWORD *)(v217 + v216 + 24) = 0;
              }
              *(_DWORD *)(v217 + v216) = -2;
            }
            v216 += 32;
            --v215;
          }
          while ( v215 );
          v214 = *(void **)__s;
        }
        *(_QWORD *)&__s[8] = 0;
        qfree(v214);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x20:
      v49 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v50 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      LODWORD(v297) = -2;
      v298[0] = 0;
      *((_QWORD *)&v297 + 1) = -1;
      if ( __src < v290 )
        sub_10005E6F0((__int64)&v297, (__int64)&__src);
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, void **))(**(_QWORD **)(a2 + 440) + 232LL))(
              *(_QWORD *)(a2 + 440),
              v49,
              v50,
              &v297,
              __dst);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"write_reg(tid=%d) => %d\n", v49, (unsigned int)v51);
      sub_100032FE0(a1, v51);
      if ( v51 < 0 )
        sub_100055750((__int64)a1, (__int64)__dst);
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      if ( (int)v297 >= -1 && *((_QWORD *)&v297 + 1) )
      {
        *(_QWORD *)&v298[0] = 0;
        qfree(*((void **)&v297 + 1));
      }
      goto LABEL_464;
    case 0x21:
      v92 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v93 = (unsigned int)unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v94 = (*(__int64 (__fastcall **)(_QWORD, void **, _QWORD, __int64, __int128 *))(**(_QWORD **)(a2 + 440) + 240LL))(
              *(_QWORD *)(a2 + 440),
              __dst,
              v92,
              v93,
              &v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
      {
        v95 = -1;
        if ( v94 == 1 )
          v95 = (__int64)__dst[0];
        sub_100000AE0((int)"get_thread_sreg_base(tid=%d, %d) => %a\n", v92, (unsigned int)v93, v95);
      }
      sub_100032FE0(a1, v94);
      if ( v94 == 1 )
        sub_10005A320(a1, (__int64)__dst[0] + 1);
      else
        sub_100055750((__int64)a1, (__int64)&v297);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x22:
      v43 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v44 = sub_1000666B0(v43, (unsigned __int64 *)&__src);
      (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**(_QWORD **)(a2 + 440) + 184LL))(
        *(_QWORD *)(a2 + 440),
        v44,
        v43);
      if ( v44 )
      {
        v45 = *(v44 - 1);
        if ( v45 )
        {
          v46 = 7 * v45;
          do
          {
            v47 = (void *)v44[v46 - 3];
            if ( v47 )
            {
              v44[v46 - 2] = 0;
              qfree(v47);
              v44[v46 - 3] = 0;
              v44[v46 - 1] = 0;
            }
            v48 = (void *)v44[v46 - 6];
            if ( v48 )
            {
              v44[v46 - 5] = 0;
              qfree(v48);
              v44[v46 - 6] = 0;
              v44[v46 - 4] = 0;
            }
            v46 -= 7;
          }
          while ( v46 * 8 );
        }
        operator delete[](v44 - 1);
      }
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"set_exception_info(qty=%d)\n", v43);
      goto LABEL_464;
    case 0x23:
      v148 = v5;
      while ( v148 < v6 )
      {
        v149 = v148 + 1;
        v73 = *v148++ == 0;
        if ( v73 )
        {
          __src = v149;
LABEL_232:
          v275 = v5;
          v177 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
          v178 = sub_100069520((_QWORD *)a2);
          if ( v178 == -1 )
          {
            v219 = -1;
            v220 = 0;
          }
          else
          {
            if ( v177 )
            {
              v179 = fopenRB(v5);
            }
            else
            {
              v254 = v5;
              if ( (unsigned __int8)qdirname((char *)&v297, 0x400u, v5) && !qisdir((const char *)&v297) )
              {
                qmake_full_path((unsigned __int64)__dst, 1024, (char *)&v297);
                qgetcwd(__s, 0x400u);
                v255 = strlen(__s);
                if ( !strncmp((const char *)__dst, __s, v255) )
                {
                  v287 = 0;
                  v288 = 0;
                  do
                  {
                    if ( qisdir((const char *)__dst) )
                      break;
                    v256 = v287;
                    sub_10004C380((__int64)&v285, (const char *)__dst);
                    sub_10005ADC0((__int64)&v287, v256, (__int64 *)&v285);
                    sub_100006E30((void **)&v285);
                  }
                  while ( (unsigned __int8)qdirname((char *)__dst, 0x400u, (char *)__dst) );
                  if ( *((_QWORD *)&v287 + 1) )
                  {
                    v257 = *((_QWORD *)&v287 + 1) - 1LL;
                    v258 = 8;
                    do
                    {
                      v259 = _s1;
                      if ( *(_QWORD *)(v287 + v258) )
                        v259 = *(const char **)(v287 + v258 - 8);
                      if ( *(_BYTE *)(a2 + 184) == 1 )
                        sub_100000AE0((int)"open_file() creating directory %s\n", v259);
                      v260 = qmkdir(v259, 0x1FFu);
                      v261 = v257-- == 0;
                      if ( v260 )
                        break;
                      v258 += 24;
                    }
                    while ( !v261 );
                  }
                  sub_1000127D0((char **)&v287);
                }
                v254 = v275;
              }
              v179 = fopenWB(v254);
            }
            *(_QWORD *)(a2 + 8LL * v178 + 8) = v179;
            v220 = 0;
            if ( v177 != 0 && v179 != nullptr )
            {
              v220 = ((__int64 (__fastcall *)(FILE *))qfsize)(v179);
              v219 = v178;
            }
            else
            {
              v219 = v179 == nullptr ? -1 : v178;
            }
          }
          if ( *(_BYTE *)(a2 + 184) == 1 )
            sub_100000AE0((int)"open_file('%s', %d) => %d %lld\n", v275, v177 != 0, v219, v220);
          sub_100032FE0(a1, v219);
          if ( v219 == -1 )
          {
            v262 = __error();
            sub_100032FE0(a1, *v262);
          }
          else
          {
            sub_10005A320(a1, v220);
          }
          goto LABEL_464;
        }
      }
      v5 = nullptr;
      goto LABEL_232;
    case 0x24:
      v143 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      if ( v143 <= 0xF )
      {
        v144 = v143;
        v145 = *(FILE **)(a2 + 8LL * v143 + 8);
        if ( v145 )
        {
          v146 = v143;
          v147 = fileno(*(FILE **)(a2 + 8LL * v143 + 8));
          fchmod(v147, 0x1EDu);
          qfclose(v145);
          *(_QWORD *)(a2 + 8 * v144 + 8) = 0;
          v143 = v146;
        }
      }
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"close_file(%d)\n", v143);
      goto LABEL_464;
    case 0x25:
      v278 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v55 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v56 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v57 = v56;
      if ( v56 <= 0 )
      {
        v59 = 0;
        v58 = nullptr;
      }
      else
      {
        v58 = operator new[]((unsigned int)v56);
        qfseek(*(FILE **)(a2 + 8LL * (int)v278 + 8), v55, 0);
        v59 = qfread(*(FILE **)(a2 + 8LL * (int)v278 + 8), v58, v57);
      }
      sub_100032FE0(a1, v59);
      if ( v57 == v59 )
      {
        sub_100055660((__int64)a1, v58, (int)v57);
      }
      else
      {
        v232 = __error();
        sub_100032FE0(a1, *v232);
      }
      if ( v58 )
        operator delete[](v58);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"read_file(%d, 0x%llX, %d) => %d\n", v278, v55, v57, v59);
      goto LABEL_464;
    case 0x26:
      v280 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v80 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v81 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v82 = v81;
      v83 = v81;
      if ( v81 )
      {
        v84 = operator new[](v81);
        v85 = __src;
        if ( (char *)__src + v83 >= __src && (char *)__src + v83 <= v290 )
        {
          __src = (char *)__src + v83;
          memcpy(v84, v85, v83);
        }
      }
      else
      {
        v84 = nullptr;
      }
      qfseek(*(FILE **)(a2 + 8LL * (int)v280 + 8), v80, 0);
      if ( v84 )
        v233 = qfwrite(*(FILE **)(a2 + 8LL * (int)v280 + 8), v84, v83);
      else
        v233 = 0;
      sub_100032FE0(a1, v82);
      if ( v82 != v233 )
      {
        v234 = __error();
        sub_100032FE0(a1, *v234);
      }
      if ( v84 )
        operator delete[](v84);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"write_file(%d, 0x%llX, %u) => %u\n", v280, v80, v82, v233);
      goto LABEL_464;
    case 0x27:
      v106 = sub_10006B630(a2 + 192, a1, v5, (unsigned __int64)v6);
      if ( v106 )
      {
        sub_10006B790((__int64)&v297, v106);
        sub_100054D70((__int64)a1, (__int64 *)&v297);
        sub_100001B80((__int64)&v297);
      }
      goto LABEL_464;
    case 0x28:
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v86 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v87 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(a2 + 440) + 416LL))(
              *(_QWORD *)(a2 + 440),
              v86,
              &v297);
      sub_100032FE0(a1, v87);
      if ( v87 == 1 )
        sub_1000668D0(a1, (__int64 *)&v297);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x29:
      v160 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v161 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v162 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v163 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      *(_OWORD *)__s = 0;
      v292 = 0;
      v287 = 0;
      v288 = 0;
      v295 = 0;
      v294 = 0;
      *(_OWORD *)__dst = 0;
      v296 = 0;
      v164 = nullptr;
      if ( (v163 & 1) == 0 )
        v164 = (__int64 *)&v287;
      sub_100066B60((__int64 *)__s, (__int64)__dst, v164, (unsigned __int64 *)&__src);
      v285 = 0;
      v286 = 0;
      *(_QWORD *)&v297 = 0xFFFFFFFFLL;
      *((_QWORD *)&v297 + 1) = -1;
      LOBYTE(v298[0]) = 0;
      memset((char *)v298 + 4, 0, 52);
      v165 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, char *, void **, __int128 *, __int128 *, __int128 *, int))(**(_QWORD **)(a2 + 440) + 424LL))(
               *(_QWORD *)(a2 + 440),
               v160 - 1,
               v161,
               v162,
               __s,
               __dst,
               &v287,
               &v285,
               &v297,
               v163);
      sub_10005A320(a1, v165 + 1);
      if ( v165 == -1 )
      {
        if ( (v163 & 2) != 0 )
          sub_100066550(a1, (__int64)&v297);
        sub_100055750((__int64)a1, (__int64)&v285);
      }
      else if ( (v163 & 1) == 0 )
      {
        sub_100066D10(a1, (__int64)&v287, 1);
      }
      free_debug_event((__int64)&v297);
      if ( (_QWORD)v285 )
      {
        *((_QWORD *)&v285 + 1) = 0;
        qfree((void *)v285);
      }
      if ( (_QWORD)v295 )
      {
        *((_QWORD *)&v295 + 1) = 0;
        qfree((void *)v295);
        *(_QWORD *)&v295 = 0;
        v296 = 0;
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      v235 = (void *)v287;
      if ( (_QWORD)v287 )
      {
        v236 = *((_QWORD *)&v287 + 1);
        if ( *((_QWORD *)&v287 + 1) )
        {
          v237 = 8;
          do
          {
            v238 = v287;
            v239 = *(void **)(v287 + v237);
            if ( v239 )
            {
              *(_QWORD *)(v287 + v237 + 8) = 0;
              qfree(v239);
              *(_QWORD *)(v238 + v237) = 0;
              *(_QWORD *)(v238 + v237 + 16) = 0;
            }
            v237 += 32;
            --v236;
          }
          while ( v236 );
          v235 = (void *)v287;
        }
        *((_QWORD *)&v287 + 1) = 0;
        qfree(v235);
      }
      v240 = *(void **)__s;
      if ( *(_QWORD *)__s )
      {
        v241 = *(_QWORD *)&__s[8];
        if ( *(_QWORD *)&__s[8] )
        {
          v242 = 8;
          do
          {
            v243 = *(_QWORD *)__s;
            v244 = *(void **)(*(_QWORD *)__s + v242);
            if ( v244 )
            {
              *(_QWORD *)(*(_QWORD *)__s + v242 + 8) = 0;
              qfree(v244);
              *(_QWORD *)(v243 + v242) = 0;
              *(_QWORD *)(v243 + v242 + 16) = 0;
            }
            v242 += 32;
            --v241;
          }
          while ( v241 );
          v240 = *(void **)__s;
        }
        *(_QWORD *)&__s[8] = 0;
        qfree(v240);
      }
      goto LABEL_464;
    case 0x2A:
      v53 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 440) + 432LL))(*(_QWORD *)(a2 + 440), v53);
      sub_100032FE0(a1, v54);
      goto LABEL_464;
    case 0x2B:
      v132 = v5;
      while ( v132 < v6 )
      {
        v133 = v132 + 1;
        v73 = *v132++ == 0;
        if ( v73 )
        {
          __src = v133;
LABEL_230:
          v176 = (*(__int64 (__fastcall **)(_QWORD, char *))(**(_QWORD **)(a2 + 440) + 536LL))(
                   *(_QWORD *)(a2 + 440),
                   v5);
          sub_100032FE0(a1, v176);
          goto LABEL_464;
        }
      }
      v5 = nullptr;
      goto LABEL_230;
    case 0x2C:
      v150 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6) - 1;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v151 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, unsigned __int64))(**(_QWORD **)(a2 + 440) + 264LL))(
               *(_QWORD *)(a2 + 440),
               &v297,
               v150);
      v152 = v151;
      v153 = DWORD2(v297);
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"get_scattered_image(base=%a) => %d (qty=%d)\n", v150, v151, DWORD2(v297));
      sub_100032FE0(a1, v152 + 2);
      if ( v152 > 0 )
      {
        sub_100032FE0(a1, v153);
        if ( v153 > 0 )
        {
          v154 = v153 & 0x7FFFFFFF;
          v155 = 0;
          do
          {
            sub_100065EC0(a1, (_QWORD *)(v155 + v297));
            v155 += 40;
            --v154;
          }
          while ( v154 );
        }
      }
      v88 = (void *)v297;
      if ( !(_QWORD)v297 )
        goto LABEL_464;
      v156 = *((_QWORD *)&v297 + 1);
      if ( *((_QWORD *)&v297 + 1) )
      {
        v157 = 16;
        do
        {
          v158 = v297;
          v159 = *(void **)(v297 + v157);
          if ( v159 )
          {
            *(_QWORD *)(v297 + v157 + 8) = 0;
            qfree(v159);
            *(_QWORD *)(v158 + v157) = 0;
            *(_QWORD *)(v158 + v157 + 16) = 0;
          }
          v157 += 40;
          --v156;
        }
        while ( v156 );
        v88 = (void *)v297;
      }
LABEL_430:
      *((_QWORD *)&v297 + 1) = 0;
      qfree(v88);
      goto LABEL_464;
    case 0x2D:
      v32 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6) - 1;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v33 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, unsigned __int64))(**(_QWORD **)(a2 + 440) + 272LL))(
              *(_QWORD *)(a2 + 440),
              &v297,
              v32);
      v34 = v33;
      v35 = DWORD2(v297);
      v36 = v33;
      if ( *(_BYTE *)(a2 + 184) )
        sub_100000AE0((int)"get_image_uuid(base=%a) => %d (size=%d)\n", v32, v33, DWORD2(v297));
      sub_100032FE0(a1, v36);
      if ( v34 )
        sub_10005ACB0(a1, (const void *)v297, v35);
      v88 = (void *)v297;
      if ( (_QWORD)v297 )
        goto LABEL_430;
      goto LABEL_464;
    case 0x2E:
      v111 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6) - 1;
      v112 = (const char *)__src;
      v113 = (char *)__src;
      while ( v113 < v290 )
      {
        v114 = v113 + 1;
        v73 = *v113++ == 0;
        if ( v73 )
        {
          __src = v114;
          v115 = *(_QWORD *)(a2 + 440);
          v297 = 0;
          *(_QWORD *)&v298[0] = 0;
          if ( v112 )
          {
            v116 = v115;
            v117 = strlen(v112);
            v118 = v117;
            v119 = v117 + 1;
            if ( v117 == -1 )
            {
              v120 = nullptr;
            }
            else
            {
              v120 = qvector_reserve((__int64)&v297, nullptr, v117 + 1, 1u);
              *(_QWORD *)&v297 = v120;
            }
            *((_QWORD *)&v297 + 1) = v119;
            memmove(v120, v112, v118);
            *(_BYTE *)(v297 + v118) = 0;
            v115 = v116;
          }
          else
          {
            v112 = nullptr;
          }
          goto LABEL_459;
        }
      }
      v115 = *(_QWORD *)(a2 + 440);
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      v112 = nullptr;
LABEL_459:
      v263 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int128 *))(*(_QWORD *)v115 + 280LL))(
               v115,
               v111,
               &v297);
      if ( (_QWORD)v297 )
      {
        *((_QWORD *)&v297 + 1) = 0;
        qfree((void *)v297);
      }
      if ( *(_BYTE *)(a2 + 184) == 1 )
        sub_100000AE0((int)"get_segm_start(base=%a, segname=%s) => %a\n", v111, v112, v263);
      sub_10005A320(a1, v263 + 1);
      goto LABEL_464;
    case 0x2F:
      v8 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v6);
      v9 = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v10 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      v269 = v9;
      v268 = v8;
      v297 = 0;
      *(_QWORD *)&v298[0] = 0;
      sub_10005B010((__int64 *)&v297, v10);
      if ( v10 > 0 )
      {
        v274 = (unsigned int)v10;
        v11 = 0;
        do
        {
          v12 = v297 + 80 * v11;
          v13 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
          if ( v13 )
          {
            v14 = v13;
            v15 = *(_QWORD *)(v12 + 8);
            if ( v15 >= v13 )
            {
              if ( v15 != v13 )
              {
                LOBYTE(__dst[0]) = 0;
                sub_10001CE90(v12, v13, (unsigned __int8 *)__dst);
              }
            }
            else
            {
              v16 = *(char **)v12;
              if ( *(_QWORD *)(v12 + 16) < v14 )
              {
                v16 = (char *)qvector_reserve(v12, *(void **)v12, v14, 1u);
                *(_QWORD *)v12 = v16;
                v15 = *(_QWORD *)(v12 + 8);
              }
              __bzero(&v16[v15], v14 - v15);
              *(_QWORD *)(v12 + 8) = v14;
            }
            v17 = __src;
            if ( (char *)__src + v14 >= __src && (char *)__src + v14 <= v290 )
            {
              v18 = *(void **)v12;
              __src = (char *)__src + v14;
              memcpy(v18, v17, v14);
            }
          }
          v19 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
          if ( v19 )
          {
            v20 = v19;
            v21 = *(_QWORD *)(v12 + 32);
            if ( v21 >= v19 )
            {
              if ( v21 != v19 )
              {
                LOBYTE(__dst[0]) = 0;
                sub_10001CE90(v12 + 24, v19, (unsigned __int8 *)__dst);
              }
            }
            else
            {
              v22 = *(char **)(v12 + 24);
              if ( *(_QWORD *)(v12 + 40) < v20 )
              {
                v22 = (char *)qvector_reserve(v12 + 24, *(void **)(v12 + 24), v20, 1u);
                *(_QWORD *)(v12 + 24) = v22;
                v21 = *(_QWORD *)(v12 + 32);
              }
              __bzero(&v22[v21], v20 - v21);
              *(_QWORD *)(v12 + 32) = v20;
            }
            v23 = __src;
            if ( (char *)__src + v20 >= __src && (char *)__src + v20 <= v290 )
            {
              v24 = *(void **)(v12 + 24);
              __src = (char *)__src + v20;
              memcpy(v24, v23, v20);
            }
          }
          v25 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
          v26 = v25;
          v27 = (_QWORD *)(v12 + 48);
          if ( *(_QWORD *)(v12 + 56) != v25 )
          {
            *(_OWORD *)__dst = 0;
            sub_100060070(v12 + 48, v25, __dst);
          }
          v277 = v11;
          if ( v26 > 0 )
          {
            v28 = 16LL * (unsigned int)v26;
            v29 = 0;
            do
            {
              *(_QWORD *)(*v27 + v29) = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290) - 1;
              *(_QWORD *)(*v27 + v29 + 8) = unpack_dq((unsigned __int64 *)&__src, (unsigned __int64)v290) - 1;
              v29 += 16;
            }
            while ( v28 != v29 );
          }
          *(_DWORD *)(v12 + 72) = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
          v11 = v277 + 1;
        }
        while ( v277 + 1 != v274 );
      }
      v30 = unpack_dd((unsigned __int64 *)&__src, (unsigned __int64)v290);
      *(_OWORD *)__dst = 0;
      *(_QWORD *)&v294 = 0;
      v31 = (*(__int64 (__fastcall **)(_QWORD, char *, unsigned __int64, unsigned __int64, __int128 *, _QWORD, void **))(**(_QWORD **)(a2 + 440) + 576LL))(
              *(_QWORD *)(a2 + 440),
              __s,
              v268 - 1,
              v269 - 1,
              &v297,
              v30,
              __dst);
      sub_100032FE0(a1, v31);
      if ( v31 != -1 )
      {
        if ( v31 == 1 )
          sub_10005A320(a1, *(_QWORD *)__s + 1LL);
        else
          sub_100055750((__int64)a1, (__int64)__dst);
      }
      if ( __dst[0] )
      {
        __dst[1] = nullptr;
        qfree(__dst[0]);
      }
      if ( (_QWORD)v297 )
      {
        sub_10005EB30((__int64 *)&v297, 0);
        qfree((void *)v297);
      }
      goto LABEL_464;
    case 0x30:
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 440) + 552LL) )
      {
        sub_100032FE0(a1, 1u);
        sub_100067150(a1, (__int64 *)(*(_QWORD *)(a2 + 440) + 544LL));
      }
      else
      {
        sub_100032FE0(a1, 0);
      }
      goto LABEL_464;
    default:
      sub_10006B790((__int64)&v297, 1);
      v166 = v297;
      v297 = 0;
      v167 = *(void **)&v298[0];
      *(_QWORD *)&v298[0] = 0;
      v168 = *a1;
      if ( *a1 )
      {
        a1[1] = nullptr;
        qfree(v168);
        v90 = (void *)v297;
        *(_OWORD *)a1 = v166;
        a1[2] = v167;
        if ( v90 )
        {
LABEL_210:
          *((_QWORD *)&v297 + 1) = 0;
          qfree(v90);
        }
      }
      else
      {
        *(_OWORD *)a1 = v166;
        a1[2] = v167;
      }
      goto LABEL_464;
  }
  do
  {
    if ( v71 >= v290 )
    {
      v75 = (_QWORD *)(*(_QWORD *)(a2 + 440) + 680LL);
LABEL_411:
      v75[1] = 0;
      goto LABEL_412;
    }
    v72 = v71 + 1;
    v73 = *v71++ == 0;
  }
  while ( !v73 );
  __src = v72;
  v74 = *(_QWORD **)(a2 + 440);
  v75 = v74 + 85;
  if ( !v69 || (v76 = strlen(v69)) == 0 )
  {
    v69 = (const char *)v72;
    goto LABEL_411;
  }
  v77 = v76;
  v78 = v76 + 1;
  v79 = (void *)v74[85];
  if ( v74[87] < v78 )
  {
    v79 = qvector_reserve((__int64)(v74 + 85), (void *)v74[85], v78, 1u);
    *v75 = v79;
  }
  v74[86] = v78;
  memmove(v79, v69, v77);
  *(_BYTE *)(v74[85] + v77) = 0;
  v69 = (const char *)__src;
  v70 = (unsigned __int64)v290;
LABEL_412:
  v245 = v69;
  while ( 2 )
  {
    if ( (unsigned __int64)v245 >= v70 )
    {
      v248 = (_QWORD *)(*(_QWORD *)(a2 + 440) + 704LL);
      goto LABEL_421;
    }
    v246 = (void *)(v245 + 1);
    v73 = *v245++ == 0;
    if ( !v73 )
      continue;
    break;
  }
  __src = v246;
  v247 = *(_QWORD **)(a2 + 440);
  v248 = v247 + 88;
  if ( !v69 || (v249 = strlen(v69)) == 0 )
  {
LABEL_421:
    v248[1] = 0;
    goto LABEL_422;
  }
  v250 = v249;
  v251 = v249 + 1;
  v252 = (void *)v247[88];
  if ( v247[90] < v251 )
  {
    v252 = qvector_reserve((__int64)(v247 + 88), (void *)v247[88], v251, 1u);
    *v248 = v252;
  }
  v247[89] = v251;
  memmove(v252, v69, v250);
  *(_BYTE *)(v247[88] + v250) = 0;
  v70 = (unsigned __int64)v290;
LABEL_422:
  *(_DWORD *)(*(_QWORD *)(a2 + 440) + 728LL) = unpack_dd((unsigned __int64 *)&__src, v70);
  (*(void (__fastcall **)(_QWORD, bool))(**(_QWORD **)(a2 + 440) + 96LL))(*(_QWORD *)(a2 + 440), v279 != 0);
  v297 = 0;
  *(_QWORD *)&v298[0] = 0;
  __dst[0] = nullptr;
  v253 = (*(__int64 (__fastcall **)(_QWORD, void **, __int128 *))(**(_QWORD **)(a2 + 440) + 104LL))(
           *(_QWORD *)(a2 + 440),
           __dst,
           &v297);
  if ( *(_BYTE *)(a2 + 184) == 1 )
    sub_100000AE0((int)"init(debug_debugger=%d) => %d (add_debugger_flags=0x%llX)\n", v279 != 0, v253, __dst[0]);
  sub_100032FE0(a1, v253);
  sub_10005A320(a1, (__int64)__dst[0]);
  if ( v253 == 1 )
  {
    if ( *(_BYTE *)(a2 + 184) == 1 )
      sub_100000AE0((int)"init() => idaregs.nregs %zu\n", *(_QWORD *)(*(_QWORD *)(a2 + 440) + 552LL));
    sub_100067150(a1, (__int64 *)(*(_QWORD *)(a2 + 440) + 544LL));
  }
  else
  {
    sub_100055750((__int64)a1, (__int64)&v297);
  }
  v88 = (void *)v297;
  if ( (_QWORD)v297 )
    goto LABEL_430;
LABEL_464:
  if ( v273 )
    *(_BYTE *)(a2 + 289) = 1;
  return a1;
}
// 100058FF4: variable 'v265' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
