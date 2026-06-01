__int64 __fastcall sub_7762C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __m128i *v6; // rbx
  __int64 v7; // rdx
  __m128i *v8; // r14
  __m128i *v9; // rbp
  __m128i *v10; // r12
  __m128i *v11; // r15
  __m128i *v12; // rdx
  __m128i *v13; // r13
  _DWORD *v14; // rdi
  __int64 v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 *v18; // r8
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  _QWORD *v21; // rdi
  __int64 v22; // r10
  __int64 v23; // rdx
  __m128i *v24; // r13
  _DWORD *v25; // rdi
  __int64 v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // r9
  __int64 *v29; // r8
  __int64 v30; // rdi
  unsigned __int64 v31; // rax
  _QWORD *v32; // rdi
  __int64 v33; // r10
  __int64 v34; // rdx
  _DWORD *v35; // rdi
  __int64 v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // r9
  __int64 *v39; // r8
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  _QWORD *v42; // rdi
  __int64 v43; // r10
  __int64 v44; // rdx
  __m128i *v45; // rbp
  _DWORD *v46; // rdi
  __int64 v47; // rax
  _QWORD *v48; // r8
  __int64 v49; // r10
  __int64 *v50; // r9
  __int64 v51; // rdi
  unsigned __int64 v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // r11
  __int64 v55; // rdx
  __m128i *v56; // r15
  __m128i *v57; // r14
  signed __int64 v58; // rax
  const __m128i *v59; // rsi
  signed __int64 v60; // r14
  bool v61; // zf
  unsigned __int64 v62; // rax
  _QWORD *v63; // r13
  char *v64; // rdi
  _QWORD *v65; // rbp
  _QWORD *v66; // r14
  _QWORD *v67; // rbx
  _QWORD *v68; // rdi
  __int64 v70; // rax
  int v71; // edx
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rax
  int v77; // edx
  const __m128i *v78; // r14
  __m128i *v79; // rbp
  const __m128i *v80; // rbx
  const __m128i *v81; // r13
  _DWORD *v82; // rdi
  __int64 v83; // rax
  _QWORD *v84; // rcx
  __int64 v85; // r9
  __int64 *v86; // r8
  __int64 v87; // rdi
  unsigned __int64 v88; // rax
  _QWORD *v89; // rdi
  __int64 v90; // r10
  __int64 v91; // rdx
  __int8 *v92; // rax
  __int64 v93; // rax
  int v94; // edx
  _DWORD *v95; // rax
  __int64 v96; // rax
  _QWORD *v97; // rbp
  __int64 v98; // r13
  __int64 *v99; // r12
  __int64 v100; // rax
  unsigned __int64 v101; // rdx
  _QWORD *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdi
  _DWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rbp
  __int64 v108; // r13
  __int64 *v109; // r12
  __int64 v110; // rax
  unsigned __int64 v111; // rdx
  _QWORD *v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdi
  __m128i *v115; // rbp
  _DWORD *v116; // rax
  __int64 v117; // rax
  _QWORD *v118; // r12
  __int64 v119; // r13
  __int64 *v120; // rbx
  __int64 v121; // rax
  unsigned __int64 v122; // rdx
  _QWORD *v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rdi
  __int64 v126; // rdi
  int v127; // edx
  __int64 v128; // rdi
  int v129; // edx
  __int64 v130; // rax
  __int64 v131; // rdi
  int v132; // edx
  __int64 v133; // rax
  _QWORD *v134; // r15
  __int64 v135; // rdx
  _QWORD *v136; // r14
  __int64 v137; // rax
  _QWORD *v138; // rbp
  __int64 v139; // rax
  _QWORD *v140; // rdi
  _QWORD *v141; // rbx
  _QWORD *v142; // r13
  _QWORD *v143; // r12
  _QWORD *v144; // rdi
  _QWORD *v145; // rax
  __int64 v146; // rax
  __m128i *v147; // rax
  char *v148; // [rsp+0h] [rbp-F8h]
  _QWORD *v149; // [rsp+0h] [rbp-F8h]
  __m128i *v150; // [rsp+8h] [rbp-F0h]
  __int64 *v151; // [rsp+8h] [rbp-F0h]
  __int64 *v152; // [rsp+8h] [rbp-F0h]
  __int64 v153; // [rsp+8h] [rbp-F0h]
  __int64 v154; // [rsp+8h] [rbp-F0h]
  __int64 v155; // [rsp+8h] [rbp-F0h]
  __m128i *v156; // [rsp+10h] [rbp-E8h]
  __int64 *v157; // [rsp+10h] [rbp-E8h]
  __int64 *v158; // [rsp+10h] [rbp-E8h]
  __int64 *v159; // [rsp+10h] [rbp-E8h]
  _QWORD *v160; // [rsp+10h] [rbp-E8h]
  __int64 *v161; // [rsp+10h] [rbp-E8h]
  __int64 *v162; // [rsp+10h] [rbp-E8h]
  __int64 *v163; // [rsp+10h] [rbp-E8h]
  _QWORD *v164; // [rsp+10h] [rbp-E8h]
  _QWORD *v165; // [rsp+18h] [rbp-E0h]
  _QWORD *v166; // [rsp+18h] [rbp-E0h]
  _QWORD *v167; // [rsp+18h] [rbp-E0h]
  __int64 *v168; // [rsp+18h] [rbp-E0h]
  _QWORD *v169; // [rsp+18h] [rbp-E0h]
  _QWORD *v170; // [rsp+18h] [rbp-E0h]
  _QWORD *v171; // [rsp+18h] [rbp-E0h]
  __int64 *v172; // [rsp+18h] [rbp-E0h]
  __int64 v173; // [rsp+18h] [rbp-E0h]
  _QWORD *v174; // [rsp+20h] [rbp-D8h]
  __int64 v175; // [rsp+20h] [rbp-D8h]
  __int64 v176; // [rsp+20h] [rbp-D8h]
  __int64 v177; // [rsp+20h] [rbp-D8h]
  _QWORD *v178; // [rsp+20h] [rbp-D8h]
  __int64 v179; // [rsp+20h] [rbp-D8h]
  __m128i *dest; // [rsp+28h] [rbp-D0h]
  __int64 v181; // [rsp+30h] [rbp-C8h]
  __int64 v182; // [rsp+30h] [rbp-C8h]
  __int64 v183; // [rsp+30h] [rbp-C8h]
  __int64 v184; // [rsp+30h] [rbp-C8h]
  __int64 v185; // [rsp+38h] [rbp-C0h]
  char *v186; // [rsp+40h] [rbp-B8h]
  __int64 v187; // [rsp+48h] [rbp-B0h]
  __int64 v188; // [rsp+50h] [rbp-A8h]
  _QWORD v189[2]; // [rsp+60h] [rbp-98h] BYREF
  int v190; // [rsp+70h] [rbp-88h]
  _QWORD *v191; // [rsp+78h] [rbp-80h]
  __int64 v192; // [rsp+80h] [rbp-78h]
  unsigned int v193; // [rsp+88h] [rbp-70h]
  __int64 v194; // [rsp+90h] [rbp-68h]
  __int64 v195; // [rsp+98h] [rbp-60h]
  int v196; // [rsp+A0h] [rbp-58h]
  void *ptr; // [rsp+A8h] [rbp-50h]
  __int64 v198; // [rsp+B0h] [rbp-48h]
  _BYTE v199[64]; // [rsp+B8h] [rbp-40h] BYREF

  v190 = 0;
  v189[0] = 0;
  v189[1] = 0;
  v193 = 0;
  v191 = nullptr;
  v192 = 0;
  v196 = 0;
  v194 = 0;
  v195 = 0;
  ptr = v199;
  v198 = 0;
  sub_774200((__int64)v189, a1, 0, 0, a2);
  v2 = *(_QWORD *)(a2 + 24);
  v3 = 48LL * *(unsigned int *)(a2 + 32);
  if ( v2 + v3 != v2 )
  {
    v188 = v2 + v3;
    v4 = *(_QWORD *)(a2 + 24);
    while ( 1 )
    {
      v148 = *(char **)(v4 + 32);
      v186 = &v148[120 * *(unsigned int *)(v4 + 40)];
      if ( v186 != v148 )
        break;
LABEL_107:
      v4 += 48;
      if ( v188 == v4 )
        goto LABEL_108;
    }
    v187 = v4;
    while ( 1 )
    {
      v5 = *((unsigned int *)v148 + 4);
      if ( (unsigned int)v5 > 1 )
        break;
LABEL_105:
      v148 += 120;
      if ( v148 == v186 )
      {
        v4 = v187;
        goto LABEL_107;
      }
    }
    v6 = *((__m128i **)v148 + 1);
    dest = (__m128i *)((char *)v6 + 24 * v5);
    v7 = (__int64)(0xAAAAAAAAAAAAAAABLL * ((24 * v5) >> 3)) >> 2;
    if ( v7 )
    {
      v8 = *((__m128i **)v148 + 1);
      v150 = (__m128i *)((char *)v6 + 72);
      v9 = (__m128i *)((char *)v6 + 24);
      v10 = v6 + 3;
      v11 = &v6[6 * v7];
      do
      {
        v12 = (__m128i *)((char *)v6 + 24 * v5);
        if ( !v8[1].m128i_i64[0] )
          goto LABEL_30;
        if ( 24 * v5 )
        {
          v13 = (__m128i *)((char *)v6 + 24 * v5);
          while ( v8 == v6 )
          {
LABEL_16:
            v6 = (__m128i *)((char *)v6 + 24);
            if ( v13 == v6 )
            {
              v6 = *((__m128i **)v148 + 1);
              v5 = *((unsigned int *)v148 + 4);
LABEL_30:
              v24 = (__m128i *)((char *)v6 + 24 * v5);
              if ( !v8[2].m128i_i64[1] )
                goto LABEL_52;
              if ( !(24 * v5) )
              {
                if ( v8[4].m128i_i64[0] )
                {
                  v12 = v6;
                  goto LABEL_177;
                }
LABEL_75:
                if ( !v8[5].m128i_i64[1] )
                  goto LABEL_97;
                if ( v6 == v24 )
                  goto LABEL_297;
                v156 = v9;
                v45 = v6;
                while ( v150 == v45 )
                {
LABEL_83:
                  v45 = (__m128i *)((char *)v45 + 24);
                  if ( v24 == v45 )
                  {
                    v9 = v156;
                    v6 = *((__m128i **)v148 + 1);
                    v5 = *((unsigned int *)v148 + 4);
                    v24 = (__m128i *)((char *)v6 + 24 * v5);
                    goto LABEL_97;
                  }
                }
                v47 = *(_QWORD *)(sub_79A2E0(v45->m128i_i64[0] + 72) + 16);
                v48 = (_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF8LL);
                if ( (v47 & 4) != 0 )
                  v48 = (_QWORD *)*v48;
                if ( !v48 )
                  BUG();
                v49 = v48[5];
                v50 = (__int64 *)v8[5].m128i_i64[1];
                v51 = *(_QWORD *)(v49 + 96);
                v52 = v51 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v51 & 1) != 0 )
                {
                  if ( !v52 )
                    goto LABEL_81;
                }
                else
                {
                  if ( v52 <= 3 || (v51 & 2) == 0 )
                    goto LABEL_81;
                  v53 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFFCLL);
                  v54 = v53[2275];
                  if ( !v54 )
                  {
                    *(_QWORD *)(v49 + 96) = v49 & 0xFFFFFFFFFFFFFFFALL | 1;
                    goto LABEL_81;
                  }
                  v55 = v53[274];
                  v53[284] += 24LL;
                  v52 = (v55 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v53[275] >= v52 + 24 && v55 )
                  {
                    v53[274] = v52 + 24;
                  }
                  else
                  {
                    v185 = v54;
                    v184 = v49;
                    v178 = v48;
                    v172 = v50;
                    v52 = sub_76D810((__int64)(v53 + 274), 24, 3);
                    v54 = v185;
                    v49 = v184;
                    v48 = v178;
                    v50 = v172;
                  }
                  *(_QWORD *)v52 = v54;
                  *(_DWORD *)(v52 + 8) = 0;
                  v51 = v52 | 5;
                  *(_QWORD *)(v52 + 16) = v49;
                  *(_QWORD *)(v49 + 96) = v52 | 5;
                  LOBYTE(v52) = v52 & 0xFA | 4;
                }
                if ( (v52 & 4) != 0 )
                {
                  v46 = (_DWORD *)(v51 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v46 )
                  {
                    v76 = *(_QWORD *)v46;
                    v77 = *(_DWORD *)(*(_QWORD *)v46 + 12LL);
                    if ( v46[2] != v77 )
                    {
                      v46[2] = v77;
                      v174 = v48;
                      v168 = v50;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 144LL))(v76, v49);
                      v48 = v174;
                      v50 = v168;
                    }
                  }
                }
LABEL_81:
                if ( *(_DWORD *)(v48[8] + 20LL) && (unsigned __int8)sub_773360(v48 - 8, v50) )
                {
                  v56 = v150;
                  goto LABEL_134;
                }
                goto LABEL_83;
              }
              while ( v9 == v6 )
              {
LABEL_38:
                v6 = (__m128i *)((char *)v6 + 24);
                if ( v24 == v6 )
                {
                  v6 = *((__m128i **)v148 + 1);
                  v5 = *((unsigned int *)v148 + 4);
                  v24 = (__m128i *)((char *)v6 + 24 * v5);
LABEL_52:
                  if ( !v8[4].m128i_i64[0] )
                    goto LABEL_75;
                  if ( v6 == v24 )
                  {
LABEL_297:
                    v12 = v24;
                    goto LABEL_177;
                  }
                  while ( 2 )
                  {
                    if ( v10 != v6 )
                    {
                      v36 = *(_QWORD *)(sub_79A2E0(v6->m128i_i64[0] + 72) + 16);
                      v37 = (_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
                      if ( (v36 & 4) != 0 )
                        v37 = (_QWORD *)*v37;
                      if ( !v37 )
                        BUG();
                      v38 = v37[5];
                      v39 = (__int64 *)v8[4].m128i_i64[0];
                      v40 = *(_QWORD *)(v38 + 96);
                      v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
                      if ( (v40 & 1) != 0 )
                      {
                        if ( v41 )
                        {
LABEL_56:
                          if ( (v41 & 4) != 0 )
                          {
                            v35 = (_DWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
                            if ( v35 )
                            {
                              v74 = *(_QWORD *)v35;
                              v75 = *(_DWORD *)(*(_QWORD *)v35 + 12LL);
                              if ( v35[2] != v75 )
                              {
                                v35[2] = v75;
                                v167 = v37;
                                v159 = v39;
                                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v74 + 144LL))(v74, v38);
                                v37 = v167;
                                v39 = v159;
                              }
                            }
                          }
                        }
                      }
                      else if ( v41 > 3 && (v40 & 2) != 0 )
                      {
                        v42 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
                        v43 = v42[2275];
                        if ( v43 )
                        {
                          v44 = v42[274];
                          v42[284] += 24LL;
                          v41 = (v44 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                          if ( v42[275] >= v41 + 24 && v44 )
                          {
                            v42[274] = v41 + 24;
                          }
                          else
                          {
                            v183 = v43;
                            v177 = v38;
                            v171 = v37;
                            v163 = v39;
                            v41 = sub_76D810((__int64)(v42 + 274), 24, 3);
                            v43 = v183;
                            v38 = v177;
                            v37 = v171;
                            v39 = v163;
                          }
                          *(_QWORD *)v41 = v43;
                          *(_DWORD *)(v41 + 8) = 0;
                          v40 = v41 | 5;
                          *(_QWORD *)(v41 + 16) = v38;
                          *(_QWORD *)(v38 + 96) = v41 | 5;
                          LOBYTE(v41) = v41 & 0xFA | 4;
                          goto LABEL_56;
                        }
                        *(_QWORD *)(v38 + 96) = v38 & 0xFFFFFFFFFFFFFFFALL | 1;
                      }
                      if ( *(_DWORD *)(v37[8] + 20LL) && (unsigned __int8)sub_773360(v37 - 8, v39) )
                      {
                        v56 = v10;
                        goto LABEL_134;
                      }
                    }
                    v6 = (__m128i *)((char *)v6 + 24);
                    if ( v24 == v6 )
                    {
                      v6 = *((__m128i **)v148 + 1);
                      v5 = *((unsigned int *)v148 + 4);
                      v24 = (__m128i *)((char *)v6 + 24 * v5);
                      goto LABEL_75;
                    }
                    continue;
                  }
                }
              }
              v26 = *(_QWORD *)(sub_79A2E0(v6->m128i_i64[0] + 72) + 16);
              v27 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v26 & 4) != 0 )
                v27 = (_QWORD *)*v27;
              if ( !v27 )
                BUG();
              v28 = v27[5];
              v29 = (__int64 *)v8[2].m128i_i64[1];
              v30 = *(_QWORD *)(v28 + 96);
              v31 = v30 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v30 & 1) != 0 )
              {
                if ( !v31 )
                  goto LABEL_36;
              }
              else
              {
                if ( v31 <= 3 || (v30 & 2) == 0 )
                  goto LABEL_36;
                v32 = (_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCLL);
                v33 = v32[2275];
                if ( !v33 )
                {
                  *(_QWORD *)(v28 + 96) = v28 & 0xFFFFFFFFFFFFFFFALL | 1;
                  goto LABEL_36;
                }
                v34 = v32[274];
                v32[284] += 24LL;
                v31 = (v34 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v32[275] >= v31 + 24 && v34 )
                {
                  v32[274] = v31 + 24;
                }
                else
                {
                  v182 = v33;
                  v176 = v28;
                  v170 = v27;
                  v162 = v29;
                  v31 = sub_76D810((__int64)(v32 + 274), 24, 3);
                  v33 = v182;
                  v28 = v176;
                  v27 = v170;
                  v29 = v162;
                }
                *(_QWORD *)v31 = v33;
                *(_DWORD *)(v31 + 8) = 0;
                v30 = v31 | 5;
                *(_QWORD *)(v31 + 16) = v28;
                *(_QWORD *)(v28 + 96) = v31 | 5;
                LOBYTE(v31) = v31 & 0xFA | 4;
              }
              if ( (v31 & 4) != 0 )
              {
                v25 = (_DWORD *)(v30 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v25 )
                {
                  v72 = *(_QWORD *)v25;
                  v73 = *(_DWORD *)(*(_QWORD *)v25 + 12LL);
                  if ( v25[2] != v73 )
                  {
                    v25[2] = v73;
                    v166 = v27;
                    v158 = v29;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v72 + 144LL))(v72, v28);
                    v27 = v166;
                    v29 = v158;
                  }
                }
              }
