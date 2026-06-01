__int64 __fastcall sub_5840E0(__int64 a1, void **a2, void **a3)
{
  __int64 v3; // rbx
  bool v4; // zf
  unsigned int *v5; // r12
  unsigned int v6; // r14d
  int v7; // ebp
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int v11; // edx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int *v15; // rax
  int v16; // r12d
  __int64 v17; // r13
  unsigned int *v18; // rbp
  int v19; // eax
  _DWORD *v20; // rdi
  int v21; // edx
  __int64 v22; // rax
  __int64 v23; // r13
  _DWORD *v24; // r14
  unsigned int v25; // r12d
  int v26; // eax
  __int64 v27; // r10
  int v28; // r8d
  __int64 v29; // rax
  __int64 v30; // r15
  unsigned int v31; // ecx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // r12
  int v36; // eax
  _DWORD *v37; // rax
  __int64 v38; // rdx
  _DWORD *v39; // rcx
  _DWORD *v40; // rdx
  __int64 v41; // rbp
  unsigned int *v43; // rax
  __int64 v44; // r13
  int v45; // eax
  _DWORD *v46; // rdi
  int v47; // edx
  __int64 v48; // rax
  __int64 v49; // r14
  _QWORD *v50; // rax
  unsigned int *v51; // r12
  int v52; // edx
  unsigned int v53; // r13d
  int v54; // eax
  __int64 v55; // rdx
  __int64 v56; // r14
  int v57; // r10d
  unsigned int v58; // ecx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r11
  __int64 v62; // rax
  unsigned int *v63; // rbx
  __int64 v64; // rbp
  __int64 v65; // r14
  int v66; // r15d
  __int64 v67; // r12
  int v68; // eax
  _DWORD *v69; // rdi
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned int *v73; // r12
  int v74; // eax
  _DWORD *v75; // rax
  __int64 v76; // rdx
  _DWORD *v77; // rcx
  _DWORD *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r12
  int v81; // eax
  void *v82; // rax
  _QWORD *v83; // r14
  unsigned int v84; // ebp
  int v85; // eax
  __int64 v86; // r10
  int v87; // r8d
  __int64 v88; // rax
  __int64 v89; // r15
  unsigned int v90; // edx
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // r13
  __int64 v94; // rbp
  __int64 v95; // r13
  __int64 v96; // r15
  int v97; // ebx
  int v98; // eax
  unsigned int *v99; // rdi
  __int64 v100; // rax
  int v101; // ebp
  int v102; // eax
  unsigned int *v103; // rdi
  __int64 v104; // rax
  _QWORD *v105; // rdi
  __int64 *v106; // r9
  int v107; // r12d
  __int64 v108; // rdx
  int v109; // esi
  unsigned int v110; // r14d
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rdi
  __int64 v115; // r13
  __int64 v116; // r14
  int v117; // edx
  __int64 v118; // rax
  int v119; // edx
  __int64 v120; // rdx
  __int64 v121; // rax
  size_t v122; // r11
  _QWORD *v123; // rdx
  __int64 v124; // rdx
  _QWORD *v125; // r15
  char *v126; // r13
  int v127; // edi
  __int64 v128; // rdx
  __int64 v129; // rsi
  __int64 v130; // rdx
  int v131; // esi
  __int64 v132; // rsi
  int v133; // esi
  char *v134; // r15
  __int64 v135; // rbp
  __int64 *v136; // rbx
  __int64 v137; // r14
  __int64 v138; // rdi
  __int64 v139; // rax
  unsigned int *v140; // rcx
  __int64 v141; // rbp
  int v142; // r12d
  int v143; // eax
  _DWORD *v144; // rdi
  int v145; // edx
  __int64 v146; // rax
  int v147; // eax
  __int64 v148; // rax
  int v149; // r10d
  unsigned int *v150; // r12
  __int64 v151; // rax
  int v152; // r14d
  _DWORD *v153; // rax
  __int64 v154; // rcx
  _DWORD *v155; // rcx
  __int64 v156; // r12
  _QWORD *v157; // rax
  void *v158; // rax
  size_t v159; // r15
  _QWORD *v160; // rax
  _QWORD *v161; // rbp
  _QWORD *v162; // rdx
  __int64 v163; // rdx
  char *v164; // rsi
  _QWORD *v165; // r8
  char *v166; // r14
  _QWORD *v167; // rax
  int v168; // edi
  __int64 v169; // rdx
  _QWORD *v170; // rsi
  _QWORD *v171; // rdx
  __int64 v172; // rsi
  char *v173; // r15
  __int64 v174; // rax
  unsigned int v175; // r15d
  size_t v176; // rsi
  unsigned int *v177; // rcx
  __int64 v178; // rcx
  _QWORD *v179; // rax
  char **exception; // rbp
  __int64 v182; // [rsp+0h] [rbp-B8h]
  __int64 *v183; // [rsp+0h] [rbp-B8h]
  __int64 *v184; // [rsp+0h] [rbp-B8h]
  char *v185; // [rsp+0h] [rbp-B8h]
  __int64 *v186; // [rsp+0h] [rbp-B8h]
  int v188; // [rsp+8h] [rbp-B0h]
  __int64 v189; // [rsp+8h] [rbp-B0h]
  __int64 v190; // [rsp+8h] [rbp-B0h]
  __int64 v191; // [rsp+10h] [rbp-A8h]
  int v192; // [rsp+10h] [rbp-A8h]
  __int64 v193; // [rsp+10h] [rbp-A8h]
  __int64 v194; // [rsp+10h] [rbp-A8h]
  __int64 *v195; // [rsp+10h] [rbp-A8h]
  unsigned int v196; // [rsp+10h] [rbp-A8h]
  __int64 *v197; // [rsp+10h] [rbp-A8h]
  __int64 v198; // [rsp+18h] [rbp-A0h]
  size_t v199; // [rsp+18h] [rbp-A0h]
  __int64 v200; // [rsp+20h] [rbp-98h]
  __int64 v201; // [rsp+20h] [rbp-98h]
  __int64 v202; // [rsp+20h] [rbp-98h]
  unsigned int *v203; // [rsp+20h] [rbp-98h]
  int v204; // [rsp+20h] [rbp-98h]
  char *v205; // [rsp+20h] [rbp-98h]
  __int64 v206; // [rsp+28h] [rbp-90h]
  __int64 v207; // [rsp+28h] [rbp-90h]
  __int64 v208; // [rsp+28h] [rbp-90h]
  __int64 v209; // [rsp+28h] [rbp-90h]
  _QWORD *v210; // [rsp+28h] [rbp-90h]
  __int64 v211; // [rsp+30h] [rbp-88h]
  __int64 v212; // [rsp+30h] [rbp-88h]
  unsigned int v213; // [rsp+30h] [rbp-88h]
  _QWORD *v214; // [rsp+30h] [rbp-88h]
  size_t v215; // [rsp+38h] [rbp-80h]
  _QWORD *v216; // [rsp+38h] [rbp-80h]
  __int64 v217; // [rsp+40h] [rbp-78h] BYREF
  int *v218; // [rsp+48h] [rbp-70h] BYREF
  __int64 v219; // [rsp+50h] [rbp-68h] BYREF
  __int64 v220; // [rsp+58h] [rbp-60h]
  void *s2; // [rsp+60h] [rbp-58h] BYREF
  __int64 v222[10]; // [rsp+68h] [rbp-50h] BYREF

  v3 = a1;
  v4 = *a2 == nullptr;
  v222[0] = 0;
  if ( v4 || (s2 = nullptr, sub_52CD90(&s2, a2), (v5 = (unsigned int *)s2) == nullptr) )
  {
    v5 = nullptr;
    v217 = 0;
    v7 = sub_5783B0((__int64)&v217, 0);
  }
  else
  {
    v6 = *((_DWORD *)s2 - 1);
    v217 = 0;
    sub_52CD90(&v217, &s2);
    v7 = sub_5783B0((__int64)&v217, v6);
    if ( v8 )
      sub_186B220((void *)(v8 - 8));
  }
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_QWORD *)(a1 + 16);
  v11 = v9 - 1;
  v9 *= 24;
  v12 = v10 + v9;
  v13 = 24LL * (v7 & v11);
  v14 = v10 + v13;
  if ( v13 == v9 )
  {
LABEL_39:
    if ( v10 == v14 )
      goto LABEL_52;
    v44 = v14;
    while ( 1 )
    {
      v45 = *(_DWORD *)(v10 + 4);
      if ( v45 != 2 )
      {
        if ( !v45 )
          goto LABEL_52;
        goto LABEL_42;
      }
      if ( *(_DWORD *)v10 == v7 )
        break;
LABEL_42:
      v10 += 24;
      if ( v44 == v10 )
        goto LABEL_52;
    }
    v46 = *(_DWORD **)(v10 + 8);
    if ( v46 )
    {
      v47 = *(v46 - 1);
      if ( !v5 )
      {
        v48 = 0;
        goto LABEL_48;
      }
    }
    else
    {
      if ( !v5 )
      {
        v17 = v10;
        goto LABEL_17;
      }
      v47 = 0;
    }
    v48 = *(v5 - 1);
LABEL_48:
    if ( (_DWORD)v48 == v47 && !memcmp(v46, v5, 8 * v48) )
    {
      v17 = v10;
      sub_186B220(v5 - 2);
      goto LABEL_17;
    }
    goto LABEL_42;
  }
  v15 = v5;
  v191 = v10 + v13;
  v16 = v7;
  v17 = v10 + v13;
  v18 = v15;
  while ( 1 )
  {
    v19 = *(_DWORD *)(v17 + 4);
    if ( v19 != 2 )
      break;
    if ( *(_DWORD *)v17 == v16 )
    {
      v20 = *(_DWORD **)(v17 + 8);
      if ( v20 )
      {
        v21 = *(v20 - 1);
        if ( v18 )
          goto LABEL_13;
        v22 = 0;
      }
      else
      {
        if ( !v18 )
          goto LABEL_17;
        v21 = 0;
LABEL_13:
        v22 = *(v18 - 1);
      }
      if ( (_DWORD)v22 == v21 && !memcmp(v20, v18, 8 * v22) )
      {
        sub_186B220(v18 - 2);
        goto LABEL_17;
      }
    }
LABEL_8:
    v17 += 24;
    if ( v12 == v17 )
    {
      v43 = v18;
      v14 = v191;
      v7 = v16;
      v5 = v43;
      goto LABEL_39;
    }
  }
  if ( v19 )
    goto LABEL_8;
  v5 = v18;
