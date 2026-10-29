__int64 __fastcall sub_C3A690(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // rax
  int v7; // esi
  unsigned int v8; // ecx
  __int64 v9; // r8
  char *v10; // rcx
  __int64 v11; // r8
  char *v12; // rdi
  char *v13; // r15
  __int64 v14; // rax
  void *v15; // r15
  __int64 v16; // rax
  int v17; // edi
  unsigned int v18; // edx
  __int64 *v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // rdx
  __int64 *v22; // r8
  __int64 *i; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  void *v27; // r13
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r13
  int v32; // eax
  int v33; // r8d
  int v34; // r9d
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // r8
  __int64 v38; // r13
  __m128 *v39; // rsi
  unsigned int v40; // eax
  __int64 v41; // rdx
  int v42; // eax
  __m128 *v43; // rdx
  __int64 *v44; // rcx
  __m128 v45; // xmm0
  __int64 v46; // rax
  int v47; // ecx
  int v48; // r8d
  int v49; // r9d
  __int64 v50; // r13
  bool v51; // zf
  _DWORD *v52; // rax
  int v53; // edx
  __int64 *v54; // rdx
  unsigned int v55; // eax
  __int64 v56; // rcx
  int v57; // eax
  __int64 *v58; // rcx
  __int64 v59; // r15
  __int64 v60; // rax
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 *v65; // rcx
  _QWORD *v66; // rdx
  unsigned int v67; // eax
  __int64 v68; // rcx
  int v69; // eax
  __int64 *v70; // rcx
  void *v71; // r15
  __int64 result; // rax
  char *v73; // r15
  void *v74; // r12
  char *v75; // r15
  void *v76; // rbx
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // r15
  __int64 v81; // rdi
  __int64 v82; // rdi
  _QWORD *v83; // rax
  unsigned int v84; // edi
  size_t v85; // rsi
  unsigned int *v86; // rax
  __int64 v87; // rcx
  unsigned int v88; // r15d
  size_t v89; // rsi
  unsigned int *v90; // rax
  __int64 v91; // rcx
  unsigned int v92; // r15d
  size_t v93; // rsi
  unsigned int *v94; // rax
  __int64 v95; // rcx
  size_t v96; // rdi
  __int64 v97; // rax
  _QWORD *v98; // r8
  _DWORD *v99; // r9
  unsigned int *v100; // rcx
  __int64 v101; // r10
  __int64 v102; // rdx
  unsigned int *v103; // rdi
  unsigned int *v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 v107; // rcx
  __int64 *v108; // rbx
  __int64 v109; // rsi
  __int64 v110; // rdi
  __int64 v111; // rsi
  __int64 v112; // rdi
  void *v113; // rdi
  int v114; // eax
  int v115; // eax
  void *v116; // rdi
  _QWORD *v117; // rax
  void *v118; // rdi
  _DWORD *v119; // rcx
  int v120; // eax
  char *v121; // rax
  void *v122; // r13
  int v123; // edx
  int v124; // edx
  void *v125; // r13
  void *v126; // r13
  _QWORD *v127; // rax
  void *v128; // r14
  _DWORD *v129; // rsi
  char *v130; // r13
  int v131; // eax
  void *v132; // r14
  int v133; // eax
  void *v134; // r13
  void *v135; // r13
  void *v136; // r13
  void *v137; // r13
  void *v138; // r13
  void *v139; // r13
  void *v140; // r13
  int v141; // r13d
  char v142; // al
  void *v143; // rdi
  int v144; // eax
  int v145; // eax
  void *v146; // rsi
  void *v147; // r13
  void *v148; // r13
  void *v149; // r13
  void *v150; // r13
  void *v151; // r13
  int v152; // ecx
  int v153; // r8d
  int v154; // r9d
  __int64 v155; // rdi
  __int64 v156; // rax
  __int64 v157; // r15
  void *v158; // r13
  void *v159; // rdi
  _QWORD *v160; // rax
  _QWORD *v161; // rax
  _QWORD *v162; // rax
  char **v163; // r15
  __int64 v164; // rdx
  char **v165; // rdi
  char **v166; // rbx
  void *v167; // r15
  char **exception; // r12
  __int64 v169; // rdx
  char **v170; // r15
  __int64 v171; // rdx
  char **v172; // rdi
  char **v173; // rbx
  void *v174; // r15
  char **v175; // r15
  __int64 v176; // rdx
  char **v177; // rdi
  char **v178; // rbx
  void *v179; // r15
  int v180; // [rsp-8h] [rbp-1B8h]
  int v181; // [rsp+0h] [rbp-1B0h]
  int v182; // [rsp+0h] [rbp-1B0h]
  int v183; // [rsp+8h] [rbp-1A8h]
  int v184; // [rsp+8h] [rbp-1A8h]
  int v185; // [rsp+10h] [rbp-1A0h]
  int v186; // [rsp+10h] [rbp-1A0h]
  _DWORD *v187; // [rsp+10h] [rbp-1A0h]
  _DWORD *v188; // [rsp+10h] [rbp-1A0h]
  int *v189; // [rsp+18h] [rbp-198h]
  int v190; // [rsp+18h] [rbp-198h]
  _QWORD *v191; // [rsp+18h] [rbp-198h]
  _QWORD *v192; // [rsp+18h] [rbp-198h]
  _QWORD *v193; // [rsp+20h] [rbp-190h]
  int v194; // [rsp+20h] [rbp-190h]
  _QWORD *v195; // [rsp+20h] [rbp-190h]
  __m128 *v196; // [rsp+20h] [rbp-190h]
  _QWORD *v197; // [rsp+28h] [rbp-188h]
  char v198; // [rsp+28h] [rbp-188h]
  unsigned int v199; // [rsp+28h] [rbp-188h]
  _QWORD *v200; // [rsp+28h] [rbp-188h]
  char v201; // [rsp+30h] [rbp-180h]
  int v202; // [rsp+30h] [rbp-180h]
  __int64 v203; // [rsp+30h] [rbp-180h]
  int v204; // [rsp+38h] [rbp-178h]
  void *v205; // [rsp+38h] [rbp-178h]
  unsigned int v206; // [rsp+40h] [rbp-170h]
  int v207; // [rsp+40h] [rbp-170h]
  int v208; // [rsp+40h] [rbp-170h]
  void *v209; // [rsp+48h] [rbp-168h]
  void *v210; // [rsp+48h] [rbp-168h]
  __int64 *v211; // [rsp+50h] [rbp-160h] BYREF
  void *ptr; // [rsp+58h] [rbp-158h]
  void *v213; // [rsp+60h] [rbp-150h]
  __int64 v214; // [rsp+68h] [rbp-148h]
  void *v215; // [rsp+70h] [rbp-140h]
  void *v216; // [rsp+78h] [rbp-138h]
  __int64 v217; // [rsp+80h] [rbp-130h] BYREF
  __int64 v218; // [rsp+88h] [rbp-128h]
  __int64 v219; // [rsp+90h] [rbp-120h] BYREF
  __int64 v220; // [rsp+98h] [rbp-118h]
  int v221; // [rsp+A0h] [rbp-110h] BYREF
  char v222; // [rsp+A4h] [rbp-10Ch]
  void *v223; // [rsp+A8h] [rbp-108h]
  int v224; // [rsp+B0h] [rbp-100h] BYREF
  char v225; // [rsp+B4h] [rbp-FCh]
  __int64 v226; // [rsp+B8h] [rbp-F8h]
  int v227; // [rsp+C0h] [rbp-F0h] BYREF
  char v228; // [rsp+C4h] [rbp-ECh]
  __int64 v229; // [rsp+C8h] [rbp-E8h]
  int v230; // [rsp+D0h] [rbp-E0h] BYREF
  char v231; // [rsp+D4h] [rbp-DCh]
  __int64 v232; // [rsp+D8h] [rbp-D8h]
  _QWORD v233[2]; // [rsp+E0h] [rbp-D0h] BYREF
  _QWORD v234[2]; // [rsp+F0h] [rbp-C0h] BYREF
  int v235; // [rsp+100h] [rbp-B0h] BYREF
  char v236; // [rsp+104h] [rbp-ACh]
  __int64 v237; // [rsp+108h] [rbp-A8h]
  int v238; // [rsp+110h] [rbp-A0h] BYREF
  char v239; // [rsp+114h] [rbp-9Ch]
  __int64 v240; // [rsp+118h] [rbp-98h]
  __int64 v241; // [rsp+120h] [rbp-90h] BYREF
  __int64 v242; // [rsp+128h] [rbp-88h]
  __int64 v243; // [rsp+130h] [rbp-80h] BYREF
  __int64 v244; // [rsp+138h] [rbp-78h]
  char v245; // [rsp+140h] [rbp-70h]
  __int64 v246; // [rsp+150h] [rbp-60h] BYREF
  __int64 v247; // [rsp+158h] [rbp-58h] BYREF
  __int64 v248; // [rsp+160h] [rbp-50h] BYREF
  __int64 v249; // [rsp+168h] [rbp-48h] BYREF
  __int64 v250; // [rsp+170h] [rbp-40h]
  char v251; // [rsp+178h] [rbp-38h]

  v3 = a2;
  v4 = *a1;
  v214 = a2;
  v246 = a2;
  v201 = v4;
  v217 = 0;
  v218 = 0;
  v219 = 1;
  v220 = 0;
  v241 = 0;
  v242 = 0;
  v243 = 1;
  v244 = 0;
  v245 = 0;
  v247 = 0;
  v248 = 0;
  v249 = 1;
  v250 = 0;
  v251 = 0;
  v5 = (char *)a1[51];
  v6 = *((unsigned int *)a1 + 104);
  v7 = *(_DWORD *)(a2 + 12);
  v8 = v6 - 1;
  v6 *= 48;
  v9 = 3LL * (v7 & v8);
  v10 = &v5[v6];
  v11 = 16 * v9;
  v12 = &v5[v11];
  if ( v11 != v6 )
  {
    v13 = &v5[v11];
    do
    {
      v14 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 > 1u )
      {
        if ( *(_DWORD *)(v14 + 12) == v7 && v3 == v14 )
        {
          v214 = v3;
          goto LABEL_122;
        }
      }
      else if ( !v14 )
      {
LABEL_8:
        v214 = v3;
LABEL_9:
        v15 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v247);
        sub_182CBA0(v15, &v249);
        v215 = &v241;
        v216 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v241);
        sub_182CBA0(v216, &v243);
        v213 = nullptr;
        goto LABEL_10;
      }
      v13 += 48;
    }
    while ( v10 != v13 );
    v214 = v3;
  }
  if ( v5 == v12 )
    goto LABEL_9;
  v3 = v214;
  while ( 1 )
  {
    v25 = *(_QWORD *)v5;
    if ( *(_QWORD *)v5 > 1u )
      break;
    if ( !v25 )
      goto LABEL_8;
LABEL_23:
    v5 += 48;
    if ( v12 == v5 )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v25 + 12) != v7 || v214 != v25 )
    goto LABEL_23;
  v13 = v5;