LABEL_36:
              if ( *(_DWORD *)(v27[8] + 20LL) && (unsigned __int8)sub_773360(v27 - 8, v29) )
              {
                v56 = v9;
                goto LABEL_134;
              }
              goto LABEL_38;
            }
          }
          v15 = *(_QWORD *)(sub_79A2E0(v6->m128i_i64[0] + 72) + 16);
          v16 = (_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF8LL);
          if ( (v15 & 4) != 0 )
            v16 = (_QWORD *)*v16;
          if ( !v16 )
            BUG();
          v17 = v16[5];
          v18 = (__int64 *)v8[1].m128i_i64[0];
          v19 = *(_QWORD *)(v17 + 96);
          v20 = v19 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v19 & 1) != 0 )
          {
            if ( v20 )
              goto LABEL_12;
          }
          else if ( v20 > 3 && (v19 & 2) != 0 )
          {
            v21 = (_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCLL);
            v22 = v21[2275];
            if ( v22 )
            {
              v23 = v21[274];
              v21[284] += 24LL;
              v20 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v21[275] >= v20 + 24 && v23 )
              {
                v21[274] = v20 + 24;
              }
              else
              {
                v181 = v22;
                v175 = v17;
                v169 = v16;
                v161 = v18;
                v20 = sub_76D810((__int64)(v21 + 274), 24, 3);
                v22 = v181;
                v17 = v175;
                v16 = v169;
                v18 = v161;
              }
              *(_QWORD *)v20 = v22;
              *(_DWORD *)(v20 + 8) = 0;
              v19 = v20 | 5;
              *(_QWORD *)(v20 + 16) = v17;
              *(_QWORD *)(v17 + 96) = v20 | 5;
              LOBYTE(v20) = v20 & 0xFA | 4;
LABEL_12:
              if ( (v20 & 4) != 0 )
              {
                v14 = (_DWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v14 )
                {
                  v70 = *(_QWORD *)v14;
                  v71 = *(_DWORD *)(*(_QWORD *)v14 + 12LL);
                  if ( v14[2] != v71 )
                  {
                    v14[2] = v71;
                    v165 = v16;
                    v157 = v18;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v70 + 144LL))(v70, v17);
                    v16 = v165;
                    v18 = v157;
                  }
                }
              }
              goto LABEL_14;
            }
            *(_QWORD *)(v17 + 96) = v17 & 0xFFFFFFFFFFFFFFFALL | 1;
          }