LABEL_52:
  if ( v5 )
    sub_186B220(v5 - 2);
  v49 = sub_186B270(0x20u);
  v193 = v49;
  v50 = (_QWORD *)sub_186B270(0xC0u);
  *(_DWORD *)(v49 + 24) = 0;
  *v50 = 0;
  *(_QWORD *)(v49 + 16) = 8;
  v50[1] = 0;
  v4 = *a2 == nullptr;
  v50[3] = 0;
  v50[4] = 0;
  v50[6] = 0;
  v50[7] = 0;
  v50[9] = 0;
  v50[10] = 0;
  v50[12] = 0;
  v50[13] = 0;
  v50[15] = 0;
  v50[16] = 0;
  v50[18] = 0;
  v50[19] = 0;
  v50[21] = 0;
  v50[22] = 0;
  *(_QWORD *)(v49 + 8) = v50;
  if ( v4 )
  {
    v220 = v49;
  }
  else
  {
    v219 = 0;
    sub_52CD90(&v219, a2);
    v198 = v219;
    v220 = v49;
    if ( v219 )
    {
      s2 = nullptr;
      sub_52CD90(&s2, &v219);
      v51 = (unsigned int *)s2;
      goto LABEL_57;
    }
  }
  v198 = 0;
  v51 = nullptr;