LABEL_122:
  v216 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v247);
  sub_182CBA0(v216, &v249);
  v113 = qword_1C7F2C0;
  if ( (v13[12] & 1) != 0 )
  {
    v216 = qword_1C7F2C0;
    v215 = &v241;
    sub_182C690(qword_1C7F2C0, &v241, v13 + 8);
    v113 = v216;
    if ( (v13[28] & 1) != 0 )
      goto LABEL_134;
LABEL_124:
    v115 = *((_DWORD *)v13 + 6);
    BYTE4(v243) &= ~1u;
    LODWORD(v243) = v115;
  }
  else
  {
    v114 = *((_DWORD *)v13 + 2);
    BYTE4(v241) &= ~1u;
    LODWORD(v241) = v114;
    v215 = &v241;
    if ( (v13[28] & 1) == 0 )
      goto LABEL_124;
LABEL_134:
    sub_182C690(v113, &v243, v13 + 24);
  }
  v116 = qword_1C7F2C0;
  v245 = v13[40];
  if ( (v241 & 0x100000000LL) != 0 )
  {
    v216 = qword_1C7F2C0;
    sub_182C690(qword_1C7F2C0, &v217, v215);
  }
  else
  {
    BYTE4(v217) &= ~1u;
    LODWORD(v217) = v241;
  }
  if ( (v243 & 0x100000000LL) != 0 )
  {
    sub_182C690(v116, &v219, &v243);
    v216 = qword_1C7F2C0;
  }
  else
  {
    BYTE4(v219) &= ~1u;
    v216 = qword_1C7F2C0;
    LODWORD(v219) = v243;
  }
  sub_182CBA0(qword_1C7F2C0, v215);
  sub_182CBA0(v216, &v243);
  v117 = (_QWORD *)sub_186B270(0x20u);
  v213 = v117;
  v118 = qword_1C7F2C0;
  *v117 = 0;
  v117[1] = 0;
  v117[2] = 1;
  v117[3] = 0;
  if ( (v217 & 0x100000000LL) != 0 )
  {
    v216 = v118;
    sub_182C690(v118, v117, &v217);
  }
  else
  {
    *(_DWORD *)v117 = v217;
  }
  if ( (v219 & 0x100000000LL) != 0 )
  {
    sub_182C690(v118, (char *)v213 + 16, &v219);
  }
  else
  {
    v119 = v213;
    v120 = v219;
    *((_BYTE *)v213 + 20) &= ~1u;
    v119[4] = v120;
  }