LABEL_14:
          if ( !*(_DWORD *)(v16[8] + 20LL) || !(unsigned __int8)sub_773360(v16 - 8, v18) )
            goto LABEL_16;
          v56 = v8;
LABEL_134:
          if ( dest == v56 || (v78 = (__m128i *)((char *)v56 + 24), dest == (__m128i *)&v56[1].m128i_u64[1]) )
          {
LABEL_161:
            v59 = dest;
            v6 = *((__m128i **)v148 + 1);
            v60 = (char *)v6 + 24 * *((unsigned int *)v148 + 4) - (char *)dest;
            v61 = v60 == 24;
            if ( v60 <= 24 )
            {
LABEL_162:
              v92 = &v56->m128i_i8[v60];
              if ( v61 )
              {
                *v56 = _mm_loadu_si128(v59);
                v56[1].m128i_i64[0] = v59[1].m128i_i64[0];
                v62 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v92[-*((_QWORD *)v148 + 1)] >> 3);
              }
              else
              {
                v62 = 0xAAAAAAAAAAAAAAABLL * ((v92 - (__int8 *)v6) >> 3);
              }
              goto LABEL_104;
            }
LABEL_103:
            memmove(v56, v59, v60);
            v62 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v56->m128i_i64 + v60 - *((_QWORD *)v148 + 1)) >> 3);