LABEL_57:
  v52 = *(_DWORD *)(v3 + 24);
  v222[0] = v49;
  v53 = 2 * v52;
  if ( 3 * v52 < (unsigned int)(4 * (*(_DWORD *)(v3 + 28) + *(_DWORD *)(v3 + 32))) )
  {
    v159 = 24LL * v53;
    v160 = (_QWORD *)sub_186B270(v159);
    v161 = v160;
    if ( v53 )
    {
      v162 = &v160[3 * v53];
      do
      {
        *v160 = 0;
        v160 += 3;
        *(v160 - 2) = 0;
      }
      while ( v160 != v162 );
    }
    v163 = *(unsigned int *)(v3 + 24);
    v164 = *(char **)(v3 + 16);
    v165 = &v161[v159 / 8];
    v166 = &v164[24 * (unsigned int)v163];
    v167 = v164 + 8;
    if ( v164 == v166 )
    {
LABEL_268:
      if ( v166 )
      {
        if ( (_DWORD)v163 )
        {
          v173 = v166;
          v205 = &v166[24 * v163];
          do
          {
            while ( 1 )
            {
              v174 = *((_QWORD *)v173 + 1);
              if ( !v174 )
                break;
              v173 += 24;
              sub_186B220((void *)(v174 - 8));
              if ( v205 == v173 )
                goto LABEL_273;
            }
            v173 += 24;
          }
          while ( v173 != v205 );
        }
LABEL_273:
        sub_186B220(v166);
      }
      *(_QWORD *)(v3 + 16) = v161;
      *(_DWORD *)(v3 + 24) = v53;
      *(_DWORD *)(v3 + 32) = 0;
      goto LABEL_58;
    }
    while ( 1 )
    {
      if ( *((_DWORD *)v167 - 1) != 2 )
        goto LABEL_255;
      v168 = *((_DWORD *)v167 - 2);
      v169 = 24LL * (v168 & (v53 - 1));
      v170 = &v161[(unsigned __int64)v169 / 8];
      if ( v159 != v169 )
        break;
LABEL_293:
      if ( v161 == v170 )
      {
LABEL_310:
        sub_1872CE0("");
        sub_1873130(114, 213);
      }
      v171 = v161;
      while ( *((_DWORD *)v171 + 1) )
      {
        v171 += 3;
        if ( v170 == v171 )
          goto LABEL_310;
      }
      *(_DWORD *)v171 = v168;
      *((_DWORD *)v171 + 1) = 2;
      if ( v167 == v171 + 1 )
        goto LABEL_266;
      v172 = v171[1];
      if ( v172 )
        goto LABEL_264;
LABEL_265:
      v171[1] = 0;
      v171[1] = *v167;
      *v167 = 0;
LABEL_266:
      v171[2] = v167[1];
LABEL_255:
      if ( v166 == (char *)(v167 + 2) )
      {
        v163 = *(unsigned int *)(v3 + 24);
        v166 = *(char **)(v3 + 16);
        goto LABEL_268;
      }
      v167 += 3;
    }
    v171 = &v161[(unsigned __int64)v169 / 8];
    while ( *((_DWORD *)v171 + 1) )
    {
      v171 += 3;
      if ( v165 == v171 )
        goto LABEL_293;
    }
    *(_DWORD *)v171 = v168;
    *((_DWORD *)v171 + 1) = 2;
    if ( v167 == v171 + 1 )
      goto LABEL_266;
    v172 = v171[1];
    if ( !v172 )
      goto LABEL_265;
LABEL_264:
    v216 = v167;
    v214 = v171;
    v210 = v165;
    sub_186B220((void *)(v172 - 8));
    v167 = v216;
    v171 = v214;
    v165 = v210;
    goto LABEL_265;
  }