LABEL_10:
  v245 = 0;
  v16 = *((unsigned int *)a1 + 110);
  v251 = 0;
  v17 = *(_DWORD *)(v214 + 12);
  v246 = v214;
  v18 = v16 - 1;
  v19 = (__int64 *)a1[54];
  v241 = 0;
  v16 *= 48;
  v242 = 0;
  v243 = 1;
  v20 = (__int64 *)((char *)v19 + v16);
  v21 = 48LL * (v17 & v18);
  v244 = 0;
  v247 = 0;
  v22 = &v19[(unsigned __int64)v21 / 8];
  v248 = 0;
  v249 = 1;
  v250 = 0;
  if ( v21 != v16 )
  {
    for ( i = &v19[(unsigned __int64)v21 / 8]; v20 != i; i += 6 )
    {
      v24 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v17 && v214 == v24 )
          goto LABEL_139;
      }
      else if ( !v24 )
      {
        goto LABEL_34;
      }
    }
  }
  if ( v19 == v22 )
  {
LABEL_34:
    v216 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v247);
    sub_182CBA0(v216, &v249);
    v27 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v215);
    sub_182CBA0(v27, &v243);
    v28 = *((_DWORD *)a1 + 156);
    ptr = nullptr;
    v206 = v28;
LABEL_35:
    *((_BYTE *)a1 + 8) = 0;
    goto LABEL_36;
  }
  while ( 2 )
  {
    v26 = *v19;
    if ( (unsigned __int64)*v19 <= 1 )
    {
      if ( !v26 )
        goto LABEL_34;
      goto LABEL_31;
    }
    if ( *(_DWORD *)(v26 + 12) != v17 || v214 != v26 )
    {
LABEL_31:
      v19 += 6;
      if ( v22 == v19 )
        goto LABEL_34;
      continue;
    }
    break;
  }
  i = v19;