LABEL_104:
            *((_DWORD *)v148 + 4) = v62;
            goto LABEL_105;
          }
          v79 = v56;
          while ( 1 )
          {
            if ( v78[1].m128i_i64[0] )
            {
              v80 = *((const __m128i **)v148 + 1);
              v81 = (const __m128i *)((char *)v80 + 24 * *((unsigned int *)v148 + 4));
              if ( v80 != v81 )
                break;
            }
LABEL_158:
            v79 = (__m128i *)((char *)v79 + 24);
            *(__m128i *)((char *)v79 - 24) = _mm_loadu_si128(v78);
            v79[-1].m128i_i64[1] = v78[1].m128i_i64[0];
LABEL_159:
            v78 = (const __m128i *)((char *)v78 + 24);
            if ( dest == v78 )
            {
              v56 = v79;
              goto LABEL_161;
            }
          }
          while ( 1 )
          {
            if ( v78 == v80 )
              goto LABEL_145;
            v83 = *(_QWORD *)(sub_79A2E0(v80->m128i_i64[0] + 72) + 16);
            v84 = (_QWORD *)(v83 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v83 & 4) != 0 )
              v84 = (_QWORD *)*v84;
            if ( !v84 )
              BUG();
            v85 = v84[5];
            v86 = (__int64 *)v78[1].m128i_i64[0];
            v87 = *(_QWORD *)(v85 + 96);
            v88 = v87 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v87 & 1) != 0 )
            {
              if ( !v88 )
                goto LABEL_143;
            }
            else
            {
              if ( v88 <= 3 || (v87 & 2) == 0 )
                goto LABEL_143;
              v89 = (_QWORD *)(v87 & 0xFFFFFFFFFFFFFFFCLL);
              v90 = v89[2275];
              if ( !v90 )
              {
                *(_QWORD *)(v85 + 96) = v85 & 0xFFFFFFFFFFFFFFFALL | 1;
                goto LABEL_143;
              }
              v91 = v89[274];
              v89[284] += 24LL;
              v88 = (v91 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v89[275] >= v88 + 24 && v91 )
              {
                v89[274] = v88 + 24;
              }
              else
              {
                v179 = v90;
                v173 = v85;
                v164 = v84;
                v152 = v86;
                v88 = sub_76D810((__int64)(v89 + 274), 24, 3);
                v90 = v179;
                v85 = v173;
                v84 = v164;
                v86 = v152;
              }
              *(_QWORD *)v88 = v90;
              *(_DWORD *)(v88 + 8) = 0;
              v87 = v88 | 5;
              *(_QWORD *)(v88 + 16) = v85;
              *(_QWORD *)(v85 + 96) = v88 | 5;
              LOBYTE(v88) = v88 & 0xFA | 4;
            }
            if ( (v88 & 4) != 0 )
            {
              v82 = (_DWORD *)(v87 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v82 )
              {
                v93 = *(_QWORD *)v82;
                v94 = *(_DWORD *)(*(_QWORD *)v82 + 12LL);
                if ( v82[2] != v94 )
                {
                  v82[2] = v94;
                  v160 = v84;
                  v151 = v86;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v93 + 144LL))(v93, v85);
                  v84 = v160;
                  v86 = v151;
                }
              }
            }
