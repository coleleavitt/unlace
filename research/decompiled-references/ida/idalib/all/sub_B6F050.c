__int64 __fastcall sub_B6F050(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rax
  const __m128i *v8; // rbp
  signed __int64 v9; // rdx
  const __m128i *v10; // rbx
  const __m128i *v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  const __m128i *v20; // r12
  _QWORD *v21; // r8
  _QWORD *v22; // r15
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _QWORD *v26; // rdi
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // r8
  _QWORD *v30; // r15
  __int64 v31; // r13
  __int64 v32; // rax
  unsigned __int64 v33; // rdx
  _QWORD *v34; // rdi
  __int64 v35; // r8
  __int64 v36; // r9
  _QWORD *v37; // r8
  _QWORD *v38; // r15
  __int64 v39; // r13
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // r9
  const __m128i *v45; // rdx
  __int64 v46; // r13
  unsigned __int64 v47; // rax
  __m128i v48; // xmm1
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rbp
  _QWORD *v51; // r14
  __int64 v52; // rax
  __int64 v53; // r15
  char *v54; // r13
  char *v55; // r12
  char *v56; // rdi
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 *v59; // rax
  __int64 v60; // rdx
  _BYTE *v61; // r12
  _BYTE *v62; // rbp
  char *v63; // r13
  char *v64; // rbx
  char *v65; // rdi
  const __m128i *v67; // r15
  const __m128i *v68; // rbx
  const __m128i *v69; // rbp
  _QWORD *v70; // r8
  _QWORD *v71; // r13
  __int64 v72; // r9
  __int64 v73; // rdx
  unsigned __int64 v74; // rax
  _QWORD *v75; // rdi
  __int64 v76; // r8
  __int64 v77; // r13
  unsigned __int64 v78; // rdx
  __int64 v79; // rcx
  unsigned __int64 v80; // rdx
  unsigned __int64 v81; // rax
  _DWORD *v82; // rax
  __int64 v83; // rdi
  int v84; // edx
  __int64 v85; // r10
  unsigned __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // rax
  _DWORD *v90; // rdx
  __int64 v91; // rdi
  int v92; // eax
  __int64 v93; // r10
  unsigned __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  unsigned __int64 v97; // rax
  _DWORD *v98; // rax
  __int64 v99; // rdi
  int v100; // edx
  __int64 v101; // r10
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  unsigned __int64 v104; // rdx
  unsigned __int64 v105; // rax
  _DWORD *v106; // rax
  __int64 v107; // rdi
  int v108; // edx
  __int64 v109; // r10
  unsigned __int64 v110; // rdx
  __int64 v111; // rcx
  unsigned __int64 v112; // rdx
  unsigned __int64 v113; // rax
  _DWORD *v114; // rax
  __int64 v115; // rdi
  int v116; // edx
  unsigned __int64 v117; // r12
  __int64 v118; // r8
  __int64 *v119; // r15
  __int64 v120; // rax
  unsigned __int64 v121; // rdx
  _QWORD *v122; // rcx
  __int64 v123; // r12
  __int64 v124; // r9
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rax
  _DWORD *v129; // rax
  __int64 v130; // rdi
  int v131; // edx
  unsigned __int64 v132; // r12
  __int64 v133; // r8
  __int64 *v134; // r15
  __int64 v135; // rax
  unsigned __int64 v136; // rdx
  _QWORD *v137; // rcx
  __int64 v138; // r12
  __int64 v139; // r9
  unsigned __int64 v140; // rdx
  __int64 v141; // rax
  unsigned __int64 v142; // rdx
  unsigned __int64 v143; // rax
  _DWORD *v144; // rax
  __int64 v145; // rdi
  int v146; // edx
  unsigned __int64 v147; // r12
  __int64 v148; // r8
  __int64 *v149; // r15
  __int64 v150; // rax
  unsigned __int64 v151; // rdx
  _QWORD *v152; // rcx
  __int64 v153; // r12
  __int64 v154; // r9
  unsigned __int64 v155; // rdx
  __int64 v156; // rax
  unsigned __int64 v157; // rdx
  unsigned __int64 v158; // rax
  _DWORD *v159; // rax
  __int64 v160; // rdi
  int v161; // edx
  const __m128i *v162; // [rsp+8h] [rbp-F0h]
  __int64 v163; // [rsp+8h] [rbp-F0h]
  __int64 *v164; // [rsp+10h] [rbp-E8h]
  __int64 *v165; // [rsp+10h] [rbp-E8h]
  __int64 *v166; // [rsp+10h] [rbp-E8h]
  __int64 *v167; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v168; // [rsp+10h] [rbp-E8h]
  __int64 *v169; // [rsp+10h] [rbp-E8h]
  __int64 v170; // [rsp+10h] [rbp-E8h]
  __int64 v171; // [rsp+10h] [rbp-E8h]
  __int64 v172; // [rsp+10h] [rbp-E8h]
  const __m128i *v173; // [rsp+18h] [rbp-E0h]
  const __m128i *v174; // [rsp+18h] [rbp-E0h]
  const __m128i *v175; // [rsp+18h] [rbp-E0h]
  const __m128i *v176; // [rsp+18h] [rbp-E0h]
  __int64 v177; // [rsp+18h] [rbp-E0h]
  __int64 v178; // [rsp+18h] [rbp-E0h]
  __int64 v179; // [rsp+18h] [rbp-E0h]
  __int64 v180; // [rsp+18h] [rbp-E0h]
  __int64 v181; // [rsp+20h] [rbp-D8h]
  __int64 v182; // [rsp+20h] [rbp-D8h]
  __int64 v183; // [rsp+20h] [rbp-D8h]
  __int64 v184; // [rsp+20h] [rbp-D8h]
  const __m128i *v185; // [rsp+28h] [rbp-D0h]
  __int64 v186; // [rsp+30h] [rbp-C8h]
  __int64 v187; // [rsp+38h] [rbp-C0h]
  __int64 v188; // [rsp+40h] [rbp-B8h]
  __m128 v189; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v190[2]; // [rsp+60h] [rbp-98h] BYREF
  unsigned int v191; // [rsp+70h] [rbp-88h]
  _QWORD *v192; // [rsp+78h] [rbp-80h] BYREF
  __int64 v193; // [rsp+80h] [rbp-78h]
  unsigned int v194; // [rsp+88h] [rbp-70h]
  __int64 v195; // [rsp+90h] [rbp-68h]
  __int64 v196; // [rsp+98h] [rbp-60h]
  unsigned int v197; // [rsp+A0h] [rbp-58h]
  _BYTE *v198; // [rsp+A8h] [rbp-50h]
  __int64 v199; // [rsp+B0h] [rbp-48h]
  _BYTE v200[64]; // [rsp+B8h] [rbp-40h] BYREF

  v190[0] = 0;
  v198 = v200;
  v190[1] = 0;
  v191 = 0;
  v192 = nullptr;
  v193 = 0;
  v194 = 0;
  v195 = 0;
  v196 = 0;
  v197 = 0;
  v199 = 0;
  sub_B6B8B0((__int64)v190, a1, 0, 0, a2, a6);
  v187 = *(_QWORD *)(a2 + 24);
  v188 = v187 + 48LL * *(unsigned int *)(a2 + 32);
  if ( v188 == v187 )
    goto LABEL_78;
  do
  {
    v6 = *(_QWORD *)(v187 + 32);
    v186 = v6 + 120LL * *(unsigned int *)(v187 + 40);
    if ( v186 == v6 )
      goto LABEL_77;
    do
    {
      v7 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v7 <= 1 )
        goto LABEL_76;
      v8 = *(const __m128i **)(v6 + 8);
      v162 = (const __m128i *)((char *)v8 + 24 * v7);
      v9 = 0xAAAAAAAAAAAAAAABLL * ((24 * v7) >> 3);
      if ( !(v9 >> 2) )
      {
        v11 = (const __m128i *)((char *)v8 + 24 * v7);
        v10 = *(const __m128i **)(v6 + 8);
LABEL_68:
        if ( v9 != 2 )
        {
          if ( v9 != 3 )
          {
            if ( v9 != 1 )
              goto LABEL_71;
            goto LABEL_199;
          }
          if ( !v8[1].m128i_i64[0] || v10 == v11 )
          {
LABEL_225:
            v8 = (const __m128i *)((char *)v8 + 24);
            goto LABEL_226;
          }
          while ( 2 )
          {
            if ( v10 != v8 )
            {
              v153 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
              if ( (v153 & 4) != 0 )
                v147 = *(_QWORD *)(v153 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v147 = v153 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v147 )
                BUG();
              v148 = *(_QWORD *)(v147 + 40);
              v149 = (__int64 *)v8[1].m128i_i64[0];
              v150 = *(_QWORD *)(v148 + 96);
              v151 = v150 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v150 & 1) == 0 )
              {
                v152 = (_QWORD *)(v150 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v150 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  if ( (v150 & 2) == 0 )
                  {
LABEL_259:
                    if ( *(_DWORD *)(*(_QWORD *)(v147 + 64) + 20LL)
                      && (unsigned __int8)sub_B6E8F0((_QWORD *)(v147 - 64), v149) )
                    {
                      goto LABEL_114;
                    }
                    goto LABEL_261;
                  }
                  v154 = v152[2295];
                  v155 = v148 & 0xFFFFFFFFFFFFFFFBLL;
                  if ( v154 )
                  {
                    v156 = v152[294];
                    v152[304] += 24LL;
                    v157 = (v156 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v152[295] >= v157 + 24 && v156 )
                    {
                      v152[294] = v157 + 24;
                      v158 = (v156 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    else
                    {
                      v180 = v154;
                      v172 = v148;
                      v158 = sub_986170((__int64)(v152 + 294), 24, 24, 3, v148, v154);
                      v154 = v180;
                      v148 = v172;
                      v157 = v158 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)v158 = v154;
                    v155 = v157 | 4;
                    *(_DWORD *)(v158 + 8) = 0;
                    *(_QWORD *)(v158 + 16) = v148;
                  }
                  v151 = v155 & 0xFFFFFFFFFFFFFFFELL;
                  v150 = v151 | 1;
                  *(_QWORD *)(v148 + 96) = v151 | 1;
                }
              }
              if ( v151 )
              {
                if ( (v151 & 4) != 0 )
                {
                  v159 = (_DWORD *)(v150 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v159 )
                  {
                    v160 = *(_QWORD *)v159;
                    v161 = *(_DWORD *)(*(_QWORD *)v159 + 12LL);
                    if ( v159[2] != v161 )
                    {
                      v159[2] = v161;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v160 + 152LL))(v160, v148);
                    }
                  }
                }
              }
              goto LABEL_259;
            }
LABEL_261:
            v10 = (const __m128i *)((char *)v10 + 24);
            if ( v11 == v10 )
            {
              v10 = *(const __m128i **)(v6 + 8);
              v11 = (const __m128i *)((char *)v10 + 24 * *(unsigned int *)(v6 + 16));
              goto LABEL_225;
            }
            continue;
          }
        }
LABEL_226:
        if ( !v8[1].m128i_i64[0] || v10 == v11 )
        {
LABEL_198:
          v8 = (const __m128i *)((char *)v8 + 24);
LABEL_199:
          if ( !v8[1].m128i_i64[0] || v10 == v11 )
          {
LABEL_71:
            v20 = v162;
            goto LABEL_72;
          }
          while ( 2 )
          {
            if ( v8 != v10 )
            {
              v123 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
              if ( (v123 & 4) != 0 )
                v117 = *(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF8LL);
              else
                v117 = v123 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v117 )
                BUG();
              v118 = *(_QWORD *)(v117 + 40);
              v119 = (__int64 *)v8[1].m128i_i64[0];
              v120 = *(_QWORD *)(v118 + 96);
              v121 = v120 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v120 & 1) == 0 )
              {
                v122 = (_QWORD *)(v120 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v120 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  if ( (v120 & 2) == 0 )
                  {
LABEL_207:
                    if ( *(_DWORD *)(*(_QWORD *)(v117 + 64) + 20LL)
                      && (unsigned __int8)sub_B6E8F0((_QWORD *)(v117 - 64), v119) )
                    {
                      goto LABEL_114;
                    }
                    goto LABEL_209;
                  }
                  v124 = v122[2295];
                  v125 = v118 & 0xFFFFFFFFFFFFFFFBLL;
                  if ( v124 )
                  {
                    v126 = v122[294];
                    v122[304] += 24LL;
                    v127 = (v126 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v122[295] >= v127 + 24 && v126 )
                    {
                      v122[294] = v127 + 24;
                      v128 = (v126 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    else
                    {
                      v178 = v124;
                      v170 = v118;
                      v128 = sub_986170((__int64)(v122 + 294), 24, 24, 3, v118, v124);
                      v124 = v178;
                      v118 = v170;
                      v127 = v128 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)v128 = v124;
                    v125 = v127 | 4;
                    *(_DWORD *)(v128 + 8) = 0;
                    *(_QWORD *)(v128 + 16) = v118;
                  }
                  v121 = v125 & 0xFFFFFFFFFFFFFFFELL;
                  v120 = v121 | 1;
                  *(_QWORD *)(v118 + 96) = v121 | 1;
                }
              }
              if ( v121 )
              {
                if ( (v121 & 4) != 0 )
                {
                  v129 = (_DWORD *)(v120 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v129 )
                  {
                    v130 = *(_QWORD *)v129;
                    v131 = *(_DWORD *)(*(_QWORD *)v129 + 12LL);
                    if ( v129[2] != v131 )
                    {
                      v129[2] = v131;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v130 + 152LL))(v130, v118);
                    }
                  }
                }
              }
              goto LABEL_207;
            }