LABEL_139:
  ptr = i;
  v216 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v247);
  sub_182CBA0(v216, &v249);
  v121 = (char *)ptr;
  v122 = qword_1C7F2C0;
  if ( (*((_BYTE *)ptr + 12) & 1) != 0 )
  {
    v216 = ptr;
    sub_182C690(qword_1C7F2C0, v215, (char *)ptr + 8);
    v121 = (char *)ptr;
  }
  else
  {
    v123 = *((_DWORD *)ptr + 2);
    BYTE4(v241) &= ~1u;
    LODWORD(v241) = v123;
  }
  if ( (v121[28] & 1) != 0 )
  {
    v216 = v121;
    sub_182C690(v122, &v243, v121 + 24);
    v121 = (char *)v216;
  }
  else
  {
    v124 = *((_DWORD *)v121 + 6);
    BYTE4(v243) &= ~1u;
    LODWORD(v243) = v124;
  }
  v125 = qword_1C7F2C0;
  v245 = v121[40];
  if ( (v241 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v217, v215);
  }
  else
  {
    BYTE4(v217) &= ~1u;
    LODWORD(v217) = v241;
  }
  if ( (v243 & 0x100000000LL) != 0 )
  {
    sub_182C690(v125, &v219, &v243);
  }
  else
  {
    BYTE4(v219) &= ~1u;
    LODWORD(v219) = v243;
  }
  v126 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v215);
  sub_182CBA0(v126, &v243);
  v127 = (_QWORD *)sub_186B270(0x20u);
  ptr = v127;
  v128 = qword_1C7F2C0;
  *v127 = 0;
  v127[1] = 0;
  v127[2] = 1;
  v127[3] = 0;
  if ( (v217 & 0x100000000LL) != 0 )
    sub_182C690(v128, v127, &v217);
  else
    *(_DWORD *)v127 = v217;
  v129 = ptr;
  v130 = (char *)ptr + 16;
  if ( (v219 & 0x100000000LL) != 0 )
  {
    sub_182C690(v128, (char *)ptr + 16, &v219);
  }
  else
  {
    v131 = v219;
    *((_BYTE *)ptr + 20) &= ~1u;
    v129[4] = v131;
  }
  if ( !v213 )
  {
    v206 = *((_DWORD *)a1 + 156);
    goto LABEL_35;
  }
  v233[0] = 1;
  v233[1] = 0;
  v234[0] = 1;
  v234[1] = 0;
  v193 = v234;
  sub_182CBA0(qword_1C7F2C0, v234);
  BYTE4(v234[0]) &= ~1u;
  LODWORD(v234[0]) = 1;
  v132 = qword_1C7F2C0;
  v246 = 0;
  v247 = 0;
  v248 = 1;
  v249 = 0;
  if ( (*((_BYTE *)ptr + 4) & 1) != 0 )
  {
    v216 = &v246;
    sub_182C690(qword_1C7F2C0, &v246, ptr);
  }
  else
  {
    LODWORD(v246) = *(_DWORD *)ptr;
    v216 = &v246;
  }
  if ( (*((_BYTE *)ptr + 20) & 1) != 0 )
  {
    sub_182C690(v132, &v248, v130);
  }
  else
  {
    v133 = *((_DWORD *)ptr + 4);
    BYTE4(v248) &= ~1u;
    LODWORD(v248) = v133;
  }
  if ( (v248 & 0x100000000LL) != 0
    || (_DWORD)v248 != 1
    || (*((_BYTE *)v213 + 20) & 1) != 0
    || *((_DWORD *)v213 + 4) != 1 )
  {
    sub_1852000(qword_1C7F2C0, v216, v213);
  }
  else
  {
    v211 = (__int64 *)qword_1C7F2C0;
    sub_1832A70(qword_1C7F2C0, v216, v213);
    sub_182CBA0(v211, &v248);
    BYTE4(v248) &= ~1u;
    LODWORD(v248) = 1;
  }
  v222 &= 0xFCu;
  v134 = qword_1C7F2C0;
  v225 &= 0xFCu;
  v221 = 0;
  v223 = nullptr;
  v224 = 1;
  v226 = 0;
  if ( (v246 & 0x100000000LL) != 0 )
    sub_182C690(qword_1C7F2C0, &v221, v216);
  else
    v221 = v246;
  if ( (v248 & 0x100000000LL) != 0 )
  {
    v211 = &v248;
    sub_182C690(v134, &v224, &v248);
  }
  else
  {
    v225 &= ~1u;
    v224 = v248;
    v211 = &v248;
  }
  v135 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v216);
  sub_182CBA0(v135, v211);
  v228 &= 0xFCu;
  v136 = qword_1C7F2C0;
  v231 &= 0xFCu;
  v227 = 0;
  v229 = 0;
  v230 = 1;
  v232 = 0;
  if ( (v222 & 1) != 0 )
  {
    v189 = &v221;
    sub_182C690(qword_1C7F2C0, &v227, &v221);
  }
  else
  {
    v227 = v221;
    v189 = &v221;
  }
  if ( (v225 & 1) != 0 )
  {
    sub_182C690(v136, &v230, &v224);
  }
  else
  {
    v231 &= ~1u;
    v230 = v224;
  }
  sub_1831690(qword_1C7F2C0, &v227);
  v246 = 0;
  v137 = qword_1C7F2C0;
  v247 = 0;
  v248 = 1;
  v249 = 0;
  if ( (v228 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, v216, &v227);
  else
    LODWORD(v246) = v227;
  if ( (v231 & 1) != 0 )
  {
    sub_182C690(v137, v211, &v230);
  }
  else
  {
    BYTE4(v248) &= ~1u;
    LODWORD(v248) = v230;
  }
  v138 = qword_1C7F2C0;
  if ( LODWORD(v233[0]) )
  {
    if ( (_DWORD)v246 )
    {
      if ( (v248 & 0x100000000LL) != 0 || (_DWORD)v248 != 1 || (v234[0] & 0x100000000LL) != 0 || LODWORD(v234[0]) != 1 )
      {
        v197 = v233;
        sub_1851D20(qword_1C7F2C0, v216, v233, v216);
      }
      else
      {
        v197 = v233;
        sub_1831A80(qword_1C7F2C0, v216, v233, v216);
        sub_182CBA0(v138, v211);
        BYTE4(v248) &= ~1u;
        LODWORD(v248) = 1;
      }
    }
    else
    {
      if ( (v233[0] & 0x100000000LL) != 0 )
      {
        v197 = v233;
        sub_182C690(qword_1C7F2C0, v216, v233);
      }
      else
      {
        LODWORD(v246) = v233[0];
        BYTE4(v246) &= ~1u;
        v197 = v233;
      }
      if ( (v234[0] & 0x100000000LL) != 0 )
      {
        sub_182C690(v138, v211, v234);
      }
      else
      {
        BYTE4(v248) &= ~1u;
        LODWORD(v248) = v234[0];
      }
    }
  }
  else
  {
    if ( (v246 & 0x100000000LL) != 0 )
      sub_182C690(qword_1C7F2C0, v216, v216);
    else
      BYTE4(v246) &= ~1u;
    if ( (v248 & 0x100000000LL) != 0 )
      sub_182C690(v138, v211, v211);
    else
      BYTE4(v248) &= ~1u;
    v197 = v233;
  }
  v236 &= 0xFCu;
  v139 = qword_1C7F2C0;
  v239 &= 0xFCu;
  v235 = 0;
  v237 = 0;
  v238 = 1;
  v240 = 0;
  if ( (v246 & 0x100000000LL) != 0 )
  {
    sub_182C690(qword_1C7F2C0, &v235, v216);
    if ( (v248 & 0x100000000LL) != 0 )
      goto LABEL_207;
LABEL_178:
    v239 &= ~1u;
    v238 = v248;
  }
  else
  {
    v235 = v246;
    if ( (v248 & 0x100000000LL) == 0 )
      goto LABEL_178;
LABEL_207:
    sub_182C690(v139, &v238, v211);
  }
  v140 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v216);
  sub_182CBA0(v140, v211);
  v241 = 1;
  v242 = 0;
  v243 = 1;
  v244 = 0;
  sub_182CBA0(qword_1C7F2C0, &v243);
  LODWORD(v243) = 1;
  BYTE4(v243) &= ~1u;
  v246 = 2;
  v247 = 0;
  v248 = 1;
  v249 = 0;
  sub_182CBA0(qword_1C7F2C0, v211);
  BYTE4(v248) &= ~1u;
  v141 = 0;
  LODWORD(v248) = 1;
  while ( 2 )
  {
    v143 = qword_1C7F2C0;
    if ( (v243 & 0x100000000LL) != 0 || (_DWORD)v243 != 1 || (v239 & 1) != 0 || v238 != 1 )
    {
      v142 = sub_1848D40(qword_1C7F2C0, v215, &v235);
      v143 = qword_1C7F2C0;
      if ( !v142 )
        break;
      goto LABEL_181;
    }
    if ( (v241 & 0x100000000LL) == 0 && (v236 & 1) == 0 )
    {
      if ( (int)v241 >= v235 )
        break;
      ++v141;
      goto LABEL_182;
    }
    v144 = sub_182C7B0(qword_1C7F2C0, v215, &v235);
    v143 = qword_1C7F2C0;
    if ( v144 < 0 )
    {
LABEL_181:
      ++v141;
      if ( (v243 & 0x100000000LL) == 0 )
      {
LABEL_182:
        if ( (_DWORD)v243 == 1 && (v248 & 0x100000000LL) == 0 && (_DWORD)v248 == 1 )
        {
          sub_1831650(v143, v215, v216);
          sub_182CBA0(v143, &v243);
          BYTE4(v243) &= ~1u;
          LODWORD(v243) = 1;
          continue;
        }
      }
      sub_1848FF0(v143, v215, v216);
      continue;
    }
    break;
  }
  v145 = 1;
  v146 = v216;
  v216 = v143;
  if ( v141 )
    v145 = v141;
  v206 = v145;
  sub_182CBA0(v143, v146);
  sub_182CBA0(v216, v211);
  v147 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v215);
  sub_182CBA0(v147, &v243);
  v148 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v235);
  sub_182CBA0(v148, &v238);
  v149 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v227);
  sub_182CBA0(v149, &v230);
  v150 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v221);
  sub_182CBA0(v150, &v224);
  v151 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v233);
  sub_182CBA0(v151, v234);
