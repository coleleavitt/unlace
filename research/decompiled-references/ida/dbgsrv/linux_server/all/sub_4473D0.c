/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4473D0
// Address: 0x00000000004473D0

//----- (00000000004473D0) ----------------------------------------------------
__int64 __fastcall sub_4473D0(
        __int64 *a1,
        char a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // rax
  __int64 v12; // rdx
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // rsi
  double v16; // xmm4_8
  double v17; // xmm5_8
  __int64 v18; // rax
  __int64 v19; // rbx
  bool v20; // r12
  double v21; // xmm4_8
  double v22; // xmm5_8
  double v23; // xmm4_8
  double v24; // xmm5_8
  double v25; // xmm4_8
  double v26; // xmm5_8
  unsigned int v27; // ebx
  __int64 v28; // rax
  __int64 v29; // rdx
  double v30; // xmm4_8
  double v31; // xmm5_8
  __int64 v32; // rsi
  double v33; // xmm4_8
  double v34; // xmm5_8
  __int64 v35; // rax
  __int64 v36; // r12
  bool v37; // bl
  double v38; // xmm4_8
  double v39; // xmm5_8
  double v40; // xmm4_8
  double v41; // xmm5_8
  double v42; // xmm4_8
  double v43; // xmm5_8
  __int64 v44; // rax
  __int64 v45; // rdx
  double v46; // xmm4_8
  double v47; // xmm5_8
  __int64 v48; // rsi
  double v49; // xmm4_8
  double v50; // xmm5_8
  __int64 v51; // rax
  __int64 v52; // rbx
  bool v53; // r12
  double v54; // xmm4_8
  double v55; // xmm5_8
  double v56; // xmm4_8
  double v57; // xmm5_8
  double v58; // xmm4_8
  double v59; // xmm5_8
  __int64 v60; // rax
  __int64 v61; // rdx
  double v62; // xmm4_8
  double v63; // xmm5_8
  __int64 v64; // rsi
  double v65; // xmm4_8
  double v66; // xmm5_8
  __int64 v67; // rax
  __int64 v68; // rbx
  bool v69; // r12
  double v70; // xmm4_8
  double v71; // xmm5_8
  double v72; // xmm4_8
  double v73; // xmm5_8
  double v74; // xmm4_8
  double v75; // xmm5_8
  __int64 v76; // rax
  __int64 v77; // rdx
  double v78; // xmm4_8
  double v79; // xmm5_8
  __int64 v80; // rsi
  double v81; // xmm4_8
  double v82; // xmm5_8
  __int64 v83; // rax
  __int64 v84; // rbx
  bool v85; // r12
  double v86; // xmm4_8
  double v87; // xmm5_8
  double v88; // xmm4_8
  double v89; // xmm5_8
  double v90; // xmm4_8
  double v91; // xmm5_8
  __int64 v92; // rax
  __int64 v93; // rdx
  double v94; // xmm4_8
  double v95; // xmm5_8
  __int64 v96; // rsi
  double v97; // xmm4_8
  double v98; // xmm5_8
  __int64 v99; // rax
  __int64 v100; // r12
  unsigned int v101; // ebx
  double v102; // xmm4_8
  double v103; // xmm5_8
  double v104; // xmm4_8
  double v105; // xmm5_8
  double v106; // xmm4_8
  double v107; // xmm5_8
  __int64 v108; // rax
  char v109; // dl
  __int64 v110; // rax
  __int64 v111; // rdx
  double v112; // xmm4_8
  double v113; // xmm5_8
  __int64 v114; // rsi
  double v115; // xmm4_8
  double v116; // xmm5_8
  __int64 v117; // rax
  __int64 v118; // rbx
  int v119; // eax
  double v120; // xmm4_8
  double v121; // xmm5_8
  __int64 v122; // rax
  __int64 v123; // rdx
  double v124; // xmm4_8
  double v125; // xmm5_8
  __int64 v126; // rsi
  double v127; // xmm4_8
  double v128; // xmm5_8
  __int64 v129; // rax
  __int64 v130; // rbx
  int v131; // eax
  double v132; // xmm4_8
  double v133; // xmm5_8
  __int64 v134; // rax
  __int64 v135; // rbx
  unsigned __int8 *v136; // rax
  double v137; // xmm4_8
  double v138; // xmm5_8
  __int64 v139; // rax
  __int64 v140; // rdx
  double v141; // xmm4_8
  double v142; // xmm5_8
  __int64 v143; // rsi
  double v144; // xmm4_8
  double v145; // xmm5_8
  __int64 v146; // rax
  __int64 v147; // rbx
  int v148; // eax
  double v149; // xmm4_8
  double v150; // xmm5_8
  __int64 v151; // rax
  __int64 v152; // rdx
  double v153; // xmm4_8
  double v154; // xmm5_8
  __int64 v155; // rsi
  double v156; // xmm4_8
  double v157; // xmm5_8
  __int64 v158; // rax
  __int64 v159; // rbx
  int v160; // eax
  double v161; // xmm4_8
  double v162; // xmm5_8
  __int64 v163; // rax
  __int64 v164; // rdx
  double v165; // xmm4_8
  double v166; // xmm5_8
  __int64 v167; // rsi
  double v168; // xmm4_8
  double v169; // xmm5_8
  __int64 v170; // rax
  __int64 v171; // rbx
  int v172; // eax
  double v173; // xmm4_8
  double v174; // xmm5_8
  __int64 v175; // rax
  __int64 v176; // rdx
  double v177; // xmm4_8
  double v178; // xmm5_8
  __int64 v179; // rsi
  double v180; // xmm4_8
  double v181; // xmm5_8
  __int64 v182; // rax
  __int64 v183; // r12
  double v184; // xmm4_8
  double v185; // xmm5_8
  __int64 v186; // rax
  __int64 v187; // rdx
  double v188; // xmm4_8
  double v189; // xmm5_8
  __int64 v190; // rsi
  double v191; // xmm4_8
  double v192; // xmm5_8
  __int64 v193; // rax
  __int64 v194; // rbx
  int v195; // eax
  double v196; // xmm4_8
  double v197; // xmm5_8
  __int64 v198; // rax
  __int64 v199; // rdx
  double v200; // xmm4_8
  double v201; // xmm5_8
  __int64 v202; // rsi
  double v203; // xmm4_8
  double v204; // xmm5_8
  __int64 v205; // rax
  __int64 v206; // rbx
  int v207; // eax
  double v208; // xmm4_8
  double v209; // xmm5_8
  unsigned int v210; // eax
  double v211; // xmm4_8
  double v212; // xmm5_8
  __int64 v213; // rax
  __int64 v214; // rdx
  double v215; // xmm4_8
  double v216; // xmm5_8
  __int64 v217; // rsi
  double v218; // xmm4_8
  double v219; // xmm5_8
  __int64 v220; // rax
  __int64 v221; // rbx
  int v222; // eax
  double v223; // xmm4_8
  double v224; // xmm5_8
  double v225; // xmm4_8
  double v226; // xmm5_8
  __int64 v227; // rax
  __int64 v228; // rdx
  double v229; // xmm4_8
  double v230; // xmm5_8
  __int64 v231; // rsi
  double v232; // xmm4_8
  double v233; // xmm5_8
  __int64 v234; // rax
  __int64 v235; // r12
  __int64 v236; // rax
  __int64 v237; // rdx
  double v238; // xmm4_8
  double v239; // xmm5_8
  __int64 v240; // rsi
  double v241; // xmm4_8
  double v242; // xmm5_8
  __int64 v243; // rax
  __int64 v244; // r12
  __int64 v245; // rax
  __int64 v246; // rdx
  double v247; // xmm4_8
  double v248; // xmm5_8
  __int64 v249; // rsi
  double v250; // xmm4_8
  double v251; // xmm5_8
  __int64 v252; // rax
  unsigned __int8 *v253; // rax
  double v254; // xmm4_8
  double v255; // xmm5_8
  __int64 v256; // r12
  unsigned int v257; // edi
  unsigned int v258; // eax
  unsigned int v259; // edi
  unsigned int v260; // edi
  unsigned int v261; // edi
  int v262; // eax
  __int64 v263; // rbx
  char *i; // r13
  int v265; // eax
  int v266; // eax
  __int64 v267; // rcx
  __int64 v268; // r8
  int v269; // eax
  __int64 v270; // rax
  __int16 v271; // dx
  char *v272; // rax
  char *v273; // rbx
  __int64 v274; // r13
  char *v275; // r15
  char *v276; // r14
  __int64 v277; // rax
  __int64 v278; // rax
  __int64 v279; // rax
  __int64 v280; // rax
  __int64 v281; // rax
  __int64 v282; // rax
  __int64 v283; // rax
  __int64 v284; // rax
  __int64 v285; // rax
  __int64 v286; // rax
  __int64 v287; // rax
  __int64 v288; // rax
  __int64 v289; // rax
  __int64 v290; // rax
  __int64 v291; // rax
  __int64 v292; // rax
  __int64 v293; // rax
  __int64 v294; // rax
  __int64 v295; // rax
  unsigned __int8 v296[8]; // [rsp+0h] [rbp-88h] BYREF
  void *src[2]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v298; // [rsp+18h] [rbp-70h]
  unsigned __int8 v299[8]; // [rsp+20h] [rbp-68h] BYREF
  __int128 v300; // [rsp+28h] [rbp-60h]
  __int64 v301; // [rsp+38h] [rbp-50h]
  unsigned __int64 v302; // [rsp+48h] [rbp-40h]

  v302 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case -80:
      v245 = a1[1];
      v246 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v246 + 32 * v245 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v249 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v249 - 32), 0.0, a4, a5, a6, v247, v248, a9, a10);
        v252 = a1[1];
        if ( v252 )
        {
          v285 = v252 - 1;
          a1[1] = v285;
          sub_441540(*a1 + 32 * v285, 0.0, a4, a5, a6, v250, v251, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v250, v251, a9, a10);
      }
      v253 = sub_4419D0((unsigned __int8 *)(*a1 + 32 * a1[1] - 32), 2, 0.0, a4, a5, a6, v247, v248, a9, a10);
      v256 = (__int64)v253;
      if ( *v253 == 7 )
      {
        v27 = sub_441D50((__int64)v296, 0.0, a4, a5, a6, v254, v255, a9, a10);
        if ( !v27 )
        {
          if ( src[1] )
          {
            v272 = (char *)src[1] - 1;
            v273 = (char *)src[1] - 1;
            if ( src[1] != (void *)1 )
            {
              v274 = (*(_QWORD *)(v256 + 16) == 0) + *(_QWORD *)(v256 + 16) - 1LL;
              v275 = &v272[v274];
              v276 = &v272[(*(_QWORD *)(v256 + 16) == 0) + *(_QWORD *)(v256 + 16)];
              if ( *(_QWORD *)(v256 + 24) < (unsigned __int64)v276 )
                *(_QWORD *)(v256 + 8) = sub_481540(
                                          v256 + 8,
                                          *(void **)(v256 + 8),
                                          (unsigned __int64)&v272[(*(_QWORD *)(v256 + 16) == 0) + *(_QWORD *)(v256 + 16)],
                                          1u);
              v277 = *(_QWORD *)(v256 + 8);
              *(_QWORD *)(v256 + 16) = v276;
              v275[v277] = 0;
              memcpy((void *)(v274 + *(_QWORD *)(v256 + 8)), src[0], (size_t)v273);
            }
          }
          goto LABEL_157;
        }
LABEL_151:
        sub_441540((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10);
        return v27;
      }
      switch ( sub_442760(v253, v296, 0.0, a4, a5, a6, v254, v255, a9, a10) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_156;
        case 3uLL:
          v269 = sub_47B4C0(v256 + 8, (__int64)src, (_OWORD *)(v256 + 8), 0);
          switch ( v269 )
          {
            case 1:
              goto LABEL_157;
            case 4:
              v261 = 86;
              goto LABEL_159;
            case 5:
              v261 = 98;
              goto LABEL_159;
          }
          v261 = 97;
          if ( v269 == 2 )
LABEL_159:
            sub_479EB0(v261);
LABEL_157:
          sub_441540((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10);
          return 0;
        case 5uLL:
          if ( !(unsigned int)sub_446080(v256, v256, 0.0, a4, a5, a6, v184, v185, a9, a10) )
            sub_441DE0(
              *(_QWORD **)(v256 + 8),
              *((_QWORD *)src[0] + 3),
              (__int64)src[0] + 8,
              v267,
              v268,
              0.0,
              a4,
              a5,
              a6,
              v184,
              v185,
              a9,
              a10);
          goto LABEL_157;
        case 6uLL:
        case 8uLL:
          v261 = 1531;
          goto LABEL_159;
        case 7uLL:
          if ( !(unsigned int)sub_4424F0(v256, 0.0, a4, a5, a6, v184, v185, a9, a10)
            && !(unsigned int)sub_4424F0((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10) )
          {
LABEL_156:
            *(_QWORD *)(v256 + 8) += src[0];
          }
          goto LABEL_157;
        default:
          goto LABEL_157;
      }
    case -79:
      v227 = a1[1];
      v228 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v228 + 32 * v227 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v231 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v231 - 32), 0.0, a4, a5, a6, v229, v230, a9, a10);
        v234 = a1[1];
        if ( v234 )
        {
          v290 = v234 - 1;
          a1[1] = v290;
          sub_441540(*a1 + 32 * v290, 0.0, a4, a5, a6, v232, v233, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v232, v233, a9, a10);
      }
      v235 = *a1 + 32 * a1[1] - 32;
      switch ( sub_442760((unsigned __int8 *)v235, v296, 0.0, a4, a5, a6, v229, v230, a9, a10) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_149;
        case 3uLL:
          v265 = sub_47B4C0(v235 + 8, (__int64)src, (_OWORD *)(v235 + 8), 1);
          switch ( v265 )
          {
            case 1:
              goto LABEL_150;
            case 4:
              v260 = 86;
              break;
            case 5:
              v260 = 98;
              break;
            default:
              v260 = 97;
              if ( v265 != 2 )
              {
LABEL_150:
                v27 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_153:
          v27 = sub_479EB0(v260);
          break;
        case 5uLL:
          v27 = sub_446080(v235, v235, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
          v263 = *((_QWORD *)src[0] + 3);
          for ( i = (char *)src[0] + 8; (char *)v263 != i; v263 = std::_Rb_tree_increment(v263) )
            sub_446160(*(_QWORD *)(v235 + 8), v263 + 32, 0.0, a4, a5, a6, v184, v185, a9, a10);
          goto LABEL_150;
        case 6uLL:
        case 8uLL:
          v260 = 1531;
          goto LABEL_153;
        case 7uLL:
          v27 = sub_4424F0(v235, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
          v27 = sub_4424F0((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
LABEL_149:
          *(_QWORD *)(v235 + 8) -= src[0];
          goto LABEL_150;
        default:
          goto LABEL_150;
      }
      goto LABEL_151;
    case -78:
      v236 = a1[1];
      v237 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v237 + 32 * v236 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v240 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v240 - 32), 0.0, a4, a5, a6, v238, v239, a9, a10);
        v243 = a1[1];
        if ( v243 )
        {
          v288 = v243 - 1;
          a1[1] = v288;
          sub_441540(*a1 + 32 * v288, 0.0, a4, a5, a6, v241, v242, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v241, v242, a9, a10);
      }
      v244 = *a1 + 32 * a1[1] - 32;
      switch ( sub_442760((unsigned __int8 *)v244, v296, 0.0, a4, a5, a6, v238, v239, a9, a10) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_145;
        case 3uLL:
          v262 = sub_47BA00(v244 + 8, (__int64)src, (_OWORD *)(v244 + 8));
          switch ( v262 )
          {
            case 1:
              goto LABEL_146;
            case 4:
              v259 = 86;
              break;
            case 5:
              v259 = 98;
              break;
            default:
              v259 = 97;
              if ( v262 != 2 )
              {
                v27 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_136:
          v27 = sub_479EB0(v259);
          goto LABEL_151;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v259 = 1531;
          goto LABEL_136;
        case 7uLL:
          v27 = sub_4424F0(v244, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
          v27 = sub_4424F0((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
LABEL_145:
          *(_QWORD *)(v244 + 8) *= (_QWORD)src[0];
LABEL_146:
          v27 = 0;
          goto LABEL_151;
        default:
          goto LABEL_146;
      }
    case -77:
      v175 = a1[1];
      v176 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v176 + 32 * v175 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v179 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v179 - 32), 0.0, a4, a5, a6, v177, v178, a9, a10);
        v182 = a1[1];
        if ( v182 )
        {
          v292 = v182 - 1;
          a1[1] = v292;
          sub_441540(*a1 + 32 * v292, 0.0, a4, a5, a6, v180, v181, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v180, v181, a9, a10);
      }
      v183 = *a1 + 32 * a1[1] - 32;
      switch ( sub_442760((unsigned __int8 *)v183, v296, 0.0, a4, a5, a6, v177, v178, a9, a10) )
      {
        case 2uLL:
        case 9uLL:
          goto LABEL_140;
        case 3uLL:
          v266 = sub_47BAD0(v183 + 8, (__int64)src, (_OWORD *)(v183 + 8));
          switch ( v266 )
          {
            case 1:
              goto LABEL_142;
            case 4:
              v257 = 86;
              break;
            case 5:
              v257 = 98;
              break;
            default:
              v257 = 97;
              if ( v266 != 2 )
              {
                v27 = 0;
                goto LABEL_151;
              }
              break;
          }
LABEL_132:
          v258 = sub_479EB0(v257);
          goto LABEL_133;
        case 5uLL:
        case 6uLL:
        case 8uLL:
          v257 = 1531;
          goto LABEL_132;
        case 7uLL:
          v27 = sub_4424F0(v183, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
          v27 = sub_4424F0((__int64)v296, 0.0, a4, a5, a6, v184, v185, a9, a10);
          if ( v27 )
            goto LABEL_151;
LABEL_140:
          if ( src[0] )
          {
            *(__int64 *)(v183 + 8) /= (__int64)src[0];
LABEL_142:
            v27 = 0;
          }
          else
          {
            v258 = sub_479EB0(0x56u);
LABEL_133:
            v27 = v258;
          }
          goto LABEL_151;
        default:
          goto LABEL_142;
      }
    case -76:
      v198 = a1[1];
      v199 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v199 + 32 * v198 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v202 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v202 - 32), 0.0, a4, a5, a6, v200, v201, a9, a10);
        v205 = a1[1];
        if ( v205 )
        {
          v286 = v205 - 1;
          a1[1] = v286;
          sub_441540(*a1 + 32 * v286, 0.0, a4, a5, a6, v203, v204, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v203, v204, a9, a10);
      }
      v206 = *a1 + 32 * a1[1] - 32;
      v207 = sub_442760((unsigned __int8 *)v206, v296, 0.0, a4, a5, a6, v200, v201, a9, a10);
      if ( v207 == 2 || v207 == 9 )
      {
        if ( src[0] )
        {
          *(__int64 *)(v206 + 8) %= (__int64)src[0];
          sub_441540((__int64)v296, 0.0, a4, a5, a6, v208, v209, a9, a10);
          return 0;
        }
        v210 = sub_479EB0(0x56u);
      }
      else
      {
        v210 = sub_479EB0(0x3Du);
      }
      v27 = v210;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v211, v212, a9, a10);
      return v27;
    case -75:
      v151 = a1[1];
      v152 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v152 + 32 * v151 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v155 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v155 - 32), 0.0, a4, a5, a6, v153, v154, a9, a10);
        v158 = a1[1];
        if ( v158 )
        {
          v294 = v158 - 1;
          a1[1] = v294;
          sub_441540(*a1 + 32 * v294, 0.0, a4, a5, a6, v156, v157, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v156, v157, a9, a10);
      }
      v159 = *a1 + 32 * a1[1] - 32;
      v160 = sub_442760((unsigned __int8 *)v159, v296, 0.0, a4, a5, a6, v153, v154, a9, a10);
      if ( v160 != 2 && v160 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v159 + 8) = ((__int64)src[0] | *(_QWORD *)(v159 + 8)) != 0;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v161, v162, a9, a10);
      return 0;
    case -74:
      v139 = a1[1];
      v140 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v140 + 32 * v139 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v143 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v143 - 32), 0.0, a4, a5, a6, v141, v142, a9, a10);
        v146 = a1[1];
        if ( v146 )
        {
          v295 = v146 - 1;
          a1[1] = v295;
          sub_441540(*a1 + 32 * v295, 0.0, a4, a5, a6, v144, v145, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v144, v145, a9, a10);
      }
      v147 = *a1 + 32 * a1[1] - 32;
      v148 = sub_442760((unsigned __int8 *)v147, v296, 0.0, a4, a5, a6, v141, v142, a9, a10);
      if ( v148 != 2 && v148 != 9 )
        goto LABEL_114;
      v270 = *(_QWORD *)(v147 + 8);
      if ( v270 )
        v270 = src[0] != nullptr;
      *(_QWORD *)(v147 + 8) = v270;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v149, v150, a9, a10);
      return 0;
    case -73:
      v135 = *a1 + 32 * a1[1] - 32;
      v136 = sub_4419D0((unsigned __int8 *)v135, 0, a3, a4, a5, a6, a7, a8, a9, a10);
      if ( v136 && *v136 == 5 )
      {
        sub_441540(v135, a3, a4, a5, a6, v137, v138, a9, a10);
        *(_QWORD *)(v135 + 8) = 1;
      }
      if ( *(_BYTE *)v135 != 2 && *(_BYTE *)v135 != 9 )
        return sub_479EB0(0x3Du);
      *(_QWORD *)(v135 + 8) = *(_QWORD *)(v135 + 8) == 0;
      return 0;
    case -72:
      v213 = a1[1];
      v214 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v214 + 32 * v213 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v217 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v217 - 32), 0.0, a4, a5, a6, v215, v216, a9, a10);
        v220 = a1[1];
        if ( v220 )
        {
          v291 = v220 - 1;
          a1[1] = v291;
          sub_441540(*a1 + 32 * v291, 0.0, a4, a5, a6, v218, v219, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v218, v219, a9, a10);
      }
      v221 = *a1 + 32 * a1[1] - 32;
      v222 = sub_442760((unsigned __int8 *)v221, v296, 0.0, a4, a5, a6, v215, v216, a9, a10);
      if ( v222 != 2 && v222 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v221 + 8) |= (unsigned __int64)src[0];
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v223, v224, a9, a10);
      return 0;
    case -71:
      v163 = a1[1];
      v164 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v164 + 32 * v163 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v167 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v167 - 32), 0.0, a4, a5, a6, v165, v166, a9, a10);
        v170 = a1[1];
        if ( v170 )
        {
          v293 = v170 - 1;
          a1[1] = v293;
          sub_441540(*a1 + 32 * v293, 0.0, a4, a5, a6, v168, v169, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v168, v169, a9, a10);
      }
      v171 = *a1 + 32 * a1[1] - 32;
      v172 = sub_442760((unsigned __int8 *)v171, v296, 0.0, a4, a5, a6, v165, v166, a9, a10);
      if ( v172 != 2 && v172 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v171 + 8) &= (unsigned __int64)src[0];
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v173, v174, a9, a10);
      return 0;
    case -70:
      v186 = a1[1];
      v187 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v187 + 32 * v186 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v190 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v190 - 32), 0.0, a4, a5, a6, v188, v189, a9, a10);
        v193 = a1[1];
        if ( v193 )
        {
          v287 = v193 - 1;
          a1[1] = v287;
          sub_441540(*a1 + 32 * v287, 0.0, a4, a5, a6, v191, v192, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v191, v192, a9, a10);
      }
      v194 = *a1 + 32 * a1[1] - 32;
      v195 = sub_442760((unsigned __int8 *)v194, v296, 0.0, a4, a5, a6, v188, v189, a9, a10);
      if ( v195 != 2 && v195 != 9 )
        goto LABEL_114;
      *(_QWORD *)(v194 + 8) ^= (unsigned __int64)src[0];
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v196, v197, a9, a10);
      return 0;
    case -69:
      v134 = *a1 + 32 * a1[1] - 32;
      if ( *(_BYTE *)v134 != 2 && *(_BYTE *)v134 != 9 )
        return sub_479EB0(0x3Du);
      *(_QWORD *)(v134 + 8) = ~*(_QWORD *)(v134 + 8);
      return 0;
    case -68:
      v122 = a1[1];
      v123 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v123 + 32 * v122 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v126 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v126 - 32), 0.0, a4, a5, a6, v124, v125, a9, a10);
        v129 = a1[1];
        if ( v129 )
        {
          v279 = v129 - 1;
          a1[1] = v279;
          sub_441540(*a1 + 32 * v279, 0.0, a4, a5, a6, v127, v128, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v127, v128, a9, a10);
      }
      v130 = *a1 + 32 * a1[1] - 32;
      v131 = sub_442760((unsigned __int8 *)v130, v296, 0.0, a4, a5, a6, v124, v125, a9, a10);
      if ( v131 != 2 && v131 != 9 )
        goto LABEL_114;
      *(__int64 *)(v130 + 8) >>= SLOBYTE(src[0]);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v132, v133, a9, a10);
      return 0;
    case -67:
      v110 = a1[1];
      v111 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v111 + 32 * v110 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v114 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v114 - 32), 0.0, a4, a5, a6, v112, v113, a9, a10);
        v117 = a1[1];
        if ( v117 )
        {
          v278 = v117 - 1;
          a1[1] = v278;
          sub_441540(*a1 + 32 * v278, 0.0, a4, a5, a6, v115, v116, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v115, v116, a9, a10);
      }
      v118 = *a1 + 32 * a1[1] - 32;
      v119 = sub_442760((unsigned __int8 *)v118, v296, 0.0, a4, a5, a6, v112, v113, a9, a10);
      if ( v119 != 2 && v119 != 9 )
      {
LABEL_114:
        v27 = sub_479EB0(0x3Du);
        sub_441540((__int64)v296, 0.0, a4, a5, a6, v225, v226, a9, a10);
        return v27;
      }
      *(_QWORD *)(v118 + 8) <<= SLOBYTE(src[0]);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v120, v121, a9, a10);
      return 0;
    case -66:
      v108 = *a1 + 32 * a1[1] - 32;
      v109 = *(_BYTE *)v108;
      if ( *(_BYTE *)v108 == 3 )
      {
        v271 = *(_WORD *)(v108 + 22);
        if ( v271 )
          *(_WORD *)(v108 + 22) = v271 + 0x8000;
        return 0;
      }
      if ( v109 == 2 || v109 == 9 )
      {
        *(_QWORD *)(v108 + 8) = -*(_QWORD *)(v108 + 8);
        return 0;
      }
      return sub_479EB0(0x3Du);
    case -65:
      return sub_441D50(*a1 + 32 * a1[1] - 32, a3, a4, a5, a6, a7, a8, a9, a10);
    case -56:
      v76 = a1[1];
      v77 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v77 + 32 * v76 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v80 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v80 - 32), 0.0, a4, a5, a6, v78, v79, a9, a10);
        v83 = a1[1];
        if ( v83 )
        {
          v281 = v83 - 1;
          a1[1] = v281;
          sub_441540(*a1 + 32 * v281, 0.0, a4, a5, a6, v81, v82, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v81, v82, a9, a10);
      }
      v84 = *a1 + 32 * a1[1] - 32;
      v85 = sub_4428E0(v84, (__int64)v296, 0.0, a4, a5, a6, v78, v79, a9, a10) == 0;
      sub_441540(v84, 0.0, a4, a5, a6, v86, v87, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v88, v89, a9, a10);
      *(_QWORD *)(v84 + 8) = v85;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v90, v91, a9, a10);
      return 0;
    case -55:
      v60 = a1[1];
      v61 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v61 + 32 * v60 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v64 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v64 - 32), 0.0, a4, a5, a6, v62, v63, a9, a10);
        v67 = a1[1];
        if ( v67 )
        {
          v283 = v67 - 1;
          a1[1] = v283;
          sub_441540(*a1 + 32 * v283, 0.0, a4, a5, a6, v65, v66, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v65, v66, a9, a10);
      }
      v68 = *a1 + 32 * a1[1] - 32;
      v69 = sub_4428E0(v68, (__int64)v296, 0.0, a4, a5, a6, v62, v63, a9, a10) != 0;
      sub_441540(v68, 0.0, a4, a5, a6, v70, v71, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v72, v73, a9, a10);
      *(_QWORD *)(v68 + 8) = v69;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v74, v75, a9, a10);
      return 0;
    case -54:
      v44 = a1[1];
      v45 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v45 + 32 * v44 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v48 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v48 - 32), 0.0, a4, a5, a6, v46, v47, a9, a10);
        v51 = a1[1];
        if ( v51 )
        {
          v284 = v51 - 1;
          a1[1] = v284;
          sub_441540(*a1 + 32 * v284, 0.0, a4, a5, a6, v49, v50, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v49, v50, a9, a10);
      }
      v52 = *a1 + 32 * a1[1] - 32;
      v53 = sub_4428E0(v52, (__int64)v296, 0.0, a4, a5, a6, v46, v47, a9, a10) <= 0;
      sub_441540(v52, 0.0, a4, a5, a6, v54, v55, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v56, v57, a9, a10);
      *(_QWORD *)(v52 + 8) = v53;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v58, v59, a9, a10);
      return 0;
    case -53:
      v28 = a1[1];
      v29 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v29 + 32 * v28 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v32 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v32 - 32), 0.0, a4, a5, a6, v30, v31, a9, a10);
        v35 = a1[1];
        if ( v35 )
        {
          v280 = v35 - 1;
          a1[1] = v280;
          sub_441540(*a1 + 32 * v280, 0.0, a4, a5, a6, v33, v34, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v33, v34, a9, a10);
      }
      v36 = *a1 + 32 * a1[1] - 32;
      v37 = sub_4428E0(v36, (__int64)v296, 0.0, a4, a5, a6, v30, v31, a9, a10) >= 0;
      sub_441540(v36, 0.0, a4, a5, a6, v38, v39, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v40, v41, a9, a10);
      *(_QWORD *)(v36 + 8) = v37;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v42, v43, a9, a10);
      return 0;
    case -52:
      v92 = a1[1];
      v93 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v93 + 32 * v92 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v96 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v96 - 32), 0.0, a4, a5, a6, v94, v95, a9, a10);
        v99 = a1[1];
        if ( v99 )
        {
          v289 = v99 - 1;
          a1[1] = v289;
          sub_441540(*a1 + 32 * v289, 0.0, a4, a5, a6, v97, v98, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v97, v98, a9, a10);
      }
      v100 = *a1 + 32 * a1[1] - 32;
      v101 = (unsigned int)sub_4428E0(v100, (__int64)v296, 0.0, a4, a5, a6, v94, v95, a9, a10) >> 31;
      sub_441540(v100, 0.0, a4, a5, a6, v102, v103, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v104, v105, a9, a10);
      *(_QWORD *)(v100 + 8) = (unsigned __int8)v101;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v106, v107, a9, a10);
      return 0;
    case -51:
      v11 = a1[1];
      v12 = *a1;
      v296[0] = 2;
      *(_OWORD *)src = 0;
      v298 = 0;
      if ( !(unsigned int)sub_442230(
                            (__m128i *)v296,
                            (__m128i *)(v12 + 32 * v11 - 32),
                            0.0,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10) )
      {
        v15 = a1[1];
        v299[0] = 2;
        v300 = 0;
        v301 = 0;
        sub_4418C0(v299, (unsigned __int8 *)(*a1 + 32 * v15 - 32), 0.0, a4, a5, a6, v13, v14, a9, a10);
        v18 = a1[1];
        if ( v18 )
        {
          v282 = v18 - 1;
          a1[1] = v282;
          sub_441540(*a1 + 32 * v282, 0.0, a4, a5, a6, v16, v17, a9, a10);
        }
        sub_441540((__int64)v299, 0.0, a4, a5, a6, v16, v17, a9, a10);
      }
      v19 = *a1 + 32 * a1[1] - 32;
      v20 = sub_4428E0(v19, (__int64)v296, 0.0, a4, a5, a6, v13, v14, a9, a10) > 0;
      sub_441540(v19, 0.0, a4, a5, a6, v21, v22, a9, a10);
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v23, v24, a9, a10);
      *(_QWORD *)(v19 + 8) = v20;
      sub_441540((__int64)v296, 0.0, a4, a5, a6, v25, v26, a9, a10);
      return 0;
    case -50:
      return sub_442390(*a1 + 32 * a1[1] - 32, a3, a4, a5, a6, a7, a8, a9, a10);
    case -48:
      return sub_442640(*a1 + 32 * a1[1] - 32, a3, a4, a5, a6, a7, a8, a9, a10);
    case -47:
      return sub_4424F0(*a1 + 32 * a1[1] - 32, a3, a4, a5, a6, a7, a8, a9, a10);
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(1448);
      BUG();
  }
}
// 447563: variable 'v13' is possibly undefined
// 447563: variable 'v14' is possibly undefined
// 448959: variable 'v16' is possibly undefined
// 448959: variable 'v17' is possibly undefined
// 4475A1: variable 'v21' is possibly undefined
// 4475A1: variable 'v22' is possibly undefined
// 4475A9: variable 'v23' is possibly undefined
// 4475A9: variable 'v24' is possibly undefined
// 4475B9: variable 'v25' is possibly undefined
// 4475B9: variable 'v26' is possibly undefined
// 447653: variable 'v30' is possibly undefined
// 447653: variable 'v31' is possibly undefined
// 448921: variable 'v33' is possibly undefined
// 448921: variable 'v34' is possibly undefined
// 447692: variable 'v38' is possibly undefined
// 447692: variable 'v39' is possibly undefined
// 44769A: variable 'v40' is possibly undefined
// 44769A: variable 'v41' is possibly undefined
// 4476AA: variable 'v42' is possibly undefined
// 4476AA: variable 'v43' is possibly undefined
// 44771B: variable 'v46' is possibly undefined
// 44771B: variable 'v47' is possibly undefined
// 448991: variable 'v49' is possibly undefined
// 448991: variable 'v50' is possibly undefined
// 447759: variable 'v54' is possibly undefined
// 447759: variable 'v55' is possibly undefined
// 447761: variable 'v56' is possibly undefined
// 447761: variable 'v57' is possibly undefined
// 447771: variable 'v58' is possibly undefined
// 447771: variable 'v59' is possibly undefined
// 4477E3: variable 'v62' is possibly undefined
// 4477E3: variable 'v63' is possibly undefined
// 448975: variable 'v65' is possibly undefined
// 448975: variable 'v66' is possibly undefined
// 447821: variable 'v70' is possibly undefined
// 447821: variable 'v71' is possibly undefined
// 447829: variable 'v72' is possibly undefined
// 447829: variable 'v73' is possibly undefined
// 447839: variable 'v74' is possibly undefined
// 447839: variable 'v75' is possibly undefined
// 4478AB: variable 'v78' is possibly undefined
// 4478AB: variable 'v79' is possibly undefined
// 44893D: variable 'v81' is possibly undefined
// 44893D: variable 'v82' is possibly undefined
// 4478E9: variable 'v86' is possibly undefined
// 4478E9: variable 'v87' is possibly undefined
// 4478F1: variable 'v88' is possibly undefined
// 4478F1: variable 'v89' is possibly undefined
// 447901: variable 'v90' is possibly undefined
// 447901: variable 'v91' is possibly undefined
// 447973: variable 'v94' is possibly undefined
// 447973: variable 'v95' is possibly undefined
// 448A1D: variable 'v97' is possibly undefined
// 448A1D: variable 'v98' is possibly undefined
// 4479B0: variable 'v102' is possibly undefined
// 4479B0: variable 'v103' is possibly undefined
// 4479B8: variable 'v104' is possibly undefined
// 4479B8: variable 'v105' is possibly undefined
// 4479C8: variable 'v106' is possibly undefined
// 4479C8: variable 'v107' is possibly undefined
// 447AAB: variable 'v112' is possibly undefined
// 447AAB: variable 'v113' is possibly undefined
// 4488E9: variable 'v115' is possibly undefined
// 4488E9: variable 'v116' is possibly undefined
// 447B73: variable 'v124' is possibly undefined
// 447B73: variable 'v125' is possibly undefined
// 448905: variable 'v127' is possibly undefined
// 448905: variable 'v128' is possibly undefined
// 4488B8: variable 'v137' is possibly undefined
// 4488B8: variable 'v138' is possibly undefined
// 447CBB: variable 'v141' is possibly undefined
// 447CBB: variable 'v142' is possibly undefined
// 448AC5: variable 'v144' is possibly undefined
// 448AC5: variable 'v145' is possibly undefined
// 447D83: variable 'v153' is possibly undefined
// 447D83: variable 'v154' is possibly undefined
// 448AA9: variable 'v156' is possibly undefined
// 448AA9: variable 'v157' is possibly undefined
// 447E4B: variable 'v165' is possibly undefined
// 447E4B: variable 'v166' is possibly undefined
// 448A8D: variable 'v168' is possibly undefined
// 448A8D: variable 'v169' is possibly undefined
// 447F13: variable 'v177' is possibly undefined
// 447F13: variable 'v178' is possibly undefined
// 448A71: variable 'v180' is possibly undefined
// 448A71: variable 'v181' is possibly undefined
// 447FCB: variable 'v188' is possibly undefined
// 447FCB: variable 'v189' is possibly undefined
// 4489E5: variable 'v191' is possibly undefined
// 4489E5: variable 'v192' is possibly undefined
// 448093: variable 'v200' is possibly undefined
// 448093: variable 'v201' is possibly undefined
// 4489C9: variable 'v203' is possibly undefined
// 4489C9: variable 'v204' is possibly undefined
// 4480E9: variable 'v211' is possibly undefined
// 4480E9: variable 'v212' is possibly undefined
// 44815B: variable 'v215' is possibly undefined
// 44815B: variable 'v216' is possibly undefined
// 448A55: variable 'v218' is possibly undefined
// 448A55: variable 'v219' is possibly undefined
// 4481B1: variable 'v225' is possibly undefined
// 4481B1: variable 'v226' is possibly undefined
// 448223: variable 'v229' is possibly undefined
// 448223: variable 'v230' is possibly undefined
// 448A39: variable 'v232' is possibly undefined
// 448A39: variable 'v233' is possibly undefined
// 4482DB: variable 'v238' is possibly undefined
// 4482DB: variable 'v239' is possibly undefined
// 448A01: variable 'v241' is possibly undefined
// 448A01: variable 'v242' is possibly undefined
// 448393: variable 'v247' is possibly undefined
// 448393: variable 'v248' is possibly undefined
// 4489AD: variable 'v250' is possibly undefined
// 4489AD: variable 'v251' is possibly undefined
// 4483D9: variable 'v254' is possibly undefined
// 4483D9: variable 'v255' is possibly undefined
// 44843C: variable 'v184' is possibly undefined
// 44843C: variable 'v185' is possibly undefined
// 44867F: variable 'v267' is possibly undefined
// 44867F: variable 'v268' is possibly undefined
// 44870C: variable 'v223' is possibly undefined
// 44870C: variable 'v224' is possibly undefined
// 44872C: variable 'v120' is possibly undefined
// 44872C: variable 'v121' is possibly undefined
// 44874C: variable 'v132' is possibly undefined
// 44874C: variable 'v133' is possibly undefined
// 44877B: variable 'v149' is possibly undefined
// 44877B: variable 'v150' is possibly undefined
// 448794: variable 'v196' is possibly undefined
// 448794: variable 'v197' is possibly undefined
// 4487AC: variable 'v173' is possibly undefined
// 4487AC: variable 'v174' is possibly undefined
// 4487D6: variable 'v161' is possibly undefined
// 4487D6: variable 'v162' is possibly undefined
// 4487FE: variable 'v208' is possibly undefined
// 4487FE: variable 'v209' is possibly undefined
// 405760: using guessed type __int64 __fastcall std::_Rb_tree_increment(_QWORD);
// 4C94E1: using guessed type char byte_4C94E1;
