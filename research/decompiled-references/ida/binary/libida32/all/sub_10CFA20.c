__int64 __fastcall sub_10CFA20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  unsigned int *v7; // r15
  unsigned int *v8; // rcx
  __int64 v9; // rax
  void *v10; // rdi
  __int64 *v11; // rdx
  void **v12; // rbx
  unsigned int v13; // ebp
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  void *v17; // rax
  unsigned int v18; // ebp
  int v19; // ecx
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  bool v25; // zf
  void *v26; // rax
  unsigned int *v27; // rbp
  unsigned __int64 *v28; // rbx
  unsigned int *v29; // rdi
  char v30; // bp
  _QWORD *v31; // r13
  _QWORD *v32; // rbx
  unsigned __int64 *v33; // r14
  __int64 v34; // rbx
  __int64 *v35; // r14
  __int64 v36; // r13
  signed __int64 v37; // rbx
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned int *v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // r14
  _QWORD *v43; // rax
  _QWORD *v44; // r9
  _QWORD *v45; // rax
  _QWORD *v46; // r12
  _QWORD *v47; // r15
  unsigned int v48; // r13d
  int v49; // eax
  _DWORD *v50; // rbx
  __m128 *v51; // r14
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  __int64 *v54; // r13
  __int64 v55; // r12
  unsigned int *v56; // rsi
  unsigned int *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r13
  _QWORD *v60; // rsi
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  _QWORD *v64; // rbp
  _QWORD *j; // rbx
  _DWORD *v66; // r14
  _QWORD *v67; // rsi
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r12
  size_t v72; // rcx
  const char **v73; // rax
  const char *v74; // rbp
  unsigned __int64 *v75; // r14
  unsigned __int64 *v76; // r14
  _QWORD *v77; // r14
  _QWORD *v78; // rax
  __int64 v79; // r13
  _QWORD *v80; // rdx
  _QWORD *v81; // r12
  _QWORD *i; // rbp
  _DWORD *v83; // r14
  void *v84; // rdi
  void *v85; // rdi
  unsigned __int64 *v86; // r12
  _QWORD *v87; // rbp
  _QWORD *v88; // rbx
  unsigned int **v89; // rbp
  unsigned int **v90; // rbx
  unsigned __int64 *v91; // r14
  __int64 v92; // r13
  unsigned int *v93; // r12
  __int64 v94; // rax
  __int64 v95; // rbp
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rbx
  _QWORD *v99; // rsi
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rdx
  _QWORD *v103; // rsi
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rdx
  void *v107; // rbx
  __int64 v108; // r13
  __int64 v109; // r14
  unsigned __int64 v110; // rax
  unsigned __int64 v111; // rcx
  void *v112; // rax
  __int64 v113; // rax
  __int64 v114; // rdx
  const __m128i *v115; // rcx
  __int64 v116; // rdx
  unsigned __int64 *v117; // rsi
  __m128i *v118; // rax
  _QWORD *v119; // rax
  __int64 *v120; // r14
  __int64 v121; // rbx
  __int64 v122; // rbx
  __int64 v123; // rax
  unsigned int *v124; // r10
  unsigned int *v125; // r15
  int v126; // ebx
  __int64 v127; // rbp
  void *v128; // r13
  __int64 v129; // rbp
  char *v130; // r12
  char *v131; // r14
  __int64 v132; // rbx
  void *v133; // r13
  __int64 v134; // rax
  unsigned __int64 v135; // rdx
  __int64 v136; // rbp
  unsigned int *v137; // rbx
  __int64 v138; // r15
  unsigned int v139; // r12d
  __int64 v140; // r14
  int v141; // eax
  __int64 v142; // rax
  int v143; // r12d
  void *v144; // r13
  void *v145; // r12
  __int64 v146; // rax
  unsigned int **v147; // rcx
  unsigned int *v148; // rax
  unsigned int *v149; // rsi
  __int64 v150; // rcx
  __int64 v151; // rdx
  _QWORD *v152; // r15
  __int64 v153; // rbp
  _QWORD *v154; // rbx
  _QWORD *v155; // rbp
  __int64 v156; // rbx
  __int64 v157; // rbp
  __int64 v158; // rbx
  __int64 v159; // rbp
  __int64 v161; // rax
  unsigned __int64 v162; // rdx
  int v163; // eax
  __int64 v164; // rbx
  __int64 v165; // r13
  unsigned __int64 v166; // rax
  unsigned __int64 v167; // rcx
  void *v168; // rax
  __int64 v169; // rax
  __int64 v170; // rdx
  const __m128i *v171; // rcx
  __int64 v172; // rdx
  unsigned __int64 *v173; // rsi
  __m128i *v174; // rax
  const double *v175; // rdx
  _QWORD *v176; // rax
  _QWORD *v177; // rbx
  _QWORD *v178; // rbp
  __int64 v179; // rbx
  __int64 v180; // rbp
  __int64 v181; // rbx
  __int64 v182; // rbp
  __int64 *v183; // rbx
  __m128i *v184; // rax
  __m128i si128; // xmm0
  __int64 v186; // rdi
  __m128i *v187; // r13
  __int64 v188; // rax
  __int8 v189; // al
  unsigned __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rax
  __int64 *v193; // rcx
  __m128i v194; // xmm1
  __m128i *v195; // r13
  __int64 v196; // rax
  __int64 v197; // rbx
  __int8 v198; // al
  __int8 v199; // al
  __int64 v200; // rbx
  char v201; // al
  char v202; // dl
  __int64 v203; // rax
  _QWORD *v204; // r13
  __int64 v205; // rax
  _QWORD *v206; // rbp
  int v207; // r12d
  int v208; // ebx
  int v209; // eax
  _DWORD *v210; // r14
  bool v211; // al
  void *v212; // rdi
  _QWORD *v213; // r13
  unsigned int *v214; // r12
  __int64 v215; // rax
  _QWORD *v216; // rbx
  __int64 v217; // rax
  int v218; // ebx
  int v219; // r13d
  unsigned __int64 *v220; // rbx
  __int64 v221; // rax
  unsigned __int64 *k; // r14
  unsigned int *v223; // rax
  unsigned __int64 v224; // rdi
  unsigned int *v225; // rdx
  unsigned int *v226; // rax
  unsigned __int64 v227; // rdx
  unsigned int *v228; // rcx
  void *v229; // rbx
  unsigned __int64 v230; // rax
  __int64 v231; // rbx
  __int64 v232; // rax
  __int64 v233; // rbp
  void *v234; // rbx
  _QWORD *v235; // rbp
  _QWORD *v236; // rbx
  __int64 v237; // r12
  __int64 v238; // r12
  void *v239; // rbx
  unsigned __int64 v240; // rbx
  unsigned __int64 *v241; // r14
  __int64 v242; // rdi
  __int64 v243; // rsi
  unsigned __int64 v244; // rbx
  unsigned __int64 *v245; // r13
  __int64 v246; // rdi
  __int64 v247; // rsi
  __int64 *v248; // [rsp-8h] [rbp-300h]
  __m128 v249; // [rsp+0h] [rbp-2F8h] BYREF
  void *v250; // [rsp+18h] [rbp-2E0h]
  unsigned __int64 *p_src; // [rsp+20h] [rbp-2D8h]
  void **v252; // [rsp+28h] [rbp-2D0h]
  _QWORD *v253; // [rsp+30h] [rbp-2C8h]
  __int64 v254; // [rsp+38h] [rbp-2C0h]
  __int64 v255; // [rsp+40h] [rbp-2B8h]
  unsigned int *v256; // [rsp+48h] [rbp-2B0h]
  __int64 v257; // [rsp+50h] [rbp-2A8h]
  char *v258; // [rsp+58h] [rbp-2A0h]
  void **v259; // [rsp+60h] [rbp-298h]
  int v260; // [rsp+68h] [rbp-290h]
  int v261; // [rsp+6Ch] [rbp-28Ch]
  void **p_ptr; // [rsp+70h] [rbp-288h]
  const double **v263; // [rsp+78h] [rbp-280h]
  __int64 *v264; // [rsp+80h] [rbp-278h]
  _QWORD **v265; // [rsp+88h] [rbp-270h]
  __int64 v266; // [rsp+90h] [rbp-268h]
  unsigned int *v267; // [rsp+98h] [rbp-260h]
  char *v268; // [rsp+A0h] [rbp-258h]
  unsigned int *v269; // [rsp+A8h] [rbp-250h]
  unsigned __int64 v270; // [rsp+B0h] [rbp-248h]
  __int64 v271; // [rsp+B8h] [rbp-240h]
  unsigned int **v272; // [rsp+C0h] [rbp-238h] BYREF
  void **v273; // [rsp+C8h] [rbp-230h]
  void **v274; // [rsp+D0h] [rbp-228h]
  void **v275; // [rsp+D8h] [rbp-220h]
  _QWORD *v276; // [rsp+E0h] [rbp-218h]
  unsigned int v277; // [rsp+E8h] [rbp-210h]
  char v278; // [rsp+EFh] [rbp-209h]
  _QWORD *v279; // [rsp+F0h] [rbp-208h] BYREF
  _QWORD *v280; // [rsp+F8h] [rbp-200h] BYREF
  _QWORD v281[4]; // [rsp+100h] [rbp-1F8h] BYREF
  void *v282; // [rsp+120h] [rbp-1D8h] BYREF
  signed __int64 v283; // [rsp+128h] [rbp-1D0h]
  char v284; // [rsp+130h] [rbp-1C8h] BYREF
  __int64 v285[4]; // [rsp+140h] [rbp-1B8h] BYREF
  void *v286; // [rsp+160h] [rbp-198h] BYREF
  __int64 v287; // [rsp+168h] [rbp-190h]
  char v288; // [rsp+170h] [rbp-188h] BYREF
  void *v289; // [rsp+190h] [rbp-168h] BYREF
  __int64 v290; // [rsp+198h] [rbp-160h]
  char v291; // [rsp+1A0h] [rbp-158h] BYREF
  void *ptr; // [rsp+1C0h] [rbp-138h] BYREF
  unsigned int v293; // [rsp+1C8h] [rbp-130h]
  void *v294; // [rsp+1F0h] [rbp-108h] BYREF
  __int64 v295; // [rsp+1F8h] [rbp-100h]
  __int64 v296; // [rsp+200h] [rbp-F8h] BYREF
  int v297; // [rsp+208h] [rbp-F0h]
  void *src; // [rsp+220h] [rbp-D8h] BYREF
  __int64 v299; // [rsp+228h] [rbp-D0h]
  __int64 v300; // [rsp+230h] [rbp-C8h] BYREF
  int v301; // [rsp+238h] [rbp-C0h]
  void *v302; // [rsp+248h] [rbp-B0h]
  __int64 v303; // [rsp+250h] [rbp-A8h]
  __int64 v304; // [rsp+258h] [rbp-A0h] BYREF
  void *v305; // [rsp+270h] [rbp-88h]
  __int64 v306; // [rsp+278h] [rbp-80h]
  __int64 v307; // [rsp+280h] [rbp-78h] BYREF
  void *v308; // [rsp+298h] [rbp-60h]
  __int64 v309; // [rsp+2A0h] [rbp-58h]
  __int64 v310; // [rsp+2A8h] [rbp-50h] BYREF

  v255 = a1;
  v276 = v281;
  v257 = a2;
  v254 = a3;
  v272 = (unsigned int **)a4;
  v266 = a5;
  sub_220FAE0(v281);
  v281[0] = &off_2BC1238;
  v281[2] = "Building compilation actions";
  if ( (*(_BYTE *)(a1 + 1168) & 4) == 0 && !*(_DWORD *)(a4 + 8) )
  {
    sub_FA3370((__int64)&src, *(_QWORD *)v255, 0, 438);
    sub_AC6300((__int64)&src);
    goto LABEL_302;
  }
  sub_10C8640(v255, v257, v254, v272, v266);
  v6 = *(_DWORD *)(v257 + 16);
  LOBYTE(v252) = 1;
  if ( (v6 & 0x14) == 0 )
  {
    LOBYTE(v252) = sub_2193B10(v254, 1533, 1253, 0);
    if ( !(_BYTE)v252 )
    {
      v249.m128_i32[0] = *(_DWORD *)(v257 + 16);
      LOBYTE(v252) = sub_2193B10(v254, 3088, 3017, ((unsigned __int32)v249.m128_i32[0] >> 1) & 1);
    }
    v6 = *(_DWORD *)(v257 + 16);
  }
  v278 = 0;
  if ( (v6 & 8) != 0 )
    v278 = sub_2193B10(v254, 825, 1164, 0) ^ 1;
  v7 = nullptr;
  if ( !(_BYTE)v252 )
  {
    v249 = _mm_loadh_ps((const double *)&v272);
    v183 = (__int64 *)v257;
    v7 = (unsigned int *)operator new(0xA8u);
    v7[6] = 0;
    *((_QWORD *)v7 + 1) = v183;
    *((_QWORD *)v7 + 4) = 0;
    *((_QWORD *)v7 + 5) = v7 + 6;
    *((_QWORD *)v7 + 6) = v7 + 6;
    *((_QWORD *)v7 + 15) = 0x400000000LL;
    *((_QWORD *)v7 + 7) = 0;
    v7[18] = 0;
    *((_QWORD *)v7 + 10) = 0;
    *((_QWORD *)v7 + 11) = v7 + 18;
    *((_QWORD *)v7 + 12) = v7 + 18;
    *((_QWORD *)v7 + 13) = 0;
    *((_QWORD *)v7 + 14) = v7 + 32;
    *(_BYTE *)v7 = 1;
    v184 = (__m128i *)operator new(0xB8u);
    si128 = _mm_load_si128((const __m128i *)&v249);
    v186 = v254;
    v187 = v184;
    v184[1].m128i_i64[0] = (__int64)v184[2].m128i_i64;
    v184[1].m128i_i64[1] = 0x200000000LL;
    v184[4].m128i_i64[1] = (__int64)&v184[5].m128i_i64[1];
    v184[7].m128i_i64[1] = (__int64)&v184[8].m128i_i64[1];
    v184[8].m128i_i64[0] = 0x300000000LL;
    v188 = *v183;
    v187->m128i_i64[1] = (__int64)v183;
    v187[5].m128i_i64[0] = 0x400000000LL;
    v187[4].m128i_i64[0] = 2;
    v187[11].m128i_i64[0] = v188 + 48;
    v187->m128i_i64[0] = (__int64)&unk_2C0C288;
    v187[10].m128i_i64[0] = 0;
    v187[10].m128i_i16[4] = 0;
    v187[10].m128i_i32[3] = 1;
    v187[3] = si128;
    v187[4].m128i_i8[5] = *(_DWORD *)(v188 + 28) == 2;
    v189 = sub_2193B10(v186, 825, 1164, 0);
    v190 = v7[31];
    v187[10].m128i_i32[3] = 9;
    v187[10].m128i_i8[9] = v189;
    v187->m128i_i64[0] = (__int64)&off_2B39398;
    v191 = v7[30];
    if ( v191 + 1 > v190 )
    {
      sub_22134E0(v7 + 28, v7 + 32, v191 + 1, 8);
      v191 = v7[30];
    }
    *(_QWORD *)(*((_QWORD *)v7 + 14) + 8 * v191) = v187;
    ++v7[30];
    v192 = operator new(0x210u);
    v193 = (__int64 *)v257;
    v194 = _mm_load_si128((const __m128i *)&v249);
    v195 = (__m128i *)v192;
    v192 += 32;
    *(_QWORD *)(v192 - 24) = v257;
    v195[1].m128i_i64[0] = v192;
    v195[1].m128i_i64[1] = 0x200000000LL;
    v195[4].m128i_i64[1] = (__int64)&v195[5].m128i_i64[1];
    v195[5].m128i_i64[0] = 0x400000000LL;
    v195[7].m128i_i64[1] = (__int64)&v195[8].m128i_i64[1];
    v195[8].m128i_i64[0] = 0x300000000LL;
    v196 = *v193;
    v195->m128i_i64[0] = (__int64)&unk_2C0C288;
    v195[3] = v194;
    v195[4].m128i_i64[0] = 8;
    v195[10].m128i_i16[4] = 0;
    v197 = v254;
    v195[11].m128i_i64[0] = v196 + 48;
    v195[10].m128i_i64[0] = 0;
    v195[10].m128i_i32[3] = 1;
    v195[4].m128i_i8[5] = *(_DWORD *)(v196 + 28) == 2;
    v198 = sub_2193B10(v197, 825, 1164, 0);
    v195[32].m128i_i8[9] = 0;
    v195[10].m128i_i8[9] = v198;
    v195->m128i_i64[0] = (__int64)&off_2B39408;
    v195[11].m128i_i64[1] = (__int64)&v195[12].m128i_i64[1];
    v195[12].m128i_i64[0] = 0x800000000LL;
    v195[32].m128i_i8[11] = 0;
    v195[10].m128i_i32[3] = 47;
    if ( sub_10BA920(v197, 0x33Fu, 0x48Eu) )
    {
      v199 = sub_2193B10(v197, 831, 1166, 0);
      v195[32].m128i_i8[11] = 1;
      v195[32].m128i_i8[10] = v199;
      if ( v199 )
      {
        if ( v195[10].m128i_i8[9] )
        {
          sub_FA3370((__int64)&src, **(_QWORD **)v257, 0, 52);
          sub_10B4AF0((unsigned __int8 **)&src, (__int64)"-fhip-emit-relocatable");
          sub_10B4AF0((unsigned __int8 **)&src, (__int64)"-fgpu-rdc");
          sub_AC6300((__int64)&src);
        }
        if ( !v195[4].m128i_i8[5] )
        {
          sub_FA3370((__int64)&src, **(_QWORD **)v257, 0, 54);
          sub_10B4AF0((unsigned __int8 **)&src, (__int64)"-fhip-emit-relocatable");
          sub_10B4AF0((unsigned __int8 **)&src, (__int64)"--cuda-device-only");
          sub_AC6300((__int64)&src);
        }
      }
    }
    v200 = v254;
    if ( sub_10BA920(v254, 0x805u, 0xBBEu) )
    {
      v201 = sub_2193B10(v200, 2053, 3006, 1);
      v202 = 0;
      if ( v201 )
      {
        v202 = 1;
        if ( v195[32].m128i_i8[11] )
          v202 = v195[32].m128i_i8[10] ^ 1;
      }
      v195[32].m128i_i8[8] = v202;
      v195[32].m128i_i8[9] = 1;
    }
    v203 = v7[30];
    if ( v203 + 1 > (unsigned __int64)v7[31] )
    {
      sub_22134E0(v7 + 28, v7 + 32, v203 + 1, 8);
      v203 = v7[30];
    }
    *(_QWORD *)(*((_QWORD *)v7 + 14) + 8 * v203) = v195;
    v204 = *((_QWORD **)v7 + 14);
    v205 = v7[30] + 1;
    v206 = &v204[v205];
    v7[30] = v205;
    if ( v204 == v206 )
    {
      v211 = 0;
    }
    else
    {
      v207 = 0;
      v208 = 0;
      do
      {
        LOBYTE(v209) = *(_BYTE *)v7;
        v210 = (_DWORD *)*v204;
        if ( *(_BYTE *)v7 )
          v209 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v210 + 64LL))(*v204) ^ 1;
        *(_BYTE *)v7 = v209;
        if ( v210[6] )
        {
          ++v208;
          v207 -= ((*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)v210 + 72LL))(v210) == 0) - 1;
        }
        ++v204;
      }
      while ( v206 != v204 );
      v211 = v208 == v207 && v208 != 0;
    }
    *((_BYTE *)v7 + 160) = v211;
  }
  v275 = &v286;
  v286 = &v288;
  v274 = &v289;
  v289 = &v291;
  v287 = 0x300000000LL;
  v8 = *v272;
  v9 = *((unsigned int *)v272 + 2);
  v290 = 0x300000000LL;
  v267 = &v8[4 * v9];
  if ( v267 == v8 )
    goto LABEL_234;
  v256 = v8;
  p_ptr = &ptr;
  v259 = &v294;
  v273 = &v282;
  v250 = nullptr;
  v268 = &v284;
  v271 = 0x300000000LL;
  while ( 2 )
  {
    v12 = p_ptr;
    v13 = *v256;
    v14 = *v256;
    v253 = *((_QWORD **)v256 + 1);
    sub_12A9820(p_ptr, v255, v254, v14);
    if ( !v293 )
    {
      v10 = ptr;
      if ( ptr == v12 + 2 )
        goto LABEL_11;
LABEL_10:
      free(v10);
      goto LABEL_11;
    }
    sub_12A9760(v259, v13, 6);
    v15 = operator new(0x80u);
    sub_10AE2B0(v15, (__int64)v253, v13, nullptr, 0);
    src = (void *)v15;
    p_src = (unsigned __int64 *)&src;
    sub_10C7210(v257 + 88, (__int64 *)&src);
    if ( src )
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
    v16 = v255;
    v283 = 0;
    v284 = 0;
    v282 = v268;
    v249.m128_i32[0] = *(_DWORD *)(v255 + 48);
    if ( (unsigned int)(v249.m128_i32[0] - 3) <= 1 || !(unsigned __int8)sub_12A8FB0(v13) )
      goto LABEL_16;
    v71 = v16 + 48;
    v72 = 0;
    v73 = (const char **)v253[6];
    v74 = *v73;
    if ( *v73 )
      v72 = j__strlen(*v73);
    v75 = p_src;
    sub_10B7FA0((__int64)p_src, v71, (__int64)v74, v72, v254);
    sub_9E6D90((__int64)v273, v75);
    if ( src != v75 + 2 )
      operator delete(src);
    if ( v282 )
    {
      src = p_src + 2;
      sub_10B5070(p_src, v282, (__int64)v282 + v283);
    }
    else
    {
      LOBYTE(v300) = 0;
      v299 = 0;
      src = p_src + 2;
    }
    v76 = p_src;
    sub_9E6D90(v15 + 96, p_src);
    if ( src == v76 + 2 )
    {
LABEL_16:
      if ( (_BYTE)v252 )
        goto LABEL_17;
    }
    else
    {
      operator delete(src);
      if ( (_BYTE)v252 )
        goto LABEL_17;
    }
    if ( !*(_BYTE *)v7 )
    {
      if ( v282 != v273 + 2 )
        operator delete(v282);
      if ( v294 != v259 + 2 )
        free(v294);
      if ( ptr != p_ptr + 2 )
        free(ptr);
      v11 = (__int64 *)p_src;
      if ( !(_DWORD)v287 )
        goto LABEL_235;
      goto LABEL_166;
    }
    v77 = v253;
    src = (void *)v15;
    v285[0] = (__int64)v253;
    sub_10CF910((_QWORD *)v7 + 8, p_src, (const double *)v285);
    if ( *((_BYTE *)v7 + 160)
      && !*(_DWORD *)(v15 + 8)
      && *(_BYTE *)(*v77 + 44LL) == 1
      && (!(unsigned __int8)sub_12A8FB0(*(unsigned int *)(v15 + 12)) || *(_DWORD *)(v15 + 12) == 10) )
    {
      v108 = *((_QWORD *)v7 + 1);
      v109 = operator new(0x128u);
      sub_10AF130(v109, v15);
      src = (void *)v109;
      sub_10C7210(v108 + 88, (__int64 *)p_src);
      if ( src )
        (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
      v110 = sub_10BCDC0(*((_QWORD *)v7 + 1));
      v111 = *(unsigned int *)(v109 + 100);
      v112 = *(void **)(v110 + 40);
      v299 = 0;
      v300 = 0;
      src = v112;
      v113 = *(unsigned int *)(v109 + 96);
      v301 = 1;
      v114 = v113 + 1;
      if ( v113 + 1 > v111 )
      {
        v244 = *(_QWORD *)(v109 + 88);
        v245 = p_src;
        v246 = v109 + 88;
        v247 = v109 + 104;
        if ( v244 > (unsigned __int64)p_src || (unsigned __int64)p_src >= v244 + 32 * v113 )
        {
          sub_22134E0(v246, v247, v114, 32);
          v116 = *(_QWORD *)(v109 + 88);
          v113 = *(unsigned int *)(v109 + 96);
          v115 = (const __m128i *)v245;
          v117 = p_src;
        }
        else
        {
          sub_22134E0(v246, v247, v114, 32);
          v116 = *(_QWORD *)(v109 + 88);
          v113 = *(unsigned int *)(v109 + 96);
          v117 = p_src;
          v115 = (const __m128i *)((char *)p_src + v116 - v244);
        }
      }
      else
      {
        v115 = (const __m128i *)p_src;
        v116 = *(_QWORD *)(v109 + 88);
        v117 = p_src;
      }
      v15 = v109;
      v118 = (__m128i *)(v116 + 32 * v113);
      *v118 = _mm_loadu_si128(v115);
      v118[1] = _mm_loadu_si128(v115 + 1);
      v119 = v253;
      ++*(_DWORD *)(v109 + 96);
      src = (void *)v109;
      v285[0] = (__int64)v119;
      sub_10CF910((_QWORD *)v7 + 8, v117, (const double *)v285);
    }
    v78 = *((_QWORD **)v7 + 4);
    v79 = (__int64)(v7 + 6);
    if ( !v78 )
      goto LABEL_208;
    v80 = v253;
    do
    {
      while ( v78[4] >= (unsigned __int64)v253 )
      {
        v79 = (__int64)v78;
        v78 = (_QWORD *)v78[2];
        if ( !v78 )
          goto LABEL_142;
      }
      v78 = (_QWORD *)v78[3];
    }
    while ( v78 );
LABEL_142:
    if ( v7 + 6 == (unsigned int *)v79 || *(_QWORD *)(v79 + 32) > (unsigned __int64)v253 )
    {
LABEL_208:
      v103 = (_QWORD *)v79;
      v79 = operator new(0x30u);
      v104 = v253;
      *(_DWORD *)(v79 + 40) = 0;
      *(_QWORD *)(v79 + 32) = v104;
      v105 = sub_10CCA10((_QWORD *)v7 + 2, v103, (unsigned __int64 *)(v79 + 32));
      if ( v106 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++*((_QWORD *)v7 + 7);
      }
      else
      {
        v212 = (void *)v79;
        v79 = (__int64)v105;
        operator delete(v212);
      }
    }
    v81 = *((_QWORD **)v7 + 14);
    for ( i = &v81[v7[30]]; i != v81; ++v81 )
    {
      v83 = (_DWORD *)*v81;
      if ( *(_DWORD *)(*v81 + 24LL)
        && (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, _QWORD *))(*(_QWORD *)v83 + 24LL))(*v81, v15, v80) != 1 )
      {
        *(_DWORD *)(v79 + 40) |= v83[16];
      }
    }
    if ( !*(_DWORD *)(v79 + 40) && *((_BYTE *)v7 + 160) && *(_DWORD *)(v15 + 8) == 17 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v15 + 16) + 8LL * *(unsigned int *)(v15 + 24) - 8);
      v17 = ptr;
      v11 = (__int64 *)v293;
      v258 = (char *)ptr + 4 * v293;
      if ( v258 == ptr )
      {
        if ( v15 )
          goto LABEL_118;
LABEL_154:
        v38 = v7[30];
LABEL_155:
        v31 = *((_QWORD **)v7 + 14);
        v35 = (__int64 *)(p_src + 2);
        v32 = &v31[v38];
        src = p_src + 2;
        v299 = v271;
        if ( v32 != v31 )
        {
          v30 = 0;
          v24 = 0;
          goto LABEL_35;
        }
        v36 = 0;
        v37 = 0;
        v24 = 0;
        v30 = 0;
LABEL_190:
        v96 = *(unsigned int *)(v266 + 8);
        v11 = (__int64 *)(v96 + v36);
        if ( v96 + v36 > (unsigned __int64)*(unsigned int *)(v266 + 12) )
        {
          sub_22134E0(v266, v266 + 16, v11, 8);
          v96 = *(unsigned int *)(v266 + 8);
        }
        if ( v37 )
        {
          memcpy((void *)(*(_QWORD *)v266 + 8 * v96), v35, v37);
          LODWORD(v96) = *(_DWORD *)(v266 + 8);
        }
        *(_DWORD *)(v266 + 8) = v96 + v36;
        if ( v30 )
          goto LABEL_195;
        goto LABEL_205;
      }
      goto LABEL_18;
    }
