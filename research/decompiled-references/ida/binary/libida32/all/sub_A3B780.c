__m128i *__fastcall sub_A3B780(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // r13
  const __m128i *v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // r15
  unsigned int v13; // r14d
  int v14; // r12d
  _DWORD *v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // r14
  int *v18; // r15
  unsigned __int64 v19; // rdi
  int v20; // esi
  __m128i *v21; // rdx
  __int32 v22; // eax
  __int32 *v23; // r15
  __m128i *v24; // r14
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned int *v27; // r15
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __m128i *v30; // r15
  int *v31; // r14
  __int64 v32; // rbp
  unsigned __int64 v33; // rdi
  unsigned int v34; // esi
  __m128i *v35; // rdx
  __int32 v36; // eax
  __m128i *v37; // r8
  __int64 *v38; // rdi
  __m128i *v39; // rdx
  __m128i *result; // rax
  int v41; // r9d
  __m128i *v42; // r10
  int v43; // esi
  __int64 v44; // r9
  unsigned __int64 v45; // r9
  __int64 v46; // rax
  __int8 v47; // dl
  __int64 v48; // r14
  __int64 v49; // rsi
  int v50; // eax
  int v51; // eax
  __int64 v52; // r10
  __int64 v53; // r9
  unsigned int v54; // r14d
  unsigned int v55; // eax
  _DWORD *v56; // rax
  unsigned int v57; // r14d
  __int64 v58; // r9
  int v59; // r11d
  _DWORD *v60; // rax
  __int64 v61; // rax
  unsigned __int8 v62; // cl
  int v63; // edx
  char v64; // dl
  __int64 v65; // rcx
  unsigned __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rbp
  int *v69; // r14
  unsigned int v70; // esi
  int *v71; // rdi
  int v72; // edx
  int v73; // r9d
  __m128i *v74; // r10
  int v75; // esi
  __int64 v76; // rax
  __m128i *v77; // rbx
  __m128i *v78; // rdx
  _QWORD *v79; // r10
  unsigned __int64 v80; // r11
  __int64 v81; // rax
  int v82; // eax
  __int8 v83; // dl
  __int8 v84; // dl
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  _DWORD *v87; // rax
  __int64 v88; // rsi
  int *v89; // rcx
  _DWORD *nn; // rdx
  int *v91; // r14
  int *v92; // r15
  int *v93; // rbp
  int v94; // edx
  int v95; // esi
  unsigned int v96; // esi
  __int64 v97; // r9
  unsigned int v98; // r8d
  int *v99; // rcx
  int v100; // edi
  int *v101; // rsi
  __int64 v102; // rdx
  int v103; // edi
  unsigned __int64 v104; // rax
  __int64 v105; // rax
  _DWORD *v106; // rax
  __int64 v107; // rsi
  _DWORD *v108; // rdx
  int *mm; // rdi
  int *v110; // r14
  int *v111; // r15
  int *v112; // rbp
  int v113; // edx
  int v114; // esi
  unsigned int v115; // esi
  __int64 v116; // r9
  unsigned int v117; // r8d
  int *v118; // rcx
  int v119; // edi
  int *v120; // rsi
  __int64 v121; // rdx
  int v122; // edi
  unsigned __int64 v123; // rax
  __int64 v124; // rax
  _DWORD *v125; // rax
  __int64 v126; // rsi
  _DWORD *kk; // rdx
  int *v128; // r13
  int v129; // edx
  int v130; // ecx
  int v131; // esi
  __int64 v132; // r8
  unsigned int v133; // r9d
  int *v134; // rcx
  int v135; // edi
  int *v136; // rsi
  __int64 v137; // rdx
  int v138; // edi
  int v139; // edi
  int v140; // edi
  __int32 v141; // ecx
  int v142; // r10d
  unsigned __int64 v143; // rax
  __int64 v144; // rax
  _DWORD *v145; // rax
  __int64 v146; // rsi
  _DWORD *jj; // rdx
  int *v148; // r13
  int v149; // edx
  int v150; // ecx
  int v151; // esi
  __int64 v152; // r8
  unsigned int v153; // r9d
  int *v154; // rcx
  int v155; // edi
  int *v156; // rsi
  __int64 v157; // rdx
  int v158; // edi
  unsigned __int64 v159; // rcx
  __int64 v160; // rax
  int v161; // edi
  int v162; // edi
  __int32 v163; // ecx
  int v164; // r10d
  int v165; // edi
  int v166; // edi
  unsigned int v167; // r13d
  __int32 v168; // r8d
  int v169; // r10d
  __m128i *v170; // r9
  _QWORD *v171; // r13
  _QWORD *v172; // r12
  int v173; // edi
  int v174; // edi
  unsigned int v175; // r13d
  __int32 v176; // r8d
  int v177; // r10d
  _QWORD *v178; // r13
  _QWORD *v179; // r12
  __int64 v180; // rcx
  _DWORD *v181; // rcx
  _DWORD *v182; // rdx
  _QWORD *v183; // r15
  _QWORD *v184; // r12
  __int64 v185; // rcx
  _DWORD *v186; // rcx
  _DWORD *v187; // rdx
  _QWORD *v188; // r15
  _QWORD *v189; // r12
  __int64 v190; // rsi
  _DWORD *v191; // rsi
  _DWORD *v192; // rdx
  __int64 v193; // rsi
  _DWORD *v194; // rsi
  _DWORD *v195; // rdx
  __int64 *v196; // rdi
  __int64 v197; // rcx
  _DWORD *v198; // rax
  _DWORD *v199; // rdx
  int v200; // r12d
  int *v201; // r10
  int v202; // r12d
  int *v203; // r10
  __int64 v204; // rax
  int v205; // edx
  int v206; // r11d
  int *v207; // r10
  int v208; // r11d
  int *v209; // r10
  unsigned __int64 v210; // rax
  __int64 v211; // rax
  _DWORD *v212; // rax
  __int64 v213; // rsi
  _DWORD *m; // rdx
  int *v215; // r13
  int *v216; // r15
  int v217; // esi
  int v218; // edx
  int v219; // r10d
  __int64 v220; // r11
  __int64 v221; // r9
  int *v222; // rdx
  int v223; // ecx
  __int64 v224; // rsi
  int *v225; // rcx
  int v226; // edi
  __int64 v227; // rax
  _DWORD *v228; // rax
  __int64 v229; // rdx
  _DWORD *i; // rdx
  int *v231; // r13
  int *v232; // r15
  int v233; // esi
  int v234; // r9d
  unsigned int v235; // r9d
  __int64 v236; // r11
  __int64 v237; // r10
  int *v238; // rdx
  int v239; // ecx
  __int64 v240; // rsi
  int *v241; // rcx
  int v242; // edi
  int v243; // edx
  int v244; // edx
  __int64 v245; // rcx
  int v246; // esi
  unsigned int ii; // r13d
  int v248; // edi
  int v249; // edx
  int v250; // edx
  int v251; // esi
  unsigned int k; // r13d
  int v253; // edi
  __int64 *v254; // rdi
  __int64 v255; // rcx
  _DWORD *v256; // rax
  _DWORD *v257; // rdx
  __int64 *v258; // rdi
  __int64 v259; // rcx
  _DWORD *v260; // rax
  _DWORD *v261; // rdx
  _QWORD *v262; // r14
  _QWORD *v263; // rbp
  _QWORD *v264; // r14
  _QWORD *v265; // rbp
  __int64 v266; // rdx
  _DWORD *n; // rdx
  __int64 v268; // rdx
  _DWORD *j; // rdx
  int v270; // r8d
  int *v271; // rdi
  int v272; // r8d
  int *v273; // rdi
  unsigned int v274; // r13d
  unsigned int v275; // r13d
  int v276; // [rsp+0h] [rbp-ACh]
  __int64 v277; // [rsp+4h] [rbp-A8h]
  int v278; // [rsp+Ch] [rbp-A0h]
  __int64 v279; // [rsp+Ch] [rbp-A0h]
  _QWORD *v280; // [rsp+Ch] [rbp-A0h]
  __int64 v281; // [rsp+Ch] [rbp-A0h]
  __int64 v282; // [rsp+Ch] [rbp-A0h]
  __int64 v283; // [rsp+Ch] [rbp-A0h]
  int v284; // [rsp+Ch] [rbp-A0h]
  int v285; // [rsp+Ch] [rbp-A0h]
  char v286; // [rsp+Ch] [rbp-A0h]
  unsigned __int32 v287; // [rsp+14h] [rbp-98h]
  unsigned __int32 v288; // [rsp+14h] [rbp-98h]
  unsigned int v289; // [rsp+14h] [rbp-98h]
  unsigned int v290; // [rsp+14h] [rbp-98h]
  int v291; // [rsp+14h] [rbp-98h]
  int v292; // [rsp+14h] [rbp-98h]
  int v293; // [rsp+14h] [rbp-98h]
  int v294; // [rsp+14h] [rbp-98h]
  __m128i *v295; // [rsp+14h] [rbp-98h]
  __m128i *v296; // [rsp+14h] [rbp-98h]
  _QWORD *v297; // [rsp+14h] [rbp-98h]
  _QWORD *v298; // [rsp+14h] [rbp-98h]
  __int64 v299; // [rsp+14h] [rbp-98h]
  unsigned int v300; // [rsp+1Ch] [rbp-90h]
  unsigned int v301; // [rsp+1Ch] [rbp-90h]
  int v302; // [rsp+1Ch] [rbp-90h]
  const __m128i *v303; // [rsp+1Ch] [rbp-90h]
  const __m128i *v304; // [rsp+1Ch] [rbp-90h]
  int v305; // [rsp+1Ch] [rbp-90h]
  __int64 v306; // [rsp+1Ch] [rbp-90h]
  unsigned int v307; // [rsp+24h] [rbp-88h]
  _QWORD *v308; // [rsp+24h] [rbp-88h]
  _QWORD *v309; // [rsp+24h] [rbp-88h]
  char v310; // [rsp+24h] [rbp-88h]
  int v311; // [rsp+24h] [rbp-88h]
  unsigned int v312; // [rsp+2Ch] [rbp-80h]
  int v313; // [rsp+2Ch] [rbp-80h]
  unsigned int v314; // [rsp+30h] [rbp-7Ch]
  unsigned __int32 v315; // [rsp+40h] [rbp-6Ch] BYREF
  __m128i v316; // [rsp+44h] [rbp-68h] BYREF
  __m128i v317; // [rsp+54h] [rbp-58h] BYREF
  __int8 v318; // [rsp+64h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 2320);
  v7 = a1 + 2352;
  v8 = (_QWORD *)(a1 + 18384);
  if ( (a2[2].m128i_i8[0] & 0x1C) != 0 && ((((a2[2].m128i_i8[0] & 0x1C) - 4) & 0xF8) != 0 || *(_BYTE *)(v6 + 568)) )
  {
    v9 = (_QWORD *)v7;
    v10 = a2;
    v11 = v8;
    v12 = *v8;
    v277 = v6 + 544;
    v13 = a2->m128i_i32[0] & 0x7FFFFFFF;
    if ( v13 >= *(_DWORD *)(*v8 + 476LL) && v13 < *(_DWORD *)(v12 + 480) )
      v14 = *(_DWORD *)(v12 + 472);
    else
      v14 = sub_FF9850(v12);
    v316.m128i_i8[0] = 0;
    v276 = v14;
    if ( (unsigned int)(v14 + 1) <= 1 )
      goto LABEL_51;
    if ( v14 >= 0 )
    {
      v15 = (_DWORD *)(*(_QWORD *)(v12 + 184) + 24LL * (unsigned int)v14);
      goto LABEL_20;
    }
    v45 = (unsigned int)(-2 - v14);
    v46 = *(_QWORD *)(*(_QWORD *)(v12 + 320) + 8LL * ((unsigned int)(-2 - v14) >> 6));
    if ( _bittest64(&v46, v45) )
    {
      v79 = (_QWORD *)(*(_QWORD *)(v12 + 272) + 8 * ((unsigned __int64)(int)v45 >> 5));
      if ( *v79 )
      {
        a6 = (-2 - (_BYTE)v14) & 0x1F;
        v15 = (_DWORD *)(*v79 + 24 * a6);
LABEL_20:
        if ( v15 )
        {
          v16 = v13 - (*v15 & 0x7FFFFFFF);
LABEL_22:
          v315 = v16;
          v17 = *((unsigned int *)v11 + 6);
          v18 = (int *)v11[1];
          if ( !(_DWORD)v17 )
            goto LABEL_125;
          v19 = (unsigned int)(v17 - 1);
          v20 = v19 & v276;
          v21 = (__m128i *)&v18[14 * ((unsigned int)v19 & v276)];
          v22 = v21->m128i_i32[0];
          if ( v21->m128i_i32[0] == v14 )
          {
LABEL_24:
            v23 = &v21->m128i_i32[2];
            v24 = v21 + 1;
            if ( v21[3].m128i_i64[0] )
            {
              v27 = *(unsigned int **)(std::_Rb_tree_decrement() + 40);
              if ( ((v10[2].m128i_i8[0] & 0x40) != 0) != ((v27[8] & 0x40) != 0) )
              {
                if ( (v10[2].m128i_i8[0] & 0x40) != 0 )
                  goto LABEL_28;
                if ( (v27[8] & 0x40) == 0 )
                  goto LABEL_28;
                if ( (((unsigned __int8)v10[2].m128i_i8[0] >> 2) & 7u) - 1 > 1 )
                  goto LABEL_28;
                v48 = *v11;
                v49 = *v27;
                v316.m128i_i8[0] = 0;
                v287 = v10->m128i_i32[0];
                v50 = sub_FFEE50(v48, v49, &v316);
                v26 = (__int64)&v316;
                if ( v316.m128i_i8[0] )
                  goto LABEL_28;
                v278 = v50;
                v51 = sub_FFEE50(v48, v287, &v316);
                if ( v316.m128i_i8[0] == 1 || v278 != v51 )
                  goto LABEL_28;
              }
              v52 = *v11;
              v53 = v10->m128i_u32[0];
              v54 = v27[1] & 0x7FFFFFFF;
              if ( v54 >= *(_DWORD *)(*v11 + 476LL) && v54 < *(_DWORD *)(v52 + 480) )
              {
                v25 = *(unsigned int *)(v52 + 472);
              }
              else
              {
                v288 = v10->m128i_i32[0];
                v279 = *v11;
                v55 = sub_FF9850(*v11);
                v53 = v288;
                v52 = v279;
                v25 = v55;
              }
              v316.m128i_i8[0] = 0;
              if ( (unsigned int)(v25 + 1) <= 1 )
                goto LABEL_121;
              if ( (int)v25 >= 0 )
              {
                v56 = (_DWORD *)(*(_QWORD *)(v52 + 184) + 24LL * (unsigned int)v25);
                goto LABEL_63;
              }
              v80 = (unsigned int)(-2 - v25);
              v81 = *(_QWORD *)(*(_QWORD *)(v52 + 320) + 8LL * ((unsigned int)(-2 - v25) >> 6));
              if ( _bittest64(&v81, v80) )
              {
                v280 = (_QWORD *)(*(_QWORD *)(v52 + 272) + 8 * ((unsigned __int64)(int)v80 >> 5));
                if ( *v280 )
                {
                  v56 = (_DWORD *)(*v280 + 24LL * ((-2 - (_BYTE)v25) & 0x1F));
LABEL_63:
                  if ( v56 )
                  {
                    v57 = v54 - (*v56 & 0x7FFFFFFF);
LABEL_65:
                    v58 = v53 & 0x7FFFFFFF;
                    if ( (unsigned int)v58 < *(_DWORD *)(v52 + 476) || (unsigned int)v58 >= *(_DWORD *)(v52 + 480) )
                    {
                      v300 = v25;
                      v290 = v58;
                      v281 = v52;
                      v82 = sub_FF9850(v52);
                      v25 = v300;
                      v58 = v290;
                      v59 = v82;
                      v52 = v281;
                    }
                    else
                    {
                      v59 = *(_DWORD *)(v52 + 472);
                    }
                    v316.m128i_i8[0] = 0;
                    if ( (unsigned int)(v59 + 1) <= 1 )
                      goto LABEL_124;
                    if ( v59 >= 0 )
                    {
                      v60 = (_DWORD *)(*(_QWORD *)(v52 + 184) + 24LL * (unsigned int)v59);
                      goto LABEL_71;
                    }
                    v159 = (unsigned int)(-2 - v59);
                    v286 = -2 - v59;
                    v160 = *(_QWORD *)(*(_QWORD *)(v52 + 320) + 8LL * ((unsigned int)v159 >> 6));
                    if ( _bittest64(&v160, v159) )
                    {
                      v297 = (_QWORD *)(*(_QWORD *)(v52 + 272) + 8 * ((unsigned __int64)(int)v159 >> 5));
                      if ( *v297 )
                      {
                        v60 = (_DWORD *)(*v297 + 24LL * ((-2 - (_BYTE)v59) & 0x1F));
LABEL_71:
                        if ( v60 )
                        {
                          v26 = (unsigned int)v58 - (*v60 & 0x7FFFFFFF);
LABEL_73:
                          if ( (_DWORD)v25 == v59 )
                          {
                            v289 = v26;
                            v316.m128i_i8[0] = 0;
                            v61 = sub_FFC570(v52, (unsigned int)v25, &v316);
                            if ( !v316.m128i_i8[0] )
                            {
                              v26 = v289;
                              if ( v57 != v289 )
                              {
                                v62 = *(_BYTE *)(v61 + v57);
                                if ( v62 <= 0x20u )
                                {
                                  v63 = 0;
                                  while ( 1 )
                                  {
                                    v25 = 1LL << v62;
                                    if ( ((1LL << v62) & 0x100001A00LL) != 0 )
                                      goto LABEL_81;
                                    if ( (v25 & 0x2400) == 0 || v63 == 1 )
                                      goto LABEL_28;
                                    if ( ++v57 == v289 )
                                      goto LABEL_88;
                                    v64 = *(_BYTE *)(v61 + v57);
                                    LOBYTE(v25) = v64 == 13;
                                    if ( (v64 == 13 || v64 == 10) && v64 != v62 )
                                      break;
                                    v62 = *(_BYTE *)(v61 + v57);
                                    v63 = 1;
LABEL_83:
                                    if ( v62 > 0x20u )
                                      goto LABEL_28;
                                  }
                                  v63 = 1;
LABEL_81:
                                  if ( ++v57 == v289 )
                                    goto LABEL_88;
                                  v62 = *(_BYTE *)(v61 + v57);
                                  goto LABEL_83;
                                }
                                goto LABEL_28;
                              }
LABEL_88:
                              sub_EAE4B0(&v316, *v11, ((unsigned __int64)v10->m128i_u32[1] << 32) | *v27, v277, 1);
                              v68 = *((unsigned int *)v11 + 6);
                              v69 = (int *)v11[1];
                              if ( !(_DWORD)v68 )
                                goto LABEL_321;
                              v66 = (unsigned int)(v68 - 1);
                              v70 = v66 & v276;
                              v71 = &v69[14 * ((unsigned int)v66 & v276)];
                              v72 = *v71;
                              if ( *v71 == v14 )
                              {
LABEL_90:
                                result = *(__m128i **)(std::_Rb_tree_decrement() + 40);
                                *result = _mm_load_si128(&v316);
                                result[1] = _mm_load_si128(&v317);
                                result[2].m128i_i8[0] = v318;
                                return result;
                              }
                              v67 = 1;
                              v204 = 0;
                              if ( !v72 )
                                goto LABEL_297;
                              while ( 1 )
                              {
                                if ( !v204 && v72 == -1 )
                                  v204 = (__int64)v71;
                                v70 = v66 & (v67 + v70);
                                v71 = &v69[14 * v70];
                                v72 = *v71;
                                if ( *v71 == v14 )
                                  goto LABEL_90;
                                if ( !v72 )
                                  break;
                                v67 = (unsigned int)(v67 + 1);
                              }
                              if ( !v204 )
LABEL_297:
                                v204 = (__int64)v71;
                              v65 = *((unsigned int *)v11 + 4);
                              v205 = v65 + 1;
                              if ( 4 * ((int)v65 + 1) < (unsigned int)(3 * v68) )
                              {
                                if ( (int)v68 - *((_DWORD *)v11 + 5) - v205 > (unsigned int)v68 >> 3 )
                                {
LABEL_300:
                                  *((_DWORD *)v11 + 4) = v205;
                                  if ( *(_DWORD *)v204 )
                                    --*((_DWORD *)v11 + 5);
                                  *(_DWORD *)v204 = v14;
                                  *(_DWORD *)(v204 + 16) = 0;
                                  *(_QWORD *)(v204 + 24) = 0;
                                  *(_QWORD *)(v204 + 32) = v204 + 16;
                                  *(_QWORD *)(v204 + 40) = v204 + 16;
                                  *(_QWORD *)(v204 + 48) = 0;
                                  goto LABEL_90;
                                }
                                v227 = (((((((((v66 | (v66 >> 1)) >> 2) | v66 | (v66 >> 1)) >> 4)
                                          | ((v66 | (v66 >> 1)) >> 2)
                                          | v66
                                          | (v66 >> 1)) >> 8)
                                        | ((((v66 | (v66 >> 1)) >> 2) | v66 | (v66 >> 1)) >> 4)
                                        | ((v66 | (v66 >> 1)) >> 2)
                                        | v66
                                        | (v66 >> 1)) >> 16)
                                      | ((((((v66 | (v66 >> 1)) >> 2) | v66 | (v66 >> 1)) >> 4)
                                        | ((v66 | (v66 >> 1)) >> 2)
                                        | v66
                                        | (v66 >> 1)) >> 8)
                                      | ((((v66 | (v66 >> 1)) >> 2) | v66 | (v66 >> 1)) >> 4)
                                      | ((v66 | (v66 >> 1)) >> 2)
                                      | v66
                                      | (v66 >> 1))
                                     + 1;
                                if ( (unsigned int)v227 < 0x40 )
                                  LODWORD(v227) = 64;
                                *((_DWORD *)v11 + 6) = v227;
                                v228 = (_DWORD *)sub_220C370(56LL * (unsigned int)v227, 8, 64, v65, v66, v67);
                                v11[1] = v228;
                                if ( v69 )
                                {
                                  v229 = *((unsigned int *)v11 + 6);
                                  v11[2] = 0;
                                  for ( i = &v228[14 * v229]; i != v228; v228 += 14 )
                                    *v228 = 0;
                                  v231 = v69;
                                  v232 = &v69[14 * v68];
                                  do
                                  {
                                    v233 = *v231;
                                    if ( (unsigned int)(*v231 + 1) > 1 )
                                    {
                                      v234 = *((_DWORD *)v11 + 6);
                                      if ( !v234 )
                                      {
                                        dword_0 = *v231;
                                        BUG();
                                      }
                                      v235 = v234 - 1;
                                      v236 = v11[1];
                                      LODWORD(v237) = v233 & v235;
                                      v238 = (int *)(v236 + 56LL * (v233 & v235));
                                      v239 = *v238;
                                      if ( *v238 != v233 )
                                      {
                                        v272 = 1;
                                        v273 = nullptr;
                                        if ( v239 )
                                        {
                                          while ( 1 )
                                          {
                                            if ( v239 == -1 && !v273 )
                                              v273 = v238;
                                            v237 = v235 & ((_DWORD)v237 + v272);
                                            v238 = (int *)(v236 + 56 * v237);
                                            v239 = *v238;
                                            if ( v233 == *v238 )
                                              break;
                                            if ( !v239 )
                                            {
                                              if ( v273 )
                                                v238 = v273;
                                              break;
                                            }
                                            ++v272;
                                          }
                                        }
                                      }
                                      v240 = *((_QWORD *)v231 + 3);
                                      *v238 = *v231;
                                      v241 = v238 + 4;
                                      if ( v240 )
                                      {
                                        v242 = v231[4];
                                        *((_QWORD *)v238 + 3) = v240;
                                        v238[4] = v242;
                                        *((_QWORD *)v238 + 4) = *((_QWORD *)v231 + 4);
                                        *((_QWORD *)v238 + 5) = *((_QWORD *)v231 + 5);
                                        *(_QWORD *)(v240 + 8) = v241;
                                        *((_QWORD *)v238 + 6) = *((_QWORD *)v231 + 6);
                                        *((_QWORD *)v231 + 3) = 0;
                                        *((_QWORD *)v231 + 4) = v231 + 4;
                                        *((_QWORD *)v231 + 5) = v231 + 4;
                                        *((_QWORD *)v231 + 6) = 0;
                                        ++*((_DWORD *)v11 + 4);
                                      }
                                      else
                                      {
                                        *((_QWORD *)v238 + 3) = 0;
                                        *((_QWORD *)v238 + 4) = v241;
                                        *((_QWORD *)v238 + 5) = v241;
                                        v262 = *((_QWORD **)v231 + 3);
                                        v238[4] = 0;
                                        *((_QWORD *)v238 + 6) = 0;
                                        ++*((_DWORD *)v11 + 4);
                                        if ( v262 )
                                        {
                                          do
                                          {
                                            sub_A66C30(v231 + 2, v262[3]);
                                            v263 = (_QWORD *)v262[2];
                                            operator delete(v262);
                                            v262 = v263;
                                          }
                                          while ( v263 );
                                        }
                                      }
                                    }
                                    v231 += 14;
                                  }
                                  while ( v232 != v231 );
                                  operator delete();
                                }
                                else
                                {
                                  v268 = *((unsigned int *)v11 + 6);
                                  v11[2] = 0;
                                  for ( j = &v228[14 * v268]; j != v228; v228 += 14 )
                                    *v228 = 0;
                                }
                                v249 = *((_DWORD *)v11 + 6);
                                if ( v249 )
                                {
                                  v250 = v249 - 1;
                                  v245 = 0;
                                  v251 = 1;
                                  for ( k = v250 & v276; ; k = v250 & v275 )
                                  {
                                    v204 = v11[1] + 56LL * k;
                                    v253 = *(_DWORD *)v204;
                                    if ( v14 == *(_DWORD *)v204 )
                                      break;
                                    if ( !v253 )
                                      goto LABEL_400;
                                    if ( v245 || v253 != -1 )
                                      v204 = v245;
                                    v275 = v251 + k;
                                    v245 = v204;
                                    ++v251;
                                  }
                                  v205 = *((_DWORD *)v11 + 4) + 1;
                                  goto LABEL_300;
                                }
                              }
                              else
                              {
LABEL_321:
                                v210 = (((((((unsigned int)(2 * v68 - 1)
                                           | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
                                         | (unsigned int)(2 * v68 - 1)
                                         | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 4)
                                       | (((unsigned int)(2 * v68 - 1)
                                         | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
                                       | (unsigned int)(2 * v68 - 1)
                                       | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 8)
                                     | (((((unsigned int)(2 * v68 - 1)
                                         | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
                                       | (unsigned int)(2 * v68 - 1)
                                       | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 4)
                                     | (((unsigned int)(2 * v68 - 1)
                                       | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1)) >> 2)
                                     | (unsigned int)(2 * v68 - 1)
                                     | ((unsigned __int64)(unsigned int)(2 * v68 - 1) >> 1);
                                v211 = ((v210 >> 16) | v210) + 1;
                                if ( (unsigned int)v211 < 0x40 )
                                  LODWORD(v211) = 64;
                                *((_DWORD *)v11 + 6) = v211;
                                v212 = (_DWORD *)sub_220C370(56LL * (unsigned int)v211, 8, 64, v65, v66, v67);
                                v11[1] = v212;
                                if ( v69 )
                                {
                                  v213 = *((unsigned int *)v11 + 6);
                                  v11[2] = 0;
                                  for ( m = &v212[14 * v213]; m != v212; v212 += 14 )
                                    *v212 = 0;
                                  v215 = v69;
                                  if ( v69 != &v69[14 * v68] )
                                  {
                                    v216 = &v69[14 * v68];
                                    do
                                    {
                                      v217 = *v215;
                                      if ( (unsigned int)(*v215 + 1) > 1 )
                                      {
                                        v218 = *((_DWORD *)v11 + 6);
                                        if ( !v218 )
                                        {
                                          dword_0 = *v215;
                                          BUG();
                                        }
                                        v219 = v218 - 1;
                                        v220 = v11[1];
                                        LODWORD(v221) = v217 & (v218 - 1);
                                        v222 = (int *)(v220 + 56LL * (unsigned int)v221);
                                        v223 = *v222;
                                        if ( *v222 != v217 )
                                        {
                                          v270 = 1;
                                          v271 = nullptr;
                                          if ( v223 )
                                          {
                                            while ( 1 )
                                            {
                                              if ( v223 == -1 && !v271 )
                                                v271 = v222;
                                              v221 = v219 & (unsigned int)(v221 + v270);
                                              v222 = (int *)(v220 + 56 * v221);
                                              v223 = *v222;
                                              if ( v217 == *v222 )
                                                break;
                                              if ( !v223 )
                                              {
                                                if ( v271 )
                                                  v222 = v271;
                                                break;
                                              }
                                              ++v270;
                                            }
                                          }
                                        }
                                        v224 = *((_QWORD *)v215 + 3);
                                        *v222 = *v215;
                                        v225 = v222 + 4;
                                        if ( v224 )
                                        {
                                          v226 = v215[4];
                                          *((_QWORD *)v222 + 3) = v224;
                                          v222[4] = v226;
                                          *((_QWORD *)v222 + 4) = *((_QWORD *)v215 + 4);
                                          *((_QWORD *)v222 + 5) = *((_QWORD *)v215 + 5);
                                          *(_QWORD *)(v224 + 8) = v225;
                                          *((_QWORD *)v222 + 6) = *((_QWORD *)v215 + 6);
                                          *((_QWORD *)v215 + 3) = 0;
                                          *((_QWORD *)v215 + 4) = v215 + 4;
                                          *((_QWORD *)v215 + 5) = v215 + 4;
                                          *((_QWORD *)v215 + 6) = 0;
                                          ++*((_DWORD *)v11 + 4);
                                        }
                                        else
                                        {
                                          *((_QWORD *)v222 + 3) = 0;
                                          *((_QWORD *)v222 + 4) = v225;
                                          *((_QWORD *)v222 + 5) = v225;
                                          v264 = *((_QWORD **)v215 + 3);
                                          v222[4] = 0;
                                          *((_QWORD *)v222 + 6) = 0;
                                          ++*((_DWORD *)v11 + 4);
                                          if ( v264 )
                                          {
                                            do
                                            {
                                              sub_A66C30(v215 + 2, v264[3]);
                                              v265 = (_QWORD *)v264[2];
                                              operator delete(v264);
                                              v264 = v265;
                                            }
                                            while ( v265 );
                                          }
                                        }
                                      }
                                      v215 += 14;
                                    }
                                    while ( v216 != v215 );
                                  }
                                  operator delete();
                                }
                                else
                                {
                                  v266 = *((unsigned int *)v11 + 6);
                                  v11[2] = 0;
                                  for ( n = &v212[14 * v266]; n != v212; v212 += 14 )
                                    *v212 = 0;
                                }
                                v243 = *((_DWORD *)v11 + 6);
                                if ( v243 )
                                {
                                  v244 = v243 - 1;
                                  v245 = 0;
                                  v246 = 1;
                                  for ( ii = v244 & v276; ; ii = v244 & v274 )
                                  {
                                    v204 = v11[1] + 56LL * ii;
                                    v248 = *(_DWORD *)v204;
                                    if ( v14 == *(_DWORD *)v204 )
                                    {
                                      v205 = *((_DWORD *)v11 + 4) + 1;
                                      goto LABEL_300;
                                    }
                                    if ( !v248 )
                                      break;
                                    if ( v245 || v248 != -1 )
                                      v204 = v245;
                                    v274 = v246 + ii;
                                    v245 = v204;
                                    ++v246;
                                  }
LABEL_400:
                                  if ( v245 )
                                    v204 = v245;
                                  v205 = *((_DWORD *)v11 + 4) + 1;
                                  goto LABEL_300;
                                }
                              }
                              ++*((_DWORD *)v11 + 4);
                              BUG();
                            }
                          }
LABEL_28:
                          v28 = *v9;
                          v9[10] += 40LL;
                          v29 = (v28 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                          if ( v9[1] >= v29 + 40 && v28 )
                          {
                            *v9 = v29 + 40;
                            v30 = (__m128i *)((v28 + 15) & 0xFFFFFFFFFFFFFFF0LL);
                          }
                          else
                          {
                            v30 = (__m128i *)sub_962430((__int64)v9, 40, 40, 4, v25, v26);
                          }
                          v31 = (int *)v11[1];
                          *v30 = _mm_loadu_si128(v10);
                          v30[1] = _mm_loadu_si128(v10 + 1);
                          v30[2].m128i_i64[0] = v10[2].m128i_i64[0];
                          v32 = *((unsigned int *)v11 + 6);
                          if ( !(_DWORD)v32 )
                            goto LABEL_151;
                          v33 = (unsigned int)(v32 - 1);
                          v34 = v33 & v276;
                          v35 = (__m128i *)&v31[14 * ((unsigned int)v33 & v276)];
                          v36 = v35->m128i_i32[0];
                          if ( v35->m128i_i32[0] == v14 )
                          {
LABEL_33:
                            v37 = v35 + 1;
                            v38 = &v35->m128i_i64[1];
                            v39 = (__m128i *)v35[1].m128i_i64[1];
                            result = v37;
                            if ( v39 )
                            {
                              do
                              {
                                while ( v39[2].m128i_i32[0] >= v315 )
                                {
                                  result = v39;
                                  v39 = (__m128i *)v39[1].m128i_i64[0];
                                  if ( !v39 )
                                    goto LABEL_38;
                                }
                                v39 = (__m128i *)v39[1].m128i_i64[1];
                              }
                              while ( v39 );
LABEL_38:
                              if ( v37 != result && v315 >= result[2].m128i_i32[0] )
                                goto LABEL_40;
                            }
                            goto LABEL_47;
                          }
                          v41 = 1;
                          v42 = nullptr;
                          if ( v36 )
                          {
                            while ( 1 )
                            {
                              if ( !v42 && v36 == -1 )
                                v42 = v35;
                              v29 = (unsigned int)(v41 + 1);
                              v34 = v33 & (v41 + v34);
                              v35 = (__m128i *)&v31[14 * v34];
                              v36 = v35->m128i_i32[0];
                              if ( v14 == v35->m128i_i32[0] )
                                goto LABEL_33;
                              if ( !v36 )
                                break;
                              ++v41;
                            }
                            if ( v42 )
                              v35 = v42;
                          }
                          v43 = *((_DWORD *)v11 + 4) + 1;
                          v26 = (unsigned int)(4 * v43);
                          if ( (unsigned int)v26 < 3 * (int)v32 )
                          {
                            v44 = (unsigned int)v32 >> 3;
                            if ( (int)v32 - *((_DWORD *)v11 + 5) - v43 > (unsigned int)v44 )
                            {
LABEL_44:
                              *((_DWORD *)v11 + 4) = v43;
                              if ( v35->m128i_i32[0] )
                                --*((_DWORD *)v11 + 5);
                              result = v35 + 1;
                              v35->m128i_i32[0] = v14;
                              v38 = &v35->m128i_i64[1];
                              v35[1].m128i_i32[0] = 0;
                              v35[1].m128i_i64[1] = 0;
                              v35[2].m128i_i64[0] = (__int64)v35[1].m128i_i64;
                              v35[2].m128i_i64[1] = (__int64)v35[1].m128i_i64;
                              v35[3].m128i_i64[0] = 0;
LABEL_47:
                              v316.m128i_i64[0] = (__int64)&v315;
                              result = (__m128i *)sub_EADE50(v38, result, &v316);
LABEL_40:
                              result[2].m128i_i64[1] = (__int64)v30;
                              return result;
                            }
                            v143 = (v33 >> 1) | v33 | (((v33 >> 1) | v33) >> 2);
                            v144 = ((((((v143 >> 4) | v143) >> 8) | (v143 >> 4) | v143) >> 16)
                                  | (((v143 >> 4) | v143) >> 8)
                                  | (v143 >> 4)
                                  | v143)
                                 + 1;
                            if ( (unsigned int)v144 < 0x40 )
                              LODWORD(v144) = 64;
                            *((_DWORD *)v11 + 6) = v144;
                            v145 = (_DWORD *)sub_220C370(56LL * (unsigned int)v144, 8, 64, v29, v25, v44);
                            v11[1] = v145;
                            if ( v31 )
                            {
                              v146 = *((unsigned int *)v11 + 6);
                              v11[2] = 0;
                              for ( jj = &v145[14 * v146]; jj != v145; v145 += 14 )
                                *v145 = 0;
                              v285 = v14;
                              v148 = &v31[14 * v32];
                              v296 = v30;
                              do
                              {
                                v149 = *v31;
                                if ( (unsigned int)(*v31 + 1) > 1 )
                                {
                                  v150 = *((_DWORD *)v11 + 6);
                                  if ( !v150 )
                                  {
                                    dword_0 = *v31;
                                    BUG();
                                  }
                                  v151 = v150 - 1;
                                  v152 = v11[1];
                                  v153 = (v150 - 1) & v149;
                                  v154 = (int *)(v152 + 56LL * v153);
                                  v155 = *v154;
                                  if ( *v154 != v149 )
                                  {
                                    v208 = 1;
                                    v209 = nullptr;
                                    if ( v155 )
                                    {
                                      while ( 1 )
                                      {
                                        if ( v155 == -1 && !v209 )
                                          v209 = v154;
                                        v153 = v151 & (v208 + v153);
                                        v154 = (int *)(v152 + 56LL * v153);
                                        v155 = *v154;
                                        if ( v149 == *v154 )
                                          break;
                                        if ( !v155 )
                                        {
                                          if ( v209 )
                                            v154 = v209;
                                          break;
                                        }
                                        ++v208;
                                      }
                                    }
                                  }
                                  v156 = v154 + 4;
                                  *v154 = *v31;
                                  v157 = *((_QWORD *)v31 + 3);
                                  if ( v157 )
                                  {
                                    v158 = v31[4];
                                    *((_QWORD *)v154 + 3) = v157;
                                    v154[4] = v158;
                                    *((_QWORD *)v154 + 4) = *((_QWORD *)v31 + 4);
                                    *((_QWORD *)v154 + 5) = *((_QWORD *)v31 + 5);
                                    *(_QWORD *)(v157 + 8) = v156;
                                    *((_QWORD *)v154 + 6) = *((_QWORD *)v31 + 6);
                                    *((_QWORD *)v31 + 3) = 0;
                                    *((_QWORD *)v31 + 4) = v31 + 4;
                                    *((_QWORD *)v31 + 5) = v31 + 4;
                                    *((_QWORD *)v31 + 6) = 0;
                                    ++*((_DWORD *)v11 + 4);
                                  }
                                  else
                                  {
                                    *((_QWORD *)v154 + 3) = 0;
                                    *((_QWORD *)v154 + 4) = v156;
                                    *((_QWORD *)v154 + 5) = v156;
                                    v188 = *((_QWORD **)v31 + 3);
                                    v154[4] = 0;
                                    *((_QWORD *)v154 + 6) = 0;
                                    ++*((_DWORD *)v11 + 4);
                                    if ( v188 )
                                    {
                                      do
                                      {
                                        sub_A66C30(v31 + 2, v188[3]);
                                        v189 = (_QWORD *)v188[2];
                                        operator delete(v188);
                                        v188 = v189;
                                      }
                                      while ( v189 );
                                    }
                                  }
                                }
                                v31 += 14;
                              }
                              while ( v148 != v31 );
                              v14 = v285;
                              v30 = v296;
                              operator delete();
                              v145 = (_DWORD *)v11[1];
                              v173 = *((_DWORD *)v11 + 6);
                              v43 = *((_DWORD *)v11 + 4) + 1;
                            }
                            else
                            {
                              v193 = *((unsigned int *)v11 + 6);
                              v11[2] = 0;
                              v173 = v193;
                              v194 = &v145[14 * v193];
                              if ( v145 != v194 )
                              {
                                v195 = v145;
                                do
                                {
                                  *v195 = 0;
                                  v195 += 14;
                                }
                                while ( v194 != v195 );
                              }
                              v43 = 1;
                            }
                            if ( v173 )
                            {
                              v174 = v173 - 1;
                              v175 = v174 & v276;
                              v35 = (__m128i *)&v145[14 * (v174 & v276)];
                              v176 = v35->m128i_i32[0];
                              if ( v35->m128i_i32[0] != v14 )
                              {
                                v177 = 1;
                                v170 = nullptr;
                                if ( v176 )
                                {
                                  while ( 1 )
                                  {
                                    if ( v176 == -1 && !v170 )
                                      v170 = v35;
                                    v175 = v174 & (v177 + v175);
                                    v35 = (__m128i *)&v145[14 * v175];
                                    v176 = v35->m128i_i32[0];
                                    if ( v14 == v35->m128i_i32[0] )
                                      break;
                                    if ( !v176 )
                                      goto LABEL_212;
                                    ++v177;
                                  }
                                }
                              }
                              goto LABEL_44;
                            }
                          }
                          else
                          {
LABEL_151:
                            v123 = (((((((unsigned int)(2 * v32 - 1)
                                       | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                                     | (unsigned int)(2 * v32 - 1)
                                     | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
                                   | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                                   | (unsigned int)(2 * v32 - 1)
                                   | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 8)
                                 | (((((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                                   | (unsigned int)(2 * v32 - 1)
                                   | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 4)
                                 | (((unsigned int)(2 * v32 - 1) | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1)) >> 2)
                                 | (unsigned int)(2 * v32 - 1)
                                 | ((unsigned __int64)(unsigned int)(2 * v32 - 1) >> 1);
                            v124 = ((v123 >> 16) | v123) + 1;
                            if ( (unsigned int)v124 < 0x40 )
                              LODWORD(v124) = 64;
                            *((_DWORD *)v11 + 6) = v124;
                            v125 = (_DWORD *)sub_220C370(56LL * (unsigned int)v124, 8, 64, v29, v25, v26);
                            v11[1] = v125;
                            if ( v31 )
                            {
                              v126 = *((unsigned int *)v11 + 6);
                              v11[2] = 0;
                              for ( kk = &v125[14 * v126]; kk != v125; v125 += 14 )
                                *v125 = 0;
                              if ( v31 != &v31[14 * v32] )
                              {
                                v284 = v14;
                                v128 = &v31[14 * v32];
                                v295 = v30;
                                do
                                {
                                  v129 = *v31;
                                  if ( (unsigned int)(*v31 + 1) > 1 )
                                  {
                                    v130 = *((_DWORD *)v11 + 6);
                                    if ( !v130 )
                                    {
                                      dword_0 = *v31;
                                      BUG();
                                    }
                                    v131 = v130 - 1;
                                    v132 = v11[1];
                                    v133 = v129 & (v130 - 1);
                                    v134 = (int *)(v132 + 56LL * v133);
                                    v135 = *v134;
                                    if ( *v134 != v129 )
                                    {
                                      v206 = 1;
                                      v207 = nullptr;
                                      if ( v135 )
                                      {
                                        while ( 1 )
                                        {
                                          if ( v135 == -1 && !v207 )
                                            v207 = v134;
                                          v133 = v131 & (v206 + v133);
                                          v134 = (int *)(v132 + 56LL * v133);
                                          v135 = *v134;
                                          if ( v129 == *v134 )
                                            break;
                                          if ( !v135 )
                                          {
                                            if ( v207 )
                                              v134 = v207;
                                            break;
                                          }
                                          ++v206;
                                        }
                                      }
                                    }
                                    v136 = v134 + 4;
                                    *v134 = *v31;
                                    v137 = *((_QWORD *)v31 + 3);
                                    if ( v137 )
                                    {
                                      v138 = v31[4];
                                      *((_QWORD *)v134 + 3) = v137;
                                      v134[4] = v138;
                                      *((_QWORD *)v134 + 4) = *((_QWORD *)v31 + 4);
                                      *((_QWORD *)v134 + 5) = *((_QWORD *)v31 + 5);
                                      *(_QWORD *)(v137 + 8) = v136;
                                      *((_QWORD *)v134 + 6) = *((_QWORD *)v31 + 6);
                                      *((_QWORD *)v31 + 3) = 0;
                                      *((_QWORD *)v31 + 4) = v31 + 4;
                                      *((_QWORD *)v31 + 5) = v31 + 4;
                                      *((_QWORD *)v31 + 6) = 0;
                                      ++*((_DWORD *)v11 + 4);
                                    }
                                    else
                                    {
                                      *((_QWORD *)v134 + 3) = 0;
                                      *((_QWORD *)v134 + 4) = v136;
                                      *((_QWORD *)v134 + 5) = v136;
                                      v183 = *((_QWORD **)v31 + 3);
                                      v134[4] = 0;
                                      *((_QWORD *)v134 + 6) = 0;
                                      ++*((_DWORD *)v11 + 4);
                                      if ( v183 )
                                      {
                                        do
                                        {
                                          sub_A66C30(v31 + 2, v183[3]);
                                          v184 = (_QWORD *)v183[2];
                                          operator delete(v183);
                                          v183 = v184;
                                        }
                                        while ( v184 );
                                      }
                                    }
                                  }
                                  v31 += 14;
                                }
                                while ( v128 != v31 );
                                v14 = v284;
                                v30 = v295;
                              }
                              operator delete();
                              v125 = (_DWORD *)v11[1];
                              v165 = *((_DWORD *)v11 + 6);
                              v43 = *((_DWORD *)v11 + 4) + 1;
                            }
                            else
                            {
                              v190 = *((unsigned int *)v11 + 6);
                              v11[2] = 0;
                              v165 = v190;
                              v191 = &v125[14 * v190];
                              if ( v125 != v191 )
                              {
                                v192 = v125;
                                do
                                {
                                  *v192 = 0;
                                  v192 += 14;
                                }
                                while ( v191 != v192 );
                              }
                              v43 = 1;
                            }
                            if ( v165 )
                            {
                              v166 = v165 - 1;
                              v167 = v166 & v276;
                              v35 = (__m128i *)&v125[14 * (v166 & v276)];
                              v168 = v35->m128i_i32[0];
                              if ( v14 != v35->m128i_i32[0] )
                              {
                                v169 = 1;
                                v170 = nullptr;
                                if ( v168 )
                                {
                                  while ( 1 )
                                  {
                                    if ( !v170 && v168 == -1 )
                                      v170 = v35;
                                    v167 = v166 & (v169 + v167);
                                    v35 = (__m128i *)&v125[14 * v167];
                                    v168 = v35->m128i_i32[0];
                                    if ( v14 == v35->m128i_i32[0] )
                                      break;
                                    if ( !v168 )
                                    {
LABEL_212:
                                      if ( v170 )
                                        v35 = v170;
                                      goto LABEL_44;
                                    }
                                    ++v169;
                                  }
                                }
                              }
                              goto LABEL_44;
                            }
                          }
                          ++*((_DWORD *)v11 + 4);
                          BUG();
                        }
LABEL_124:
                        v26 = 0;
                        v59 = 0;
                        goto LABEL_73;
                      }
                      v254 = (__int64 *)(*(_QWORD *)(v52 + 288) & 0xFFFFFFFFFFFFFFF8LL);
                      v255 = *v254;
                      v254[10] += 768;
                      v256 = (_DWORD *)((v255 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v254[1] >= (unsigned __int64)(v256 + 192) && v255 )
                      {
                        *v254 = (__int64)(v256 + 192);
                      }
                      else
                      {
                        v314 = v25;
                        v313 = v59;
                        v311 = v58;
                        v306 = v52;
                        v256 = (_DWORD *)sub_962430((__int64)v254, 768, 768, 3, v25, v58);
                        v25 = v314;
                        v59 = v313;
                        LODWORD(v58) = v311;
                        v52 = v306;
                      }
                      v257 = v256 + 192;
                      *v297 = v256;
                      do
                      {
                        *v256 = 0;
                        v256 += 6;
                        *((_OWORD *)v256 - 1) = 0;
                        *((_QWORD *)v256 - 1) = 0;
                      }
                      while ( v256 != v257 );
                      v84 = v316.m128i_i8[0];
                      v60 = (_DWORD *)(*v297 + 24LL * (v286 & 0x1F));
                    }
                    else
                    {
                      v307 = v25;
                      v302 = v59;
                      v292 = v58;
                      v283 = v52;
                      v60 = (_DWORD *)sub_FFBBF0(v52, (unsigned int)v159, &v316);
                      v84 = v316.m128i_i8[0];
                      v52 = v283;
                      LODWORD(v58) = v292;
                      v59 = v302;
                      v25 = v307;
                    }
                    if ( v84 )
                      goto LABEL_124;
                    goto LABEL_71;
                  }
LABEL_121:
                  v57 = 0;
                  v25 = 0;
                  goto LABEL_65;
                }
                v258 = (__int64 *)(*(_QWORD *)(v52 + 288) & 0xFFFFFFFFFFFFFFF8LL);
                v259 = *v258;
                v258[10] += 768;
                v260 = (_DWORD *)((v259 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                if ( v258[1] >= (unsigned __int64)(v260 + 192) && v259 )
                {
                  *v258 = (__int64)(v260 + 192);
                }
                else
                {
                  v312 = v25;
                  v310 = -2 - v25;
                  v305 = v53;
                  v299 = v52;
                  v260 = (_DWORD *)sub_962430((__int64)v258, 768, 768, 3, v25, v53);
                  v25 = v312;
                  LOBYTE(v80) = v310;
                  LODWORD(v53) = v305;
                  v52 = v299;
                }
                v261 = v260 + 192;
                *v280 = v260;
                do
                {
                  *v260 = 0;
                  v260 += 6;
                  *((_OWORD *)v260 - 1) = 0;
                  *((_QWORD *)v260 - 1) = 0;
                }
                while ( v260 != v261 );
                v83 = v316.m128i_i8[0];
                v56 = (_DWORD *)(*v280 + 24 * (v80 & 0x1F));
              }
              else
              {
                v301 = v25;
                v291 = v53;
                v282 = v52;
                v56 = (_DWORD *)sub_FFBBF0(v52, (unsigned int)v80, &v316);
                v83 = v316.m128i_i8[0];
                v52 = v282;
                LODWORD(v53) = v291;
                v25 = v301;
              }
              if ( v83 )
                goto LABEL_121;
              goto LABEL_63;
            }
LABEL_97:
            v76 = *v9;
            v9[10] += 40LL;
            v77 = (__m128i *)((v76 + 15) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v9[1] >= (unsigned __int64)&v77[2].m128i_u64[1] && v76 )
              *v9 = (char *)v77 + 40;
            else
              v77 = (__m128i *)sub_962430((__int64)v9, 40, 40, 4, a5, a6);
            v78 = *((__m128i **)v23 + 2);
            *v77 = _mm_loadu_si128(v10);
            v77[1] = _mm_loadu_si128(v10 + 1);
            v77[2].m128i_i64[0] = v10[2].m128i_i64[0];
            if ( v78 )
            {
              result = v24;
              do
              {
                if ( v78[2].m128i_i32[0] >= v315 )
                {
                  result = v78;
                  v78 = (__m128i *)v78[1].m128i_i64[0];
                }
                else
                {
                  v78 = (__m128i *)v78[1].m128i_i64[1];
                }
              }
              while ( v78 );
              if ( result != v24 && v315 >= result[2].m128i_i32[0] )
                goto LABEL_109;
            }
            else
            {
              result = v24;
            }
            v316.m128i_i64[0] = (__int64)&v315;
            result = (__m128i *)sub_EADE50(v23, result, &v316);
LABEL_109:
            result[2].m128i_i64[1] = (__int64)v77;
            return result;
          }
          v73 = 1;
          v74 = nullptr;
          if ( v22 )
          {
            while ( 1 )
            {
              if ( v22 == -1 && !v74 )
                v74 = v21;
              v7 = (unsigned int)(v73 + 1);
              a6 = (unsigned int)(v20 + v73);
              v20 = v19 & a6;
              v21 = (__m128i *)&v18[14 * ((unsigned int)v19 & (unsigned int)a6)];
              v22 = v21->m128i_i32[0];
              if ( v21->m128i_i32[0] == v14 )
                goto LABEL_24;
              if ( !v22 )
                break;
              v73 = v7;
            }
            if ( v74 )
              v21 = v74;
          }
          v75 = *((_DWORD *)v11 + 4) + 1;
          a6 = (unsigned int)(4 * v75);
          if ( (unsigned int)a6 < 3 * (int)v17 )
          {
            a6 = (unsigned int)v17 >> 3;
            if ( (int)v17 - *((_DWORD *)v11 + 5) - v75 > (unsigned int)a6 )
            {
LABEL_94:
              *((_DWORD *)v11 + 4) = v75;
              if ( v21->m128i_i32[0] )
                --*((_DWORD *)v11 + 5);
              v24 = v21 + 1;
              v21->m128i_i32[0] = v14;
              v23 = &v21->m128i_i32[2];
              v21[1].m128i_i32[0] = 0;
              v21[1].m128i_i64[1] = 0;
              v21[2].m128i_i64[0] = (__int64)v21[1].m128i_i64;
              v21[2].m128i_i64[1] = (__int64)v21[1].m128i_i64;
              v21[3].m128i_i64[0] = 0;
              goto LABEL_97;
            }
            v104 = (v19 >> 1) | v19 | (((v19 >> 1) | v19) >> 2);
            v105 = ((((((v104 >> 4) | v104) >> 8) | (v104 >> 4) | v104) >> 16)
                  | (((v104 >> 4) | v104) >> 8)
                  | (v104 >> 4)
                  | v104)
                 + 1;
            if ( (unsigned int)v105 < 0x40 )
              LODWORD(v105) = 64;
            *((_DWORD *)v11 + 6) = v105;
            v106 = (_DWORD *)sub_220C370(56LL * (unsigned int)v105, 8, 64, v7, a5, a6);
            v11[1] = v106;
            if ( v18 )
            {
              v107 = *((unsigned int *)v11 + 6);
              v11[2] = 0;
              v108 = &v106[14 * v107];
              for ( mm = &v18[14 * v17]; v108 != v106; v106 += 14 )
                *v106 = 0;
              v110 = v18;
              v111 = mm;
              v304 = v10;
              v112 = v110;
              v294 = v14;
              v309 = v9;
              do
              {
                v113 = *v112;
                if ( (unsigned int)(*v112 + 1) > 1 )
                {
                  v114 = *((_DWORD *)v11 + 6);
                  if ( !v114 )
                  {
                    dword_0 = *v112;
                    BUG();
                  }
                  v115 = v114 - 1;
                  v116 = v11[1];
                  v117 = v113 & v115;
                  v118 = (int *)(v116 + 56LL * (v113 & v115));
                  v119 = *v118;
                  if ( v113 != *v118 )
                  {
                    v202 = 1;
                    v203 = nullptr;
                    if ( v119 )
                    {
                      while ( 1 )
                      {
                        if ( !v203 && v119 == -1 )
                          v203 = v118;
                        v117 = v115 & (v202 + v117);
                        v118 = (int *)(v116 + 56LL * v117);
                        v119 = *v118;
                        if ( v113 == *v118 )
                          break;
                        if ( !v119 )
                        {
                          if ( v203 )
                            v118 = v203;
                          break;
                        }
                        ++v202;
                      }
                    }
                  }
                  v120 = v118 + 4;
                  *v118 = *v112;
                  v121 = *((_QWORD *)v112 + 3);
                  if ( v121 )
                  {
                    v122 = v112[4];
                    *((_QWORD *)v118 + 3) = v121;
                    v118[4] = v122;
                    *((_QWORD *)v118 + 4) = *((_QWORD *)v112 + 4);
                    *((_QWORD *)v118 + 5) = *((_QWORD *)v112 + 5);
                    *(_QWORD *)(v121 + 8) = v120;
                    *((_QWORD *)v118 + 6) = *((_QWORD *)v112 + 6);
                    *((_QWORD *)v112 + 3) = 0;
                    *((_QWORD *)v112 + 4) = v112 + 4;
                    *((_QWORD *)v112 + 5) = v112 + 4;
                    *((_QWORD *)v112 + 6) = 0;
                    ++*((_DWORD *)v11 + 4);
                  }
                  else
                  {
                    *((_QWORD *)v118 + 3) = 0;
                    *((_QWORD *)v118 + 4) = v120;
                    *((_QWORD *)v118 + 5) = v120;
                    v178 = *((_QWORD **)v112 + 3);
                    v118[4] = 0;
                    *((_QWORD *)v118 + 6) = 0;
                    ++*((_DWORD *)v11 + 4);
                    if ( v178 )
                    {
                      do
                      {
                        sub_A66C30(v112 + 2, v178[3]);
                        v179 = (_QWORD *)v178[2];
                        operator delete(v178);
                        v178 = v179;
                      }
                      while ( v179 );
                    }
                  }
                }
                v112 += 14;
              }
              while ( v111 != v112 );
              v14 = v294;
              v10 = v304;
              v9 = v309;
              operator delete();
              v106 = (_DWORD *)v11[1];
              v161 = *((_DWORD *)v11 + 6);
              v75 = *((_DWORD *)v11 + 4) + 1;
            }
            else
            {
              v185 = *((unsigned int *)v11 + 6);
              v11[2] = 0;
              v161 = v185;
              v186 = &v106[14 * v185];
              if ( v106 != v186 )
              {
                v187 = v106;
                do
                {
                  *v187 = 0;
                  v187 += 14;
                }
                while ( v186 != v187 );
              }
              v75 = 1;
            }
            if ( v161 )
            {
              v162 = v161 - 1;
              a5 = v162 & (unsigned int)v276;
              v21 = (__m128i *)&v106[14 * a5];
              v163 = v21->m128i_i32[0];
              if ( v21->m128i_i32[0] != v14 )
              {
                v164 = 1;
                a6 = 0;
                if ( v163 )
                {
                  while ( 1 )
                  {
                    if ( v163 == -1 && !a6 )
                      a6 = (__int64)v21;
                    a5 = v162 & (unsigned int)(v164 + a5);
                    v21 = (__m128i *)&v106[14 * (unsigned int)a5];
                    v163 = v21->m128i_i32[0];
                    if ( v21->m128i_i32[0] == v14 )
                      break;
                    if ( !v163 )
                      goto LABEL_174;
                    ++v164;
                  }
                }
              }
              goto LABEL_94;
            }
          }
          else
          {
LABEL_125:
            v85 = (((((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                    | (unsigned int)(2 * v17 - 1)
                    | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
                  | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v17 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 8)
                | (((((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                  | (unsigned int)(2 * v17 - 1)
                  | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 4)
                | (((unsigned int)(2 * v17 - 1) | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1)) >> 2)
                | (unsigned int)(2 * v17 - 1)
                | ((unsigned __int64)(unsigned int)(2 * v17 - 1) >> 1);
            v86 = ((v85 >> 16) | v85) + 1;
            if ( (unsigned int)v86 < 0x40 )
              LODWORD(v86) = 64;
            *((_DWORD *)v11 + 6) = v86;
            v87 = (_DWORD *)sub_220C370(56LL * (unsigned int)v86, 8, 64, v7, a5, a6);
            v11[1] = v87;
            if ( v18 )
            {
              v88 = *((unsigned int *)v11 + 6);
              v11[2] = 0;
              v89 = &v18[14 * v17];
              for ( nn = &v87[14 * v88]; nn != v87; v87 += 14 )
                *v87 = 0;
              v91 = v18;
              if ( v18 != v89 )
              {
                v92 = v89;
                v303 = v10;
                v93 = v91;
                v293 = v14;
                v308 = v9;
                do
                {
                  v94 = *v93;
                  if ( (unsigned int)(*v93 + 1) > 1 )
                  {
                    v95 = *((_DWORD *)v11 + 6);
                    if ( !v95 )
                    {
                      dword_0 = *v93;
                      BUG();
                    }
                    v96 = v95 - 1;
                    v97 = v11[1];
                    v98 = v94 & v96;
                    v99 = (int *)(v97 + 56LL * (v94 & v96));
                    v100 = *v99;
                    if ( v94 != *v99 )
                    {
                      v200 = 1;
                      v201 = nullptr;
                      if ( v100 )
                      {
                        while ( 1 )
                        {
                          if ( !v201 && v100 == -1 )
                            v201 = v99;
                          v98 = v96 & (v200 + v98);
                          v99 = (int *)(v97 + 56LL * v98);
                          v100 = *v99;
                          if ( v94 == *v99 )
                            break;
                          if ( !v100 )
                          {
                            if ( v201 )
                              v99 = v201;
                            break;
                          }
                          ++v200;
                        }
                      }
                    }
                    v101 = v99 + 4;
                    *v99 = *v93;
                    v102 = *((_QWORD *)v93 + 3);
                    if ( v102 )
                    {
                      v103 = v93[4];
                      *((_QWORD *)v99 + 3) = v102;
                      v99[4] = v103;
                      *((_QWORD *)v99 + 4) = *((_QWORD *)v93 + 4);
                      *((_QWORD *)v99 + 5) = *((_QWORD *)v93 + 5);
                      *(_QWORD *)(v102 + 8) = v101;
                      *((_QWORD *)v99 + 6) = *((_QWORD *)v93 + 6);
                      *((_QWORD *)v93 + 3) = 0;
                      *((_QWORD *)v93 + 4) = v93 + 4;
                      *((_QWORD *)v93 + 5) = v93 + 4;
                      *((_QWORD *)v93 + 6) = 0;
                      ++*((_DWORD *)v11 + 4);
                    }
                    else
                    {
                      *((_QWORD *)v99 + 3) = 0;
                      *((_QWORD *)v99 + 4) = v101;
                      *((_QWORD *)v99 + 5) = v101;
                      v171 = *((_QWORD **)v93 + 3);
                      v99[4] = 0;
                      *((_QWORD *)v99 + 6) = 0;
                      ++*((_DWORD *)v11 + 4);
                      if ( v171 )
                      {
                        do
                        {
                          sub_A66C30(v93 + 2, v171[3]);
                          v172 = (_QWORD *)v171[2];
                          operator delete(v171);
                          v171 = v172;
                        }
                        while ( v172 );
                      }
                    }
                  }
                  v93 += 14;
                }
                while ( v92 != v93 );
                v14 = v293;
                v10 = v303;
                v9 = v308;
              }
              operator delete();
              v87 = (_DWORD *)v11[1];
              v139 = *((_DWORD *)v11 + 6);
              v75 = *((_DWORD *)v11 + 4) + 1;
            }
            else
            {
              v180 = *((unsigned int *)v11 + 6);
              v11[2] = 0;
              v139 = v180;
              v181 = &v87[14 * v180];
              if ( v87 != v181 )
              {
                v182 = v87;
                do
                {
                  *v182 = 0;
                  v182 += 14;
                }
                while ( v181 != v182 );
              }
              v75 = 1;
            }
            if ( v139 )
            {
              v140 = v139 - 1;
              a5 = v140 & (unsigned int)v276;
              v21 = (__m128i *)&v87[14 * a5];
              v141 = v21->m128i_i32[0];
              if ( v14 != v21->m128i_i32[0] )
              {
                v142 = 1;
                a6 = 0;
                if ( v141 )
                {
                  while ( 1 )
                  {
                    if ( !a6 && v141 == -1 )
                      a6 = (__int64)v21;
                    a5 = v140 & (unsigned int)(v142 + a5);
                    v21 = (__m128i *)&v87[14 * (unsigned int)a5];
                    v141 = v21->m128i_i32[0];
                    if ( v21->m128i_i32[0] == v14 )
                      break;
                    if ( !v141 )
                    {
LABEL_174:
                      if ( a6 )
                        v21 = (__m128i *)a6;
                      goto LABEL_94;
                    }
                    ++v142;
                  }
                }
              }
              goto LABEL_94;
            }
          }
          ++*((_DWORD *)v11 + 4);
          BUG();
        }
LABEL_51:
        v276 = 0;
        v16 = 0;
        v14 = 0;
        goto LABEL_22;
      }
      v196 = (__int64 *)(*(_QWORD *)(v12 + 288) & 0xFFFFFFFFFFFFFFF8LL);
      v197 = *v196;
      v196[10] += 768;
      v198 = (_DWORD *)((v197 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v196[1] >= (unsigned __int64)(v198 + 192) && v197 )
      {
        *v196 = (__int64)(v198 + 192);
      }
      else
      {
        v298 = v79;
        v198 = (_DWORD *)sub_962430((__int64)v196, 768, 768, 3, a5, v45);
        v79 = v298;
        LOBYTE(v45) = -2 - v14;
      }
      *v79 = v198;
      v199 = v198 + 192;
      do
      {
        *v198 = 0;
        v198 += 6;
        *((_OWORD *)v198 - 1) = 0;
        *((_QWORD *)v198 - 1) = 0;
      }
      while ( v198 != v199 );
      a6 = v45 & 0x1F;
      v47 = v316.m128i_i8[0];
      v7 = 3LL * (unsigned int)a6;
      v15 = (_DWORD *)(*v79 + 24LL * (unsigned int)a6);
    }
    else
    {
      v15 = (_DWORD *)sub_FFBBF0(v12, (unsigned int)v45, &v316);
      v47 = v316.m128i_i8[0];
    }
    if ( v47 )
      goto LABEL_51;
    goto LABEL_20;
  }
  return (__m128i *)nullsub_1526(v8, a2, v6 + 544, v7);
}