LABEL_58:
  s2 = v51;
  v54 = sub_57E150(&s2);
  v55 = *(unsigned int *)(v3 + 24);
  v56 = *(_QWORD *)(v3 + 16);
  v57 = v54;
  v58 = v55 - 1;
  v59 = 24 * v55;
  v60 = 24LL * (v54 & v58);
  v61 = v56 + v60;
  if ( v60 == v59 )
  {
    v17 = 0;
LABEL_214:
    if ( v56 == v61 )
    {
LABEL_242:
      sub_1872CE0("");
      sub_1873130(114, 461);
    }
    v140 = v51;
    v141 = v61;
    v142 = v57;
    while ( 1 )
    {
      v143 = *(_DWORD *)(v56 + 4);
      if ( v143 == 2 )
        break;
      if ( !v143 )
      {
        v149 = v142;
        v150 = v140;
        if ( v17 )
          --*(_DWORD *)(v3 + 32);
        else
          v17 = v56;
        v151 = *(_QWORD *)(v17 + 8);
        if ( v151 )
          goto LABEL_232;
        goto LABEL_233;
      }
      v17 = v56;
LABEL_218:
      v56 += 24;
      if ( v141 == v56 )
        goto LABEL_242;
    }
    if ( v142 != *(_DWORD *)v56 )
      goto LABEL_218;
    v144 = *(_DWORD **)(v56 + 8);
    if ( v144 )
    {
      v145 = *(v144 - 1);
      if ( !v140 )
      {
        v146 = 0;
        goto LABEL_224;
      }
    }
    else
    {
      if ( !v140 )
      {
        v17 = v56;
        goto LABEL_244;
      }
      v145 = 0;
    }
    v146 = *(v140 - 1);
LABEL_224:
    if ( (_DWORD)v146 == v145 )
    {
      v203 = v140;
      v147 = memcmp(v144, v140, 8 * v146);
      v140 = v203;
      if ( !v147 )
      {
        v73 = v203;
        v17 = v56;
        goto LABEL_243;
      }
    }
    goto LABEL_218;
  }
  v62 = v3;
  v211 = *(_QWORD *)(v3 + 16);
  v63 = v51;
  v17 = 0;
  v64 = v56 + v60;
  v65 = v56 + v59;
  v66 = v57;
  v206 = v61;
  v67 = v62;
  while ( 1 )
  {
    v68 = *(_DWORD *)(v64 + 4);
    if ( v68 != 2 )
      break;
    if ( v66 == *(_DWORD *)v64 )
    {
      v69 = *(_DWORD **)(v64 + 8);
      if ( v69 )
      {
        v70 = *(v69 - 1);
        if ( v63 )
          goto LABEL_67;
        v71 = 0;
      }
      else
      {
        if ( !v63 )
        {
          v3 = v67;
          v17 = v64;
          goto LABEL_244;
        }
        v70 = 0;
LABEL_67:
        v71 = *(v63 - 1);
      }
      if ( (_DWORD)v71 == v70 && !memcmp(v69, v63, 8 * v71) )
      {
        v72 = v67;
        v73 = v63;
        v17 = v64;
        v3 = v72;
LABEL_243:
        sub_186B220(v73 - 2);
        goto LABEL_244;
      }
    }
LABEL_62:
    v64 += 24;
    if ( v65 == v64 )
    {
      v139 = v67;
      v57 = v66;
      v61 = v206;
      v56 = v211;
      v51 = v63;
      v3 = v139;
      goto LABEL_214;
    }
  }
  if ( v68 )
  {
    v17 = v64;
    goto LABEL_62;
  }
  v148 = v67;
  v149 = v66;
  v150 = v63;
  v3 = v148;
  if ( v17 )
    --*(_DWORD *)(v148 + 32);
  else
    v17 = v64;
  v151 = *(_QWORD *)(v17 + 8);
  if ( v151 )
  {
LABEL_232:
    v204 = v149;
    sub_186B220((void *)(v151 - 8));
    v149 = v204;
  }