LABEL_17:
    v17 = ptr;
    v11 = (__int64 *)v293;
    v258 = (char *)ptr + 4 * v293;
    if ( ptr == v258 )
      goto LABEL_118;
LABEL_18:
    v249.m128_u64[0] = (unsigned __int64)v17;
    v263 = (const double **)v285;
    v264 = (__int64 *)&v280;
    v265 = &v279;
    while ( 2 )
    {
      v18 = *(_DWORD *)v249.m128_u64[0];
      if ( (_BYTE)v252 )
        goto LABEL_23;
      v38 = v7[30];
      if ( !*(_BYTE *)v7 )
        goto LABEL_155;
      if ( !(_DWORD)v38 )
      {
LABEL_23:
        if ( !v15 )
          goto LABEL_82;
        goto LABEL_24;
      }
      v39 = *((_DWORD *)ptr + v293 - 1);
      v280 = (_QWORD *)v15;
      v40 = v7 + 18;
      v277 = v39;
      v279 = v253;
      v41 = *((unsigned int **)v7 + 10);
      if ( !v41 )
        goto LABEL_53;
      do
      {
        while ( *((_QWORD *)v41 + 4) >= v15 )
        {
          v40 = v41;
          v41 = *((unsigned int **)v41 + 2);
          if ( !v41 )
            goto LABEL_51;
        }
        v41 = *((unsigned int **)v41 + 3);
      }
      while ( v41 );
LABEL_51:
      if ( v7 + 18 == v40 || *((_QWORD *)v40 + 4) > v15 )
      {
LABEL_53:
        v285[0] = (__int64)v265;
        src = v264;
        sub_10CF850((_QWORD *)v7 + 8, v40, (__int64)p_src, v263);
      }
      v42 = (__int64)(v7 + 6);
      v299 = v271;
      src = p_src + 2;
      v302 = p_src + 7;
      v305 = p_src + 12;
      v308 = p_src + 17;
      v43 = *((_QWORD **)v7 + 4);
      v303 = v271;
      v306 = v271;
      v309 = v271;
      if ( !v43 )
        goto LABEL_121;
      v11 = v253;
      do
      {
        while ( v43[4] >= (unsigned __int64)v253 )
        {
          v42 = (__int64)v43;
          v43 = (_QWORD *)v43[2];
          if ( !v43 )
            goto LABEL_59;
        }
        v43 = (_QWORD *)v43[3];
      }
      while ( v43 );
LABEL_59:
      if ( (unsigned int *)v42 == v7 + 6 || *(_QWORD *)(v42 + 32) > (unsigned __int64)v253 )
      {
LABEL_121:
        v67 = (_QWORD *)v42;
        v42 = operator new(0x30u);
        v68 = v253;
        *(_DWORD *)(v42 + 40) = 0;
        *(_QWORD *)(v42 + 32) = v68;
        v69 = sub_10CCA10((_QWORD *)v7 + 2, v67, (unsigned __int64 *)(v42 + 32));
        if ( v70 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++*((_QWORD *)v7 + 7);
        }
        else
        {
          v85 = (void *)v42;
          v42 = (__int64)v69;
          operator delete(v85);
        }
        v44 = *((_QWORD **)v7 + 14);
        v45 = &v44[v7[30]];
        if ( v44 == v45 )
          goto LABEL_71;
      }
      else
      {
        v44 = *((_QWORD **)v7 + 14);
        v45 = &v44[v7[30]];
        if ( v45 == v44 )
          goto LABEL_74;
      }
      v269 = v7;
      v46 = v45;
      v47 = v44;
      v48 = v277;
      v261 = 0;
      v260 = 0;
      v270 = v15;
      do
      {
        while ( 1 )
        {
          v50 = (_DWORD *)*v47;
          if ( !*(_DWORD *)(*v47 + 24LL) )
            break;
          v49 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, _QWORD, _QWORD, void **))(*(_QWORD *)v50 + 16LL))(
                  *v47,
                  p_src,
                  v18,
                  v48,
                  v259);
          if ( v49 == 2 )
          {
            ++v261;
LABEL_65:
            *(_DWORD *)(v42 + 40) |= v50[16];
            goto LABEL_66;
          }
          if ( v49 != 1 )
            goto LABEL_65;