LABEL_143:
            if ( *(_DWORD *)(v84[8] + 20LL) && (unsigned __int8)sub_773360(v84 - 8, v86) )
              goto LABEL_159;
LABEL_145:
            v80 = (const __m128i *)((char *)v80 + 24);
            if ( v81 == v80 )
              goto LABEL_158;
          }
        }
        if ( v8[2].m128i_i64[1] )
        {
          v24 = (__m128i *)((char *)v6 + 24 * v5);
          if ( v8[4].m128i_i64[0] || v8[5].m128i_i64[1] )
LABEL_177:
            v6 = v12;
          else
            v6 = (__m128i *)((char *)v6 + 24 * v5);
        }
        else
        {
          if ( v8[4].m128i_i64[0] || v8[5].m128i_i64[1] )
          {
            v24 = (__m128i *)((char *)v6 + 24 * v5);
            goto LABEL_177;
          }
          v6 = (__m128i *)((char *)v6 + 24 * v5);
          v24 = v12;
        }
LABEL_97:
        v8 += 6;
        v150 += 6;
        v9 += 6;
        v10 += 6;
      }
      while ( v8 != v11 );
      v56 = v8;
      v57 = v24;
      v58 = (char *)dest - (char *)v56;
      if ( (char *)dest - (char *)v56 != 48 )
      {
        if ( v58 != 72 )
        {
          if ( v58 != 24 )
          {
            v56 = dest;
            goto LABEL_102;
          }
LABEL_180:
          if ( !v56[1].m128i_i64[0] || v6 == v57 )
          {
LABEL_262:
            v56 = dest;
            goto LABEL_102;
          }
          while ( 2 )
          {
            if ( v56 != v6 )
            {
              v96 = *(_QWORD *)(sub_79A2E0(v6->m128i_i64[0] + 72) + 16);
              v97 = (_QWORD *)(v96 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v96 & 4) != 0 )
                v97 = (_QWORD *)*v97;
              if ( !v97 )
                BUG();
              v98 = v97[5];
              v99 = (__int64 *)v56[1].m128i_i64[0];
              v100 = *(_QWORD *)(v98 + 96);
              v101 = v100 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v100 & 1) != 0 )
              {
                if ( v101 )
                {
LABEL_184:
                  if ( (v101 & 4) != 0 )
                  {
                    v95 = (_DWORD *)(v100 & 0xFFFFFFFFFFFFFFF8LL);
                    if ( v95 )
                    {
                      v126 = *(_QWORD *)v95;
                      v127 = *(_DWORD *)(*(_QWORD *)v95 + 12LL);
                      if ( v95[2] != v127 )
                      {
                        v95[2] = v127;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v126 + 144LL))(v126, v98);
                      }
                    }
                  }
                }
              }
              else if ( v101 > 3 && (v100 & 2) != 0 )
              {
                v102 = (_QWORD *)(v100 & 0xFFFFFFFFFFFFFFFCLL);
                v103 = v102[2275];
                if ( v103 )
                {
                  v104 = v102[274];
                  v102[284] += 24LL;
                  v101 = (v104 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v102[275] >= v101 + 24 && v104 )
                  {
                    v102[274] = v101 + 24;
                  }
                  else
                  {
                    v153 = v103;
                    v130 = sub_76D810((__int64)(v102 + 274), 24, 3);
                    v103 = v153;
                    v101 = v130;
                  }
                  *(_QWORD *)v101 = v103;
                  *(_DWORD *)(v101 + 8) = 0;
                  v100 = v101 | 5;
                  *(_QWORD *)(v101 + 16) = v98;
                  *(_QWORD *)(v98 + 96) = v101 | 5;
                  LOBYTE(v101) = v101 & 0xFA | 4;
                  goto LABEL_184;
                }
                *(_QWORD *)(v98 + 96) = v98 & 0xFFFFFFFFFFFFFFFALL | 1;
              }
              if ( *(_DWORD *)(v97[8] + 20LL) && (unsigned __int8)sub_773360(v97 - 8, v99) )
                goto LABEL_134;
            }
            v6 = (__m128i *)((char *)v6 + 24);
            if ( v57 == v6 )
            {
              v56 = dest;
              v6 = *((__m128i **)v148 + 1);
              v57 = (__m128i *)((char *)v6 + 24 * *((unsigned int *)v148 + 4));
              goto LABEL_102;
            }
            continue;
          }
        }