LABEL_209:
            v10 = (const __m128i *)((char *)v10 + 24);
            if ( v11 == v10 )
            {
              v10 = *(const __m128i **)(v6 + 8);
              v11 = (const __m128i *)((char *)v10 + 24 * *(unsigned int *)(v6 + 16));
              goto LABEL_71;
            }
            continue;
          }
        }
        while ( 2 )
        {
          if ( v8 != v10 )
          {
            v138 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
            if ( (v138 & 4) != 0 )
              v132 = *(_QWORD *)(v138 & 0xFFFFFFFFFFFFFFF8LL);
            else
              v132 = v138 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v132 )
              BUG();
            v133 = *(_QWORD *)(v132 + 40);
            v134 = (__int64 *)v8[1].m128i_i64[0];
            v135 = *(_QWORD *)(v133 + 96);
            v136 = v135 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v135 & 1) == 0 )
            {
              v137 = (_QWORD *)(v135 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v135 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                if ( (v135 & 2) == 0 )
                {
LABEL_234:
                  if ( *(_DWORD *)(*(_QWORD *)(v132 + 64) + 20LL)
                    && (unsigned __int8)sub_B6E8F0((_QWORD *)(v132 - 64), v134) )
                  {
                    goto LABEL_114;
                  }
                  goto LABEL_236;
                }
                v139 = v137[2295];
                v140 = v133 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v139 )
                {
                  v141 = v137[294];
                  v137[304] += 24LL;
                  v142 = (v141 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v137[295] >= v142 + 24 && v141 )
                  {
                    v137[294] = v142 + 24;
                    v143 = (v141 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v179 = v139;
                    v171 = v133;
                    v143 = sub_986170((__int64)(v137 + 294), 24, 24, 3, v133, v139);
                    v139 = v179;
                    v133 = v171;
                    v142 = v143 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v143 = v139;
                  v140 = v142 | 4;
                  *(_DWORD *)(v143 + 8) = 0;
                  *(_QWORD *)(v143 + 16) = v133;
                }
                v136 = v140 & 0xFFFFFFFFFFFFFFFELL;
                v135 = v136 | 1;
                *(_QWORD *)(v133 + 96) = v136 | 1;
              }
            }
            if ( v136 )
            {
              if ( (v136 & 4) != 0 )
              {
                v144 = (_DWORD *)(v135 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v144 )
                {
                  v145 = *(_QWORD *)v144;
                  v146 = *(_DWORD *)(*(_QWORD *)v144 + 12LL);
                  if ( v144[2] != v146 )
                  {
                    v144[2] = v146;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v145 + 152LL))(v145, v133);
                  }
                }
              }
            }
            goto LABEL_234;
          }