LABEL_66:
          if ( v46 == ++v47 )
            goto LABEL_69;
        }
        ++v47;
        ++v260;
      }
      while ( v46 != v47 );
LABEL_69:
      v7 = v269;
      v15 = v270;
      if ( v261 && v269[30] == v261 + v260 )
      {
        v15 = 0;
      }
      else
      {
LABEL_71:
        if ( (_DWORD)v299 )
        {
          v51 = (__m128 *)v263;
          v52 = *((_QWORD *)v7 + 1);
          LODWORD(v285[0]) = 1;
          v53 = sub_10BCAF0(v52 + 24, (int *)v263);
          v54 = (__int64 *)p_src;
          sub_10AE950(v51, v15, *(_QWORD *)(v53 + 40), 0, (__int64)p_src);
          v55 = *((_QWORD *)v7 + 1);
          v15 = operator new(0x88u);
          sub_10AFC60(v15, v51, (__int64)v54);
          v280 = (_QWORD *)v15;
          sub_10C7210(v55 + 88, v264);
          if ( v280 )
            (*(void (__fastcall **)(_QWORD *))(*v280 + 8LL))(v280);
        }
      }
LABEL_74:
      if ( v308 != p_src + 17 )
        free(v308);
      if ( v305 != p_src + 12 )
        free(v305);
      if ( v302 != p_src + 7 )
        free(v302);
      if ( src == p_src + 2 )
        goto LABEL_23;
      free(src);
      if ( !v15 )
        goto LABEL_82;