LABEL_233:
        if ( v56[1].m128i_i64[0] )
        {
          if ( v6 != v57 )
          {
            v115 = v6;
            while ( v56 == v115 )
            {
LABEL_241:
              v115 = (__m128i *)((char *)v115 + 24);
              if ( v57 == v115 )
              {
                v6 = *((__m128i **)v148 + 1);
                v57 = (__m128i *)((char *)v6 + 24 * *((unsigned int *)v148 + 4));
                goto LABEL_203;
              }
            }
            v117 = *(_QWORD *)(sub_79A2E0(v115->m128i_i64[0] + 72) + 16);
            v118 = (_QWORD *)(v117 & 0xFFFFFFFFFFFFFFF8LL);
            if ( (v117 & 4) != 0 )
              v118 = (_QWORD *)*v118;
            if ( !v118 )
              BUG();
            v119 = v118[5];
            v120 = (__int64 *)v56[1].m128i_i64[0];
            v121 = *(_QWORD *)(v119 + 96);
            v122 = v121 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v121 & 1) != 0 )
            {
              if ( !v122 )
                goto LABEL_239;
            }
            else
            {
              if ( v122 <= 3 || (v121 & 2) == 0 )
                goto LABEL_239;
              v123 = (_QWORD *)(v121 & 0xFFFFFFFFFFFFFFFCLL);
              v124 = v123[2275];
              if ( !v124 )
              {
                *(_QWORD *)(v119 + 96) = v119 & 0xFFFFFFFFFFFFFFFALL | 1;
                goto LABEL_239;
              }
              v125 = v123[274];
              v123[284] += 24LL;
              v122 = (v125 + 7) & 0xFFFFFFFFFFFFFFF8LL;
              if ( v123[275] >= v122 + 24 && v125 )
              {
                v123[274] = v122 + 24;
              }
              else
              {
                v155 = v124;
                v146 = sub_76D810((__int64)(v123 + 274), 24, 3);
                v124 = v155;
                v122 = v146;
              }
              *(_QWORD *)v122 = v124;
              *(_DWORD *)(v122 + 8) = 0;
              v121 = v122 | 5;
              *(_QWORD *)(v122 + 16) = v119;
              *(_QWORD *)(v119 + 96) = v122 | 5;
              LOBYTE(v122) = v122 & 0xFA | 4;
            }
            if ( (v122 & 4) != 0 )
            {
              v116 = (_DWORD *)(v121 & 0xFFFFFFFFFFFFFFF8LL);
              if ( v116 )
              {
                v131 = *(_QWORD *)v116;
                v132 = *(_DWORD *)(*(_QWORD *)v116 + 12LL);
                if ( v116[2] != v132 )
                {
                  v116[2] = v132;
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v131 + 144LL))(v131, v119);
                }
              }
            }