LABEL_236:
          v10 = (const __m128i *)((char *)v10 + 24);
          if ( v11 == v10 )
          {
            v10 = *(const __m128i **)(v6 + 8);
            v11 = (const __m128i *)((char *)v10 + 24 * *(unsigned int *)(v6 + 16));
            goto LABEL_198;
          }
          continue;
        }
      }
      v10 = *(const __m128i **)(v6 + 8);
      v185 = &v8[6 * (v9 >> 2)];
LABEL_6:
      v11 = (const __m128i *)((char *)v10 + 24 * v7);
      if ( !v8[1].m128i_i64[0] )
        goto LABEL_21;
      if ( v10 == v11 )
      {
        if ( v8[2].m128i_i64[1] )
          goto LABEL_195;
LABEL_36:
        v20 = v8 + 3;
        if ( !v8[4].m128i_i64[0] )
          goto LABEL_51;
        if ( v10 == v11 )
          goto LABEL_66;
        v175 = v11;
        while ( 2 )
        {
          if ( v20 != v10 )
          {
            v35 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
            if ( (v35 & 4) != 0 )
            {
              v29 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
              v30 = (_QWORD *)*v29;
            }
            else
            {
              v29 = (_QWORD *)(v35 & 0xFFFFFFFFFFFFFFF8LL);
              v30 = v29;
            }
            if ( !v30 )
              BUG();
            v31 = v30[5];
            v166 = (__int64 *)v8[4].m128i_i64[0];
            v32 = *(_QWORD *)(v31 + 96);
            v33 = v32 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v32 & 1) == 0 )
            {
              v34 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v32 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                if ( (v32 & 2) == 0 )
                {
LABEL_44:
                  if ( *(_DWORD *)(v30[8] + 20LL) && (unsigned __int8)sub_B6E8F0(v30 - 8, v166) )
                    goto LABEL_115;
                  goto LABEL_46;
                }
                v101 = v34[2295];
                v102 = v31 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v101 )
                {
                  v103 = v34[294];
                  v34[304] += 24LL;
                  v104 = (v103 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v34[295] >= v104 + 24 && v103 )
                  {
                    v34[294] = v104 + 24;
                    v105 = (v103 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v182 = v101;
                    v105 = sub_986170((__int64)(v34 + 294), 24, 24, 3, (__int64)v29, v36);
                    v101 = v182;
                    v104 = v105 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v105 = v101;
                  v102 = v104 | 4;
                  *(_DWORD *)(v105 + 8) = 0;
                  *(_QWORD *)(v105 + 16) = v31;
                }
                v33 = v102 & 0xFFFFFFFFFFFFFFFELL;
                v32 = v33 | 1;
                *(_QWORD *)(v31 + 96) = v33 | 1;
              }
            }
            if ( v33 )
            {
              if ( (v33 & 4) != 0 )
              {
                v106 = (_DWORD *)(v32 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v106 )
                {
                  v107 = *(_QWORD *)v106;
                  v108 = *(_DWORD *)(*(_QWORD *)v106 + 12LL);
                  if ( v106[2] != v108 )
                  {
                    v106[2] = v108;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v107 + 152LL))(v107, v31);
                  }
                }
              }
            }
            goto LABEL_44;
          }
