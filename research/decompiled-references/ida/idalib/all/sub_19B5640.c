__int64 __fastcall sub_19B5640(
        _QWORD *a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        double a7,
        char a8,
        __int64 a9,
        unsigned __int64 *a10,
        __int64 a11,
        __int64 *a12,
        __int64 *a13,
        char a14)
{
  __int64 v16; // rbp
  bool v17; // zf
  __int64 v18; // rdx
  _BOOL8 v19; // rax
  _BOOL8 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // r12
  unsigned __int8 v27; // al
  __int64 v28; // r13
  __int64 v29; // r9
  __int64 *v30; // rax
  char v31; // r14
  unsigned __int8 v32; // al
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdi
  __int64 v38; // rsi
  _QWORD *v39; // rax
  __int64 *v40; // rsi
  unsigned __int8 v42; // r14
  unsigned __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  size_t v46; // r13
  __int64 *v47; // r9
  __int64 *v48; // r15
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  int v51; // r13d
  unsigned __int8 **v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdx
  unsigned __int8 **v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 *v60; // rax
  __int64 v61; // r13
  __int64 v62; // r15
  _QWORD *v63; // r14
  bool v64; // al
  _QWORD *v65; // r12
  __int64 v66; // rax
  _QWORD *v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __m128 v71; // xmm0
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rsi
  _QWORD *v77; // rax
  _QWORD *v78; // r12
  char v79; // r13
  int v80; // eax
  __int64 v81; // rdx
  _QWORD *v82; // r14
  __int64 v83; // rdi
  unsigned __int8 v84; // dl
  __int64 v85; // rax
  __int64 v86; // rdi
  __int64 v87; // r14
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  unsigned int *v94; // r13
  __int64 v95; // rdx
  __int64 v96; // rcx
  int v97; // r13d
  char *v98; // rax
  __int64 v99; // r15
  unsigned __int8 **v100; // rsi
  __int64 v101; // rdx
  _QWORD *v102; // rax
  __int64 v103; // rdx
  int v104; // eax
  __int64 v105; // rsi
  _QWORD *v106; // rax
  int v107; // r12d
  __int64 v108; // rdi
  __int64 *v109; // rax
  __int64 v110; // r12
  int v111; // r13d
  unsigned __int64 v112; // rcx
  unsigned int v113; // edx
  __int64 v114; // rax
  __int64 v115; // r14
  __int64 v116; // r13
  __int64 v117; // rsi
  __int64 v118; // rdi
  unsigned __int64 v119; // r13
  __int64 *v120; // r12
  _BYTE *v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 *v124; // r8
  __int64 v125; // r9
  unsigned __int64 v126; // rdx
  _QWORD *v127; // rax
  unsigned int *v128; // r12
  unsigned __int8 **v129; // rax
  __int64 *v130; // rbx
  __int64 *v131; // r14
  __int64 v132; // rax
  unsigned int *v133; // rbp
  __int64 v134; // rax
  __int64 v135; // r12
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rcx
  __int64 v138; // r8
  __int64 v139; // r9
  __int64 v140; // rax
  __int64 v141; // rdi
  unsigned __int64 v142; // rdi
  char v143; // r12
  char v144; // al
  _QWORD *v145; // rax
  __int64 v146; // r12
  const __m128i *v147; // r13
  __m128i *v148; // r12
  __int64 v149; // rax
  __m128i v150; // xmm1
  __int64 v151; // r14
  _QWORD *v152; // rax
  __int64 v153; // rax
  __int64 v154; // r13
  unsigned __int64 v155; // rdx
  __int64 *v156; // rax
  __int64 v157; // rsi
  int v158; // r12d
  bool v159; // r12
  _QWORD *v160; // r14
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // r12
  __int64 v164; // rax
  unsigned __int64 v165; // rdi
  unsigned __int64 v166; // rax
  __int64 v167; // r14
  __int64 *v168; // r12
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rax
  _QWORD *v178; // rax
  unsigned __int64 *v179; // rbp
  unsigned int v180; // r12d
  __int64 v181; // [rsp+8h] [rbp-530h]
  __int64 *v182; // [rsp+10h] [rbp-528h] BYREF
  unsigned int *v183; // [rsp+18h] [rbp-520h]
  unsigned __int8 **p_src; // [rsp+20h] [rbp-518h]
  __int64 v185; // [rsp+28h] [rbp-510h]
  void **v186; // [rsp+30h] [rbp-508h]
  unsigned int *v187; // [rsp+38h] [rbp-500h] BYREF
  __int64 *v188; // [rsp+40h] [rbp-4F8h] BYREF
  unsigned int v189; // [rsp+4Ch] [rbp-4ECh]
  __int64 *v190; // [rsp+50h] [rbp-4E8h]
  __int64 *v191; // [rsp+58h] [rbp-4E0h]
  __int64 v192; // [rsp+60h] [rbp-4D8h]
  char v193; // [rsp+68h] [rbp-4D0h]
  int v194[2]; // [rsp+6Ch] [rbp-4CCh] BYREF
  unsigned __int8 v195; // [rsp+77h] [rbp-4C1h] BYREF
  __int64 v196; // [rsp+78h] [rbp-4C0h] BYREF
  __int64 v197; // [rsp+80h] [rbp-4B8h] BYREF
  unsigned __int64 v198; // [rsp+88h] [rbp-4B0h] BYREF
  unsigned __int64 v199; // [rsp+90h] [rbp-4A8h] BYREF
  __int64 v200; // [rsp+98h] [rbp-4A0h] BYREF
  _BYTE v201[3]; // [rsp+A0h] [rbp-498h] BYREF
  int v202; // [rsp+A4h] [rbp-494h]
  unsigned int *v203; // [rsp+A8h] [rbp-490h]
  __int64 v204; // [rsp+B0h] [rbp-488h]
  _BYTE v205[3]; // [rsp+C0h] [rbp-478h] BYREF
  int v206; // [rsp+C4h] [rbp-474h]
  __int64 *v207; // [rsp+C8h] [rbp-470h]
  __int64 v208; // [rsp+D0h] [rbp-468h]
  unsigned __int64 v209; // [rsp+E0h] [rbp-458h] BYREF
  int v210; // [rsp+E8h] [rbp-450h]
  _BOOL4 v211; // [rsp+ECh] [rbp-44Ch]
  _BOOL4 v212; // [rsp+F0h] [rbp-448h]
  _BYTE v213[32]; // [rsp+100h] [rbp-438h] BYREF
  __m128 v214; // [rsp+120h] [rbp-418h] BYREF
  __m128 v215; // [rsp+130h] [rbp-408h]
  __m128 v216; // [rsp+140h] [rbp-3F8h]
  void *v217; // [rsp+150h] [rbp-3E8h] BYREF
  __int64 v218; // [rsp+158h] [rbp-3E0h]
  _BYTE v219[32]; // [rsp+160h] [rbp-3D8h] BYREF
  __m128i v220; // [rsp+180h] [rbp-3B8h] BYREF
  int v221; // [rsp+190h] [rbp-3A8h]
  void *v222[2]; // [rsp+1C0h] [rbp-378h] BYREF
  __m128i v223; // [rsp+1D0h] [rbp-368h] BYREF
  __m128i v224; // [rsp+1E0h] [rbp-358h]
  __int64 v225; // [rsp+1F0h] [rbp-348h]
  void *ptr; // [rsp+200h] [rbp-338h] BYREF
  __int64 v227; // [rsp+208h] [rbp-330h]
  _BYTE v228[64]; // [rsp+210h] [rbp-328h] BYREF
  void *src; // [rsp+250h] [rbp-2E8h] BYREF
  __int64 v230; // [rsp+258h] [rbp-2E0h]
  _DWORD v231[18]; // [rsp+260h] [rbp-2D8h] BYREF
  void *v232[2]; // [rsp+2A8h] [rbp-290h]
  char v233; // [rsp+2C8h] [rbp-270h]
  char v234; // [rsp+2D4h] [rbp-264h]
  int v235; // [rsp+2E8h] [rbp-250h]
  __int16 v236; // [rsp+2F3h] [rbp-245h]
  char v237; // [rsp+2F6h] [rbp-242h]
  void *v238[2]; // [rsp+300h] [rbp-238h] BYREF
  int v239; // [rsp+310h] [rbp-228h] BYREF
  __int16 v240; // [rsp+314h] [rbp-224h]
  __int64 v241; // [rsp+318h] [rbp-220h]
  _QWORD *v242; // [rsp+320h] [rbp-218h]
  __int64 v243; // [rsp+328h] [rbp-210h]
  _QWORD v244[4]; // [rsp+330h] [rbp-208h] BYREF
  int v245; // [rsp+350h] [rbp-1E8h]
  __int64 v246; // [rsp+358h] [rbp-1E0h]
  __int64 v247; // [rsp+360h] [rbp-1D8h]
  __int64 v248; // [rsp+368h] [rbp-1D0h]
  __int64 v249; // [rsp+370h] [rbp-1C8h]
  __int16 v250; // [rsp+3A3h] [rbp-195h]
  __int64 v251; // [rsp+3B0h] [rbp-188h]
  __int64 v252; // [rsp+3B8h] [rbp-180h]
  __int64 v253; // [rsp+3C0h] [rbp-178h]
  __int64 v254; // [rsp+3D0h] [rbp-168h]
  __int64 v255; // [rsp+3D8h] [rbp-160h]
  int v256; // [rsp+3E8h] [rbp-150h]
  char v257; // [rsp+3ECh] [rbp-14Ch]
  _QWORD *v258; // [rsp+3F0h] [rbp-148h]
  __int64 v259; // [rsp+3F8h] [rbp-140h]
  _QWORD v260[12]; // [rsp+400h] [rbp-138h] BYREF
  _WORD v261[52]; // [rsp+460h] [rbp-D8h] BYREF
  __int64 *v262; // [rsp+4C8h] [rbp-70h]
  __int64 v263; // [rsp+4D0h] [rbp-68h]
  __int64 v264; // [rsp+4D8h] [rbp-60h] BYREF

  v16 = a9;
  v185 = a3;
  v194[0] = a2;
  v17 = *(_DWORD *)(a9 + 8) == 1;
  v193 = a14;
  v18 = v17 + 1LL;
  v227 = 0x800000000LL;
  v19 = *(_DWORD *)(a9 + 8) == 1;
  LODWORD(v187) = a5;
  v20 = v19 + 2;
  v17 = *(_DWORD *)(a9 + 12) == 1;
  ptr = v228;
  if ( v17 )
    v18 = v20;
  v21 = a11 + v18;
  if ( v21 > 8 )
  {
    v181 = a6;
    sub_2237220(&ptr, v228, v21, 8);
    a6 = v181;
  }
  v22 = a1[31];
  v23 = v22 + (-(__int64)(a8 == 0) & 0xFFFFFFFFFFFFFFE0LL) + 17640;
  v24 = sub_A71450(v22, a6);
  v25 = (_QWORD *)a1[31];
  v26 = v23 | 6;
  v196 = v24;
  v183 = (unsigned int *)sub_A63CE0(v25);
  LODWORD(v186) = *(_DWORD *)(a9 + 8);
  if ( (_DWORD)v186 == 1 )
  {
    v93 = sub_1864D30((__int64)a1, *(_QWORD *)a9, v194[0]);
    v94 = (unsigned int *)v93;
    if ( (v93 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      LOBYTE(v182) = sub_1E63CF0(a1, (unsigned int)v194[0], v93, 1, 3968);
      if ( (_BYTE)v182 )
        goto LABEL_34;
      v104 = *(_DWORD *)(a9 + 8);
      v183 = v94;
      LODWORD(v186) = v104;
    }
    else
    {
      *(_DWORD *)(a9 + 8) = 0;
      LODWORD(v186) = 0;
    }
  }
  *(_WORD *)v201 = *(_WORD *)v201 & 0xFE00 | 0x64;
  if ( unk_2CD7484 )
    sub_EE9B50(100);
  v202 = v194[0];
  *(_WORD *)&v201[1] &= 0xF801u;
  v203 = v183;
  v204 = 0;
  v27 = sub_B635F0((__int64)v201);
  v201[1] = (v27 << 6) | v201[1] & 0x3F;
  v201[2] = v201[2] & 0xF8 | (v27 >> 2) & 7;
  if ( *(_DWORD *)(a9 + 8) == 1 )
    sub_14B7B40((__int64)&ptr, (__int64)v201);
  v28 = sub_A63CE0((_QWORD *)a1[31]);
  LODWORD(v238[1]) = sub_A97D20(a1[31], *(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL));
  if ( LODWORD(v238[1]) > 0x40 )
    sub_2205470(v238, 0, 0);
  else
    v238[0] = nullptr;
  sub_C0CA00((__int64)v213, (_QWORD *)a1[31], (__int64)v238, v28, 0, v29);
  if ( LODWORD(v238[1]) > 0x40 && v238[0] )
    operator delete[](v238[0]);
  sub_14B7B40((__int64)&ptr, (__int64)v213);
  v30 = *(__int64 **)(a1[31] + 18632LL);
  if ( *(_DWORD *)(a9 + 12) == 1 || (v31 = 0, *(_DWORD *)(a9 + 8) == 1) )
  {
    sub_19A70B0((__int64)a1);
    v87 = a1[31];
    v88 = sub_183D310((__int64)a1);
    v92 = *(_QWORD *)(v88 + 48);
    if ( v92 )
      v30 = (__int64 *)(v92 & 0xFFFFFFFFFFFFFFF0LL);
    else
      v30 = (__int64 *)sub_A7AA70(v87, v88, 0, v89, v90, v91);
    v31 = 1;
  }
  *(_WORD *)v205 = *(_WORD *)v205 & 0xFE00 | 0x64;
  if ( unk_2CD7484 )
  {
    v182 = v30;
    sub_EE9B50(100);
    v30 = v182;
  }
  *(_WORD *)&v205[1] &= 0xF801u;
  v207 = v30;
  v208 = 0;
  v206 = 0;
  v32 = sub_B635F0((__int64)v205);
  v205[1] = (v32 << 6) | v205[1] & 0x3F;
  v205[2] = v205[2] & 0xF8 | (v32 >> 2) & 7;
  if ( v31 )
    sub_14B7B40((__int64)&ptr, (__int64)v205);
  sub_19A4C60((__int64)&ptr, (__int64)&a10);
  sub_199FDE0((__int64)v238, (__int64)a1, v26, v194[0], 0);
  v37 = *(_QWORD *)(v196 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 && a4 )
  {
    v102 = sub_F63270(v37, (__int64)a1, v33, v34, v35, v36);
    if ( v102 )
      v102 += 8;
    sub_1A48440(a1, v238, v102, 0);
  }
  if ( LODWORD(v238[0]) == 5 )
    goto LABEL_33;
  if ( !v239 )
  {
    if ( a4 == 1 )
    {
LABEL_33:
      sub_169D230((__int64)v238);
      LOBYTE(v182) = 1;
      goto LABEL_34;
    }
    v38 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
    v39 = sub_704780((__int64 *)(v38 + 72), v38, v33, v34, v35, v36);
    if ( v39 )
      v39 += 5;
    sub_1A48440(a1, v238, v39, 0);
    if ( (*(_BYTE *)(a1[29] + 52LL) & 1) != 0 && !v239 )
    {
      v40 = a1 + 1;
      if ( a11 )
      {
        sub_168B9F0((__int64)&src, v40, v194[0], 0x1267u, 0);
        sub_15F7200(&src);
      }
      else
      {
        p_src = (unsigned __int8 **)&src;
        sub_168B9F0((__int64)&src, v40, v194[0], 0x32u, 0);
        if ( v233 )
        {
          sub_AE9DF0(p_src + 4, (__int64)"default new", 1u);
        }
        else if ( v234 )
        {
          sub_19A9980((__int64)p_src, (__int64)"default new");
        }
        sub_15F7200(p_src);
      }
      goto LABEL_33;
    }
  }
  v42 = v193;
  v250 = 0;
  *a12 = 0;
  if ( *(_DWORD *)(a9 + 8) != 1 )
    goto LABEL_104;
  p_src = (unsigned __int8 **)&src;
  v43 = (unsigned int)v227 - 1LL;
  src = v231;
  v230 = 0x600000000LL;
  if ( v43 > 6 )
    sub_2237220(p_src, v231, v43, 8);
  sub_14B7B40((__int64)p_src, *((_QWORD *)ptr + 1));
  if ( *(_DWORD *)(a9 + 12) == 1 )
    sub_14B7B40((__int64)p_src, *((_QWORD *)ptr + 2));
  v44 = (unsigned int)v230;
  v45 = 8LL * (unsigned int)v227;
  v46 = v45 - 24;
  v47 = (__int64 *)((char *)ptr + v45);
  v48 = (__int64 *)((char *)ptr + 24);
  v49 = (v45 - 24) >> 3;
  v50 = v49 + (unsigned int)v230;
  if ( v50 > HIDWORD(v230) )
  {
    v188 = (__int64 *)v49;
    v182 = v47;
    sub_2237220(p_src, p_src + 2, v50, 8);
    v49 = (__int64)v188;
    v47 = v182;
    v44 = (unsigned int)v230;
  }
  if ( v47 != v48 )
  {
    v182 = (__int64 *)v49;
    memcpy((char *)src + 8 * v44, v48, v46);
    LODWORD(v44) = v230;
    LODWORD(v49) = (_DWORD)v182;
  }
  v51 = *(_DWORD *)(a9 + 12);
  *(_DWORD *)(a9 + 12) = 1;
  LODWORD(v230) = v49 + v44;
  LOBYTE(v182) = sub_19AC140(a1, (__int64)v238, v185, 0, (__int64 *)&ptr, (_DWORD *)(a9 + 12), a7, a12, 0, 0, v42);
  v52 = (unsigned __int8 **)src;
  if ( !(_BYTE)v182 && !*a12 )
  {
    v129 = p_src;
    *(_DWORD *)(a9 + 8) = 0;
    *(_DWORD *)(a9 + 12) = v51;
    if ( v52 == v129 + 2 )
    {
      v95 = (unsigned int)v230;
      v96 = (unsigned int)v227;
      v97 = v230;
      if ( (unsigned int)v230 <= (unsigned __int64)(unsigned int)v227 )
      {
        if ( (_DWORD)v230 )
        {
          memmove(ptr, v52, 8LL * (unsigned int)v230);
          v52 = (unsigned __int8 **)src;
        }
      }
      else
      {
        if ( (unsigned int)v230 > (unsigned __int64)HIDWORD(v227) )
        {
          LODWORD(v227) = 0;
          sub_2237220(&ptr, v228, (unsigned int)v230, 8);
          v52 = (unsigned __int8 **)src;
          v95 = (unsigned int)v230;
          v96 = 0;
          v98 = (char *)ptr;
          v100 = (unsigned __int8 **)src;
        }
        else
        {
          v98 = (char *)ptr;
          v99 = 8LL * (unsigned int)v227;
          if ( (_DWORD)v227 )
          {
            memmove(ptr, v52, 8LL * (unsigned int)v227);
            v52 = (unsigned __int8 **)src;
            v96 = v99;
            v95 = (unsigned int)v230;
            v100 = (unsigned __int8 **)((char *)src + v99);
            v98 = (char *)ptr + v99;
          }
          else
          {
            v100 = v52;
          }
        }
        v101 = v95;
        if ( v100 != &v52[v101] )
        {
          memcpy(v98, v100, v101 * 8 - v96);
          v52 = (unsigned __int8 **)src;
        }
      }
      LODWORD(v227) = v97;
      LODWORD(v230) = 0;
      if ( v52 != p_src + 2 )
        free(v52);
    }
    else
    {
      if ( ptr != v228 )
      {
        free(ptr);
        v52 = (unsigned __int8 **)src;
      }
      ptr = v52;
      v227 = v230;
    }
LABEL_104:
    LOBYTE(v182) = sub_19AC140(a1, (__int64)v238, v185, 1u, (__int64 *)&ptr, (_DWORD *)(a9 + 12), a7, a12, 0, 0, v42);
    goto LABEL_52;
  }
  if ( src != p_src + 2 )
    free(src);
LABEL_52:
  if ( (_BYTE)v182 )
    goto LABEL_33;
  sub_169D230((__int64)v238);
  if ( (*(_BYTE *)(a1[29] + 13LL) & 8) == 0 )
  {
    *a13 = 0;
    goto LABEL_34;
  }
  v53 = 88;
  if ( (*(_DWORD *)(*a12 + 40) & 7) == 6 && *(_DWORD *)(*(_QWORD *)(*a12 + 40) & 0xFFFFFFFFFFFFFFF8LL) == 3 )
    v53 = 120;
  v54 = (a1[31] + v53 + 17536) | 6;
  v55 = (unsigned __int8 **)a1;
  p_src = (unsigned __int8 **)&src;
  v197 = v54;
  sub_199FDE0((__int64)&src, (__int64)a1, v54, v194[0], 0);
  v60 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v196 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v60 + 16) == 48 && (_DWORD)v187 )
  {
    v145 = sub_F60F10(*v60, (__int64)a1, v56, v57, v58, v59);
    v55 = p_src;
    if ( v145 )
      v145 += 8;
    sub_1A48440(a1, p_src, v145, 0);
  }
  if ( (_DWORD)src == 5 )
    goto LABEL_153;
  v61 = v230;
  v62 = v231[0];
  LOBYTE(v188) = 0;
  v63 = (_QWORD *)v230;
  if ( v231[0] )
  {
    do
    {
      while ( 1 )
      {
        v65 = v63 + 1;
        v66 = sub_16C47B0(*v63 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v66 + 28) & 0x7Fu) - 34 <= 5 )
          break;
        ++v63;
        if ( v65 == (_QWORD *)(v61 + 8 * v62) )
          goto LABEL_67;
      }
      v64 = sub_B74C20(v66);
      v61 = v230;
      if ( v64 )
      {
        v103 = *(_QWORD *)(v230 + 8LL * v231[0]-- - 8);
        v62 = v231[0];
        if ( v63 != (_QWORD *)(v230 + 8LL * v231[0]) )
        {
          *v63 = v103;
          v61 = v230;
          v62 = v231[0];
        }
        LOBYTE(v188) = 1;
      }
      else
      {
        v62 = v231[0];
        ++v63;
      }
    }
    while ( v63 != (_QWORD *)(v61 + 8 * v62) );