LABEL_239:
            if ( *(_DWORD *)(v118[8] + 20LL) && (unsigned __int8)sub_773360(v118 - 8, v120) )
              goto LABEL_134;
            goto LABEL_241;
          }
          v147 = (__m128i *)((char *)v56 + 24);
          if ( !v56[2].m128i_i64[1] )
          {
            v56 = (__m128i *)((char *)v56 + 24);
LABEL_179:
            v56 = (__m128i *)((char *)v56 + 24);
            goto LABEL_180;
          }
LABEL_298:
          if ( !v147[2].m128i_i64[1] )
            goto LABEL_262;
          v56 = dest;
          v6 = v57;
LABEL_102:
          v59 = dest;
          v60 = (char *)v57 - (char *)dest;
          v61 = v60 == 24;
          if ( v60 <= 24 )
            goto LABEL_162;
          goto LABEL_103;
        }
LABEL_203:
        v56 = (__m128i *)((char *)v56 + 24);
      }
    }
    else
    {
      v57 = (__m128i *)((char *)v6 + 24 * v5);
      v56 = *((__m128i **)v148 + 1);
      if ( 24 * v5 != 48 )
        goto LABEL_233;
    }
    if ( !v56[1].m128i_i64[0] )
      goto LABEL_179;
    if ( v6 == v57 )
    {
      v147 = v56;
      goto LABEL_298;
    }
    while ( v56 == v6 )
    {
LABEL_212:
      v6 = (__m128i *)((char *)v6 + 24);
      if ( v57 == v6 )
      {
        v6 = *((__m128i **)v148 + 1);
        v57 = (__m128i *)((char *)v6 + 24 * *((unsigned int *)v148 + 4));
        goto LABEL_179;
      }
    }
    v106 = *(_QWORD *)(sub_79A2E0(v6->m128i_i64[0] + 72) + 16);
    v107 = (_QWORD *)(v106 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v106 & 4) != 0 )
      v107 = (_QWORD *)*v107;
    if ( !v107 )
      BUG();
    v108 = v107[5];
    v109 = (__int64 *)v56[1].m128i_i64[0];
    v110 = *(_QWORD *)(v108 + 96);
    v111 = v110 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v110 & 1) != 0 )
    {
      if ( !v111 )
        goto LABEL_210;
    }
    else
    {
      if ( v111 <= 3 || (v110 & 2) == 0 )
        goto LABEL_210;
      v112 = (_QWORD *)(v110 & 0xFFFFFFFFFFFFFFFCLL);
      v113 = v112[2275];
      if ( !v113 )
      {
        *(_QWORD *)(v108 + 96) = v108 & 0xFFFFFFFFFFFFFFFALL | 1;
        goto LABEL_210;
      }
      v114 = v112[274];
      v112[284] += 24LL;
      v111 = (v114 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v112[275] >= v111 + 24 && v114 )
      {
        v112[274] = v111 + 24;
      }
      else
      {
        v154 = v113;
        v133 = sub_76D810((__int64)(v112 + 274), 24, 3);
        v113 = v154;
        v111 = v133;
      }
      *(_QWORD *)v111 = v113;
      *(_DWORD *)(v111 + 8) = 0;
      v110 = v111 | 5;
      *(_QWORD *)(v111 + 16) = v108;
      *(_QWORD *)(v108 + 96) = v111 | 5;
      LOBYTE(v111) = v111 & 0xFA | 4;
    }
    if ( (v111 & 4) != 0 )
    {
      v105 = (_DWORD *)(v110 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v105 )
      {
        v128 = *(_QWORD *)v105;
        v129 = *(_DWORD *)(*(_QWORD *)v105 + 12LL);
        if ( v105[2] != v129 )
        {
          v105[2] = v129;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v128 + 144LL))(v128, v108);
        }
      }
    }