LABEL_46:
          v10 = (const __m128i *)((char *)v10 + 24);
          if ( v175 == v10 )
          {
            v7 = *(unsigned int *)(v6 + 16);
            v10 = *(const __m128i **)(v6 + 8);
            v11 = (const __m128i *)((char *)v10 + 24 * v7);
LABEL_51:
            v20 = (const __m128i *)((char *)v8 + 72);
            if ( !v8[5].m128i_i64[1] )
              goto LABEL_66;
            if ( v10 == v11 )
            {
LABEL_196:
              v11 = v10;
              goto LABEL_66;
            }
            v176 = v11;
            while ( 2 )
            {
              if ( v20 != v10 )
              {
                v43 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
                if ( (v43 & 4) != 0 )
                {
                  v37 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF8LL);
                  v38 = (_QWORD *)*v37;
                }
                else
                {
                  v37 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFF8LL);
                  v38 = v37;
                }
                if ( !v38 )
                  BUG();
                v39 = v38[5];
                v167 = (__int64 *)v8[5].m128i_i64[1];
                v40 = *(_QWORD *)(v39 + 96);
                v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
                if ( (v40 & 1) == 0 )
                {
                  v42 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
                  if ( (v40 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                  {
                    if ( (v40 & 2) == 0 )
                    {
LABEL_59:
                      if ( *(_DWORD *)(v38[8] + 20LL) && (unsigned __int8)sub_B6E8F0(v38 - 8, v167) )
                        goto LABEL_115;
                      goto LABEL_61;
                    }
                    v93 = v42[2295];
                    v94 = v39 & 0xFFFFFFFFFFFFFFFBLL;
                    if ( v93 )
                    {
                      v95 = v42[294];
                      v42[304] += 24LL;
                      v96 = (v95 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      if ( v42[295] >= v96 + 24 && v95 )
                      {
                        v42[294] = v96 + 24;
                        v97 = (v95 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                      }
                      else
                      {
                        v181 = v93;
                        v97 = sub_986170((__int64)(v42 + 294), 24, 24, 3, (__int64)v37, v44);
                        v93 = v181;
                        v96 = v97 & 0xFFFFFFFFFFFFFFFBLL;
                      }
                      *(_QWORD *)v97 = v93;
                      v94 = v96 | 4;
                      *(_DWORD *)(v97 + 8) = 0;
                      *(_QWORD *)(v97 + 16) = v39;
                    }
                    v41 = v94 & 0xFFFFFFFFFFFFFFFELL;
                    v40 = v41 | 1;
                    *(_QWORD *)(v39 + 96) = v41 | 1;
                  }
                }
                if ( v41 )
                {
                  if ( (v41 & 4) != 0 )
                  {
                    v98 = (_DWORD *)(v40 & 0xFFFFFFFFFFFFFFF8LL);
                    if ( v98 )
                    {
                      v99 = *(_QWORD *)v98;
                      v100 = *(_DWORD *)(*(_QWORD *)v98 + 12LL);
                      if ( v98[2] != v100 )
                      {
                        v98[2] = v100;
                        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v99 + 152LL))(v99, v39);
                      }
                    }
                  }
                }
                goto LABEL_59;
              }
LABEL_61:
              v10 = (const __m128i *)((char *)v10 + 24);
              if ( v176 == v10 )
              {
                v7 = *(unsigned int *)(v6 + 16);
                v10 = *(const __m128i **)(v6 + 8);
                v11 = (const __m128i *)((char *)v10 + 24 * v7);
                goto LABEL_66;
              }
              continue;
            }
          }
          continue;
        }
      }
      v173 = (const __m128i *)((char *)v10 + 24 * v7);
      while ( v8 == v10 )
      {
LABEL_16:
        v10 = (const __m128i *)((char *)v10 + 24);
        if ( v173 == v10 )
        {
          v7 = *(unsigned int *)(v6 + 16);
          v10 = *(const __m128i **)(v6 + 8);
          v11 = (const __m128i *)((char *)v10 + 24 * v7);
LABEL_21:
          v20 = (const __m128i *)((char *)v8 + 24);
          if ( !v8[2].m128i_i64[1] )
            goto LABEL_36;
          if ( v10 != v11 )
          {
            v174 = v11;
            while ( v20 == v10 )
            {
LABEL_31:
              v10 = (const __m128i *)((char *)v10 + 24);
              if ( v174 == v10 )
              {
                v7 = *(unsigned int *)(v6 + 16);
                v10 = *(const __m128i **)(v6 + 8);
                v11 = (const __m128i *)((char *)v10 + 24 * v7);
                goto LABEL_36;
              }
            }
            v27 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
            if ( (v27 & 4) != 0 )
            {
              v21 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
              v22 = (_QWORD *)*v21;
            }
            else
            {
              v21 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF8LL);
              v22 = v21;
            }
            if ( !v22 )
              BUG();
            v23 = v22[5];
            v165 = (__int64 *)v8[2].m128i_i64[1];
            v24 = *(_QWORD *)(v23 + 96);
            v25 = v24 & 0xFFFFFFFFFFFFFFFELL;
            if ( (v24 & 1) == 0 )
            {
              v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v24 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
              {
                if ( (v24 & 2) == 0 )
                  goto LABEL_29;
                v109 = v26[2295];
                v110 = v23 & 0xFFFFFFFFFFFFFFFBLL;
                if ( v109 )
                {
                  v111 = v26[294];
                  v26[304] += 24LL;
                  v112 = (v111 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  if ( v26[295] >= v112 + 24 && v111 )
                  {
                    v26[294] = v112 + 24;
                    v113 = (v111 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                  }
                  else
                  {
                    v183 = v109;
                    v113 = sub_986170((__int64)(v26 + 294), 24, 24, 3, (__int64)v21, v28);
                    v109 = v183;
                    v112 = v113 & 0xFFFFFFFFFFFFFFFBLL;
                  }
                  *(_QWORD *)v113 = v109;
                  v110 = v112 | 4;
                  *(_DWORD *)(v113 + 8) = 0;
                  *(_QWORD *)(v113 + 16) = v23;
                }
                v25 = v110 & 0xFFFFFFFFFFFFFFFELL;
                v24 = v25 | 1;
                *(_QWORD *)(v23 + 96) = v25 | 1;
              }
            }
            if ( v25 )
            {
              if ( (v25 & 4) != 0 )
              {
                v114 = (_DWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
                if ( v114 )
                {
                  v115 = *(_QWORD *)v114;
                  v116 = *(_DWORD *)(*(_QWORD *)v114 + 12LL);
                  if ( v114[2] != v116 )
                  {
                    v114[2] = v116;
                    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v115 + 152LL))(v115, v23);
                  }
                }
              }
            }
LABEL_29:
            if ( *(_DWORD *)(v22[8] + 20LL) && (unsigned __int8)sub_B6E8F0(v22 - 8, v165) )
              goto LABEL_115;
            goto LABEL_31;
          }
LABEL_195:
          v11 = v10;
          if ( !v8[4].m128i_i64[0] )
            goto LABEL_196;
LABEL_66:
          v8 += 6;
          if ( v185 == v8 )
          {
            v9 = 0xAAAAAAAAAAAAAAABLL * (((char *)v162 - (char *)v8) >> 3);
            goto LABEL_68;
          }
          goto LABEL_6;
        }
      }
      v19 = *(_QWORD *)(sub_B8C1B0(v10->m128i_i64[0] + 72) + 16);
      if ( (v19 & 4) != 0 )
        v12 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v12 = v19 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v12 )
        BUG();
      v13 = *(_QWORD *)(v12 + 40);
      v164 = (__int64 *)v8[1].m128i_i64[0];
      v14 = *(_QWORD *)(v13 + 96);
      v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
      if ( (v14 & 1) == 0 )
      {
        v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        {
          if ( (v14 & 2) == 0 )
            goto LABEL_14;
          v77 = v16[2295];
          v78 = v13 & 0xFFFFFFFFFFFFFFFBLL;
          if ( v77 )
          {
            v79 = v16[294];
            v16[304] += 24LL;
            v80 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            if ( v16[295] >= v80 + 24 && v79 )
            {
              v16[294] = v80 + 24;
              v81 = (v79 + 7) & 0xFFFFFFFFFFFFFFF8LL;
            }
            else
            {
              v81 = sub_986170((__int64)(v16 + 294), 24, 24, 3, v17, v18);
              v80 = v81 & 0xFFFFFFFFFFFFFFFBLL;
            }
            *(_QWORD *)v81 = v77;
            v78 = v80 | 4;
            *(_DWORD *)(v81 + 8) = 0;
            *(_QWORD *)(v81 + 16) = v13;
          }
          v15 = v78 & 0xFFFFFFFFFFFFFFFELL;
          v14 = v15 | 1;
          *(_QWORD *)(v13 + 96) = v15 | 1;
        }
      }
      if ( v15 )
      {
        if ( (v15 & 4) != 0 )
        {
          v82 = (_DWORD *)(v14 & 0xFFFFFFFFFFFFFFF8LL);
          if ( v82 )
          {
            v83 = *(_QWORD *)v82;
            v84 = *(_DWORD *)(*(_QWORD *)v82 + 12LL);
            if ( v82[2] != v84 )
            {
              v82[2] = v84;
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v83 + 152LL))(v83, v13);
            }
          }
        }
      }