LABEL_24:
      if ( v18 == 5 )
      {
        if ( (!sub_10B8FF0(*(_QWORD *)(v257 + 72), 0x840u) || !sub_10B8FF0(*(_QWORD *)(v257 + 72), 0x159u))
          && *(_DWORD *)(v255 + 28) != 2 )
        {
          sub_10B8770((__int64)v275, v15);
        }
LABEL_82:
        if ( (_BYTE)v252 )
          goto LABEL_83;
        goto LABEL_154;
      }
      if ( v18 == 6 )
      {
        sub_10B8770((__int64)v274, v15);
        goto LABEL_82;
      }
      if ( v18 == 1 && v250 )
      {
        sub_10B8770((__int64)v250 + 16, v15);
        goto LABEL_82;
      }
      v19 = v18;
      v20 = v254;
      v21 = v257;
      v22 = v255;
      v23 = sub_10C80E0(v255, v257, v254, v19, v15);
      v24 = v23;
      if ( v23 == v15 )
        goto LABEL_21;
      v25 = *(_DWORD *)(v23 + 8) == 5;
      v26 = v250;
      if ( v25 )
        v26 = (void *)v24;
      v250 = v26;
      if ( (_BYTE)v252 )
      {
        v15 = sub_10C99E0(v22, v21, v20, v256, v282, v283, v24);
        v11 = v248;
LABEL_20:
        if ( *(_DWORD *)(v15 + 12) == 67 )
          goto LABEL_118;
        goto LABEL_21;
      }
      v27 = v7 + 16;
      if ( !*(_BYTE *)v7 )
      {
        sub_10B8770(v266, v24);
        goto LABEL_34;
      }
      v280 = (_QWORD *)v24;
      v56 = v7 + 18;
      v279 = v253;
      v57 = *((unsigned int **)v7 + 10);
      if ( !v57 )
        goto LABEL_96;
      do
      {
        while ( *((_QWORD *)v57 + 4) >= v24 )
        {
          v56 = v57;
          v57 = *((unsigned int **)v57 + 2);
          if ( !v57 )
            goto LABEL_94;
        }
        v57 = *((unsigned int **)v57 + 3);
      }
      while ( v57 );