LABEL_210:
    if ( *(_DWORD *)(v107[8] + 20LL) && (unsigned __int8)sub_773360(v107 - 8, v109) )
      goto LABEL_134;
    goto LABEL_212;
  }
LABEL_108:
  if ( (_DWORD)v192 )
  {
    v134 = v191;
    v135 = 2LL * v193;
    v136 = &v191[v135];
    if ( v191 != &v191[v135] )
    {
      while ( *v134 == -4096 || *v134 == -8192 )
      {
        v134 += 2;
        if ( v136 == v134 )
          goto LABEL_109;
      }
      if ( v134 != v136 )
      {
        do
        {
          v137 = v134[1];
          v149 = (_QWORD *)v137;
          if ( v137 )
          {
            v138 = *(_QWORD **)(v137 + 24);
            v139 = *(unsigned int *)(v137 + 32);
            v140 = &v138[6 * v139];
            if ( v138 != v140 )
            {
              v141 = &v138[6 * v139];
              do
              {
                v142 = (_QWORD *)*(v141 - 2);
                v143 = &v142[15 * *((unsigned int *)v141 - 2)];
                if ( v142 != v143 )
                {
                  do
                  {
                    v143 -= 15;
                    v144 = (_QWORD *)v143[1];
                    if ( v144 != v143 + 3 )
                      free(v144);
                  }
                  while ( v142 != v143 );
                  v143 = (_QWORD *)*(v141 - 2);
                }
                if ( v141 != v143 )
                  free(v143);
                v141 -= 6;
                operator delete();
              }
              while ( v138 != v141 );
              v140 = (_QWORD *)v149[3];
            }
            if ( v140 != v149 + 5 )
              free(v140);
            operator delete();
            operator delete(v149, 0x28u);
          }
          v145 = v134 + 2;
          if ( v134 + 2 == v136 )
            break;
          while ( 1 )
          {
            v134 = v145;
            if ( *v145 != -8192 && *v145 != -4096 )
              break;
            v145 += 2;
            if ( v136 == v145 )
              goto LABEL_109;
          }
        }
        while ( v145 != v136 );
      }
    }
  }
LABEL_109:
  v63 = ptr;
  v64 = (char *)ptr + 48 * (unsigned int)v198;
  v65 = v64;
  if ( ptr != v64 )
  {
    do
    {
      v66 = (_QWORD *)*(v65 - 2);
      v67 = &v66[15 * *((unsigned int *)v65 - 2)];
      if ( v66 != v67 )
      {
        do
        {
          v67 -= 15;
          v68 = (_QWORD *)v67[1];
          if ( v68 != v67 + 3 )
            free(v68);
        }
        while ( v66 != v67 );
        v67 = (_QWORD *)*(v65 - 2);
      }
      if ( v65 != v67 )
        free(v67);
      v65 -= 6;
      operator delete();
    }
    while ( v63 != v65 );
    v64 = (char *)ptr;
  }
  if ( v64 != v199 )
    free(v64);
  operator delete();
  operator delete();
  return operator delete();
}