LABEL_14:
      if ( !*(_DWORD *)(*(_QWORD *)(v12 + 64) + 20LL) || !(unsigned __int8)sub_B6E8F0((_QWORD *)(v12 - 64), v164) )
        goto LABEL_16;
LABEL_114:
      v20 = v8;
LABEL_115:
      if ( v162 != v20 )
      {
        v67 = (const __m128i *)((char *)v20 + 24);
        if ( v162 != (const __m128i *)&v20[1].m128i_u64[1] )
        {
          while ( 1 )
          {
            if ( v67[1].m128i_i64[0] )
            {
              v68 = *(const __m128i **)(v6 + 8);
              v69 = (const __m128i *)((char *)v68 + 24 * *(unsigned int *)(v6 + 16));
              if ( v68 != v69 )
                break;
            }
LABEL_131:
            v20 = (const __m128i *)((char *)v20 + 24);
            *(const __m128i *)((char *)&v20[-2] + 8) = _mm_loadu_si128(v67);
            v20[-1].m128i_i64[1] = v67[1].m128i_i64[0];
LABEL_132:
            v67 = (const __m128i *)((char *)v67 + 24);
            if ( v162 == v67 )
              goto LABEL_133;
          }
          while ( 2 )
          {
            if ( v67 != v68 )
            {
              v76 = *(_QWORD *)(sub_B8C1B0(v68->m128i_i64[0] + 72) + 16);
              if ( (v76 & 4) != 0 )
              {
                v70 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF8LL);
                v71 = (_QWORD *)*v70;
              }
              else
              {
                v70 = (_QWORD *)(v76 & 0xFFFFFFFFFFFFFFF8LL);
                v71 = v70;
              }
              if ( !v71 )
                BUG();
              v72 = v71[5];
              v73 = *(_QWORD *)(v72 + 96);
              v169 = (__int64 *)v67[1].m128i_i64[0];
              v74 = v73 & 0xFFFFFFFFFFFFFFFELL;
              if ( (v73 & 1) == 0 )
              {
                v75 = (_QWORD *)(v73 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v73 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                {
                  if ( (v73 & 2) == 0 )
                  {
LABEL_125:
                    if ( *(_DWORD *)(v71[8] + 20LL) && (unsigned __int8)sub_B6E8F0(v71 - 8, v169) )
                      goto LABEL_132;
                    goto LABEL_127;
                  }
                  v85 = v75[2295];
                  v86 = v72 & 0xFFFFFFFFFFFFFFFBLL;
                  if ( v85 )
                  {
                    v87 = v75[294];
                    v75[304] += 24LL;
                    v88 = (v87 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    if ( v75[295] >= v88 + 24 && v87 )
                    {
                      v75[294] = v88 + 24;
                      v89 = (v87 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                    }
                    else
                    {
                      v184 = v85;
                      v177 = v72;
                      v89 = sub_986170((__int64)(v75 + 294), 24, 24, 3, (__int64)v70, v72);
                      v85 = v184;
                      v72 = v177;
                      v88 = v89 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)v89 = v85;
                    *(_DWORD *)(v89 + 8) = 0;
                    *(_QWORD *)(v89 + 16) = v72;
                    v86 = v88 | 4;
                  }
                  v74 = v86 & 0xFFFFFFFFFFFFFFFELL;
                  v73 = v74 | 1;
                  *(_QWORD *)(v72 + 96) = v74 | 1;
                }
              }
              if ( v74 )
              {
                if ( (v74 & 4) != 0 )
                {
                  v90 = (_DWORD *)(v73 & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v90 )
                  {
                    v91 = *(_QWORD *)v90;
                    v92 = *(_DWORD *)(*(_QWORD *)v90 + 12LL);
                    if ( v90[2] != v92 )
                    {
                      v90[2] = v92;
                      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v91 + 152LL))(v91, v72);
                    }
                  }
                }
              }
              goto LABEL_125;
            }
LABEL_127:
            v68 = (const __m128i *)((char *)v68 + 24);
            if ( v69 == v68 )
              goto LABEL_131;
            continue;
          }
        }
      }