LABEL_67:
    if ( (_BYTE)v188 )
      sub_17A2370((unsigned int *)p_src);
  }
  v67 = (_QWORD *)(*(_QWORD *)(*a12 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(*a12 + 16) & 4) != 0 )
    v67 = (_QWORD *)*v67;
  v68 = sub_B8EAA0((__int64)v67);
  v69 = *(unsigned int *)(a9 + 8);
  v198 = v68;
  v189 = v231[0];
  if ( (_DWORD)v69 != 1 || ((*(_BYTE *)(v68 + 8) + 70) & 0x7Fu) > 3 )
  {
    v70 = (__int64)&v198;
    v188 = (__int64 *)v194;
    v190 = &v197;
    v191 = &v197;
    v214 = _mm_loadh_ps((const double *)&v188);
    v188 = (__int64 *)&v198;
    v215 = _mm_loadh_ps((const double *)&a12);
    v71 = _mm_loadh_ps((const double *)&v188);
    v216 = v71;
    if ( v189 )
    {
LABEL_119:
      v187 = (unsigned int *)&v217;
      v217 = v219;
      v236 = 0;
      v218 = 0x200000000LL;
      v107 = 2 * ((_DWORD)v69 == 1) + 1;
      goto LABEL_120;
    }
    LODWORD(src) = 0;
    v231[0] = 0;
    if ( v232[0] )
      sub_1A39780(v232[0]);
    v71.m128_u64[0] = 0;
    v237 = 0;
    *(_OWORD *)v232 = 0;
    v235 = 0;
    sub_1A395A0(p_src);
    if ( (_DWORD)v187 == 1 )
      goto LABEL_153;
    sub_19A70B0((__int64)a1);
    if ( (_DWORD)v186 == 1 )
    {
      v105 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
      v106 = sub_704780((__int64 *)(v105 + 72), v105, v72, v73, v74, v75);
      v55 = p_src;
      if ( v106 )
        sub_1A48440(a1, p_src, v106 + 5, 0);
      else
        sub_1A48440(a1, p_src, 0, 0);
      v69 = *(unsigned int *)(a9 + 8);
      goto LABEL_119;
    }
    v76 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
    v77 = sub_704780((__int64 *)(v76 + 72), v76, v72, v73, v74, v75);
    v55 = p_src;
    if ( v77 )
      sub_1A48440(a1, p_src, v77 + 5, 0);
    else
      sub_1A48440(a1, p_src, 0, 0);
    v78 = (_QWORD *)v230;
    v70 = v231[0];
    v79 = 0;
    v80 = v231[0];
    v81 = v230;
    while ( v78 != (_QWORD *)(v81 + 8 * v70) )
    {
      v82 = v78;
      while ( 1 )
      {
        v78 = v82;
        v83 = *v82 & 0xFFFFFFFFFFFFFFF8LL;
        v84 = *(_BYTE *)(v83 + 28) & 0x7F;
        if ( ((v84 + 52) & 0x7Fu) <= 1 || (unsigned int)v84 - 53 <= 1 )
          v83 = sub_B72ED0(v83);
        v85 = sub_B8BF30(v83);
        if ( sub_B74C70(v85) )
          break;
        v70 = v231[0];
        ++v82;
        v80 = v231[0];
        if ( (_QWORD *)(v230 + 8LL * v231[0]) == v82 )
          goto LABEL_181;
      }
      v81 = v230;
      v86 = *(_QWORD *)(v230 + 8LL * v231[0] - 8);
      v70 = (unsigned int)(v231[0] - 1);
      v55 = (unsigned __int8 **)(v230 + 8 * v70);
      v80 = --v231[0];
      if ( v82 != v55 )
      {
        *v82 = v86;
        v70 = v231[0];
        v81 = v230;
        v80 = v231[0];
      }
      v79 = 1;
    }
LABEL_181:
    if ( !v79 )
    {
LABEL_182:
      v69 = *(unsigned int *)(a9 + 8);
      goto LABEL_119;
    }
    if ( v80 )
    {
      v158 = 0;
      if ( (_DWORD)src == 5 )
        v158 = HIDWORD(src);
      LODWORD(src) = 2;
      sub_1A43500(p_src);
      if ( (_DWORD)src == 5 )
      {
        HIDWORD(src) = v158;
        goto LABEL_182;
      }
    }
    else if ( (_DWORD)src != 1 )
    {
      LODWORD(src) = 0;
    }
    if ( v232[0] )
    {
      sub_1A39780(v232[0]);
      v232[0] = nullptr;
    }
    goto LABEL_182;
  }
  v70 = (__int64)&v198;
  v187 = (unsigned int *)v194;
  v188 = (__int64 *)&v198;
  v191 = &v197;
  v214 = _mm_loadh_ps((const double *)&v187);
  v187 = (unsigned int *)&v197;
  v215 = _mm_loadh_ps((const double *)&a12);
  v71 = _mm_loadh_ps((const double *)&v188);
  v216 = v71;
  if ( v189 )
  {
    v107 = 3;
    v236 = 0;
    v187 = (unsigned int *)&v217;
    v217 = v219;
    v218 = 0x200000000LL;
LABEL_120:
    v108 = *a12;
    if ( a11 )
    {
      v195 = 1;
    }
    else
    {
      if ( v107 == (unsigned int)sub_B76070(v108, (__int64)v55, v69, v70) && !sub_B748A0(*a12, (__int64)v55, v69, v70) )
      {
        v195 = 0;
        v238[0] = &v239;
        v238[1] = (void *)0x400000000LL;
        v211 = sub_199F840((__int64)a1, v196);
        v209 = v196;
        v210 = (int)v186;
        v212 = v189 == 0;
        if ( (v196 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          v209 = sub_6D5440(&v209);
        sub_19A34B0(&v220, (__int64)a1, (__int64)p_src, (__int64)&v209, v194[0], (__int64 *)v238);
        v146 = v220.m128i_i64[1];
        if ( v220.m128i_i64[1] && !LODWORD(v238[1]) )
        {
          v153 = (unsigned int)v218;
          v154 = v220.m128i_i64[0];
          v155 = (unsigned int)v218 + 1LL;
          if ( v155 > HIDWORD(v218) )
          {
            sub_2237220(v187, v187 + 4, v155, 16);
            v153 = (unsigned int)v218;
          }
          v156 = (__int64 *)((char *)v217 + 16 * v153);
          *v156 = v154;
          v156[1] = v146;
          v148 = (__m128i *)v238[0];
          LODWORD(v218) = v218 + 1;
        }
        else
        {
          v147 = (const __m128i *)v238[0];
          v148 = (__m128i *)((char *)v238[0] + 56 * LODWORD(v238[1]));
          if ( v238[0] != v148 )
          {
            v149 = (unsigned int)v218;
            v183 = v187 + 4;
            do
            {
              v150 = _mm_loadu_si128(v147);
              *(__m128i *)v222 = v150;
              v223 = _mm_loadu_si128(v147 + 1);
              v224 = _mm_loadu_si128(v147 + 2);
              v225 = v147[3].m128i_i64[0];
              v151 = v147->m128i_i64[1];
              if ( v149 + 1 > (unsigned __int64)HIDWORD(v218) )
              {
                sub_2237220(v187, v183, v149 + 1, 16);
                v149 = (unsigned int)v218;
              }
              v152 = (char *)v217 + 16 * v149;
              v147 = (const __m128i *)((char *)v147 + 56);
              *v152 = v150.m128i_i64[0];
              v152[1] = v151;
              v149 = (unsigned int)(v218 + 1);
              LODWORD(v218) = v218 + 1;
            }
            while ( v148 != v147 );
            v148 = (__m128i *)v238[0];
          }
        }
        if ( v148 != (__m128i *)&v239 )
          free(v148);
        if ( (_DWORD)v218 != 1 )
        {
          if ( (_DWORD)v218 )
            goto LABEL_160;
          v128 = (unsigned int *)v217;
          LOBYTE(v182) = 0;
LABEL_150:
          if ( v128 != v187 + 4 )
            free(v128);
          goto LABEL_154;
        }
LABEL_169:
        v140 = *((_QWORD *)v217 + 1);
        *a13 = v140;
        v141 = *(_QWORD *)(v140 + 16);
        if ( (v141 & 4) != 0 )
          v142 = *(_QWORD *)(v141 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v142 = v141 & 0xFFFFFFFFFFFFFFF8LL;
        v199 = sub_B8EAA0(v142);
        if ( sub_B74C70(*a13) || sub_B74C70(*a12) )
        {
          if ( v193 )
          {
            v143 = sub_B74C70(*a13);
            v144 = sub_B74C70(*a12);
            if ( v199 != v198 || v143 != v144 )
            {
              v182 = (__int64 *)*a12;
              v71 = _mm_loadh_ps((const double *)&v182);
              *(__m128 *)v222 = v71;
              v159 = sub_B74C70((__int64)v182);
              v182 = a1 + 1;
              sub_168B9F0((__int64)v238, a1 + 1, v194[0], 0x1055u, 0);
              v160 = v222[v159];
              v200 = v160[5];
              v161 = sub_15894B0((__int64)v238, &v200);
              v162 = sub_15890D0(v161, &v195);
              v209 = *((_QWORD *)v222[!v159] + 5);
              v163 = sub_15894B0(v162, (__int64 *)&v209);
              v164 = v160[2];
              if ( (v164 & 4) != 0 )
                v165 = *(_QWORD *)(v164 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v165 = v164 & 0xFFFFFFFFFFFFFFF8LL;
              v166 = sub_B8EAA0(v165);
              v167 = v166;
              if ( *(_BYTE *)(v163 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v163 + 32), v166, 0xCu);
              }
              else if ( *(_BYTE *)(v163 + 132) )
              {
                v183 = (unsigned int *)sub_168B9E0((_QWORD *)v163);
                v177 = *(_QWORD *)(v163 + 16);
                if ( v177 )
                  v177 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v177 + 32LL))(*(_QWORD *)(v163 + 16));
                v220.m128i_i64[0] = v177;
                v178 = sub_1587BC0((__int64)v183, v220.m128i_i64, v173, v174, v175, v176);
                sub_AE9DF0((unsigned __int8 **)(*v178 + 32LL * *(unsigned int *)(v163 + 128) + 8), v167, 0xCu);
              }
              sub_15F7200(v238);
              v168 = v182;
              sub_168B9F0((__int64)v238, v182, *(_DWORD *)(*a12 + 24), 0x1915u, 0);
              LOBYTE(v209) = sub_B74C70(*a12);
              v169 = sub_1588420((__int64)v238, (unsigned __int8 *)&v209);
              v220.m128i_i64[0] = *(_QWORD *)(*a12 + 40);
              v170 = sub_15894B0(v169, v220.m128i_i64);
              sub_17BABD0(v170, v188);
              sub_15F7200(v238);
              sub_168B9F0((__int64)v238, v168, *(_DWORD *)(*a13 + 24), 0x1915u, 0);
              LOBYTE(v209) = sub_B74C70(*a13);
              v171 = sub_1588420((__int64)v238, (unsigned __int8 *)&v209);
              v220.m128i_i64[0] = *(_QWORD *)(*a13 + 40);
              v172 = sub_15894B0(v171, v220.m128i_i64);
              sub_17BABD0(v172, (__int64 *)&v199);
              sub_15F7200(v238);
            }
          }
        }
        if ( (*(_BYTE *)(a1[29] + 1LL) & 0x10) == 0 || !v195 || !sub_19A3330((__int64)a1, *a13) )
          goto LABEL_177;
        v238[0] = (void *)*a13;
        sub_19A2390((__int64)v222, (__int64)a1, (__int64)v238[0], v196, v194[0]);
        v157 = v189;
        if ( v189 && v224.m128i_i32[2] == 1 )
        {
          v221 = 0;
          v220.m128i_i64[0] = v196;
          v220.m128i_i64[1] = v224.m128i_i64[0];
          if ( (v196 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            v220.m128i_i64[0] = sub_6D5440(&v220);
          v157 = (__int64)a1;
          sub_19A34B0((__m128i *)v238, (__int64)a1, (__int64)p_src, (__int64)&v220, v194[0], nullptr);
          if ( v238[1] && (_DWORD)v243 != 1 && HIDWORD(v242) == v224.m128i_i32[1] )
            goto LABEL_177;
        }
        else if ( v224.m128i_i32[2] != 1 )
        {
LABEL_177:
          LOBYTE(v182) = sub_19ADA00(a1, v194[0], v185, v193, (__int64)v232[1], *(_QWORD *)v217, *((_QWORD *)v217 + 1));
          v128 = (unsigned int *)v217;
          goto LABEL_150;
        }
        if ( *(_DWORD *)(v16 + 8) != 1 )
        {
          if ( a11 )
          {
            v179 = a10;
            v180 = sub_EEC140(a10[a11 - 1]);
            v220.m128i_i64[0] = __PAIR64__(v180, sub_EEB7E0(*v179, v157, *(double *)v71.m128_u64));
          }
          else
          {
            v220.m128i_i64[0] = 0;
          }
          sub_168B9F0((__int64)v238, a1 + 1, v194[0], 0x12C5u, 0);
          sub_15884C0((__int64)v238, v220.m128i_i64);
          sub_15F7200(v238);
          if ( (*(_BYTE *)(*a13 + 29) & 2) == 0 )
          {
            sub_168B9F0((__int64)v238, a1 + 1, *(_DWORD *)(*a13 + 24), 0x188Bu, 0);
            sub_17B3DD0((__int64)v238, v191);
            sub_15F7200(v238);
          }
        }
        goto LABEL_177;
      }
      v195 = 1;
      v108 = *a12;
    }
    v109 = (__int64 *)(*(_QWORD *)(v108 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    v110 = *v109;
    if ( *(_BYTE *)(*v109 + 16) != 26 )
      v110 = sub_F63050(*v109, v55, v69, v70);
    v111 = *(_DWORD *)(a9 + 8);
    v222[0] = &v223;
    v222[1] = (void *)0x600000000LL;
    if ( v111 == 1 )
      sub_A6A4A0((__int64)v222, (__int64)v183);
    else
      v111 = 0;
    sub_A6A4A0((__int64)v222, *(_QWORD *)(a1[31] + 19056LL));
    v112 = LODWORD(v222[1]);
    v113 = *(unsigned __int16 *)(v110 + 22);
    v114 = (unsigned int)(LODWORD(v222[1]) - v111);
    if ( (unsigned int)v114 < v113 )
    {
      v115 = v110 + 8 * v114;
      v116 = v110 + 8 * (v113 + v111 - LODWORD(v222[1]) - 1 + v114) + 8;
      do
      {
        v117 = *(_QWORD *)(v115 + 48);
        v115 += 8;
        sub_A6A4A0((__int64)v222, v117);
      }
      while ( v115 != v116 );
      v112 = LODWORD(v222[1]);
    }
    LODWORD(v238[0]) &= 0xF0010000;
    v238[1] = nullptr;
    v118 = a1[31];
    v239 = 0;
    LODWORD(v241) = 0;
    v242 = nullptr;
    v243 = 0;
    memset(v244, 0, sizeof(v244));
    v245 = 0;
    v246 = 0;
    v247 = 0;
    v248 = 0;
    v249 = 0;
    BYTE2(v238[0]) = ((unsigned __int8)BYTE3(*(_QWORD *)(v110 + 16)) >> 7) | BYTE2(v238[0]) & 0xFE;
    v119 = sub_A73610(v118, *(_QWORD *)(v118 + 18632), (__int64 *)v222[0], v112, (const __m128i *)v238, 0);
    if ( v222[0] != &v223 )
      free(v222[0]);
    v120 = (__int64 *)v230;
    v183 = (unsigned int *)(v230 + 8LL * v231[0]);
    if ( v183 != (unsigned int *)v230 )
    {
      v186 = v222;
      while ( 1 )
      {
        v222[0] = nullptr;
        v121 = (_BYTE *)sub_16C47B0(*v120 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v121[28] & 0x7F) != 0x47 )
          break;
        v71.m128_u64[0] = 0;
        v240 = 0;
        v239 = v194[0];
        v242 = v244;
        v258 = v260;
        v260[10] = v261;
        v259 = 0x800000000LL;
        v262 = &v264;
        *(_OWORD *)v238 = 0;
        v241 = 0;
        v243 = 0x400000000LL;
        v251 = 0;
        v253 = 0;
        v255 = 0;
        v256 = 0;
        v257 = 0;
        v260[8] = 0;
        v260[9] = 0;
        v260[11] = 0x400000000LL;
        v261[48] = 0;
        v263 = 0x400000000LL;
        v252 &= 0xFFFFFFFE00000000LL;
        v254 &= 0xFFFFFFFE00000000LL;
        if ( !(unsigned int)sub_1D75BD0((_DWORD)a1, (_DWORD)v121, 0, v119, (_DWORD)v186, (unsigned int)v238, 0) )
        {
          sub_19A2E00((__int64)v238);
          v121 = v222[0];
          goto LABEL_136;
        }
        sub_19A2E00((__int64)v238);
LABEL_137:
        if ( v183 == (unsigned int *)++v120 )
        {
          v16 = a9;
          goto LABEL_145;
        }
      }
      v222[0] = v121;
LABEL_136:
      v122 = sub_1D3AE30(a1, *((_QWORD *)v121 + 6), v119, 1);
      if ( (*(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)*(_QWORD *)&byte_8[v122 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v122) & 7) == (*(_QWORD *)&byte_8[v119 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v119 | (unsigned __int8)*(_QWORD *)&byte_8[v119 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      {
        v123 = (unsigned int)v218;
        v124 = (__int64 *)v222[0];
        v125 = *v120;
        v126 = (unsigned int)v218 + 1LL;
        if ( v126 > HIDWORD(v218) )
        {
          v192 = *v120;
          v190 = (__int64 *)v222[0];
          sub_2237220(v187, v187 + 4, v126, 16);
          v125 = v192;
          v124 = v190;
          v123 = (unsigned int)v218;
        }
        v127 = (char *)v217 + 16 * v123;
        *v127 = v125;
        v127[1] = v124;
        LODWORD(v218) = v218 + 1;
      }
      goto LABEL_137;
    }
LABEL_145:
    if ( (*(_BYTE *)(a1[29] + 60LL) & 0x10) != 0 )
    {
      v135 = a1[83];
      v136 = sub_15F1640((__int64)a1, 1);
      sub_178F320(v135, v136, v187, v137, v138, v139);
    }
    if ( !(_DWORD)v218 )
    {
      v128 = (unsigned int *)v217;
      if ( *(_DWORD *)(v16 + 8) == 1 )
      {
        sub_19B52D0((__int64)&v214, v195);
        v128 = (unsigned int *)v217;
        LOBYTE(v182) = 1;
      }
      goto LABEL_150;
    }
    if ( (_DWORD)v218 != 1 )
    {
LABEL_160:
      v130 = a1 + 1;
      sub_168B9F0((__int64)v238, v130, v194[0], 0x1961u, 0);
      v131 = v191;
      v132 = sub_17B3DD0((__int64)v238, v191);
      sub_1605D30(v132, &v196);
      sub_15F7200(v238);
      v133 = (unsigned int *)v217;
      v128 = (unsigned int *)((char *)v217 + 16 * (unsigned int)v218);
      if ( v217 != v128 )
      {
        do
        {
          v134 = *((_QWORD *)v133 + 1);
          v133 += 4;
          sub_168B9F0((__int64)v238, v130, *(_DWORD *)(v134 + 24), 0x17C1u, 0);
          sub_17B3DD0((__int64)v238, v131);
          sub_15F7200(v238);
        }
        while ( v133 != v128 );
        v128 = (unsigned int *)v217;
      }
      goto LABEL_150;
    }
    goto LABEL_169;
  }
  sub_19B52D0((__int64)&v214, 0);
LABEL_153:
  LOBYTE(v182) = 1;
LABEL_154:
  sub_169D230((__int64)p_src);
LABEL_34:
  if ( ptr != v228 )
    free(ptr);
  return (unsigned __int8)v182;
}