LABEL_233:
  *(_QWORD *)(v17 + 8) = v150;
  *(_DWORD *)(v17 + 4) = 2;
  *(_QWORD *)(v17 + 16) = v193;
  *(_DWORD *)v17 = v149;
  ++*(_DWORD *)(v3 + 28);
LABEL_244:
  if ( v198 )
    sub_186B220((void *)(v198 - 8));
  v156 = sub_186B270(0x18u);
  v157 = (_QWORD *)sub_186B270(0xC0u);
  *(_DWORD *)(v156 + 16) = 0;
  *v157 = 0;
  v157[2] = 0;
  v157[3] = 0;
  v157[5] = 0;
  v157[6] = 0;
  v157[8] = 0;
  v157[9] = 0;
  v157[11] = 0;
  v157[12] = 0;
  v157[14] = 0;
  v157[15] = 0;
  v157[17] = 0;
  v157[18] = 0;
  v157[20] = 0;
  v157[21] = 0;
  v157[23] = 0;
  *(_QWORD *)v156 = v157;
  *(_QWORD *)(v156 + 8) = 8;
  v158 = *a2;
  if ( *a2 )
  {
    s2 = nullptr;
    sub_52CD90(&s2, a2);
    v158 = s2;
  }
  v222[0] = v156;
  s2 = v158;
  sub_5833A0((_DWORD *)(v3 + 40), (char **)&s2);
  if ( s2 )
    sub_186B220((char *)s2 - 8);
LABEL_17:
  v23 = *(_QWORD *)(v17 + 16);
  v222[0] = 0;
  if ( *a3 && (s2 = nullptr, sub_583300(&s2, a3), (v24 = s2) != nullptr) )
  {
    v25 = *((_DWORD *)s2 - 1);
    if ( v25 )
    {
      v218 = nullptr;
      sub_583300(&v218, &s2);
      v26 = sub_578120(&v218, v25);
      v28 = v26;
      if ( v27 )
      {
        v192 = v26;
        sub_186B220((void *)(v27 - 8));
        v28 = v192;
      }
    }
    else
    {
      v28 = 778;
    }
  }
  else
  {
    v24 = nullptr;
    v28 = 778;
  }
  v29 = *(unsigned int *)(v23 + 16);
  v30 = *(_QWORD *)(v23 + 8);
  v31 = v29 - 1;
  v29 *= 24;
  v32 = v30 + v29;
  v33 = 24LL * (v28 & v31);
  v34 = v30 + v33;
  if ( v33 != v29 )
  {
    v35 = v30 + v33;
    do
    {
      v36 = *(_DWORD *)(v35 + 4);
      if ( v36 == 2 )
      {
        if ( *(_DWORD *)v35 == v28 )
        {
          v37 = *(_DWORD **)(v35 + 8);
          if ( v37 )
          {
            v38 = (unsigned int)*(v37 - 1);
            if ( v24 )
            {
              if ( (_DWORD)v38 == *(v24 - 1) )
              {
                v39 = &v37[v38];
                if ( v37 == v39 )
                {
                  v30 = v35;
                  goto LABEL_124;
                }
                v40 = v24;
                while ( *v37 == *v40 )
                {
                  ++v37;
                  ++v40;
                  if ( v39 == v37 )
                    goto LABEL_35;
                }
              }
            }
            else if ( !(_DWORD)v38 )
            {
              goto LABEL_36;
            }
          }
          else
          {
            if ( !v24 )
              goto LABEL_36;
            if ( !*(v24 - 1) )
              goto LABEL_35;
          }
        }
      }
      else if ( !v36 )
      {
        goto LABEL_88;
      }
      v35 += 24;
    }
    while ( v32 != v35 );
  }
  for ( ; v34 != v30; v30 += 24 )
  {
    v74 = *(_DWORD *)(v30 + 4);
    if ( v74 == 2 )
    {
      if ( *(_DWORD *)v30 == v28 )
      {
        v75 = *(_DWORD **)(v30 + 8);
        if ( v75 )
        {
          v76 = (unsigned int)*(v75 - 1);
          if ( v24 )
          {
            if ( (_DWORD)v76 == *(v24 - 1) )
            {
              v77 = &v75[v76];
              if ( v75 != v77 )
              {
                v78 = v24;
                do
                {
                  if ( *v75 != *v78 )
                    goto LABEL_77;
                  ++v75;
                  ++v78;
                }
                while ( v77 != v75 );
                v35 = v30;
LABEL_35:
                sub_186B220(v24 - 2);
LABEL_36:
                v41 = 4LL * *(unsigned int *)(v35 + 16);
                return *(unsigned int *)(*(_QWORD *)(v3 + 8) + v41);
              }
LABEL_124:
              sub_186B220(v24 - 2);
LABEL_125:
              v35 = v30;
              goto LABEL_36;
            }
          }
          else if ( !(_DWORD)v76 )
          {
            goto LABEL_125;
          }
        }
        else
        {
          if ( !v24 )
            goto LABEL_125;
          if ( !*(v24 - 1) )
            goto LABEL_124;
        }
      }
    }
    else if ( !v74 )
    {
      break;
    }
LABEL_77:
    ;
  }