LABEL_133:
      v10 = *(const __m128i **)(v6 + 8);
      v11 = (const __m128i *)((char *)v10 + 24 * *(unsigned int *)(v6 + 16));
LABEL_72:
      v45 = v162;
      v46 = (char *)v11 - (char *)v162;
      v47 = 0xAAAAAAAAAAAAAAABLL * (v46 >> 3);
      if ( v46 > 0 )
      {
        do
        {
          v48 = _mm_loadu_si128(v45);
          v20 = (const __m128i *)((char *)v20 + 24);
          v45 = (const __m128i *)((char *)v45 + 24);
          *(__m128i *)((char *)v20 - 24) = v48;
          v20[-1].m128i_i64[1] = v45[-1].m128i_i64[1];
          --v47;
        }
        while ( v47 );
        v10 = *(const __m128i **)(v6 + 8);
      }
      *(_DWORD *)(v6 + 16) = -1431655765 * (((char *)v20 - (char *)v10) >> 3);
LABEL_76:
      v6 += 120;
    }
    while ( v6 != v186 );
LABEL_77:
    v187 += 48;
  }
  while ( v188 != v187 );
LABEL_78:
  if ( (_DWORD)v193 )
    sub_B69A90(&v189, v192, &v192[2 * v194], (__int64)&v192, 0);
  else
    sub_B69A90(&v189, &v192[2 * v194], &v192[2 * v194], (__int64)&v192, 1);
  v50 = v189.m128_u64[1];
  v49 = v189.m128_u64[0];
  sub_B69A90(&v189, &v192[2 * v194], &v192[2 * v194], (__int64)&v192, 1);
  v168 = v189.m128_u64[0];
  if ( v49 != v189.m128_u64[0] )
  {
    while ( 1 )
    {
LABEL_81:
      v51 = *(_QWORD **)(v49 + 8);
      if ( v51 )
      {
        v163 = v51[3];
        v52 = 48LL * *((unsigned int *)v51 + 8);
        v53 = v163 + v52;
        if ( v163 != v163 + v52 )
        {
          do
          {
            v53 -= 48;
            v54 = *(char **)(v53 + 32);
            v55 = &v54[120 * *(unsigned int *)(v53 + 40)];
            if ( v54 != v55 )
            {
              do
              {
                while ( 1 )
                {
                  v55 -= 120;
                  v56 = *((char **)v55 + 1);
                  if ( v56 == v55 + 24 )
                    break;
                  free(v56);
                  if ( v54 == v55 )
                    goto LABEL_86;
                }
              }
              while ( v54 != v55 );
LABEL_86:
              v54 = *(char **)(v53 + 32);
            }
            if ( v54 != (char *)(v53 + 48) )
              free(v54);
            operator delete(*(_QWORD *)(v53 + 8), 8LL * *(unsigned int *)(v53 + 24), 4);
          }
          while ( v163 != v53 );
          v53 = v51[3];
        }
        if ( (_QWORD *)v53 != v51 + 5 )
          free((void *)v53);
        operator delete(*v51, 16LL * *((unsigned int *)v51 + 4), 8);
        operator delete(v51, 0x28u);
      }
      v57 = v49 + 16;
      if ( v49 + 16 == v50 )
        goto LABEL_285;
      v58 = *(_QWORD *)(v49 + 16);
      if ( v58 == -4096 || v58 == -8192 )
      {
        v59 = (__int64 *)(v49 + 32);
        while ( 1 )
        {
          v49 = (unsigned __int64)v59;
          if ( v59 == (__int64 *)v50 )
            break;
          v60 = *v59;
          v59 += 2;
          if ( v60 != -4096 && v60 != -8192 )
          {
            if ( v168 != v49 )
              goto LABEL_81;
            goto LABEL_102;
          }
        }
LABEL_285:
        v49 = v50;
        if ( v168 == v50 )
          break;
      }
      else
      {
        v49 += 16LL;
        if ( v168 == v57 )
          break;
      }
    }
  }
LABEL_102:
  v61 = v198;
  v62 = &v198[48 * (unsigned int)v199];
  if ( v198 != v62 )
  {
    do
    {
      v62 -= 48;
      v63 = *((char **)v62 + 4);
      v64 = &v63[120 * *((unsigned int *)v62 + 10)];
      if ( v63 != v64 )
      {
        do
        {
          while ( 1 )
          {
            v64 -= 120;
            v65 = *((char **)v64 + 1);
            if ( v65 == v64 + 24 )
              break;
            free(v65);
            if ( v63 == v64 )
              goto LABEL_106;
          }
        }
        while ( v63 != v64 );
LABEL_106:
        v63 = *((char **)v62 + 4);
      }
      if ( v63 != v62 + 48 )
        free(v63);
      operator delete(*((_QWORD *)v62 + 1), 8LL * *((unsigned int *)v62 + 6), 4);
    }
    while ( v61 != v62 );
    v62 = v198;
  }
  if ( v62 != v200 )
    free(v62);
  operator delete(v195, 16LL * v197, 8);
  operator delete(v192, 16LL * v194, 8);
  return operator delete(v190[0], 16LL * v191, 8);
}