LABEL_36:
  v29 = sub_1674700(a1 + 4, v206);
  v30 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v31 = *a1;
  v32 = sub_15E3D10(
          *a1,
          (unsigned int)*(_QWORD *)(v214 + 16) + 16,
          (int)&qword_18D6CD0,
          0,
          0,
          v29,
          1,
          v180,
          v181,
          v183,
          v185,
          (int)v189,
          (int)v193,
          (int)v197,
          v201,
          (int)a1 + 32,
          v206,
          (int)&v217,
          (int)v211,
          (int)ptr,
          (int)v213,
          v214,
          (int)v215,
          *(_QWORD *)(v214 + 16),
          v217,
          v218,
          v219,
          v220,
          v221,
          v223,
          v224,
          v226);
  v35 = sub_15DC610(v31, v32, 0, 0, v33, v34, v182, v184, v186, v190, v194, v198, v202, v204, v207, v209);
  v36 = v35;
  if ( v35 )
    ++*(_DWORD *)(v35 + 8);
  v37 = a1[79];
  v38 = *(_QWORD *)(v35 + 16);
  v211 = *(__int64 **)(v37 + 32);
  if ( v38 )
    ++*(_DWORD *)(v38 + 8);
  v39 = *(__m128 **)(v37 + 72);
  if ( v39 )
  {
    v40 = v39[-1].m128_u32[3];
    if ( v40 == v39[-1].m128_i32[2] )
    {
      v199 = (3 * v40 + 1) >> 1;
      v96 = 40 * v199 + 8;
      if ( 40 * v40 + 8 >= (unsigned int)v96 || v40 >= (3 * v40 + 1) >> 1 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        v216 = &v246;
        sub_15FB08(&v246, "Overflow encountered when expanding vector", v169);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v216);
        sub_233E40((__int64)v216);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v195 = (_QWORD *)v37;
      v216 = &v246;
      v97 = sub_186B270(v96);
      v98 = v195;
      v99 = (_DWORD *)v97;
      v39 = (__m128 *)(v97 + 8);
      v100 = (unsigned int *)v195[9];
      if ( v100 )
      {
        v101 = *(v100 - 1);
        v102 = v97 + 8;
        *(_DWORD *)(v97 + 4) = v101;
        v103 = &v100[10 * v101];
        v104 = v100;
        if ( v103 != v100 )
        {
          v216 = v100;
          do
          {
            v105 = *((_QWORD *)v104 + 1);
            v104 += 10;
            v102 += 40;
            *(_QWORD *)(v102 - 32) = v105;
            v106 = *((_QWORD *)v104 - 5);
            *((_QWORD *)v104 - 5) = 0;
            *(_QWORD *)(v102 - 40) = v106;
            *(_QWORD *)(v102 - 16) = *((_QWORD *)v104 - 2);
            v107 = *((_QWORD *)v104 - 3);
            *((_QWORD *)v104 - 3) = 0;
            *(_QWORD *)(v102 - 24) = v107;
            *(_DWORD *)(v102 - 8) = *(v104 - 2);
          }
          while ( v103 != v104 );
          v100 = (unsigned int *)v216;
        }
        if ( (_DWORD)v101 )
        {
          v108 = (__int64 *)v100;
          v196 = v39;
          v191 = v98;
          v187 = v99;
          v216 = &v100[10 * v101];
          do
          {
            while ( 1 )
            {
              v111 = v108[2];
              if ( v111 )
              {
                v112 = v108[3];
                v51 = (*(_DWORD *)(v111 + 8))-- == 1;
                if ( v51 )
                  sub_15D7BC0(v112, v111);
              }
              v109 = *v108;
              if ( *v108 )
              {
                v110 = v108[1];
                v51 = (*(_DWORD *)(v109 + 8))-- == 1;
                if ( v51 )
                  break;
              }
              v108 += 5;
              if ( v108 == v216 )
                goto LABEL_116;
            }
            sub_15D7BC0(v110, v109);
            v108 += 5;
          }
          while ( v108 != v216 );
LABEL_116:
          v98 = v191;
          v39 = v196;
          v99 = v187;
          v100 = (unsigned int *)v191[9];
        }
        v188 = v99;
        v192 = v98;
        v216 = &v246;
        sub_186B220(v100 - 2);
        v99 = v188;
        v98 = v192;
        v43 = (__m128 *)((char *)v39 + 40 * (unsigned int)v188[1]);
        v42 = v188[1] + 1;
      }
      else
      {
        *(_DWORD *)(v97 + 4) = 0;
        v43 = (__m128 *)(v97 + 8);
        v42 = 1;
      }
      v98[9] = v39;
      *v99 = v199;
    }
    else
    {
      v41 = v40;
      v42 = v40 + 1;
      v43 = (__m128 *)((char *)v39 + 40 * v41);
    }
  }
  else
  {
    v200 = (_QWORD *)v37;
    v216 = &v246;
    v162 = (_QWORD *)sub_186B270(0x58u);
    v39 = (__m128 *)(v162 + 1);
    *v162 = 2;
    v42 = 1;
    v43 = v39;
    v200[9] = v39;
  }
  v44 = v211;
  v43[1].m128_u64[0] = 0;
  v45 = _mm_loadh_ps((const double *)&v211);
  v43[2].m128_i32[0] = 0;
  v43[1].m128_u64[1] = (unsigned __int64)v44;
  *v43 = v45;
  v39[-1].m128_i32[3] = v42;
  v46 = sub_16747F0(v205, v36);
  v50 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v51 = (*(_DWORD *)(v36 + 8))-- == 1;
  if ( v51 )
  {
    sub_15D7BC0(v203, v36);
    v52 = v213;
    if ( !v213 )
      goto LABEL_82;
LABEL_49:
    if ( *v52 )
    {
      v77 = a1[3];
      if ( !v77 )
      {
        v216 = &v246;
        sub_16669E0(a1 + 2);
        v77 = a1[3];
      }
      v216 = &v246;
      sub_166A700(v77, (_DWORD)v213, 1, v47, v48, v49);
      v78 = a1[2];
      v216 = &v246;
      v79 = sub_15E1B70(v78);
      v80 = v79;
      if ( !v79 )
        goto LABEL_86;
      goto LABEL_78;
    }
LABEL_50:
    if ( !v50 )
      goto LABEL_89;
    goto LABEL_51;
  }
  v52 = v213;
  if ( v213 )
    goto LABEL_49;