LABEL_88:
  if ( v24 )
    sub_186B220(v24 - 2);
  v79 = *(_QWORD *)(v3 + 8);
  v80 = *(unsigned int *)(v23 + 20);
  if ( v79 )
    v81 = *(_DWORD *)(v79 - 4);
  else
    v81 = 0;
  if ( v81 == (_DWORD)v80 )
  {
    v152 = sub_4C2940(*(_QWORD *)(*(_QWORD *)v3 + 24LL), *(_QWORD *)v3);
    v153 = *(_DWORD **)(v3 + 8);
    if ( v153 )
    {
      v154 = (unsigned int)*(v153 - 1);
      if ( (_DWORD)v154 == *(v153 - 2) )
      {
        v175 = (unsigned int)(3 * v154 + 1) >> 1;
        v176 = 4 * v175 + 8;
        if ( 4 * (int)v154 + 8 >= (unsigned int)v176 || (unsigned int)v154 >= v175 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0((__int64 *)&s2, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, &s2);
          sub_233E40((__int64)&s2);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v177 = (unsigned int *)sub_186B300(v153 - 2, v176);
        v153 = v177 + 2;
        *v177 = v175;
        v178 = v177[1];
        *(_QWORD *)(v3 + 8) = v153;
        v155 = &v153[v178];
      }
      else
      {
        v155 = &v153[v154];
      }
    }
    else
    {
      v179 = (_QWORD *)sub_186B270(0x10u);
      *v179 = 2;
      v153 = v179 + 1;
      *(_QWORD *)(v3 + 8) = v153;
      v155 = v153;
    }
    *v155 = v152;
    ++*(v153 - 1);
  }
  v82 = *a3;
  if ( *a3 )
  {
    s2 = nullptr;
    sub_583300(&s2, a3);
    v82 = s2;
  }
  LODWORD(v222[0]) = v80;
  s2 = v82;
  sub_5839E0(v23, (__int64)&s2);
  if ( s2 )
    sub_186B220((char *)s2 - 8);
  v222[0] = 0;
  if ( *a2 && (s2 = nullptr, sub_52CD90(&s2, a2), (v83 = s2) != nullptr) )
  {
    v84 = *((_DWORD *)s2 - 1);
    v219 = 0;
    sub_52CD90(&v219, &s2);
    v85 = sub_5783B0((__int64)&v219, v84);
    v87 = v85;
    if ( v86 )
    {
      v188 = v85;
      sub_186B220((void *)(v86 - 8));
      v87 = v188;
    }
  }
  else
  {
    v83 = nullptr;
    v219 = 0;
    v87 = sub_5783B0((__int64)&v219, 0);
  }
  v88 = *(unsigned int *)(v3 + 48);
  v89 = *(_QWORD *)(v3 + 40);
  v90 = v88 - 1;
  v91 = 24 * v88;
  v92 = 24LL * (v87 & v90);
  v93 = v89 + v92;
  if ( v92 == v91 )
  {
LABEL_129:
    if ( v89 != v93 )
    {
      v101 = v87;
      do
      {
        v102 = *(_DWORD *)(v89 + 4);
        if ( v102 != 2 )
        {
          if ( !v102 )
            break;
          goto LABEL_132;
        }
        if ( *(_DWORD *)v89 == v101 )
        {
          v103 = *(unsigned int **)(v89 + 8);
          if ( v103 )
          {
            v104 = *(v103 - 1);
            if ( !v83 )
            {
              if ( !(_DWORD)v104 )
                goto LABEL_142;
              goto LABEL_132;
            }
          }
          else
          {
            if ( !v83 )
            {
              v83 = (_QWORD *)v89;
              goto LABEL_143;
            }
            v104 = 0;
          }
          if ( (_DWORD)v104 == *((_DWORD *)v83 - 1) && !memcmp(v103, v83, 8 * v104) )
            goto LABEL_142;
        }
LABEL_132:
        v89 += 24;
      }
      while ( v93 != v89 );
    }
LABEL_141:
    v89 = 0;
    if ( !v83 )
      goto LABEL_143;
    goto LABEL_142;
  }
  v189 = v89 + v92;
  v94 = v89 + v92;
  v95 = v89 + v91;
  v194 = *(_QWORD *)(v3 + 40);
  v96 = v3;
  v97 = v87;
  while ( 1 )
  {
    v98 = *(_DWORD *)(v94 + 4);
    if ( v98 != 2 )
    {
      if ( !v98 )
      {
        v3 = v96;
        goto LABEL_141;
      }
      goto LABEL_104;
    }
    if ( *(_DWORD *)v94 != v97 )
      goto LABEL_104;
    v99 = *(unsigned int **)(v94 + 8);
    if ( !v99 )
      break;
    v100 = *(v99 - 1);
    if ( v83 )
      goto LABEL_109;
    if ( !(_DWORD)v100 )
      goto LABEL_111;
LABEL_104:
    v94 += 24;
    if ( v95 == v94 )
    {
      v87 = v97;
      v93 = v189;
      v3 = v96;
      v89 = v194;
      goto LABEL_129;
    }
  }
  if ( v83 )
  {
    v100 = 0;
LABEL_109:
    if ( (_DWORD)v100 == *((_DWORD *)v83 - 1) && !memcmp(v99, v83, 8 * v100) )
    {
LABEL_111:
      v3 = v96;
      v89 = v94;
LABEL_142:
      v105 = v83 - 1;
      v83 = (_QWORD *)v89;
      sub_186B220(v105);
      goto LABEL_143;
    }
    goto LABEL_104;
  }
  v3 = v96;
  v83 = (_QWORD *)v94;
LABEL_143:
  v41 = 4 * v80;
  v106 = (__int64 *)v83[2];
  v107 = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v80);
  v190 = (__int64)*a3;
  if ( *a3 )
  {
    v195 = (__int64 *)v83[2];
    LODWORD(s2) = v107;
    v222[0] = 0;
    sub_583300(v222, a3);
    v107 = (int)s2;
    v106 = v195;
    v190 = v222[0];
  }
  v108 = *((unsigned int *)v106 + 2);
  v109 = *((_DWORD *)v106 + 4);
  v110 = 2 * v108;
  if ( 3 * (int)v108 >= (unsigned int)(4 * (v109 + *((_DWORD *)v106 + 3))) )
  {
    v196 = v108 - 1;
    v111 = *v106;
    v199 = 24 * v108;
    v112 = *v106 + 24 * v108;
    goto LABEL_147;
  }
  v197 = v106;
  v199 = 24LL * v110;
  v111 = sub_186B270(v199);
  v122 = v199;
  v106 = v197;
  if ( v110 )
  {
    v123 = (_QWORD *)v111;
    do
    {
      *v123 = 0;
      v123 += 3;
      *(v123 - 1) = 0;
    }
    while ( v123 != (_QWORD *)(v111 + 24LL * v110) );
  }
  v124 = *((unsigned int *)v197 + 2);
  v196 = v110 - 1;
  v125 = (_QWORD *)(*v106 + 16);
  v126 = (char *)(*v106 + 24LL * (unsigned int)v124);
  v112 = v111 + v199;
  if ( (char *)*v106 != v126 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v125 - 3) != 2 )
        goto LABEL_181;
      v127 = *((_DWORD *)v125 - 4);
      v128 = 24LL * (v127 & v196);
      v129 = v111 + v128;
      if ( v122 == v128 )
      {
LABEL_191:
        if ( v111 == v129 )
        {
LABEL_304:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v130 = v111;
        while ( *(_DWORD *)(v130 + 4) )
        {
          v130 += 24;
          if ( v129 == v130 )
            goto LABEL_304;
        }
        *(_DWORD *)v130 = v127;
        v133 = *((_DWORD *)v125 - 2);
        *(_DWORD *)(v130 + 4) = 2;
        *(_DWORD *)(v130 + 8) = v133;
        if ( v125 != (_QWORD *)(v130 + 16) )
        {
          v132 = *(_QWORD *)(v130 + 16);
          if ( v132 )
            goto LABEL_197;
          goto LABEL_198;
        }
      }
      else
      {
        v130 = v111 + v128;
        while ( *(_DWORD *)(v130 + 4) )
        {
          v130 += 24;
          if ( v112 == v130 )
            goto LABEL_191;
        }
        *(_DWORD *)v130 = v127;
        v131 = *((_DWORD *)v125 - 2);
        *(_DWORD *)(v130 + 4) = 2;
        *(_DWORD *)(v130 + 8) = v131;
        if ( v125 != (_QWORD *)(v130 + 16) )
        {
          v132 = *(_QWORD *)(v130 + 16);
          if ( v132 )
          {
LABEL_197:
            v215 = v122;
            v212 = v112;
            v207 = v111;
            v200 = v130;
            v184 = v106;
            sub_186B220((void *)(v132 - 8));
            v122 = v215;
            v112 = v212;
            v111 = v207;
            v130 = v200;
            v106 = v184;
          }
LABEL_198:
          *(_QWORD *)(v130 + 16) = 0;
          *(_QWORD *)(v130 + 16) = *v125;
          *v125 = 0;
        }
      }
LABEL_181:
      if ( v126 == (char *)(v125 + 1) )
      {
        v124 = *((unsigned int *)v106 + 2);
        v126 = (char *)*v106;
        break;
      }
      v125 += 3;
    }
  }
  if ( v126 )
  {
    if ( (_DWORD)v124 )
    {
      v201 = v41;
      v134 = v126;
      v135 = v111;
      v208 = v3;
      v136 = v106;
      v185 = &v126[24 * v124];
      v213 = v110;
      v137 = v112;
      do
      {
        while ( 1 )
        {
          v138 = *((_QWORD *)v134 + 2);
          if ( !v138 )
            break;
          v134 += 24;
          sub_186B220((void *)(v138 - 8));
          if ( v185 == v134 )
            goto LABEL_205;
        }
        v134 += 24;
      }
      while ( v134 != v185 );
LABEL_205:
      v106 = v136;
      v111 = v135;
      v112 = v137;
      v41 = v201;
      v3 = v208;
      v110 = v213;
    }
    v209 = v112;
    v202 = v111;
    v186 = v106;
    sub_186B220(v126);
    v106 = v186;
    v111 = v202;
    v112 = v209;
  }
  *v106 = v111;
  v109 = 0;
  *((_DWORD *)v106 + 2) = v110;
  *((_DWORD *)v106 + 4) = 0;