LABEL_94:
      if ( v7 + 18 == v56 || *((_QWORD *)v56 + 4) > v24 )
      {
LABEL_96:
        v285[0] = (__int64)v265;
        src = v264;
        sub_10CF850((_QWORD *)v7 + 8, v56, (__int64)p_src, v263);
      }
      if ( *((_BYTE *)v7 + 160)
        && !*(_DWORD *)(v24 + 8)
        && *(_BYTE *)(*v253 + 44LL) == 1
        && (!(unsigned __int8)sub_12A8FB0(*(unsigned int *)(v24 + 12)) || *(_DWORD *)(v24 + 12) == 10) )
      {
        v164 = *((_QWORD *)v7 + 1);
        v165 = operator new(0x128u);
        sub_10AF130(v165, v24);
        src = (void *)v165;
        sub_10C7210(v164 + 88, (__int64 *)p_src);
        if ( src )
          (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
        v166 = sub_10BCDC0(*((_QWORD *)v7 + 1));
        v167 = *(unsigned int *)(v165 + 100);
        v168 = *(void **)(v166 + 40);
        v299 = 0;
        v300 = 0;
        src = v168;
        v169 = *(unsigned int *)(v165 + 96);
        v301 = 1;
        v170 = v169 + 1;
        if ( v169 + 1 > v167 )
        {
          v240 = *(_QWORD *)(v165 + 88);
          v241 = p_src;
          v242 = v165 + 88;
          v243 = v165 + 104;
          if ( v240 > (unsigned __int64)p_src || (unsigned __int64)p_src >= v240 + 32 * v169 )
          {
            sub_22134E0(v242, v243, v170, 32);
            v171 = (const __m128i *)p_src;
            v172 = *(_QWORD *)(v165 + 88);
            v169 = *(unsigned int *)(v165 + 96);
            v173 = p_src;
          }
          else
          {
            sub_22134E0(v242, v243, v170, 32);
            v172 = *(_QWORD *)(v165 + 88);
            v169 = *(unsigned int *)(v165 + 96);
            v173 = p_src;
            v171 = (const __m128i *)((char *)v241 + v172 - v240);
          }
        }
        else
        {
          v171 = (const __m128i *)p_src;
          v172 = *(_QWORD *)(v165 + 88);
          v173 = p_src;
        }
        v24 = v165;
        v174 = (__m128i *)(v172 + 32 * v169);
        v175 = (const double *)v263;
        *v174 = _mm_loadu_si128(v171);
        v174[1] = _mm_loadu_si128(v171 + 1);
        v176 = v253;
        ++*(_DWORD *)(v165 + 96);
        src = (void *)v165;
        v285[0] = (__int64)v176;
        sub_10CF910((_QWORD *)v7 + 8, v173, v175);
      }
      v58 = *((_QWORD **)v7 + 4);
      v59 = (__int64)(v7 + 6);
      if ( !v58 )
        goto LABEL_107;
      v11 = v253;
      do
      {
        while ( v58[4] >= (unsigned __int64)v253 )
        {
          v59 = (__int64)v58;
          v58 = (_QWORD *)v58[2];
          if ( !v58 )
            goto LABEL_105;
        }
        v58 = (_QWORD *)v58[3];
      }
      while ( v58 );
LABEL_105:
      if ( (unsigned int *)v59 == v7 + 6 || *(_QWORD *)(v59 + 32) > (unsigned __int64)v253 )
      {
LABEL_107:
        v60 = (_QWORD *)v59;
        v59 = operator new(0x30u);
        v61 = v253;
        *(_DWORD *)(v59 + 40) = 0;
        *(_QWORD *)(v59 + 32) = v61;
        v62 = sub_10CCA10((_QWORD *)v7 + 2, v60, (unsigned __int64 *)(v59 + 32));
        if ( v63 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++*((_QWORD *)v7 + 7);
        }
        else
        {
          v84 = (void *)v59;
          v59 = (__int64)v62;
          operator delete(v84);
        }
      }
      v64 = *((_QWORD **)v7 + 14);
      for ( j = &v64[v7[30]]; j != v64; ++v64 )
      {
        v66 = (_DWORD *)*v64;
        if ( *(_DWORD *)(*v64 + 24LL)
          && (*(unsigned int (__fastcall **)(_QWORD, unsigned __int64, __int64 *))(*(_QWORD *)v66 + 24LL))(
               *v64,
               v24,
               v11) != 1 )
        {
          *(_DWORD *)(v59 + 40) |= v66[16];
        }
      }
      v15 = v24;
      if ( *(_DWORD *)(v59 + 40) || !*((_BYTE *)v7 + 160) || *(_DWORD *)(v24 + 8) != 17 )
        goto LABEL_20;
      v11 = (__int64 *)*(unsigned int *)(v24 + 24);
      v15 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 8LL * (_QWORD)v11 - 8);
      if ( *(_DWORD *)(v15 + 12) == 67 )
        goto LABEL_118;