LABEL_82:
  if ( !ptr )
  {
    v216 = &v246;
    sub_17F6290(&v246, (unsigned int)(v208 - 1));
    v155 = a1[3];
    if ( !v155 )
    {
      sub_16669E0(a1 + 2);
      v155 = a1[3];
    }
    sub_166A700(v155, (_DWORD)v216, 1, v152, v153, v154);
    v156 = sub_15E1B70(a1[2]);
    v157 = v156;
    if ( v156 )
      ++*(_DWORD *)(v156 + 8);
    if ( v50 )
    {
      v51 = (*(_DWORD *)(v50 + 8))-- == 1;
      if ( v51 )
        sub_15D7BC0(v203, v50);
    }
    v158 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v216);
    v159 = v158;
    v50 = v157;
    sub_182CBA0(v159, &v248);
    goto LABEL_50;
  }
  v81 = a1[3];
  if ( !v81 )
  {
    v216 = &v246;
    sub_16669E0(a1 + 2);
    v81 = a1[3];
  }
  v216 = &v246;
  sub_166A700(v81, (_DWORD)ptr, 1, v47, v48, v49);
  v82 = a1[2];
  v216 = &v246;
  v79 = sub_15E1B70(v82);
  v80 = v79;
  if ( v79 )
  {
LABEL_78:
    v53 = *(_DWORD *)(v79 + 8) + 1;
    *(_DWORD *)(v80 + 8) = v53;
    if ( !v50 )
    {
      v50 = v80;
LABEL_52:
      *(_DWORD *)(v50 + 8) = v53 + 1;
      v54 = (__int64 *)a1[77];
      if ( !v54 )
        goto LABEL_90;
      goto LABEL_53;
    }
    v51 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( !v51 )
    {
      v53 = *(_DWORD *)(v80 + 8);
      v50 = v80;
      goto LABEL_52;
    }
    v216 = &v246;
    sub_15D7BC0(v203, v50);
    v50 = v80;
LABEL_51:
    v53 = *(_DWORD *)(v50 + 8);
    goto LABEL_52;
  }