LABEL_147:
  v113 = 24LL * (v107 & v196);
  v114 = v111 + v113;
  if ( v113 == v199 )
  {
    v116 = 0;
    while ( 1 )
    {
LABEL_161:
      if ( v114 == v111 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v119 = *(_DWORD *)(v111 + 4);
      if ( v119 == 2 )
      {
        if ( *(_DWORD *)v111 == v107 && *(_DWORD *)(v111 + 8) == v107 )
        {
          v120 = *(_QWORD *)(v111 + 16);
          if ( v120 )
          {
            v182 = v111;
            sub_186B220((void *)(v120 - 8));
            v111 = v182;
          }
          *(_DWORD *)(v111 + 4) = 2;
          *(_QWORD *)(v111 + 16) = v190;
          return *(unsigned int *)(*(_QWORD *)(v3 + 8) + v41);
        }
      }
      else
      {
        if ( !v119 )
        {
          if ( v116 )
            *((_DWORD *)v106 + 4) = v109 - 1;
          else
            v116 = v111;
          v121 = *(_QWORD *)(v116 + 16);
          *(_DWORD *)(v116 + 8) = v107;
          if ( v121 )
            goto LABEL_174;
          goto LABEL_175;
        }
        v116 = v111;
      }
      v111 += 24;
    }
  }
  v115 = v111 + v113;
  v116 = 0;
  while ( 2 )
  {
    v117 = *(_DWORD *)(v115 + 4);
    if ( v117 == 2 )
    {
      if ( *(_DWORD *)v115 == v107 && *(_DWORD *)(v115 + 8) == v107 )
      {
        v118 = *(_QWORD *)(v115 + 16);
        if ( v118 )
          sub_186B220((void *)(v118 - 8));
        *(_DWORD *)(v115 + 4) = 2;
        *(_QWORD *)(v115 + 16) = v190;
        return *(unsigned int *)(*(_QWORD *)(v3 + 8) + v41);
      }
      goto LABEL_151;
    }
    if ( v117 )
    {
      v116 = v115;
LABEL_151:
      v115 += 24;
      if ( v115 == v112 )
        goto LABEL_161;
      continue;
    }
    break;
  }
  if ( v116 )
    *((_DWORD *)v106 + 4) = v109 - 1;
  else
    v116 = v115;
  v121 = *(_QWORD *)(v116 + 16);
  *(_DWORD *)(v116 + 8) = v107;
  if ( !v121 )
    goto LABEL_175;
LABEL_174:
  v183 = v106;
  sub_186B220((void *)(v121 - 8));
  v106 = v183;
LABEL_175:
  *(_DWORD *)(v116 + 4) = 2;
  *(_DWORD *)v116 = v107;
  *(_QWORD *)(v116 + 16) = v190;
  ++*((_DWORD *)v106 + 3);
  return *(unsigned int *)(*(_QWORD *)(v3 + 8) + v41);
}

