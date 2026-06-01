__int64 __fastcall sub_1C10120(__int64 *a1, __int64 a2, double a3)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned int v14; // r14d
  __int64 v15; // rdx
  _QWORD *v16; // r13
  unsigned int v17; // ebx
  unsigned int v19; // edx
  unsigned __int64 *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // rbx
  unsigned int v24; // ebp
  unsigned int v25; // r13d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int8 *v34; // rbx
  __int64 v35; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 *v40; // rsi
  __int64 v41; // rax
  __int64 v42; // rbp
  unsigned __int8 v43; // r14
  __int64 v44; // rbp
  unsigned int v45; // r13d
  unsigned int v46; // ebp
  unsigned __int64 v47; // rdi
  unsigned __int8 *v48; // r13
  unsigned __int8 *v49; // rdx
  __int64 v50; // rax
  unsigned __int8 *v51; // rbp
  unsigned __int8 *v52; // rdx
  __int64 v53; // rax
  unsigned __int64 *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbp
  unsigned __int8 v57; // r13
  __int64 v58; // rbp
  unsigned int v59; // r14d
  unsigned int v60; // ebp
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r15
  unsigned __int64 v70; // rcx
  unsigned __int8 *v71; // r13
  unsigned __int8 *v72; // rdx
  __int64 v73; // rax
  unsigned __int8 v74; // r14
  unsigned __int64 v75; // rbx
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  unsigned __int8 *v79; // rbp
  unsigned __int8 *v80; // rdx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbp
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  _QWORD *v89; // rax
  __int64 v90; // r13
  unsigned __int8 *v91; // rbp
  _BYTE *v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // r13
  __int64 v99; // rax
  _QWORD *v100; // rax
  __int64 v101; // r14
  unsigned __int8 *v102; // r13
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // rbp
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rax
  _QWORD *v109; // rax
  __int64 v110; // r13
  unsigned __int8 *v111; // rbp
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  __int64 v115; // r9
  __int64 v116; // r13
  __int64 v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // r14
  unsigned __int8 *v120; // r13
  _BYTE *v121; // rdx
  __int64 v122; // rax
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rbx
  __int64 v126; // r8
  __int64 v127; // r9
  __int64 v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r15
  __int64 v132; // rdx
  int v133; // eax
  __int64 v134; // rax
  __int64 v135; // rdx
  int v136; // eax
  __int64 v137; // rdx
  int v138; // eax
  __int64 v139; // rdx
  int v140; // eax
  __int64 v141; // rax
  unsigned __int8 *v142; // r13
  unsigned __int8 *v143; // rdx
  __int64 v144; // rax
  unsigned __int8 *v145; // rbp
  unsigned __int8 *v146; // rdx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // r9
  __int64 v152; // r13
  __int64 v153; // rax
  _QWORD *v154; // rax
  __int64 v155; // r14
  unsigned __int8 *v156; // r13
  _BYTE *v157; // rdx
  __int64 v158; // rax
  __int64 v159; // rdx
  __int64 v160; // rcx
  __int64 v161; // rbp
  __int64 v162; // r8
  __int64 v163; // r9
  __int64 v164; // rax
  _QWORD *v165; // rax
  __int64 v166; // r13
  unsigned __int8 *v167; // rbp
  __int64 v168; // rdx
  int v169; // eax
  __int64 v170; // rdx
  int v171; // eax
  __int64 v172; // rdx
  int v173; // eax
  __int64 v174; // rdx
  int v175; // eax
  __int64 v176; // rax
  __int64 v177; // rdx
  int v178; // eax
  __int64 v179; // rdx
  int v180; // eax
  __int64 v181; // rax
  __int64 v182; // rdx
  int v183; // eax
  __int64 v184; // rdx
  int v185; // eax
  __int64 v186; // rax
  __int64 v187; // r14
  __int64 v188; // r15
  __int64 v189; // r14
  void *v190; // rdi
  __int64 v191; // rax
  __int64 v192; // r14
  __int64 v193; // r15
  __int64 v194; // r14
  void *v195; // rdi
  __int64 v196; // rax
  __int64 v197; // r13
  __int64 v198; // r14
  __int64 v199; // r13
  void *v200; // rdi
  __int64 v201; // rdx
  int v202; // eax
  __int64 v203; // rdx
  int v204; // eax
  __int64 v205; // rax
  __int64 v206; // r14
  __int64 v207; // r15
  __int64 v208; // r14
  void *v209; // rdi
  __int64 v210; // rax
  __int64 v211; // r13
  __int64 v212; // r14
  __int64 v213; // r13
  void *v214; // rdi
  __int64 v215; // rax
  __int64 v216; // r14
  __int64 v217; // r15
  __int64 v218; // r14
  void *v219; // rdi
  __int64 v220; // rax
  __int64 v221; // r14
  __int64 v222; // r15
  __int64 v223; // r14
  void *v224; // rdi
  __int64 v225; // rax
  __int64 v226; // r15
  __int64 v227; // rdx
  __int64 v228; // r15
  void *v229; // rdi
  __int64 v230; // rax
  __int64 v231; // r15
  __int64 v232; // rdx
  __int64 v233; // r15
  void *v234; // rdi
  __int64 v235; // rdx
  int v236; // eax
  __int64 v237; // rdx
  int v238; // eax
  __int64 v239; // rax
  __int64 v240; // rdx
  int v241; // eax
  __int64 v242; // rax
  __int64 v243; // r14
  __int64 v244; // rdx
  __int64 v245; // r14
  void *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // r14
  __int64 v249; // r15
  __int64 v250; // r14
  void *v251; // rdi
  __int64 v252; // rax
  __int64 v253; // r15
  __int64 v254; // rdx
  __int64 v255; // r15
  void *v256; // rdi
  __int64 v257; // rax
  __int64 v258; // r14
  __int64 v259; // r15
  __int64 v260; // r14
  void *v261; // rdi
  __int64 v262; // rax
  __int64 v263; // r13
  __int64 v264; // r15
  __int64 v265; // r13
  void *v266; // rdi
  __int64 v267; // rax
  __int64 v268; // r13
  __int64 v269; // r14
  __int64 v270; // r13
  void *v271; // rdi
  __int64 v272; // rax
  __int64 v273; // r13
  __int64 v274; // rdx
  __int64 v275; // r13
  void *v276; // rdi
  __int64 v277; // rax
  __int64 v278; // r15
  __int64 v279; // rdx
  __int64 v280; // r15
  void *v281; // rdi
  __int64 v282; // rax
  __int64 v283; // r14
  __int64 v284; // r15
  __int64 v285; // r14
  void *v286; // rdi
  __int64 v287; // [rsp+8h] [rbp-F0h]
  __int64 v288; // [rsp+8h] [rbp-F0h]
  __int64 v289; // [rsp+8h] [rbp-F0h]
  __int64 v290; // [rsp+8h] [rbp-F0h]
  __int64 v291; // [rsp+8h] [rbp-F0h]
  __int64 v292; // [rsp+8h] [rbp-F0h]
  __int64 v293; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v294; // [rsp+20h] [rbp-D8h] BYREF
  int v295; // [rsp+28h] [rbp-D0h]
  _QWORD v296[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v297; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v298; // [rsp+50h] [rbp-A8h]
  __int64 v299; // [rsp+58h] [rbp-A0h]
  unsigned __int8 v300; // [rsp+A8h] [rbp-50h]
  unsigned int v301; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v302; // [rsp+B4h] [rbp-44h]

  v5 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
  v6 = sub_168B6C0((__int64)a1);
  if ( !(unsigned __int8)sub_C3EA40(v5, v6, nullptr, v7, v8, v9) )
  {
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v19 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0
           || (v19 = sub_EEB7E0(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), v6, a3)) == 0 )
    {
      v19 = sub_EEB7E0(*(_QWORD *)(a2 + 32), v6, a3);
      if ( !v19 )
      {
        if ( *(_DWORD *)(a2 + 16) )
        {
          v47 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          if ( v47 )
            v19 = sub_EEB7E0(v47, v6, a3);
        }
      }
    }
    v20 = (unsigned __int64 *)a1;
    sub_168B9F0((__int64)v296, a1, v19, 0x1554u, 0);
    if ( v300 )
    {
      v79 = v298;
      if ( !v298 )
      {
        v170 = v299;
        v171 = *(_DWORD *)(v299 + 14976);
        if ( v171 )
        {
          v196 = (unsigned int)(v171 - 1);
          *(_DWORD *)(v299 + 14976) = v196;
          v79 = *(unsigned __int8 **)(v170 + 8 * v196 + 14848);
          v197 = *((unsigned int *)v79 + 134);
          *v79 = 0;
          v198 = *((_QWORD *)v79 + 66);
          *((_DWORD *)v79 + 106) = 0;
          v199 = v198 + (v197 << 6);
          while ( v198 != v199 )
          {
            while ( 1 )
            {
              v199 -= 64;
              v200 = *(void **)(v199 + 24);
              if ( v200 == (void *)(v199 + 40) )
                break;
              operator delete(v200);
              if ( v198 == v199 )
                goto LABEL_170;
            }
          }
LABEL_170:
          *((_DWORD *)v79 + 134) = 0;
        }
        else
        {
          v79 = (unsigned __int8 *)operator new(0x3A0u);
          *v79 = 0;
          *((_QWORD *)v79 + 12) = v79 + 112;
          *((_QWORD *)v79 + 16) = v79 + 144;
          *((_QWORD *)v79 + 20) = v79 + 176;
          *((_QWORD *)v79 + 24) = v79 + 208;
          *((_QWORD *)v79 + 28) = v79 + 240;
          *((_QWORD *)v79 + 32) = v79 + 272;
          *((_QWORD *)v79 + 36) = v79 + 304;
          *((_QWORD *)v79 + 40) = v79 + 336;
          *((_QWORD *)v79 + 44) = v79 + 368;
          *((_QWORD *)v79 + 48) = v79 + 400;
          *((_QWORD *)v79 + 52) = v79 + 432;
          *((_QWORD *)v79 + 13) = 0;
          v79[112] = 0;
          *((_QWORD *)v79 + 17) = 0;
          v79[144] = 0;
          *((_QWORD *)v79 + 21) = 0;
          v79[176] = 0;
          *((_QWORD *)v79 + 25) = 0;
          v79[208] = 0;
          *((_QWORD *)v79 + 29) = 0;
          v79[240] = 0;
          *((_QWORD *)v79 + 33) = 0;
          v79[272] = 0;
          *((_QWORD *)v79 + 37) = 0;
          v79[304] = 0;
          *((_QWORD *)v79 + 41) = 0;
          v79[336] = 0;
          *((_QWORD *)v79 + 45) = 0;
          v79[368] = 0;
          *((_QWORD *)v79 + 49) = 0;
          v79[400] = 0;
          *((_QWORD *)v79 + 53) = 0x800000000LL;
          *((_QWORD *)v79 + 66) = v79 + 544;
          *((_QWORD *)v79 + 67) = 0x600000000LL;
        }
        v298 = v79;
      }
      v79[*v79 + 1] = 2;
      v80 = v298;
      v81 = *v298;
      *v298 = v81 + 1;
      *(_QWORD *)&v80[8 * v81 + 16] = 3;
    }
    else if ( v302 )
    {
      v85 = sub_168B9E0(v296);
      v88 = v297;
      if ( v297 )
        v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v20 = &v294;
      v294 = v88;
      v89 = sub_1587BC0(v85, (__int64 *)&v294, v83, v84, v86, v87);
      v90 = *v89 + 32LL * v301;
      v91 = *(unsigned __int8 **)(v90 + 8);
      if ( !v91 )
      {
        v184 = *(_QWORD *)(v90 + 16);
        v185 = *(_DWORD *)(v184 + 14976);
        if ( v185 )
        {
          v220 = (unsigned int)(v185 - 1);
          *(_DWORD *)(v184 + 14976) = v220;
          v91 = *(unsigned __int8 **)(v184 + 8 * v220 + 14848);
          v221 = *((unsigned int *)v91 + 134);
          *v91 = 0;
          v222 = *((_QWORD *)v91 + 66);
          *((_DWORD *)v91 + 106) = 0;
          v223 = v222 + (v221 << 6);
          while ( v222 != v223 )
          {
            while ( 1 )
            {
              v223 -= 64;
              v224 = *(void **)(v223 + 24);
              if ( v224 == (void *)(v223 + 40) )
                break;
              operator delete(v224);
              if ( v222 == v223 )
                goto LABEL_196;
            }
          }
LABEL_196:
          *((_DWORD *)v91 + 134) = 0;
        }
        else
        {
          v91 = (unsigned __int8 *)operator new(0x3A0u);
          *v91 = 0;
          *((_QWORD *)v91 + 12) = v91 + 112;
          *((_QWORD *)v91 + 16) = v91 + 144;
          *((_QWORD *)v91 + 20) = v91 + 176;
          *((_QWORD *)v91 + 24) = v91 + 208;
          *((_QWORD *)v91 + 28) = v91 + 240;
          *((_QWORD *)v91 + 32) = v91 + 272;
          *((_QWORD *)v91 + 36) = v91 + 304;
          *((_QWORD *)v91 + 40) = v91 + 336;
          *((_QWORD *)v91 + 44) = v91 + 368;
          *((_QWORD *)v91 + 48) = v91 + 400;
          *((_QWORD *)v91 + 52) = v91 + 432;
          *((_QWORD *)v91 + 13) = 0;
          v91[112] = 0;
          *((_QWORD *)v91 + 17) = 0;
          v91[144] = 0;
          *((_QWORD *)v91 + 21) = 0;
          v91[176] = 0;
          *((_QWORD *)v91 + 25) = 0;
          v91[208] = 0;
          *((_QWORD *)v91 + 29) = 0;
          v91[240] = 0;
          *((_QWORD *)v91 + 33) = 0;
          v91[272] = 0;
          *((_QWORD *)v91 + 37) = 0;
          v91[304] = 0;
          *((_QWORD *)v91 + 41) = 0;
          v91[336] = 0;
          *((_QWORD *)v91 + 45) = 0;
          v91[368] = 0;
          *((_QWORD *)v91 + 49) = 0;
          v91[400] = 0;
          *((_QWORD *)v91 + 53) = 0x800000000LL;
          *((_QWORD *)v91 + 66) = v91 + 544;
          *((_QWORD *)v91 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v90 + 8) = v91;
      }
      v91[*v91 + 1] = 2;
      v92 = *(_BYTE **)(v90 + 8);
      v93 = (unsigned __int8)*v92;
      *v92 = v93 + 1;
      *(_QWORD *)&v92[8 * v93 + 16] = 3;
    }
    v21 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v22 = v21;
    if ( v21 && (*(_BYTE *)(v21 + 28) & 0x7Fu) - 34 >= 6 )
      v22 = 0;
    if ( v300 )
    {
      v71 = v298;
      if ( !v298 )
      {
        v168 = v299;
        v169 = *(_DWORD *)(v299 + 14976);
        if ( v169 )
        {
          v191 = (unsigned int)(v169 - 1);
          *(_DWORD *)(v299 + 14976) = v191;
          v71 = *(unsigned __int8 **)(v168 + 8 * v191 + 14848);
          v192 = *((unsigned int *)v71 + 134);
          *v71 = 0;
          v193 = *((_QWORD *)v71 + 66);
          *((_DWORD *)v71 + 106) = 0;
          v194 = v193 + (v192 << 6);
          while ( v193 != v194 )
          {
            while ( 1 )
            {
              v194 -= 64;
              v195 = *(void **)(v194 + 24);
              if ( v195 == (void *)(v194 + 40) )
                break;
              operator delete(v195);
              if ( v193 == v194 )
                goto LABEL_165;
            }
          }
LABEL_165:
          *((_DWORD *)v71 + 134) = 0;
        }
        else
        {
          v71 = (unsigned __int8 *)operator new(0x3A0u);
          *v71 = 0;
          *((_QWORD *)v71 + 12) = v71 + 112;
          *((_QWORD *)v71 + 16) = v71 + 144;
          *((_QWORD *)v71 + 20) = v71 + 176;
          *((_QWORD *)v71 + 24) = v71 + 208;
          *((_QWORD *)v71 + 28) = v71 + 240;
          *((_QWORD *)v71 + 32) = v71 + 272;
          *((_QWORD *)v71 + 36) = v71 + 304;
          *((_QWORD *)v71 + 40) = v71 + 336;
          *((_QWORD *)v71 + 44) = v71 + 368;
          *((_QWORD *)v71 + 48) = v71 + 400;
          *((_QWORD *)v71 + 52) = v71 + 432;
          *((_QWORD *)v71 + 13) = 0;
          v71[112] = 0;
          *((_QWORD *)v71 + 17) = 0;
          v71[144] = 0;
          *((_QWORD *)v71 + 21) = 0;
          v71[176] = 0;
          *((_QWORD *)v71 + 25) = 0;
          v71[208] = 0;
          *((_QWORD *)v71 + 29) = 0;
          v71[240] = 0;
          *((_QWORD *)v71 + 33) = 0;
          v71[272] = 0;
          *((_QWORD *)v71 + 37) = 0;
          v71[304] = 0;
          *((_QWORD *)v71 + 41) = 0;
          v71[336] = 0;
          *((_QWORD *)v71 + 45) = 0;
          v71[368] = 0;
          *((_QWORD *)v71 + 49) = 0;
          v71[400] = 0;
          *((_QWORD *)v71 + 53) = 0x800000000LL;
          *((_QWORD *)v71 + 66) = v71 + 544;
          *((_QWORD *)v71 + 67) = 0x600000000LL;
        }
        v298 = v71;
      }
      v71[*v71 + 1] = 10;
      v72 = v298;
    }
    else
    {
      if ( !v302 )
      {
        v23 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
        v24 = sub_EEC140(v23);
        v25 = sub_EEB7E0(v23, (__int64)v20, a3);
        goto LABEL_23;
      }
      v98 = sub_168B9E0(v296);
      v99 = v297;
      if ( v297 )
        v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v20 = &v294;
      v294 = v99;
      v100 = sub_1587BC0(v98, (__int64 *)&v294, v94, v95, v96, v97);
      v101 = *v100 + 32LL * v301;
      v102 = *(unsigned __int8 **)(v101 + 8);
      if ( !v102 )
      {
        v182 = *(_QWORD *)(v101 + 16);
        v183 = *(_DWORD *)(v182 + 14976);
        if ( v183 )
        {
          v230 = (unsigned int)(v183 - 1);
          *(_DWORD *)(v182 + 14976) = v230;
          v102 = *(unsigned __int8 **)(v182 + 8 * v230 + 14848);
          v231 = *((unsigned int *)v102 + 134);
          *v102 = 0;
          v232 = *((_QWORD *)v102 + 66);
          *((_DWORD *)v102 + 106) = 0;
          v233 = v232 + (v231 << 6);
          while ( v232 != v233 )
          {
            while ( 1 )
            {
              v233 -= 64;
              v234 = *(void **)(v233 + 24);
              if ( v234 == (void *)(v233 + 40) )
                break;
              v288 = v232;
              operator delete(v234);
              v232 = v288;
              if ( v288 == v233 )
                goto LABEL_206;
            }
          }
LABEL_206:
          *((_DWORD *)v102 + 134) = 0;
        }
        else
        {
          v102 = (unsigned __int8 *)operator new(0x3A0u);
          *v102 = 0;
          *((_QWORD *)v102 + 12) = v102 + 112;
          *((_QWORD *)v102 + 16) = v102 + 144;
          *((_QWORD *)v102 + 20) = v102 + 176;
          *((_QWORD *)v102 + 24) = v102 + 208;
          *((_QWORD *)v102 + 28) = v102 + 240;
          *((_QWORD *)v102 + 32) = v102 + 272;
          *((_QWORD *)v102 + 36) = v102 + 304;
          *((_QWORD *)v102 + 40) = v102 + 336;
          *((_QWORD *)v102 + 44) = v102 + 368;
          *((_QWORD *)v102 + 48) = v102 + 400;
          *((_QWORD *)v102 + 52) = v102 + 432;
          *((_QWORD *)v102 + 13) = 0;
          v102[112] = 0;
          *((_QWORD *)v102 + 17) = 0;
          v102[144] = 0;
          *((_QWORD *)v102 + 21) = 0;
          v102[176] = 0;
          *((_QWORD *)v102 + 25) = 0;
          v102[208] = 0;
          *((_QWORD *)v102 + 29) = 0;
          v102[240] = 0;
          *((_QWORD *)v102 + 33) = 0;
          v102[272] = 0;
          *((_QWORD *)v102 + 37) = 0;
          v102[304] = 0;
          *((_QWORD *)v102 + 41) = 0;
          v102[336] = 0;
          *((_QWORD *)v102 + 45) = 0;
          v102[368] = 0;
          *((_QWORD *)v102 + 49) = 0;
          v102[400] = 0;
          *((_QWORD *)v102 + 53) = 0x800000000LL;
          *((_QWORD *)v102 + 66) = v102 + 544;
          *((_QWORD *)v102 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v101 + 8) = v102;
      }
      v102[*v102 + 1] = 10;
      v72 = *(unsigned __int8 **)(v101 + 8);
    }
    v73 = *v72;
    *v72 = v73 + 1;
    *(_QWORD *)&v72[8 * v73 + 16] = v22;
    v74 = v300;
    v75 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 48);
    v24 = sub_EEC140(v75);
    v25 = sub_EEB7E0(v75, (__int64)v20, a3);
    if ( v74 )
    {
      v34 = v298;
      if ( v298 )
      {
LABEL_27:
        v36 = *((unsigned int *)v34 + 106);
        v37 = *((unsigned int *)v34 + 107);
        v38 = v36 + 1;
        goto LABEL_28;
      }
      v76 = v299;
      v77 = *(_DWORD *)(v299 + 14976);
      if ( v77 )
      {
        v186 = (unsigned int)(v77 - 1);
        *(_DWORD *)(v299 + 14976) = v186;
        v34 = *(unsigned __int8 **)(v76 + 8 * v186 + 14848);
        v187 = *((unsigned int *)v34 + 134);
        *v34 = 0;
        v188 = *((_QWORD *)v34 + 66);
        *((_DWORD *)v34 + 106) = 0;
        v189 = v188 + (v187 << 6);
        if ( v188 == v189 )
        {
          v38 = 1;
          v36 = 0;
        }
        else
        {
          do
          {
            while ( 1 )
            {
              v189 -= 64;
              v190 = *(void **)(v189 + 24);
              if ( v190 == (void *)(v189 + 40) )
                break;
              operator delete(v190);
              if ( v188 == v189 )
                goto LABEL_157;
            }
          }
          while ( v188 != v189 );
LABEL_157:
          v36 = *((unsigned int *)v34 + 106);
          v38 = v36 + 1;
        }
        *((_DWORD *)v34 + 134) = 0;
        v37 = *((unsigned int *)v34 + 107);
      }
      else
      {
        v78 = operator new(0x3A0u);
        v37 = 8;
        v38 = 1;
        v34 = (unsigned __int8 *)v78;
        *(_BYTE *)v78 = 0;
        *(_QWORD *)(v78 + 96) = v78 + 112;
        *(_QWORD *)(v78 + 128) = v78 + 144;
        *(_QWORD *)(v78 + 160) = v78 + 176;
        *(_QWORD *)(v78 + 192) = v78 + 208;
        *(_QWORD *)(v78 + 224) = v78 + 240;
        *(_QWORD *)(v78 + 256) = v78 + 272;
        *(_QWORD *)(v78 + 288) = v78 + 304;
        *(_QWORD *)(v78 + 320) = v78 + 336;
        *(_QWORD *)(v78 + 352) = v78 + 368;
        *(_QWORD *)(v78 + 384) = v78 + 400;
        *(_QWORD *)(v78 + 416) = v78 + 432;
        *(_QWORD *)(v78 + 104) = 0;
        *(_BYTE *)(v78 + 112) = 0;
        *(_QWORD *)(v78 + 136) = 0;
        *(_BYTE *)(v78 + 144) = 0;
        *(_QWORD *)(v78 + 168) = 0;
        *(_BYTE *)(v78 + 176) = 0;
        *(_QWORD *)(v78 + 200) = 0;
        *(_BYTE *)(v78 + 208) = 0;
        *(_QWORD *)(v78 + 232) = 0;
        *(_BYTE *)(v78 + 240) = 0;
        *(_QWORD *)(v78 + 264) = 0;
        *(_BYTE *)(v78 + 272) = 0;
        *(_QWORD *)(v78 + 296) = 0;
        *(_BYTE *)(v78 + 304) = 0;
        *(_QWORD *)(v78 + 328) = 0;
        *(_BYTE *)(v78 + 336) = 0;
        *(_QWORD *)(v78 + 360) = 0;
        *(_BYTE *)(v78 + 368) = 0;
        *(_QWORD *)(v78 + 392) = 0;
        *(_BYTE *)(v78 + 400) = 0;
        *(_QWORD *)(v78 + 424) = 0x800000000LL;
        *(_QWORD *)(v78 + 528) = v78 + 544;
        *(_QWORD *)(v78 + 536) = 0x600000000LL;
        v36 = 0;
      }
      v298 = v34;
LABEL_28:
      v294 = __PAIR64__(v24, v25);
      LOBYTE(v295) = 1;
      if ( v38 > v37 )
      {
LABEL_66:
        sub_2237220(v34 + 416, v34 + 432, v38, 12);
        v36 = *((unsigned int *)v34 + 106);
      }
LABEL_29:
      v39 = *((_QWORD *)v34 + 52) + 12 * v36;
      *(_QWORD *)v39 = v294;
      *(_DWORD *)(v39 + 8) = v295;
      ++*((_DWORD *)v34 + 106);
      v17 = v300;
      goto LABEL_38;
    }
LABEL_23:
    v17 = v302;
    if ( !v302 )
    {
LABEL_38:
      sub_15F7200(v296);
      return v17;
    }
    v28 = sub_168B9E0(v296);
    v31 = v297;
    if ( v297 )
      v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
    v293 = v31;
    v32 = sub_1587BC0(v28, &v293, v26, v27, v29, v30);
    v33 = *v32 + 32LL * v301;
    v34 = *(unsigned __int8 **)(v33 + 8);
    v35 = v33;
    if ( v34 )
      goto LABEL_27;
    v179 = *(_QWORD *)(v33 + 16);
    v180 = *(_DWORD *)(v179 + 14976);
    if ( v180 )
    {
      v225 = (unsigned int)(v180 - 1);
      *(_DWORD *)(v179 + 14976) = v225;
      v34 = *(unsigned __int8 **)(v179 + 8 * v225 + 14848);
      v226 = *((unsigned int *)v34 + 134);
      *v34 = 0;
      v227 = *((_QWORD *)v34 + 66);
      *((_DWORD *)v34 + 106) = 0;
      v228 = v227 + (v226 << 6);
      while ( v227 != v228 )
      {
        while ( 1 )
        {
          v228 -= 64;
          v229 = *(void **)(v228 + 24);
          if ( v229 == (void *)(v228 + 40) )
            break;
          v287 = v227;
          operator delete(v229);
          v227 = v287;
          if ( v287 == v228 )
            goto LABEL_201;
        }
      }
LABEL_201:
      v36 = *((unsigned int *)v34 + 106);
      v37 = *((unsigned int *)v34 + 107);
      *((_DWORD *)v34 + 134) = 0;
      v38 = v36 + 1;
    }
    else
    {
      v181 = operator new(0x3A0u);
      v37 = 8;
      v38 = 1;
      v34 = (unsigned __int8 *)v181;
      *(_BYTE *)v181 = 0;
      *(_QWORD *)(v181 + 96) = v181 + 112;
      *(_QWORD *)(v181 + 128) = v181 + 144;
      *(_QWORD *)(v181 + 160) = v181 + 176;
      *(_QWORD *)(v181 + 192) = v181 + 208;
      *(_QWORD *)(v181 + 224) = v181 + 240;
      *(_QWORD *)(v181 + 256) = v181 + 272;
      *(_QWORD *)(v181 + 288) = v181 + 304;
      *(_QWORD *)(v181 + 320) = v181 + 336;
      *(_QWORD *)(v181 + 352) = v181 + 368;
      *(_QWORD *)(v181 + 384) = v181 + 400;
      *(_QWORD *)(v181 + 416) = v181 + 432;
      *(_QWORD *)(v181 + 104) = 0;
      *(_BYTE *)(v181 + 112) = 0;
      *(_QWORD *)(v181 + 136) = 0;
      *(_BYTE *)(v181 + 144) = 0;
      *(_QWORD *)(v181 + 168) = 0;
      *(_BYTE *)(v181 + 176) = 0;
      *(_QWORD *)(v181 + 200) = 0;
      *(_BYTE *)(v181 + 208) = 0;
      *(_QWORD *)(v181 + 232) = 0;
      *(_BYTE *)(v181 + 240) = 0;
      *(_QWORD *)(v181 + 264) = 0;
      *(_BYTE *)(v181 + 272) = 0;
      *(_QWORD *)(v181 + 296) = 0;
      *(_BYTE *)(v181 + 304) = 0;
      *(_QWORD *)(v181 + 328) = 0;
      *(_BYTE *)(v181 + 336) = 0;
      *(_QWORD *)(v181 + 360) = 0;
      *(_BYTE *)(v181 + 368) = 0;
      *(_QWORD *)(v181 + 392) = 0;
      *(_BYTE *)(v181 + 400) = 0;
      *(_QWORD *)(v181 + 424) = 0x800000000LL;
      *(_QWORD *)(v181 + 528) = v181 + 544;
      *(_QWORD *)(v181 + 536) = 0x600000000LL;
      v36 = 0;
    }
    *(_QWORD *)(v35 + 8) = v34;
    goto LABEL_28;
  }
  v10 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
  v11 = *(_QWORD *)(a2 + v10 + 32);
  v12 = *(_QWORD *)(v11 + 8);
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + v10 + 40) + 8LL);
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    v14 = *(_DWORD *)(a2 + 24);
  }
  else if ( *(char *)(a2 + 2) >= 0 || (v14 = sub_EEB7E0(v11, v6, a3)) == 0 )
  {
    v14 = sub_EEB7E0(*(_QWORD *)(a2 + 32), v6, a3);
    if ( !v14 )
    {
      v14 = *(_DWORD *)(a2 + 16);
      if ( v14 )
        v14 = sub_EEB7E0(v11, v6, a3);
    }
  }
  v15 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1
    && (*(_BYTE *)(v15 + 17) & 4) == 0
    || (v16 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL),
        (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v16 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 57 > 1)
    && (*(_BYTE *)(*v16 + 17LL) & 4) == 0 )
  {
    v40 = (unsigned __int64 *)a1;
    sub_168B9F0((__int64)v296, a1, v14, 0x153Fu, 0);
    v41 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v42 = v41;
    if ( v41 && (*(_BYTE *)(v41 + 28) & 0x7Fu) - 34 >= 6 )
      v42 = 0;
    if ( v300 )
    {
      v48 = v298;
      if ( !v298 )
      {
        v177 = v299;
        v178 = *(_DWORD *)(v299 + 14976);
        if ( v178 )
        {
          v205 = (unsigned int)(v178 - 1);
          *(_DWORD *)(v299 + 14976) = v205;
          v48 = *(unsigned __int8 **)(v177 + 8 * v205 + 14848);
          v206 = *((unsigned int *)v48 + 134);
          *v48 = 0;
          v207 = *((_QWORD *)v48 + 66);
          *((_DWORD *)v48 + 106) = 0;
          v208 = v207 + (v206 << 6);
          while ( v207 != v208 )
          {
            while ( 1 )
            {
              v208 -= 64;
              v209 = *(void **)(v208 + 24);
              if ( v209 == (void *)(v208 + 40) )
                break;
              operator delete(v209);
              if ( v207 == v208 )
                goto LABEL_181;
            }
          }
LABEL_181:
          *((_DWORD *)v48 + 134) = 0;
        }
        else
        {
          v48 = (unsigned __int8 *)operator new(0x3A0u);
          *v48 = 0;
          *((_QWORD *)v48 + 12) = v48 + 112;
          *((_QWORD *)v48 + 16) = v48 + 144;
          *((_QWORD *)v48 + 20) = v48 + 176;
          *((_QWORD *)v48 + 24) = v48 + 208;
          *((_QWORD *)v48 + 28) = v48 + 240;
          *((_QWORD *)v48 + 32) = v48 + 272;
          *((_QWORD *)v48 + 36) = v48 + 304;
          *((_QWORD *)v48 + 40) = v48 + 336;
          *((_QWORD *)v48 + 44) = v48 + 368;
          *((_QWORD *)v48 + 48) = v48 + 400;
          *((_QWORD *)v48 + 52) = v48 + 432;
          *((_QWORD *)v48 + 13) = 0;
          v48[112] = 0;
          *((_QWORD *)v48 + 17) = 0;
          v48[144] = 0;
          *((_QWORD *)v48 + 21) = 0;
          v48[176] = 0;
          *((_QWORD *)v48 + 25) = 0;
          v48[208] = 0;
          *((_QWORD *)v48 + 29) = 0;
          v48[240] = 0;
          *((_QWORD *)v48 + 33) = 0;
          v48[272] = 0;
          *((_QWORD *)v48 + 37) = 0;
          v48[304] = 0;
          *((_QWORD *)v48 + 41) = 0;
          v48[336] = 0;
          *((_QWORD *)v48 + 45) = 0;
          v48[368] = 0;
          *((_QWORD *)v48 + 49) = 0;
          v48[400] = 0;
          *((_QWORD *)v48 + 53) = 0x800000000LL;
          *((_QWORD *)v48 + 66) = v48 + 544;
          *((_QWORD *)v48 + 67) = 0x600000000LL;
        }
        v298 = v48;
      }
      v48[*v48 + 1] = 10;
      v49 = v298;
      v50 = *v298;
      *v298 = v50 + 1;
      *(_QWORD *)&v49[8 * v50 + 16] = v42;
    }
    else
    {
      v43 = v302;
      if ( !v302 )
        goto LABEL_36;
      v116 = sub_168B9E0(v296);
      v117 = v297;
      if ( v297 )
        v117 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v40 = &v294;
      v294 = v117;
      v118 = sub_1587BC0(v116, (__int64 *)&v294, v112, v113, v114, v115);
      v119 = *v118 + 32LL * v301;
      v120 = *(unsigned __int8 **)(v119 + 8);
      if ( !v120 )
      {
        v135 = *(_QWORD *)(v119 + 16);
        v136 = *(_DWORD *)(v135 + 14976);
        if ( v136 )
        {
          v252 = (unsigned int)(v136 - 1);
          *(_DWORD *)(v135 + 14976) = v252;
          v120 = *(unsigned __int8 **)(v135 + 8 * v252 + 14848);
          v253 = *((unsigned int *)v120 + 134);
          *v120 = 0;
          v254 = *((_QWORD *)v120 + 66);
          *((_DWORD *)v120 + 106) = 0;
          v255 = v254 + (v253 << 6);
          while ( v254 != v255 )
          {
            while ( 1 )
            {
              v255 -= 64;
              v256 = *(void **)(v255 + 24);
              if ( v256 == (void *)(v255 + 40) )
                break;
              v290 = v254;
              operator delete(v256);
              v254 = v290;
              if ( v290 == v255 )
                goto LABEL_230;
            }
          }
LABEL_230:
          *((_DWORD *)v120 + 134) = 0;
        }
        else
        {
          v120 = (unsigned __int8 *)operator new(0x3A0u);
          *v120 = 0;
          *((_QWORD *)v120 + 12) = v120 + 112;
          *((_QWORD *)v120 + 16) = v120 + 144;
          *((_QWORD *)v120 + 20) = v120 + 176;
          *((_QWORD *)v120 + 24) = v120 + 208;
          *((_QWORD *)v120 + 28) = v120 + 240;
          *((_QWORD *)v120 + 32) = v120 + 272;
          *((_QWORD *)v120 + 36) = v120 + 304;
          *((_QWORD *)v120 + 40) = v120 + 336;
          *((_QWORD *)v120 + 44) = v120 + 368;
          *((_QWORD *)v120 + 48) = v120 + 400;
          *((_QWORD *)v120 + 52) = v120 + 432;
          *((_QWORD *)v120 + 13) = 0;
          v120[112] = 0;
          *((_QWORD *)v120 + 17) = 0;
          v120[144] = 0;
          *((_QWORD *)v120 + 21) = 0;
          v120[176] = 0;
          *((_QWORD *)v120 + 25) = 0;
          v120[208] = 0;
          *((_QWORD *)v120 + 29) = 0;
          v120[240] = 0;
          *((_QWORD *)v120 + 33) = 0;
          v120[272] = 0;
          *((_QWORD *)v120 + 37) = 0;
          v120[304] = 0;
          *((_QWORD *)v120 + 41) = 0;
          v120[336] = 0;
          *((_QWORD *)v120 + 45) = 0;
          v120[368] = 0;
          *((_QWORD *)v120 + 49) = 0;
          v120[400] = 0;
          *((_QWORD *)v120 + 53) = 0x800000000LL;
          *((_QWORD *)v120 + 66) = v120 + 544;
          *((_QWORD *)v120 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v119 + 8) = v120;
      }
      v120[*v120 + 1] = 10;
      v121 = *(_BYTE **)(v119 + 8);
      v122 = (unsigned __int8)*v121;
      *v121 = v122 + 1;
      *(_QWORD *)&v121[8 * v122 + 16] = v42;
    }
    if ( v300 )
    {
      v51 = v298;
      if ( !v298 )
      {
        v172 = v299;
        v173 = *(_DWORD *)(v299 + 14976);
        if ( v173 )
        {
          v210 = (unsigned int)(v173 - 1);
          *(_DWORD *)(v299 + 14976) = v210;
          v51 = *(unsigned __int8 **)(v172 + 8 * v210 + 14848);
          v211 = *((unsigned int *)v51 + 134);
          *v51 = 0;
          v212 = *((_QWORD *)v51 + 66);
          *((_DWORD *)v51 + 106) = 0;
          v213 = v212 + (v211 << 6);
          while ( v212 != v213 )
          {
            while ( 1 )
            {
              v213 -= 64;
              v214 = *(void **)(v213 + 24);
              if ( v214 == (void *)(v213 + 40) )
                break;
              operator delete(v214);
              if ( v212 == v213 )
                goto LABEL_186;
            }
          }
LABEL_186:
          *((_DWORD *)v51 + 134) = 0;
        }
        else
        {
          v51 = (unsigned __int8 *)operator new(0x3A0u);
          *v51 = 0;
          *((_QWORD *)v51 + 12) = v51 + 112;
          *((_QWORD *)v51 + 16) = v51 + 144;
          *((_QWORD *)v51 + 20) = v51 + 176;
          *((_QWORD *)v51 + 24) = v51 + 208;
          *((_QWORD *)v51 + 28) = v51 + 240;
          *((_QWORD *)v51 + 32) = v51 + 272;
          *((_QWORD *)v51 + 36) = v51 + 304;
          *((_QWORD *)v51 + 40) = v51 + 336;
          *((_QWORD *)v51 + 44) = v51 + 368;
          *((_QWORD *)v51 + 48) = v51 + 400;
          *((_QWORD *)v51 + 52) = v51 + 432;
          *((_QWORD *)v51 + 13) = 0;
          v51[112] = 0;
          *((_QWORD *)v51 + 17) = 0;
          v51[144] = 0;
          *((_QWORD *)v51 + 21) = 0;
          v51[176] = 0;
          *((_QWORD *)v51 + 25) = 0;
          v51[208] = 0;
          *((_QWORD *)v51 + 29) = 0;
          v51[240] = 0;
          *((_QWORD *)v51 + 33) = 0;
          v51[272] = 0;
          *((_QWORD *)v51 + 37) = 0;
          v51[304] = 0;
          *((_QWORD *)v51 + 41) = 0;
          v51[336] = 0;
          *((_QWORD *)v51 + 45) = 0;
          v51[368] = 0;
          *((_QWORD *)v51 + 49) = 0;
          v51[400] = 0;
          *((_QWORD *)v51 + 53) = 0x800000000LL;
          *((_QWORD *)v51 + 66) = v51 + 544;
          *((_QWORD *)v51 + 67) = 0x600000000LL;
        }
        v298 = v51;
      }
      v51[*v51 + 1] = 2;
      v52 = v298;
    }
    else
    {
      v43 = v302;
      if ( !v302 )
      {
LABEL_36:
        v44 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
        v45 = sub_EEC140(*(_QWORD *)(a2 + v44 + 40));
        v46 = sub_EEB7E0(*(_QWORD *)(a2 + v44 + 32), (__int64)v40, a3);
        if ( v43 )
        {
          v34 = v298;
          if ( !v298 )
          {
            v174 = v299;
            v175 = *(_DWORD *)(v299 + 14976);
            if ( v175 )
            {
              v215 = (unsigned int)(v175 - 1);
              *(_DWORD *)(v299 + 14976) = v215;
              v34 = *(unsigned __int8 **)(v174 + 8 * v215 + 14848);
              v216 = *((unsigned int *)v34 + 134);
              *v34 = 0;
              v217 = *((_QWORD *)v34 + 66);
              *((_DWORD *)v34 + 106) = 0;
              v218 = v217 + (v216 << 6);
              while ( v217 != v218 )
              {
                while ( 1 )
                {
                  v218 -= 64;
                  v219 = *(void **)(v218 + 24);
                  if ( v219 == (void *)(v218 + 40) )
                    break;
                  operator delete(v219);
                  if ( v217 == v218 )
                    goto LABEL_191;
                }
              }
LABEL_191:
              v36 = *((unsigned int *)v34 + 106);
              v82 = *((unsigned int *)v34 + 107);
              *((_DWORD *)v34 + 134) = 0;
              v38 = v36 + 1;
            }
            else
            {
              v176 = operator new(0x3A0u);
              v82 = 8;
              v38 = 1;
              v34 = (unsigned __int8 *)v176;
              *(_BYTE *)v176 = 0;
              *(_QWORD *)(v176 + 96) = v176 + 112;
              *(_QWORD *)(v176 + 128) = v176 + 144;
              *(_QWORD *)(v176 + 160) = v176 + 176;
              *(_QWORD *)(v176 + 192) = v176 + 208;
              *(_QWORD *)(v176 + 224) = v176 + 240;
              *(_QWORD *)(v176 + 256) = v176 + 272;
              *(_QWORD *)(v176 + 288) = v176 + 304;
              *(_QWORD *)(v176 + 320) = v176 + 336;
              *(_QWORD *)(v176 + 352) = v176 + 368;
              *(_QWORD *)(v176 + 384) = v176 + 400;
              *(_QWORD *)(v176 + 416) = v176 + 432;
              *(_QWORD *)(v176 + 104) = 0;
              *(_BYTE *)(v176 + 112) = 0;
              *(_QWORD *)(v176 + 136) = 0;
              *(_BYTE *)(v176 + 144) = 0;
              *(_QWORD *)(v176 + 168) = 0;
              *(_BYTE *)(v176 + 176) = 0;
              *(_QWORD *)(v176 + 200) = 0;
              *(_BYTE *)(v176 + 208) = 0;
              *(_QWORD *)(v176 + 232) = 0;
              *(_BYTE *)(v176 + 240) = 0;
              *(_QWORD *)(v176 + 264) = 0;
              *(_BYTE *)(v176 + 272) = 0;
              *(_QWORD *)(v176 + 296) = 0;
              *(_BYTE *)(v176 + 304) = 0;
              *(_QWORD *)(v176 + 328) = 0;
              *(_BYTE *)(v176 + 336) = 0;
              *(_QWORD *)(v176 + 360) = 0;
              *(_BYTE *)(v176 + 368) = 0;
              *(_QWORD *)(v176 + 392) = 0;
              *(_BYTE *)(v176 + 400) = 0;
              *(_QWORD *)(v176 + 424) = 0x800000000LL;
              *(_QWORD *)(v176 + 528) = v176 + 544;
              *(_QWORD *)(v176 + 536) = 0x600000000LL;
              v36 = 0;
            }
            v298 = v34;
LABEL_78:
            v294 = __PAIR64__(v45, v46);
            LOBYTE(v295) = 1;
            if ( v38 <= v82 )
              goto LABEL_29;
            goto LABEL_66;
          }
        }
        else
        {
          v17 = v302;
          if ( !v302 )
            goto LABEL_38;
          v125 = sub_168B9E0(v296);
          v128 = v297;
          if ( v297 )
            v128 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
          v293 = v128;
          v129 = sub_1587BC0(v125, &v293, v123, v124, v126, v127);
          v130 = *v129 + 32LL * v301;
          v34 = *(unsigned __int8 **)(v130 + 8);
          v131 = v130;
          if ( !v34 )
          {
            v132 = *(_QWORD *)(v130 + 16);
            v133 = *(_DWORD *)(v132 + 14976);
            if ( v133 )
            {
              v242 = (unsigned int)(v133 - 1);
              *(_DWORD *)(v132 + 14976) = v242;
              v34 = *(unsigned __int8 **)(v132 + 8 * v242 + 14848);
              v243 = *((unsigned int *)v34 + 134);
              *v34 = 0;
              v244 = *((_QWORD *)v34 + 66);
              *((_DWORD *)v34 + 106) = 0;
              v245 = v244 + (v243 << 6);
              while ( v244 != v245 )
              {
                while ( 1 )
                {
                  v245 -= 64;
                  v246 = *(void **)(v245 + 24);
                  if ( v246 == (void *)(v245 + 40) )
                    break;
                  v289 = v244;
                  operator delete(v246);
                  v244 = v289;
                  if ( v289 == v245 )
                    goto LABEL_220;
                }
              }
LABEL_220:
              v36 = *((unsigned int *)v34 + 106);
              v82 = *((unsigned int *)v34 + 107);
              *((_DWORD *)v34 + 134) = 0;
              v38 = v36 + 1;
            }
            else
            {
              v134 = operator new(0x3A0u);
              v82 = 8;
              v38 = 1;
              v34 = (unsigned __int8 *)v134;
              *(_BYTE *)v134 = 0;
              *(_QWORD *)(v134 + 96) = v134 + 112;
              *(_QWORD *)(v134 + 128) = v134 + 144;
              *(_QWORD *)(v134 + 160) = v134 + 176;
              *(_QWORD *)(v134 + 192) = v134 + 208;
              *(_QWORD *)(v134 + 224) = v134 + 240;
              *(_QWORD *)(v134 + 256) = v134 + 272;
              *(_QWORD *)(v134 + 288) = v134 + 304;
              *(_QWORD *)(v134 + 320) = v134 + 336;
              *(_QWORD *)(v134 + 352) = v134 + 368;
              *(_QWORD *)(v134 + 384) = v134 + 400;
              *(_QWORD *)(v134 + 416) = v134 + 432;
              *(_QWORD *)(v134 + 104) = 0;
              *(_BYTE *)(v134 + 112) = 0;
              *(_QWORD *)(v134 + 136) = 0;
              *(_BYTE *)(v134 + 144) = 0;
              *(_QWORD *)(v134 + 168) = 0;
              *(_BYTE *)(v134 + 176) = 0;
              *(_QWORD *)(v134 + 200) = 0;
              *(_BYTE *)(v134 + 208) = 0;
              *(_QWORD *)(v134 + 232) = 0;
              *(_BYTE *)(v134 + 240) = 0;
              *(_QWORD *)(v134 + 264) = 0;
              *(_BYTE *)(v134 + 272) = 0;
              *(_QWORD *)(v134 + 296) = 0;
              *(_BYTE *)(v134 + 304) = 0;
              *(_QWORD *)(v134 + 328) = 0;
              *(_BYTE *)(v134 + 336) = 0;
              *(_QWORD *)(v134 + 360) = 0;
              *(_BYTE *)(v134 + 368) = 0;
              *(_QWORD *)(v134 + 392) = 0;
              *(_BYTE *)(v134 + 400) = 0;
              *(_QWORD *)(v134 + 424) = 0x800000000LL;
              *(_QWORD *)(v134 + 528) = v134 + 544;
              *(_QWORD *)(v134 + 536) = 0x600000000LL;
              v36 = 0;
            }
            *(_QWORD *)(v131 + 8) = v34;
            goto LABEL_78;
          }
        }
        v36 = *((unsigned int *)v34 + 106);
        v82 = *((unsigned int *)v34 + 107);
        v38 = v36 + 1;
        goto LABEL_78;
      }
      v105 = sub_168B9E0(v296);
      v108 = v297;
      if ( v297 )
        v108 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v40 = &v294;
      v294 = v108;
      v109 = sub_1587BC0(v105, (__int64 *)&v294, v103, v104, v106, v107);
      v110 = *v109 + 32LL * v301;
      v111 = *(unsigned __int8 **)(v110 + 8);
      if ( !v111 )
      {
        v137 = *(_QWORD *)(v110 + 16);
        v138 = *(_DWORD *)(v137 + 14976);
        if ( v138 )
        {
          v247 = (unsigned int)(v138 - 1);
          *(_DWORD *)(v137 + 14976) = v247;
          v111 = *(unsigned __int8 **)(v137 + 8 * v247 + 14848);
          v248 = *((unsigned int *)v111 + 134);
          *v111 = 0;
          v249 = *((_QWORD *)v111 + 66);
          *((_DWORD *)v111 + 106) = 0;
          v250 = v249 + (v248 << 6);
          while ( v249 != v250 )
          {
            while ( 1 )
            {
              v250 -= 64;
              v251 = *(void **)(v250 + 24);
              if ( v251 == (void *)(v250 + 40) )
                break;
              operator delete(v251);
              if ( v249 == v250 )
                goto LABEL_225;
            }
          }
LABEL_225:
          *((_DWORD *)v111 + 134) = 0;
        }
        else
        {
          v111 = (unsigned __int8 *)operator new(0x3A0u);
          *v111 = 0;
          *((_QWORD *)v111 + 12) = v111 + 112;
          *((_QWORD *)v111 + 16) = v111 + 144;
          *((_QWORD *)v111 + 20) = v111 + 176;
          *((_QWORD *)v111 + 24) = v111 + 208;
          *((_QWORD *)v111 + 28) = v111 + 240;
          *((_QWORD *)v111 + 32) = v111 + 272;
          *((_QWORD *)v111 + 36) = v111 + 304;
          *((_QWORD *)v111 + 40) = v111 + 336;
          *((_QWORD *)v111 + 44) = v111 + 368;
          *((_QWORD *)v111 + 48) = v111 + 400;
          *((_QWORD *)v111 + 52) = v111 + 432;
          *((_QWORD *)v111 + 13) = 0;
          v111[112] = 0;
          *((_QWORD *)v111 + 17) = 0;
          v111[144] = 0;
          *((_QWORD *)v111 + 21) = 0;
          v111[176] = 0;
          *((_QWORD *)v111 + 25) = 0;
          v111[208] = 0;
          *((_QWORD *)v111 + 29) = 0;
          v111[240] = 0;
          *((_QWORD *)v111 + 33) = 0;
          v111[272] = 0;
          *((_QWORD *)v111 + 37) = 0;
          v111[304] = 0;
          *((_QWORD *)v111 + 41) = 0;
          v111[336] = 0;
          *((_QWORD *)v111 + 45) = 0;
          v111[368] = 0;
          *((_QWORD *)v111 + 49) = 0;
          v111[400] = 0;
          *((_QWORD *)v111 + 53) = 0x800000000LL;
          *((_QWORD *)v111 + 66) = v111 + 544;
          *((_QWORD *)v111 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v110 + 8) = v111;
      }
      v111[*v111 + 1] = 2;
      v52 = *(unsigned __int8 **)(v110 + 8);
    }
    v53 = *v52;
    *v52 = v53 + 1;
    *(_QWORD *)&v52[8 * v53 + 16] = 0;
    v43 = v300;
    goto LABEL_36;
  }
  sub_168B6C0((__int64)a1);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v12 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(v16[1] & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v54 = (unsigned __int64 *)a1;
    sub_168B9F0((__int64)v296, a1, v14, 0x153Eu, 0);
    v55 = sub_BFBC70(*(_QWORD *)(a2 + 32));
    v56 = v55;
    if ( v55 && (*(_BYTE *)(v55 + 28) & 0x7Fu) - 34 >= 6 )
      v56 = 0;
    if ( v300 )
    {
      v142 = v298;
      if ( !v298 )
      {
        v203 = v299;
        v204 = *(_DWORD *)(v299 + 14976);
        if ( v204 )
        {
          v257 = (unsigned int)(v204 - 1);
          *(_DWORD *)(v299 + 14976) = v257;
          v142 = *(unsigned __int8 **)(v203 + 8 * v257 + 14848);
          v258 = *((unsigned int *)v142 + 134);
          *v142 = 0;
          v259 = *((_QWORD *)v142 + 66);
          *((_DWORD *)v142 + 106) = 0;
          v260 = v259 + (v258 << 6);
          while ( v259 != v260 )
          {
            while ( 1 )
            {
              v260 -= 64;
              v261 = *(void **)(v260 + 24);
              if ( v261 == (void *)(v260 + 40) )
                break;
              operator delete(v261);
              if ( v259 == v260 )
                goto LABEL_235;
            }
          }
LABEL_235:
          *((_DWORD *)v142 + 134) = 0;
        }
        else
        {
          v142 = (unsigned __int8 *)operator new(0x3A0u);
          *v142 = 0;
          *((_QWORD *)v142 + 12) = v142 + 112;
          *((_QWORD *)v142 + 16) = v142 + 144;
          *((_QWORD *)v142 + 20) = v142 + 176;
          *((_QWORD *)v142 + 24) = v142 + 208;
          *((_QWORD *)v142 + 28) = v142 + 240;
          *((_QWORD *)v142 + 32) = v142 + 272;
          *((_QWORD *)v142 + 36) = v142 + 304;
          *((_QWORD *)v142 + 40) = v142 + 336;
          *((_QWORD *)v142 + 44) = v142 + 368;
          *((_QWORD *)v142 + 48) = v142 + 400;
          *((_QWORD *)v142 + 52) = v142 + 432;
          *((_QWORD *)v142 + 13) = 0;
          v142[112] = 0;
          *((_QWORD *)v142 + 17) = 0;
          v142[144] = 0;
          *((_QWORD *)v142 + 21) = 0;
          v142[176] = 0;
          *((_QWORD *)v142 + 25) = 0;
          v142[208] = 0;
          *((_QWORD *)v142 + 29) = 0;
          v142[240] = 0;
          *((_QWORD *)v142 + 33) = 0;
          v142[272] = 0;
          *((_QWORD *)v142 + 37) = 0;
          v142[304] = 0;
          *((_QWORD *)v142 + 41) = 0;
          v142[336] = 0;
          *((_QWORD *)v142 + 45) = 0;
          v142[368] = 0;
          *((_QWORD *)v142 + 49) = 0;
          v142[400] = 0;
          *((_QWORD *)v142 + 53) = 0x800000000LL;
          *((_QWORD *)v142 + 66) = v142 + 544;
          *((_QWORD *)v142 + 67) = 0x600000000LL;
        }
        v298 = v142;
      }
      v142[*v142 + 1] = 10;
      v143 = v298;
      v144 = *v298;
      *v298 = v144 + 1;
      *(_QWORD *)&v143[8 * v144 + 16] = v56;
    }
    else
    {
      v57 = v302;
      if ( !v302 )
        goto LABEL_59;
      v152 = sub_168B9E0(v296);
      v153 = v297;
      if ( v297 )
        v153 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v54 = &v294;
      v294 = v153;
      v154 = sub_1587BC0(v152, (__int64 *)&v294, v148, v149, v150, v151);
      v155 = *v154 + 32LL * v301;
      v156 = *(unsigned __int8 **)(v155 + 8);
      if ( !v156 )
      {
        v240 = *(_QWORD *)(v155 + 16);
        v241 = *(_DWORD *)(v240 + 14976);
        if ( v241 )
        {
          v277 = (unsigned int)(v241 - 1);
          *(_DWORD *)(v240 + 14976) = v277;
          v156 = *(unsigned __int8 **)(v240 + 8 * v277 + 14848);
          v278 = *((unsigned int *)v156 + 134);
          *v156 = 0;
          v279 = *((_QWORD *)v156 + 66);
          *((_DWORD *)v156 + 106) = 0;
          v280 = v279 + (v278 << 6);
          while ( v279 != v280 )
          {
            while ( 1 )
            {
              v280 -= 64;
              v281 = *(void **)(v280 + 24);
              if ( v281 == (void *)(v280 + 40) )
                break;
              v292 = v279;
              operator delete(v281);
              v279 = v292;
              if ( v292 == v280 )
                goto LABEL_255;
            }
          }
LABEL_255:
          *((_DWORD *)v156 + 134) = 0;
        }
        else
        {
          v156 = (unsigned __int8 *)operator new(0x3A0u);
          *v156 = 0;
          *((_QWORD *)v156 + 12) = v156 + 112;
          *((_QWORD *)v156 + 16) = v156 + 144;
          *((_QWORD *)v156 + 20) = v156 + 176;
          *((_QWORD *)v156 + 24) = v156 + 208;
          *((_QWORD *)v156 + 28) = v156 + 240;
          *((_QWORD *)v156 + 32) = v156 + 272;
          *((_QWORD *)v156 + 36) = v156 + 304;
          *((_QWORD *)v156 + 40) = v156 + 336;
          *((_QWORD *)v156 + 44) = v156 + 368;
          *((_QWORD *)v156 + 48) = v156 + 400;
          *((_QWORD *)v156 + 52) = v156 + 432;
          *((_QWORD *)v156 + 13) = 0;
          v156[112] = 0;
          *((_QWORD *)v156 + 17) = 0;
          v156[144] = 0;
          *((_QWORD *)v156 + 21) = 0;
          v156[176] = 0;
          *((_QWORD *)v156 + 25) = 0;
          v156[208] = 0;
          *((_QWORD *)v156 + 29) = 0;
          v156[240] = 0;
          *((_QWORD *)v156 + 33) = 0;
          v156[272] = 0;
          *((_QWORD *)v156 + 37) = 0;
          v156[304] = 0;
          *((_QWORD *)v156 + 41) = 0;
          v156[336] = 0;
          *((_QWORD *)v156 + 45) = 0;
          v156[368] = 0;
          *((_QWORD *)v156 + 49) = 0;
          v156[400] = 0;
          *((_QWORD *)v156 + 53) = 0x800000000LL;
          *((_QWORD *)v156 + 66) = v156 + 544;
          *((_QWORD *)v156 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v155 + 8) = v156;
      }
      v156[*v156 + 1] = 10;
      v157 = *(_BYTE **)(v155 + 8);
      v158 = (unsigned __int8)*v157;
      *v157 = v158 + 1;
      *(_QWORD *)&v157[8 * v158 + 16] = v56;
    }
    if ( v300 )
    {
      v145 = v298;
      if ( !v298 )
      {
        v201 = v299;
        v202 = *(_DWORD *)(v299 + 14976);
        if ( v202 )
        {
          v267 = (unsigned int)(v202 - 1);
          *(_DWORD *)(v299 + 14976) = v267;
          v145 = *(unsigned __int8 **)(v201 + 8 * v267 + 14848);
          v268 = *((unsigned int *)v145 + 134);
          *v145 = 0;
          v269 = *((_QWORD *)v145 + 66);
          *((_DWORD *)v145 + 106) = 0;
          v270 = v269 + (v268 << 6);
          while ( v269 != v270 )
          {
            while ( 1 )
            {
              v270 -= 64;
              v271 = *(void **)(v270 + 24);
              if ( v271 == (void *)(v270 + 40) )
                break;
              operator delete(v271);
              if ( v269 == v270 )
                goto LABEL_245;
            }
          }
LABEL_245:
          *((_DWORD *)v145 + 134) = 0;
        }
        else
        {
          v145 = (unsigned __int8 *)operator new(0x3A0u);
          *v145 = 0;
          *((_QWORD *)v145 + 12) = v145 + 112;
          *((_QWORD *)v145 + 16) = v145 + 144;
          *((_QWORD *)v145 + 20) = v145 + 176;
          *((_QWORD *)v145 + 24) = v145 + 208;
          *((_QWORD *)v145 + 28) = v145 + 240;
          *((_QWORD *)v145 + 32) = v145 + 272;
          *((_QWORD *)v145 + 36) = v145 + 304;
          *((_QWORD *)v145 + 40) = v145 + 336;
          *((_QWORD *)v145 + 44) = v145 + 368;
          *((_QWORD *)v145 + 48) = v145 + 400;
          *((_QWORD *)v145 + 52) = v145 + 432;
          *((_QWORD *)v145 + 13) = 0;
          v145[112] = 0;
          *((_QWORD *)v145 + 17) = 0;
          v145[144] = 0;
          *((_QWORD *)v145 + 21) = 0;
          v145[176] = 0;
          *((_QWORD *)v145 + 25) = 0;
          v145[208] = 0;
          *((_QWORD *)v145 + 29) = 0;
          v145[240] = 0;
          *((_QWORD *)v145 + 33) = 0;
          v145[272] = 0;
          *((_QWORD *)v145 + 37) = 0;
          v145[304] = 0;
          *((_QWORD *)v145 + 41) = 0;
          v145[336] = 0;
          *((_QWORD *)v145 + 45) = 0;
          v145[368] = 0;
          *((_QWORD *)v145 + 49) = 0;
          v145[400] = 0;
          *((_QWORD *)v145 + 53) = 0x800000000LL;
          *((_QWORD *)v145 + 66) = v145 + 544;
          *((_QWORD *)v145 + 67) = 0x600000000LL;
        }
        v298 = v145;
      }
      v145[*v145 + 1] = 2;
      v146 = v298;
    }
    else
    {
      v57 = v302;
      if ( !v302 )
      {
LABEL_59:
        v58 = 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL);
        v59 = sub_EEC140(*(_QWORD *)(a2 + v58 + 40));
        v60 = sub_EEB7E0(*(_QWORD *)(a2 + v58 + 32), (__int64)v54, a3);
        if ( v57 )
        {
          v34 = v298;
          if ( v298 )
          {
LABEL_64:
            v36 = *((unsigned int *)v34 + 106);
            v70 = *((unsigned int *)v34 + 107);
            v38 = v36 + 1;
            goto LABEL_65;
          }
          v139 = v299;
          v140 = *(_DWORD *)(v299 + 14976);
          if ( v140 )
          {
            v262 = (unsigned int)(v140 - 1);
            *(_DWORD *)(v299 + 14976) = v262;
            v34 = *(unsigned __int8 **)(v139 + 8 * v262 + 14848);
            v263 = *((unsigned int *)v34 + 134);
            *v34 = 0;
            v264 = *((_QWORD *)v34 + 66);
            *((_DWORD *)v34 + 106) = 0;
            v265 = v264 + (v263 << 6);
            while ( v264 != v265 )
            {
              while ( 1 )
              {
                v265 -= 64;
                v266 = *(void **)(v265 + 24);
                if ( v266 == (void *)(v265 + 40) )
                  break;
                operator delete(v266);
                if ( v264 == v265 )
                  goto LABEL_240;
              }
            }
LABEL_240:
            v36 = *((unsigned int *)v34 + 106);
            v70 = *((unsigned int *)v34 + 107);
            *((_DWORD *)v34 + 134) = 0;
            v38 = v36 + 1;
          }
          else
          {
            v141 = operator new(0x3A0u);
            v70 = 8;
            v38 = 1;
            v34 = (unsigned __int8 *)v141;
            *(_BYTE *)v141 = 0;
            *(_QWORD *)(v141 + 96) = v141 + 112;
            *(_QWORD *)(v141 + 128) = v141 + 144;
            *(_QWORD *)(v141 + 160) = v141 + 176;
            *(_QWORD *)(v141 + 192) = v141 + 208;
            *(_QWORD *)(v141 + 224) = v141 + 240;
            *(_QWORD *)(v141 + 256) = v141 + 272;
            *(_QWORD *)(v141 + 288) = v141 + 304;
            *(_QWORD *)(v141 + 320) = v141 + 336;
            *(_QWORD *)(v141 + 352) = v141 + 368;
            *(_QWORD *)(v141 + 384) = v141 + 400;
            *(_QWORD *)(v141 + 416) = v141 + 432;
            *(_QWORD *)(v141 + 104) = 0;
            *(_BYTE *)(v141 + 112) = 0;
            *(_QWORD *)(v141 + 136) = 0;
            *(_BYTE *)(v141 + 144) = 0;
            *(_QWORD *)(v141 + 168) = 0;
            *(_BYTE *)(v141 + 176) = 0;
            *(_QWORD *)(v141 + 200) = 0;
            *(_BYTE *)(v141 + 208) = 0;
            *(_QWORD *)(v141 + 232) = 0;
            *(_BYTE *)(v141 + 240) = 0;
            *(_QWORD *)(v141 + 264) = 0;
            *(_BYTE *)(v141 + 272) = 0;
            *(_QWORD *)(v141 + 296) = 0;
            *(_BYTE *)(v141 + 304) = 0;
            *(_QWORD *)(v141 + 328) = 0;
            *(_BYTE *)(v141 + 336) = 0;
            *(_QWORD *)(v141 + 360) = 0;
            *(_BYTE *)(v141 + 368) = 0;
            *(_QWORD *)(v141 + 392) = 0;
            *(_BYTE *)(v141 + 400) = 0;
            *(_QWORD *)(v141 + 424) = 0x800000000LL;
            *(_QWORD *)(v141 + 528) = v141 + 544;
            *(_QWORD *)(v141 + 536) = 0x600000000LL;
            v36 = 0;
          }
          v298 = v34;
        }
        else
        {
          v17 = v302;
          if ( !v302 )
            goto LABEL_38;
          v63 = sub_168B9E0(v296);
          v66 = v297;
          if ( v297 )
            v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
          v293 = v66;
          v67 = sub_1587BC0(v63, &v293, v61, v62, v64, v65);
          v68 = *v67 + 32LL * v301;
          v34 = *(unsigned __int8 **)(v68 + 8);
          v69 = v68;
          if ( v34 )
            goto LABEL_64;
          v237 = *(_QWORD *)(v68 + 16);
          v238 = *(_DWORD *)(v237 + 14976);
          if ( v238 )
          {
            v272 = (unsigned int)(v238 - 1);
            *(_DWORD *)(v237 + 14976) = v272;
            v34 = *(unsigned __int8 **)(v237 + 8 * v272 + 14848);
            v273 = *((unsigned int *)v34 + 134);
            *v34 = 0;
            v274 = *((_QWORD *)v34 + 66);
            *((_DWORD *)v34 + 106) = 0;
            v275 = v274 + (v273 << 6);
            while ( v274 != v275 )
            {
              while ( 1 )
              {
                v275 -= 64;
                v276 = *(void **)(v275 + 24);
                if ( v276 == (void *)(v275 + 40) )
                  break;
                v291 = v274;
                operator delete(v276);
                v274 = v291;
                if ( v291 == v275 )
                  goto LABEL_250;
              }
            }
LABEL_250:
            v36 = *((unsigned int *)v34 + 106);
            v70 = *((unsigned int *)v34 + 107);
            *((_DWORD *)v34 + 134) = 0;
            v38 = v36 + 1;
          }
          else
          {
            v239 = operator new(0x3A0u);
            v70 = 8;
            v38 = 1;
            v34 = (unsigned __int8 *)v239;
            *(_BYTE *)v239 = 0;
            *(_QWORD *)(v239 + 96) = v239 + 112;
            *(_QWORD *)(v239 + 128) = v239 + 144;
            *(_QWORD *)(v239 + 160) = v239 + 176;
            *(_QWORD *)(v239 + 192) = v239 + 208;
            *(_QWORD *)(v239 + 224) = v239 + 240;
            *(_QWORD *)(v239 + 256) = v239 + 272;
            *(_QWORD *)(v239 + 288) = v239 + 304;
            *(_QWORD *)(v239 + 320) = v239 + 336;
            *(_QWORD *)(v239 + 352) = v239 + 368;
            *(_QWORD *)(v239 + 384) = v239 + 400;
            *(_QWORD *)(v239 + 416) = v239 + 432;
            *(_QWORD *)(v239 + 104) = 0;
            *(_BYTE *)(v239 + 112) = 0;
            *(_QWORD *)(v239 + 136) = 0;
            *(_BYTE *)(v239 + 144) = 0;
            *(_QWORD *)(v239 + 168) = 0;
            *(_BYTE *)(v239 + 176) = 0;
            *(_QWORD *)(v239 + 200) = 0;
            *(_BYTE *)(v239 + 208) = 0;
            *(_QWORD *)(v239 + 232) = 0;
            *(_BYTE *)(v239 + 240) = 0;
            *(_QWORD *)(v239 + 264) = 0;
            *(_BYTE *)(v239 + 272) = 0;
            *(_QWORD *)(v239 + 296) = 0;
            *(_BYTE *)(v239 + 304) = 0;
            *(_QWORD *)(v239 + 328) = 0;
            *(_BYTE *)(v239 + 336) = 0;
            *(_QWORD *)(v239 + 360) = 0;
            *(_BYTE *)(v239 + 368) = 0;
            *(_QWORD *)(v239 + 392) = 0;
            *(_BYTE *)(v239 + 400) = 0;
            *(_QWORD *)(v239 + 424) = 0x800000000LL;
            *(_QWORD *)(v239 + 528) = v239 + 544;
            *(_QWORD *)(v239 + 536) = 0x600000000LL;
            v36 = 0;
          }
          *(_QWORD *)(v69 + 8) = v34;
        }
LABEL_65:
        v294 = __PAIR64__(v59, v60);
        LOBYTE(v295) = 1;
        if ( v38 > v70 )
          goto LABEL_66;
        goto LABEL_29;
      }
      v161 = sub_168B9E0(v296);
      v164 = v297;
      if ( v297 )
        v164 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v297 + 32LL))(v297);
      v54 = &v294;
      v294 = v164;
      v165 = sub_1587BC0(v161, (__int64 *)&v294, v159, v160, v162, v163);
      v166 = *v165 + 32LL * v301;
      v167 = *(unsigned __int8 **)(v166 + 8);
      if ( !v167 )
      {
        v235 = *(_QWORD *)(v166 + 16);
        v236 = *(_DWORD *)(v235 + 14976);
        if ( v236 )
        {
          v282 = (unsigned int)(v236 - 1);
          *(_DWORD *)(v235 + 14976) = v282;
          v167 = *(unsigned __int8 **)(v235 + 8 * v282 + 14848);
          v283 = *((unsigned int *)v167 + 134);
          *v167 = 0;
          v284 = *((_QWORD *)v167 + 66);
          *((_DWORD *)v167 + 106) = 0;
          v285 = v284 + (v283 << 6);
          while ( v284 != v285 )
          {
            while ( 1 )
            {
              v285 -= 64;
              v286 = *(void **)(v285 + 24);
              if ( v286 == (void *)(v285 + 40) )
                break;
              operator delete(v286);
              if ( v284 == v285 )
                goto LABEL_260;
            }
          }
LABEL_260:
          *((_DWORD *)v167 + 134) = 0;
        }
        else
        {
          v167 = (unsigned __int8 *)operator new(0x3A0u);
          *v167 = 0;
          *((_QWORD *)v167 + 12) = v167 + 112;
          *((_QWORD *)v167 + 16) = v167 + 144;
          *((_QWORD *)v167 + 20) = v167 + 176;
          *((_QWORD *)v167 + 24) = v167 + 208;
          *((_QWORD *)v167 + 28) = v167 + 240;
          *((_QWORD *)v167 + 32) = v167 + 272;
          *((_QWORD *)v167 + 36) = v167 + 304;
          *((_QWORD *)v167 + 40) = v167 + 336;
          *((_QWORD *)v167 + 44) = v167 + 368;
          *((_QWORD *)v167 + 48) = v167 + 400;
          *((_QWORD *)v167 + 52) = v167 + 432;
          *((_QWORD *)v167 + 13) = 0;
          v167[112] = 0;
          *((_QWORD *)v167 + 17) = 0;
          v167[144] = 0;
          *((_QWORD *)v167 + 21) = 0;
          v167[176] = 0;
          *((_QWORD *)v167 + 25) = 0;
          v167[208] = 0;
          *((_QWORD *)v167 + 29) = 0;
          v167[240] = 0;
          *((_QWORD *)v167 + 33) = 0;
          v167[272] = 0;
          *((_QWORD *)v167 + 37) = 0;
          v167[304] = 0;
          *((_QWORD *)v167 + 41) = 0;
          v167[336] = 0;
          *((_QWORD *)v167 + 45) = 0;
          v167[368] = 0;
          *((_QWORD *)v167 + 49) = 0;
          v167[400] = 0;
          *((_QWORD *)v167 + 53) = 0x800000000LL;
          *((_QWORD *)v167 + 66) = v167 + 544;
          *((_QWORD *)v167 + 67) = 0x600000000LL;
        }
        *(_QWORD *)(v166 + 8) = v167;
      }
      v167[*v167 + 1] = 2;
      v146 = *(unsigned __int8 **)(v166 + 8);
    }
    v147 = *v146;
    *v146 = v147 + 1;
    *(_QWORD *)&v146[8 * v147 + 16] = 0;
    v57 = v300;
    goto LABEL_59;
  }
  *(_QWORD *)(a2 + 8) = v12;
  return 0;
}