LABEL_86:
  if ( v50 )
  {
    v51 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v51 )
    {
      v216 = &v246;
      sub_15D7BC0(v203, v50);
    }
  }
LABEL_89:
  v54 = (__int64 *)a1[77];
  v50 = 0;
  if ( !v54 )
  {
LABEL_90:
    v216 = &v246;
    v83 = (_QWORD *)sub_186B270(0x18u);
    v54 = v83 + 1;
    *v83 = 2;
    v57 = 1;
    a1[77] = (__int64)v54;
    v58 = v54;
    goto LABEL_55;
  }
LABEL_53:
  v55 = *((_DWORD *)v54 - 1);
  if ( v55 == *((_DWORD *)v54 - 2) )
  {
    v92 = (3 * v55 + 1) >> 1;
    v93 = 8 * v92 + 8;
    if ( 8 * v55 + 8 >= (unsigned int)v93 || v55 >= v92 )
    {
      v163 = (char **)__cxa_allocate_exception(0x28u);
      v216 = &v246;
      sub_15FB08(&v246, "Overflow encountered when expanding vector", v164);
      v165 = v163 + 1;
      v166 = v163;
      *v163 = (char *)off_1C63128;
      v167 = v216;
      sub_2333C0(v165, v216);
      sub_233E40((__int64)v167);
      __cxa_throw(v166, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v216 = &v246;
    v94 = (unsigned int *)sub_186B300(v54 - 1, v93);
    v95 = v94[1];
    v54 = (__int64 *)(v94 + 2);
    *v94 = v92;
    a1[77] = (__int64)(v94 + 2);
    LODWORD(v94) = v95;
    v58 = &v54[v95];
    v57 = (_DWORD)v94 + 1;
  }
  else
  {
    v56 = v55;
    v57 = v55 + 1;
    v58 = &v54[v56];
  }
LABEL_55:
  *v58 = v50;
  v59 = v214;
  *((_DWORD *)v54 - 1) = v57;
  v216 = &v246;
  sub_1692DB0(a1 + 65, v59, v50, 0, 0);
  v60 = *(_QWORD *)(v59 + 16);
  v214 = v60;
  if ( v60 )
    ++*(_DWORD *)(v60 + 8);
  v61 = (_QWORD *)a1[73];
  if ( v61 )
  {
    v62 = *((_DWORD *)v61 - 1);
    if ( v62 == *((_DWORD *)v61 - 2) )
    {
      v88 = (3 * v62 + 1) >> 1;
      v89 = 8 * v88 + 8;
      if ( 8 * v62 + 8 >= (unsigned int)v89 || v62 >= v88 )
      {
        v175 = (char **)__cxa_allocate_exception(0x28u);
        v216 = &v246;
        sub_15FB08(&v246, "Overflow encountered when expanding vector", v176);
        v177 = v175 + 1;
        v178 = v175;
        *v175 = (char *)off_1C63128;
        v179 = v216;
        sub_2333C0(v177, v216);
        sub_233E40((__int64)v179);
        __cxa_throw(v178, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v216 = &v246;
      v90 = (unsigned int *)sub_186B300(v61 - 1, v89);
      v91 = v90[1];
      v61 = v90 + 2;
      *v90 = v88;
      a1[73] = (__int64)(v90 + 2);
      LODWORD(v90) = v91;
      v65 = &v61[v91];
      v64 = (_DWORD)v90 + 1;
    }
    else
    {
      v63 = v62;
      v64 = v62 + 1;
      v65 = &v61[v63];
    }
  }
  else
  {
    v216 = &v246;
    v161 = (_QWORD *)sub_186B270(0x18u);
    v61 = v161 + 1;
    *v161 = 2;
    v64 = 1;
    a1[73] = (__int64)v61;
    v65 = v61;
  }
  *v65 = v214;
  *((_DWORD *)v61 - 1) = v64;
  if ( v50 )
    ++*(_DWORD *)(v50 + 8);
  v66 = (_QWORD *)a1[75];
  if ( v66 )
  {
    v67 = *((_DWORD *)v66 - 1);
    if ( v67 == *((_DWORD *)v66 - 2) )
    {
      v84 = (3 * v67 + 1) >> 1;
      v85 = 8 * v84 + 8;
      if ( 8 * v67 + 8 >= (unsigned int)v85 || v67 >= v84 )
      {
        v170 = (char **)__cxa_allocate_exception(0x28u);
        v216 = &v246;
        sub_15FB08(&v246, "Overflow encountered when expanding vector", v171);
        v172 = v170 + 1;
        v173 = v170;
        *v170 = (char *)off_1C63128;
        v174 = v216;
        sub_2333C0(v172, v216);
        sub_233E40((__int64)v174);
        __cxa_throw(v173, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v216 = &v246;
      v86 = (unsigned int *)sub_186B300(v66 - 1, v85);
      v87 = v86[1];
      v66 = v86 + 2;
      *v86 = v84;
      a1[75] = (__int64)(v86 + 2);
      LODWORD(v86) = v87;
      v70 = &v66[v87];
      v69 = (_DWORD)v86 + 1;
    }
    else
    {
      v68 = v67;
      v69 = v67 + 1;
      v70 = &v66[v68];
    }
  }
  else
  {
    v216 = &v246;
    v160 = (_QWORD *)sub_186B270(0x18u);
    v66 = v160 + 1;
    *v160 = 2;
    v69 = 1;
    a1[75] = (__int64)v66;
    v70 = v66;
  }
  v71 = qword_1C7F2C0;
  *v70 = v50;
  *((_DWORD *)v66 - 1) = v69;
  sub_182CBA0(v71, v210);
  result = sub_182CBA0(v71, &v219);
  v73 = (char *)ptr;
  if ( ptr )
  {
    v74 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, ptr);
    sub_182CBA0(v74, v73 + 16);
    result = sub_186B220(v73);
  }
  v75 = (char *)v213;
  if ( v213 )
  {
    v76 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v213);
    sub_182CBA0(v76, v75 + 16);
    result = sub_186B220(v75);
  }
  if ( v30 )
  {
    v51 = (*(_DWORD *)(v30 + 8))-- == 1;
    if ( v51 )
      result = sub_15D7BC0(v203, v30);
  }
  if ( v50 )
  {
    v51 = (*(_DWORD *)(v50 + 8))-- == 1;
    if ( v51 )
      return sub_15D7BC0(v203, v50);
  }
  return result;
}