LABEL_21:
      v249.m128_u64[0] += 4LL;
      if ( v258 != (char *)v249.m128_u64[0] )
        continue;
      break;
    }
    if ( !v15 )
      goto LABEL_82;
LABEL_118:
    sub_10B8770(v266, v15);
    if ( (_BYTE)v252 )
    {
      sub_10AE1D0(v15, *(_DWORD *)(v257 + 16), 0);
      goto LABEL_83;
    }
    v27 = v7 + 16;
    v24 = v15;
LABEL_34:
    v28 = p_src;
    v29 = v27;
    src = (void *)v24;
    v30 = 1;
    v285[0] = (__int64)v253;
    sub_10CF910(v29, p_src, (const double *)v285);
    v31 = *((_QWORD **)v7 + 14);
    src = v28 + 2;
    v299 = v271;
    v32 = &v31[v7[30]];
    if ( v31 == v32 )
    {
      v34 = 0;
    }
    else
    {
LABEL_35:
      v33 = p_src;
      do
      {
        if ( *(_DWORD *)(*v31 + 24LL) )
          (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(*(_QWORD *)*v31 + 32LL))(*v31, v33);
        ++v31;
      }
      while ( v32 != v31 );
      v34 = (unsigned int)v299;
    }
    if ( ((_BYTE)v7[40] & (unsigned __int8)v30) == 0 )
    {
      v37 = 8 * v34;
      v35 = (__int64 *)src;
      v36 = v37 >> 3;
      goto LABEL_190;
    }
    if ( *(_DWORD *)(v24 + 12) == 67 )
    {
      v37 = 8 * v34;
      v35 = (__int64 *)src;
      v30 &= *((_BYTE *)v7 + 160);
      v36 = v37 >> 3;
      goto LABEL_190;
    }
    if ( !(_DWORD)v34 )
    {
      v35 = (__int64 *)src;
      v30 &= *((_BYTE *)v7 + 160);
      v36 = 0;
      v37 = 0;
      goto LABEL_190;
    }
    v120 = (__int64 *)p_src;
    sub_10B8770((__int64)p_src, v24);
    v121 = *((_QWORD *)v7 + 1);
    v24 = operator new(0x58u);
    sub_10AED40(v24, (__int64)v120);
    v285[0] = v24;
    sub_10C7210(v121 + 88, v285);
    if ( v285[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v285[0] + 8LL))(v285[0]);
    v285[0] = v24;
    v280 = v253;
    sub_10CF910((_QWORD *)v7 + 8, (unsigned __int64 *)v285, (const double *)&v280);
    *(_QWORD *)(*(_QWORD *)v266 + 8LL * *(unsigned int *)(v266 + 8) - 8) = v24;
LABEL_195:
    v97 = *((_QWORD **)v7 + 4);
    v98 = (__int64)(v7 + 6);
    if ( !v97 )
      goto LABEL_202;
    do
    {
      while ( v97[4] >= (unsigned __int64)v253 )
      {
        v98 = (__int64)v97;
        v97 = (_QWORD *)v97[2];
        if ( !v97 )
          goto LABEL_200;
      }
      v97 = (_QWORD *)v97[3];
    }
    while ( v97 );
LABEL_200:
    if ( v7 + 6 != (unsigned int *)v98 && *(_QWORD *)(v98 + 32) <= (unsigned __int64)v253 )
    {
LABEL_204:
      sub_10AE1D0(v24, *(_DWORD *)(v98 + 40), 0);
    }
    else
    {
LABEL_202:
      v99 = (_QWORD *)v98;
      v98 = operator new(0x30u);
      v100 = v253;
      *(_DWORD *)(v98 + 40) = 0;
      *(_QWORD *)(v98 + 32) = v100;
      v101 = sub_10CCA10((_QWORD *)v7 + 2, v99, (unsigned __int64 *)(v98 + 32));
      if ( v102 )
      {
        std::_Rb_tree_insert_and_rebalance();
        ++*((_QWORD *)v7 + 7);
        goto LABEL_204;
      }
      v249.m128_u64[0] = (unsigned __int64)v101;
      operator delete((void *)v98);
      sub_10AE1D0(v24, *(_DWORD *)(v249.m128_u64[0] + 40), 0);
    }
LABEL_205:
    if ( src != p_src + 2 )
      free(src);
LABEL_83:
    if ( v282 != v268 )
      operator delete(v282);
    if ( v294 != v259 + 2 )
      free(v294);
    v10 = ptr;
    if ( ptr != p_ptr + 2 )
      goto LABEL_10;
LABEL_11:
    v256 += 4;
    if ( v267 != v256 )
      continue;
    break;
  }
  if ( (_DWORD)v287 )
    goto LABEL_212;
LABEL_234:
  p_src = (unsigned __int64 *)&src;
  v11 = (__int64 *)&src;
LABEL_235:
  if ( (unsigned int)sub_10BAA90(v255, v254, v11) == 5 && !(_BYTE)v252 )
  {
    v235 = *((_QWORD **)v7 + 14);
    v236 = &v235[v7[30]];
    if ( v235 != v236 )
    {
      v237 = v266;
      do
      {
        if ( *(_DWORD *)(*v235 + 24LL) )
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v235 + 40LL))(*v235, v237);
        ++v235;
      }
      while ( v236 != v235 );
    }
    if ( !(_DWORD)v287 )
    {
LABEL_238:
      if ( (_DWORD)v290 )
        goto LABEL_219;
      goto LABEL_239;
    }
LABEL_166:
    v86 = p_src;
    v87 = *((_QWORD **)v7 + 14);
    src = p_src + 2;
    v299 = 0x300000000LL;
    v88 = &v87[v7[30]];
    if ( v87 != v88 )
    {
      do
      {
        if ( *(_DWORD *)(*v87 + 24LL) )
          (*(void (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(*(_QWORD *)*v87 + 40LL))(*v87, v86, v11);
        ++v87;
      }
      while ( v88 != v87 );
      if ( !(_DWORD)v299 || (v89 = *((unsigned int ***)v7 + 14), v90 = &v89[v7[30]], v89 == v90) )
      {
        if ( src != p_src + 2 )
          free(src);
      }
      else
      {
        v91 = p_src;
        v92 = 0;
        do
        {
          v93 = *v89;
          if ( (*v89)[6] )
          {
            v94 = (*(__int64 (__fastcall **)(unsigned int *, unsigned __int64 *, __int64 *))(*(_QWORD *)v93 + 48LL))(
                    *v89,
                    v91,
                    v11);
            v92 = v94;
            if ( v94 )
              sub_10AE1D0(v94, v93[16], 0);
          }
          ++v89;
        }
        while ( v90 != v89 );
        if ( src != p_src + 2 )
          free(src);
        if ( v92 )
          sub_10B8770((__int64)v275, v92);
      }
    }
    if ( sub_10B8FF0(v254, 0x163u) )
    {
LABEL_215:
      v95 = operator new(0x58u);
      sub_10AEF90(v95, (__int64)v275, 60);
      src = (void *)v95;
      sub_10C7210(v257 + 88, (__int64 *)p_src);
      if ( src )
        (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
      goto LABEL_217;
    }
LABEL_182:
    if ( sub_10B8FF0(v254, 0xC0Fu) )
      goto LABEL_369;
    v95 = sub_10C77F0(v257, (__int64)v275, 60);
LABEL_217:
    if ( !(_BYTE)v252 )
      goto LABEL_372;
    goto LABEL_218;
  }
  if ( !(_DWORD)v287 )
    goto LABEL_238;
LABEL_212:
  if ( !(_BYTE)v252 )
  {
    p_src = (unsigned __int64 *)&src;
    goto LABEL_166;
  }
  if ( sub_10B8FF0(v254, 0x163u) )
  {
    p_src = (unsigned __int64 *)&src;
    goto LABEL_215;
  }
  if ( v278 )
    goto LABEL_182;
LABEL_369:
  v95 = operator new(0x58u);
  sub_10AEED0(v95, (__int64)v275, 60);
  src = (void *)v95;
  sub_10C7210(v257 + 88, (__int64 *)&src);
  if ( src )
    (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
  sub_10AE1D0(v95, *(_DWORD *)(v257 + 16), 0);
  if ( !(_BYTE)v252 )
  {
LABEL_372:
    v213 = *((_QWORD **)v7 + 14);
    v214 = v7 + 6;
    p_src = (unsigned __int64 *)&src;
    src = &v300;
    v299 = 0x300000000LL;
    v303 = 0x300000000LL;
    v306 = 0x300000000LL;
    v309 = 0x300000000LL;
    v215 = v7[30];
    v302 = &v304;
    v305 = &v307;
    v216 = &v213[v215];
    v308 = &v310;
    if ( v213 == v216 )
    {
      v217 = *((_QWORD *)v7 + 5);
      v218 = 0;
      v219 = 0;
      if ( (unsigned int *)v217 != v214 )
        goto LABEL_377;
      goto LABEL_380;
    }
    do
    {
      if ( *(_DWORD *)(*v213 + 24LL) )
        (*(void (__fastcall **)(_QWORD, void **))(*(_QWORD *)*v213 + 56LL))(*v213, &src);
      ++v213;
    }
    while ( v216 != v213 );
    v217 = *((_QWORD *)v7 + 5);
    v218 = v299;
    if ( (unsigned int *)v217 == v214 )
    {
      v219 = 0;
    }
    else
    {
LABEL_377:
      v219 = 0;
      do
      {
        v219 |= *(_DWORD *)(v217 + 40);
        v217 = std::_Rb_tree_increment();
      }
      while ( (unsigned int *)v217 != v214 );
    }
    if ( v218 )
    {
      v230 = sub_10BCDC0(*((_QWORD *)v7 + 1));
      v231 = *((_QWORD *)v7 + 1);
      v232 = *(_QWORD *)(v230 + 40);
      v294 = (void *)v95;
      v296 = 0;
      v295 = v232;
      v297 = v219;
      v95 = operator new(0x88u);
      sub_10AFC60(v95, &v294, (__int64)p_src);
      ptr = (void *)v95;
      sub_10C7210(v231 + 88, (__int64 *)&ptr);
      if ( ptr )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
    }
    else
    {
LABEL_380:
      v220 = *(unsigned __int64 **)(v95 + 16);
      v221 = *(unsigned int *)(v95 + 24);
      *(_QWORD *)(v95 + 72) = 0;
      *(_DWORD *)(v95 + 60) |= v219;
      for ( k = &v220[v221]; k != v220; ++v220 )
      {
        v223 = *((unsigned int **)v7 + 10);
        v224 = *v220;
        if ( v223 )
        {
          v225 = v7 + 18;
          do
          {
            while ( *((_QWORD *)v223 + 4) >= v224 )
            {
              v225 = v223;
              v223 = *((unsigned int **)v223 + 2);
              if ( !v223 )
                goto LABEL_386;
            }
            v223 = *((unsigned int **)v223 + 3);
          }
          while ( v223 );
LABEL_386:
          if ( v225 != v7 + 18 && *((_QWORD *)v225 + 4) <= v224 )
          {
            v226 = *((unsigned int **)v7 + 4);
            if ( v226 )
            {
              v227 = *((_QWORD *)v225 + 5);
              v228 = v7 + 6;
              do
              {
                while ( *((_QWORD *)v226 + 4) >= v227 )
                {
                  v228 = v226;
                  v226 = *((unsigned int **)v226 + 2);
                  if ( !v226 )
                    goto LABEL_393;
                }
                v226 = *((unsigned int **)v226 + 3);
              }
              while ( v226 );
LABEL_393:
              if ( v228 != v214 && *((_QWORD *)v228 + 4) <= v227 )
                sub_10AE1D0(v224, v228[10], 0);
            }
          }
        }
      }
    }
    sub_10B76C0((__int64)p_src);
  }
LABEL_218:
  sub_10B8770(v266, v95);
  if ( (_DWORD)v290 )
  {
LABEL_219:
    v107 = (void *)operator new(0x58u);
    sub_10AEA40((__int64)v107, (__int64)v274, 60);
    src = v107;
    sub_10C7210(v257 + 88, (__int64 *)&src);
    if ( src )
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
    sub_10B8770(v266, (__int64)v107);
  }
LABEL_239:
  v122 = v254;
  if ( sub_10B8FF0(v254, 0x155u) )
  {
    v123 = sub_10B8FF0(v122, 0xF9u);
    p_src = (unsigned __int64 *)&src;
    sub_12A9760(&src, 50, v123 == 0 ? 6 : 2);
    v252 = &v294;
    v294 = &v296;
    v295 = 0x300000000LL;
    v124 = *v272;
    v249.m128_u64[0] = (unsigned __int64)&(*v272)[4 * *((unsigned int *)v272 + 2)];
    if ( v124 != (unsigned int *)v249.m128_u64[0] )
    {
      v256 = v7;
      v125 = v124;
      v250 = &ptr;
      do
      {
        while ( 1 )
        {
          v126 = *v125;
          if ( *v125 - 38 > 1 && v126 != 49 )
          {
            v127 = *((_QWORD *)v125 + 1);
            v128 = (void *)operator new(0x80u);
            sub_10AE2B0((__int64)v128, v127, v126, nullptr, 0);
            ptr = v128;
            v129 = v257 + 88;
            sub_10C7210(v257 + 88, (__int64 *)v250);
            if ( ptr )
              (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
            v130 = (char *)src + 4 * (unsigned int)v299;
            if ( src == v130 )
              break;
            v131 = (char *)src;
            if ( v126 == 58 )
            {
              do
              {
                if ( *(_DWORD *)v131 != 2 )
                {
                  if ( *(_DWORD *)v131 != 6 )
                    return sub_10D2440();
                  v161 = (unsigned int)v295;
                  v162 = (unsigned int)v295 + 1LL;
                  if ( v162 > HIDWORD(v295) )
                  {
                    sub_22134E0(v252, v252 + 2, v162, 8);
                    v161 = (unsigned int)v295;
                  }
                  *((_QWORD *)v294 + v161) = v128;
                  v128 = nullptr;
                  LODWORD(v295) = v295 + 1;
                }
                v131 += 4;
              }
              while ( v130 != v131 );
            }
            else
            {
              v132 = (__int64)v128;
              v253 = v252 + 2;
              do
              {
                while ( *(_DWORD *)v131 == 2 )
                {
                  v133 = (void *)operator new(0x58u);
                  sub_10AF670((__int64)v133, v132, 50);
                  ptr = v133;
                  sub_10C7210(v129, (__int64 *)v250);
                  if ( ptr )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
                  v131 += 4;
                  v132 = (__int64)v133;
                  if ( v130 == v131 )
                    goto LABEL_258;
                }
                if ( *(_DWORD *)v131 != 6 )
                  return sub_10D2440();
                v134 = (unsigned int)v295;
                v135 = (unsigned int)v295 + 1LL;
                if ( HIDWORD(v295) < v135 )
                {
                  sub_22134E0(v252, v253, v135, 8);
                  v134 = (unsigned int)v295;
                }
                v131 += 4;
                *((_QWORD *)v294 + v134) = v132;
                v132 = 0;
                LODWORD(v295) = v295 + 1;
              }
              while ( v130 != v131 );
LABEL_258:
              v128 = (void *)v132;
            }
            if ( v128 )
              break;
          }
          v125 += 4;
          if ( (unsigned int *)v249.m128_u64[0] == v125 )
            goto LABEL_261;
        }
        v125 += 4;
        sub_10B8770(v266, (__int64)v128);
      }
      while ( (unsigned int *)v249.m128_u64[0] != v125 );
LABEL_261:
      v7 = v256;
      if ( (_DWORD)v295 )
      {
        v229 = (void *)operator new(0x58u);
        sub_10AEA40((__int64)v229, (__int64)v252, 60);
        ptr = v229;
        sub_10C7210(v257 + 88, (__int64 *)&ptr);
        if ( ptr )
          (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
        sub_10B8770(v266, (__int64)v229);
      }
      if ( v294 != v252 + 2 )
        free(v294);
    }
    if ( src != p_src + 2 )
      free(src);
  }
  v250 = v7;
  v136 = v266;
  v137 = (unsigned int *)&unk_25CA040;
  v249.m128_u64[0] = (unsigned __int64)&src;
  v138 = v257;
  while ( 1 )
  {
    v139 = *v137;
    v140 = sub_10B8FF0(v254, *v137);
    if ( !v140 )
    {
LABEL_283:
      if ( &unk_25CA04C == (_UNKNOWN *)++v137 )
        goto LABEL_284;
      continue;
    }
    if ( v139 != 3171 )
      break;
    v163 = *(_DWORD *)(*(_QWORD *)(v138 + 8) + 48LL);
    if ( (unsigned int)(v163 - 27) > 1 && (unsigned int)(v163 - 1) > 4 )
    {
      v152 = v250;
      sub_FA3370((__int64)&src, **(_QWORD **)v257, 0, 51);
      sub_10B4AF0((unsigned __int8 **)&src, (__int64)"--print-supported-extensions");
      sub_AC6300((__int64)&src);
      goto LABEL_324;
    }
LABEL_272:
    v142 = v255;
    *(_DWORD *)(v136 + 8) = 0;
    v143 = 40;
    if ( *(_DWORD *)(v142 + 16) != 4 )
      v143 = 2;
    v144 = (void *)operator new(0x80u);
    sub_10AE2B0((__int64)v144, v140, v143, nullptr, 0);
    src = v144;
    sub_10C7210(v138 + 88, (__int64 *)v249.m128_u64[0]);
    if ( src )
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
    v145 = (void *)operator new(0x58u);
    sub_10AF850((__int64)v145, (__int64)v144, 67);
    src = v145;
    sub_10C7210(v138 + 88, (__int64 *)v249.m128_u64[0]);
    if ( src )
      (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
    v146 = *(unsigned int *)(v136 + 8);
    if ( v146 + 1 > (unsigned __int64)*(unsigned int *)(v136 + 12) )
    {
      sub_22134E0(v136, v136 + 16, v146 + 1, 8);
      v146 = *(unsigned int *)(v136 + 8);
    }
    v147 = v272;
    *(_QWORD *)(*(_QWORD *)v136 + 8 * v146) = v145;
    v148 = *v147;
    ++*(_DWORD *)(v136 + 8);
    v149 = &v148[4 * *((unsigned int *)v147 + 2)];
    if ( v148 == v149 )
      goto LABEL_283;
    do
    {
      while ( 1 )
      {
        v150 = *((_QWORD *)v148 + 1);
        v151 = *(_QWORD *)(v150 + 16);
        if ( !v151 )
          break;
        v148 += 4;
        *(_BYTE *)(v151 + 44) |= 1u;
        if ( v148 == v149 )
          goto LABEL_283;
      }
      v148 += 4;
      *(_BYTE *)(v150 + 44) |= 1u;
    }
    while ( v149 != v148 );
    if ( &unk_25CA04C == (_UNKNOWN *)++v137 )
    {
LABEL_284:
      v152 = v250;
      v153 = *(_QWORD *)(v257 + 8);
      if ( *(_DWORD *)(v153 + 48) == 11 )
      {
        if ( (unsigned __int8)sub_122AB80(*(_QWORD *)(v257 + 8), v254) )
        {
          v238 = *(_QWORD *)(*(_QWORD *)v266 + 8LL * *(unsigned int *)(v266 + 8) - 8);
          v239 = (void *)operator new(0x58u);
          sub_10AF490((__int64)v239, v238, 66);
          src = v239;
          sub_10C7210(v257 + 88, (__int64 *)&src);
          if ( src )
            (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
          sub_10B8770(v266, (__int64)v239);
        }
        if ( (unsigned __int8)sub_122AAE0(v153, v254) )
        {
          v233 = *(_QWORD *)(*(_QWORD *)v266 + 8LL * *(unsigned int *)(v266 + 8) - 8);
          if ( ((*(_DWORD *)(v233 + 12) - 58) & 0xFFFFFFF7) == 0 )
          {
            v234 = (void *)operator new(0x58u);
            sub_10AF8F0((__int64)v234, v233, 66);
            src = v234;
            sub_10C7210(v257 + 88, (__int64 *)&src);
            if ( src )
              (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
            sub_10B8770(v266, (__int64)v234);
          }
        }
      }
      sub_2193FB0(v254, 22);
      if ( v289 != v274 + 2 )
        free(v289);
      if ( v286 != v275 + 2 )
        free(v286);
      if ( v152 )
      {
        v154 = (_QWORD *)v152[14];
        v155 = &v154[*((unsigned int *)v152 + 30)];
        if ( v154 != v155 )
        {
          do
          {
            if ( *v154 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v154 + 8LL))(*v154);
            ++v154;
          }
          while ( v155 != v154 );
          v155 = (_QWORD *)v152[14];
        }
        if ( v155 != v152 + 16 )
          free(v155);
        v156 = v152[10];
        if ( v156 )
        {
          do
          {
            sub_10BD600((__int64)(v152 + 8), *(_QWORD **)(v156 + 24));
            v157 = *(_QWORD *)(v156 + 16);
            operator delete((void *)v156);
            v156 = v157;
          }
          while ( v157 );
        }
        v158 = v152[4];
        if ( v158 )
        {
          do
          {
            sub_10BD5C0((__int64)(v152 + 2), *(_QWORD **)(v158 + 24));
            v159 = *(_QWORD *)(v158 + 16);
            operator delete((void *)v158);
            v158 = v159;
          }
          while ( v159 );
        }
LABEL_301:
        operator delete(v152, 0xA8u);
        goto LABEL_302;
      }
      goto LABEL_302;
    }
  }
  if ( v139 != 3150 )
    goto LABEL_272;
  v141 = *(_DWORD *)(*(_QWORD *)(v138 + 8) + 48LL);
  if ( (unsigned int)(v141 - 3) <= 2 || (unsigned int)(v141 - 27) <= 1 )
    goto LABEL_272;
  v152 = v250;
  sub_FA3370((__int64)&src, **(_QWORD **)v257, 0, 51);
  sub_10B4AF0((unsigned __int8 **)&src, (__int64)"--print-enabled-extensions");
  sub_AC6300((__int64)&src);
LABEL_324:
  if ( v289 != v274 + 2 )
    free(v289);
  if ( v286 != v275 + 2 )
    free(v286);
  if ( v152 )
  {
    v177 = (_QWORD *)v152[14];
    v178 = &v177[*((unsigned int *)v152 + 30)];
    if ( v177 != v178 )
    {
      do
      {
        if ( *v177 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v177 + 8LL))(*v177);
        ++v177;
      }
      while ( v178 != v177 );
      v178 = (_QWORD *)v152[14];
    }
    if ( v178 != v152 + 16 )
      free(v178);
    v179 = v152[10];
    if ( v179 )
    {
      do
      {
        sub_10BD600((__int64)(v152 + 8), *(_QWORD **)(v179 + 24));
        v180 = *(_QWORD *)(v179 + 16);
        operator delete((void *)v179);
        v179 = v180;
      }
      while ( v180 );
    }
    v181 = v152[4];
    if ( v181 )
    {
      do
      {
        sub_10BD5C0((__int64)(v152 + 2), *(_QWORD **)(v181 + 24));
        v182 = *(_QWORD *)(v181 + 16);
        operator delete((void *)v181);
        v181 = v182;
      }
      while ( v182 );
    }
    goto LABEL_301;
  }
LABEL_302:
  v281[0] = &off_2BC1238;
  return sub_220FB60(v276);
}

