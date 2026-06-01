__int64 __fastcall sub_A9E480(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  void *v13; // r12
  char *v14; // r13
  __int64 v15; // rax
  char *v16; // r12
  void *v17; // r15
  __m128i v18; // xmm0
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  int *v21; // r13
  __int64 v22; // rax
  char *v23; // r8
  __int64 v24; // rax
  char *v25; // r14
  __int64 v26; // rdx
  int v27; // r15d
  _DWORD *v28; // rax
  unsigned int v29; // ecx
  _DWORD *v30; // rdi
  __int64 v31; // rsi
  _DWORD *v32; // rcx
  _DWORD *v33; // r11
  int v34; // edx
  __int64 v35; // r11
  void *v36; // rdi
  int v37; // eax
  __int64 v38; // rsi
  char *v39; // rax
  int v40; // eax
  void *v41; // rbx
  int v42; // eax
  __int64 v43; // r13
  _QWORD *v44; // r12
  __int64 v45; // rax
  char v46; // r8
  _QWORD *v47; // rax
  int v48; // r9d
  unsigned __int8 v49; // bl
  char *v50; // r15
  __int64 v51; // rdx
  char *v52; // r14
  __int64 v53; // rdi
  _DWORD *v54; // rax
  char *v55; // rax
  int v56; // ecx
  int v57; // r8d
  int v58; // r9d
  __int64 v59; // r15
  __int64 v60; // rdi
  __int64 v61; // rbx
  __int64 v62; // rcx
  int v63; // eax
  __int64 v64; // rax
  unsigned int *v65; // r14
  __int64 v66; // rdi
  bool v67; // zf
  char *v68; // rdi
  __int64 v69; // rax
  char *v70; // r13
  __int64 v71; // rax
  void *v72; // r12
  unsigned int v73; // eax
  unsigned int v74; // eax
  int v75; // ecx
  int v76; // ebx
  int v77; // ebx
  __int64 v78; // rax
  int *v79; // rax
  __int64 result; // rax
  unsigned int *v81; // rbx
  unsigned int *v82; // r12
  __int64 v83; // rax
  unsigned int v84; // r15d
  unsigned int v85; // eax
  unsigned int v86; // r13d
  unsigned int *v87; // rbx
  unsigned int *i; // r12
  unsigned int v89; // edx
  __int64 v90; // rsi
  __int64 v91; // rcx
  int v92; // edx
  void *v93; // r15
  int v94; // eax
  __int64 v95; // rdx
  unsigned int v96; // r9d
  __int64 v97; // rax
  __int64 v98; // rcx
  int v99; // edi
  __int64 v100; // rdx
  __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // r11
  int v104; // esi
  int v105; // eax
  __int64 v106; // rax
  char v107; // cl
  char v108; // si
  __int64 v109; // rax
  char v110; // cl
  char v111; // si
  void *v112; // r15
  unsigned int v113; // r14d
  unsigned int v114; // edx
  unsigned int *v115; // rax
  char v116; // al
  char v117; // al
  int v118; // esi
  __int64 v119; // rax
  _DWORD *v120; // rdi
  unsigned int v121; // edx
  _DWORD *v122; // rcx
  __int64 v123; // rdx
  _DWORD *v124; // rsi
  __int64 v125; // r9
  _DWORD *v126; // rax
  int v127; // edx
  _DWORD *v128; // rsi
  unsigned int v129; // edx
  __int64 v130; // rsi
  void *v131; // rbx
  int v132; // edx
  int v133; // edx
  __int64 v134; // rdx
  char v135; // si
  __int64 v136; // rdx
  char v137; // si
  _QWORD *v138; // rax
  int v139; // eax
  int v140; // edx
  int v141; // eax
  __int64 v142; // rax
  char v143; // dl
  char v144; // cl
  __int64 v145; // rax
  char v146; // dl
  char v147; // cl
  __int64 v148; // r15
  int v149; // r9d
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rdx
  char *v154; // r15
  __int64 v155; // rdx
  char *v156; // r10
  int v157; // edi
  __int64 v158; // rdx
  __int64 v159; // rsi
  __int64 v160; // rdx
  int v161; // esi
  int v162; // esi
  __int64 v163; // rdi
  __int64 v164; // rsi
  char v165; // r11
  char v166; // r11
  __int64 v167; // rdi
  __int64 v168; // rsi
  char v169; // r11
  char v170; // di
  char v171; // si
  char v172; // si
  char v173; // r11
  char *v174; // r15
  void *v175; // r12
  int v176; // esi
  int v177; // esi
  __int64 v178; // rdi
  __int64 v179; // rsi
  char v180; // r11
  char v181; // r11
  __int64 v182; // rdi
  __int64 v183; // rsi
  char v184; // r11
  int v185; // eax
  unsigned int v186; // eax
  char v187; // al
  __int64 v188; // rax
  __int64 v189; // r15
  __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rdx
  __int64 v194; // rdi
  char *v195; // rdi
  __int64 v196; // rax
  char **exception; // r15
  int v198; // [rsp+Ch] [rbp-124h]
  __int64 v199; // [rsp+10h] [rbp-120h]
  __int64 v200; // [rsp+18h] [rbp-118h]
  __int64 v201; // [rsp+20h] [rbp-110h]
  __int64 *v202; // [rsp+28h] [rbp-108h]
  char *v203; // [rsp+30h] [rbp-100h]
  int v204; // [rsp+30h] [rbp-100h]
  __int64 v205; // [rsp+38h] [rbp-F8h]
  __int64 v206; // [rsp+38h] [rbp-F8h]
  __int64 v207; // [rsp+38h] [rbp-F8h]
  __int64 v208; // [rsp+38h] [rbp-F8h]
  __int64 v209; // [rsp+40h] [rbp-F0h]
  _QWORD *v210; // [rsp+40h] [rbp-F0h]
  char *v211; // [rsp+40h] [rbp-F0h]
  __int64 v212; // [rsp+40h] [rbp-F0h]
  int *v213; // [rsp+48h] [rbp-E8h]
  __int64 v214; // [rsp+48h] [rbp-E8h]
  __int64 v215; // [rsp+48h] [rbp-E8h]
  int **v216; // [rsp+50h] [rbp-E0h]
  int v217[2]; // [rsp+60h] [rbp-D0h]
  int v218[2]; // [rsp+60h] [rbp-D0h]
  int v219[2]; // [rsp+60h] [rbp-D0h]
  size_t v220; // [rsp+60h] [rbp-D0h]
  int v221[2]; // [rsp+60h] [rbp-D0h]
  int v222[2]; // [rsp+60h] [rbp-D0h]
  char *v223; // [rsp+68h] [rbp-C8h]
  __int64 v224; // [rsp+68h] [rbp-C8h]
  void *v225; // [rsp+68h] [rbp-C8h]
  __int64 v226; // [rsp+68h] [rbp-C8h]
  void *v227; // [rsp+70h] [rbp-C0h]
  void *v228; // [rsp+70h] [rbp-C0h]
  char *v229; // [rsp+70h] [rbp-C0h]
  void *v230; // [rsp+70h] [rbp-C0h]
  unsigned int v231; // [rsp+70h] [rbp-C0h]
  __int64 v232; // [rsp+78h] [rbp-B8h]
  char *v233; // [rsp+78h] [rbp-B8h]
  unsigned __int8 v234; // [rsp+78h] [rbp-B8h]
  unsigned int v235; // [rsp+78h] [rbp-B8h]
  char *v236; // [rsp+78h] [rbp-B8h]
  char *v237; // [rsp+78h] [rbp-B8h]
  int v238; // [rsp+78h] [rbp-B8h]
  __int64 v239; // [rsp+78h] [rbp-B8h]
  char *v240; // [rsp+78h] [rbp-B8h]
  void *v241; // [rsp+80h] [rbp-B0h]
  __int64 v242; // [rsp+88h] [rbp-A8h]
  int v243[2]; // [rsp+88h] [rbp-A8h]
  int v244[2]; // [rsp+88h] [rbp-A8h]
  int v245[2]; // [rsp+88h] [rbp-A8h]
  _QWORD *v246; // [rsp+98h] [rbp-98h] BYREF
  unsigned int *v247; // [rsp+A0h] [rbp-90h] BYREF
  __m128i v248; // [rsp+B0h] [rbp-80h] BYREF
  __int64 v249; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v250; // [rsp+C8h] [rbp-68h]
  void *ptr; // [rsp+D0h] [rbp-60h] BYREF
  __int64 v252; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v253; // [rsp+E0h] [rbp-50h] BYREF
  __int64 v254; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v255; // [rsp+F0h] [rbp-40h]

  v242 = a1;
  v2 = *(_QWORD *)(a1 + 328);
  if ( *(_BYTE *)(*(_QWORD *)v2 + 2756LL) )
  {
    v3 = sub_1010850(*(_QWORD *)(a1 + 504));
    if ( (unsigned __int8)sub_FFA850(*(_QWORD *)(a1 + 504)) != 1 && v3 == 1 )
      return sub_A9E240(v242);
    v2 = *(_QWORD *)(v242 + 328);
  }
  v4 = *(_QWORD *)sub_1021DF0(v2);
  if ( v4 )
  {
    v5 = v4 + 72LL * *(unsigned int *)(v4 - 4);
    while ( v5 != v4 )
    {
      v6 = v4;
      v4 += 72;
      v7 = sub_A85B60((_QWORD *)v242, v6);
      v8 = *(_QWORD *)(*(_QWORD *)v242 + 16LL);
      v9 = v7 >> 1;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v8 + 7488) + 48LL))(
        *(_QWORD *)(v8 + 7488),
        *(_QWORD *)(*(_QWORD *)(v8 + 8840) + 8 * v9));
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 7488) + 64LL))(*(_QWORD *)(v8 + 7488));
      sub_8F18B0(*(_QWORD *)(*(_QWORD *)v242 + 16LL), v9);
    }
  }
  v10 = *(__int64 **)sub_1021DE0(*(_QWORD *)(v242 + 328));
  if ( v10 )
  {
    v202 = &v10[5 * *((unsigned int *)v10 - 1)];
    if ( v202 != v10 )
    {
      v216 = (int **)v10;
      v201 = v242 + 344;
      while ( 1 )
      {
        if ( v216 != (int **)v201 )
        {
          v11 = *(_QWORD *)(v242 + 344);
          if ( v11 )
          {
            v12 = *(unsigned int *)(v11 - 4);
            if ( (_DWORD)v12 )
            {
              v232 = v242;
              v241 = (void *)(v11 + 72 * v12);
              do
              {
                v13 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, v11 + 40);
                sub_182CBA0(v13, v11 + 56);
                v14 = *(char **)(v11 + 8);
                if ( v14 )
                {
                  v15 = *(unsigned int *)(v11 + 16);
                  if ( (_DWORD)v15 )
                  {
                    *(_QWORD *)v243 = *(_QWORD *)(v11 + 8);
                    v16 = &v14[48 * v15];
                    do
                    {
                      v17 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v243 + 16LL);
                      sub_182CBA0(v17, *(_QWORD *)v243 + 32LL);
                      *(_QWORD *)v243 += 48LL;
                    }
                    while ( *(char **)v243 != v16 );
                  }
                  sub_186B220(v14);
                }
                v11 += 72;
              }
              while ( (void *)v11 != v241 );
              v242 = v232;
              v11 = *(_QWORD *)(v232 + 344);
            }
            sub_186B220((void *)(v11 - 8));
          }
          if ( *v216 )
          {
            v18 = _mm_loadl_epi64((const __m128i *)(*v216 - 2));
            v19 = (_QWORD *)sub_186B270(72LL * (unsigned int)_mm_cvtsi128_si32(v18) + 8);
            v20 = v19 + 1;
            *v19 = v18.m128i_i64[0];
            *(_QWORD *)(v242 + 344) = v19 + 1;
            v21 = *v216;
            if ( *v216 )
            {
              v213 = &v21[18 * *(v21 - 1)];
              if ( v21 != v213 )
              {
                while ( 1 )
                {
                  *(_DWORD *)v20 = *v21;
                  v22 = sub_186B270(0x180u);
                  *(_QWORD *)(v22 + 272) = 1;
                  *(_QWORD *)v22 = 0;
                  *(_QWORD *)(v22 + 16) = 0;
                  *(_QWORD *)(v22 + 24) = 0;
                  *(_QWORD *)(v22 + 32) = 1;
                  *(_QWORD *)(v22 + 40) = 0;
                  *(_QWORD *)(v22 + 48) = 0;
                  *(_QWORD *)(v22 + 64) = 0;
                  *(_QWORD *)(v22 + 72) = 0;
                  *(_QWORD *)(v22 + 80) = 1;
                  *(_QWORD *)(v22 + 88) = 0;
                  *(_QWORD *)(v22 + 96) = 0;
                  *(_QWORD *)(v22 + 112) = 0;
                  *(_QWORD *)(v22 + 120) = 0;
                  *(_QWORD *)(v22 + 128) = 1;
                  *(_QWORD *)(v22 + 136) = 0;
                  *(_QWORD *)(v22 + 144) = 0;
                  *(_QWORD *)(v22 + 160) = 0;
                  *(_QWORD *)(v22 + 168) = 0;
                  *(_QWORD *)(v22 + 176) = 1;
                  *(_QWORD *)(v22 + 184) = 0;
                  *(_QWORD *)(v22 + 192) = 0;
                  *(_QWORD *)(v22 + 208) = 0;
                  *(_QWORD *)(v22 + 216) = 0;
                  *(_QWORD *)(v22 + 224) = 1;
                  *(_QWORD *)(v22 + 232) = 0;
                  *(_QWORD *)(v22 + 240) = 0;
                  *(_QWORD *)(v22 + 256) = 0;
                  *(_QWORD *)(v22 + 264) = 0;
                  *(_BYTE *)(v22 + 276) = 0;
                  *(_QWORD *)(v22 + 280) = 0;
                  *(_QWORD *)(v22 + 288) = 0;
                  *(_QWORD *)(v22 + 304) = 0;
                  *(_QWORD *)(v22 + 320) = 1;
                  *(_QWORD *)(v22 + 336) = 0;
                  *(_QWORD *)(v22 + 352) = 0;
                  *(_QWORD *)(v22 + 368) = 1;
                  v20[1] = v22;
                  v23 = *((char **)v21 + 1);
                  *(_QWORD *)(v22 + 312) = 0;
                  *(_QWORD *)(v22 + 328) = 0;
                  *(_QWORD *)(v22 + 360) = 0;
                  *(_QWORD *)(v22 + 376) = 0;
                  *((_DWORD *)v20 + 6) = 0;
                  v20[2] = 8;
                  v24 = (unsigned int)v21[4];
                  *((_DWORD *)v20 + 8) = -1;
                  v25 = &v23[48 * v24];
                  if ( v23 == v25 )
                    goto LABEL_50;
                  while ( *((_DWORD *)v23 + 1) != 2 )
                  {
                    v23 += 48;
                    if ( v25 == v23 )
                      goto LABEL_50;
                  }
                  if ( v25 != v23 )
                    break;
LABEL_50:
                  v40 = v21[8];
                  v41 = qword_1C7F2C0;
                  *((_DWORD *)v20 + 10) = 0;
                  *((_BYTE *)v20 + 44) &= 0xFCu;
                  *((_BYTE *)v20 + 60) &= 0xFCu;
                  *((_DWORD *)v20 + 8) = v40;
                  v20[6] = 0;
                  *((_DWORD *)v20 + 14) = 1;
                  v20[8] = 0;
                  if ( (v21[11] & 1) != 0 )
                    sub_182C690(v41, v20 + 5, v21 + 10);
                  else
                    *((_DWORD *)v20 + 10) = v21[10];
                  if ( (v21[15] & 1) != 0 )
                  {
                    sub_182C690(v41, v20 + 7, v21 + 14);
                  }
                  else
                  {
                    v42 = v21[14];
                    *((_BYTE *)v20 + 60) &= ~1u;
                    *((_DWORD *)v20 + 14) = v42;
                  }
                  v21 += 18;
                  v20 += 9;
                  if ( v213 == v21 )
                    goto LABEL_55;
                }
LABEL_31:
                if ( !*((_DWORD *)v23 + 4) )
                  goto LABEL_45;
                v26 = *((unsigned int *)v20 + 4);
                v27 = *((_DWORD *)v23 + 2);
                v252 = 0;
                v233 = v23 + 16;
                v28 = (_DWORD *)v20[1];
                v29 = v26 - 1;
                LODWORD(ptr) = v27;
                v26 *= 48;
                v253 = 0;
                v254 = 1;
                v30 = (_DWORD *)((char *)v28 + v26);
                v31 = 48LL * (v27 & v29);
                v255 = 0;
                v32 = &v28[(unsigned __int64)v31 / 4];
                if ( v31 == v26 )
                {
LABEL_122:
                  while ( v32 != v28 )
                  {
                    v92 = v28[1];
                    if ( v92 == 2 )
                    {
                      if ( v27 == *v28 && v27 == v28[2] )
                      {
                        v33 = v28;
                        goto LABEL_39;
                      }
                    }
                    else if ( !v92 )
                    {
                      break;
                    }
                    v28 += 12;
                  }
LABEL_130:
                  *(_QWORD *)v219 = v23;
                  v225 = qword_1C7F2C0;
                  sub_182CBA0(qword_1C7F2C0, &v252);
                  sub_182CBA0(v225, &v254);
                  v23 = *(char **)v219;
                  LODWORD(ptr) = v27;
                  v252 = 0;
                  v93 = qword_1C7F2C0;
                  v253 = 0;
                  v254 = 1;
                  v255 = 0;
                  if ( (*(_BYTE *)(*(_QWORD *)v219 + 20LL) & 1) != 0 )
                  {
                    sub_182C690(qword_1C7F2C0, &v252, v233);
                    v23 = *(char **)v219;
                  }
                  else
                  {
                    LODWORD(v252) = *(_DWORD *)(*(_QWORD *)v219 + 16LL);
                  }
                  if ( (v23[36] & 1) != 0 )
                  {
                    v237 = v23;
                    sub_182C690(v93, &v254, v23 + 32);
                    v23 = v237;
                  }
                  else
                  {
                    v94 = *((_DWORD *)v23 + 8);
                    BYTE4(v254) &= ~1u;
                    LODWORD(v254) = v94;
                  }
                  v95 = *((unsigned int *)v20 + 4);
                  v96 = 2 * v95;
                  if ( 3 * (int)v95 < (unsigned int)(4 * (*((_DWORD *)v20 + 5) + *((_DWORD *)v20 + 6))) )
                  {
                    v148 = v96;
                    v211 = v23;
                    v238 = 2 * v95;
                    v220 = 48LL * v96;
                    v226 = v220;
                    v97 = sub_186B270(v220);
                    v149 = v238;
                    v23 = v211;
                    if ( v238 )
                    {
                      v150 = v97;
                      v151 = v97 + 48 * v148;
                      do
                      {
                        *(_BYTE *)(v150 + 20) &= 0xFCu;
                        *(_BYTE *)(v150 + 36) &= 0xFCu;
                        v150 += 48;
                        *(_QWORD *)(v150 - 48) = 0;
                        *(_QWORD *)(v150 - 24) = 0;
                        *(_QWORD *)(v150 - 8) = 0;
                      }
                      while ( v150 != v151 );
                      v152 = v97;
                      if ( ((48 * (_BYTE)v148) & 0x10) == 0
                        || (v152 = v97 + 48, *(_DWORD *)(v97 + 16) = 0, v97 + 48 != v151) )
                      {
                        do
                        {
                          *(_DWORD *)(v152 + 16) = 0;
                          v152 += 96;
                          *(_DWORD *)(v152 - 32) = 0;
                        }
                        while ( v152 != v151 );
                      }
                      v153 = v97;
                      if ( ((48 * (_BYTE)v148) & 0x10) == 0
                        || (v153 = v97 + 48, *(_DWORD *)(v97 + 32) = 1, v97 + 48 != v151) )
                      {
                        do
                        {
                          *(_DWORD *)(v153 + 32) = 1;
                          v153 += 96;
                          *(_DWORD *)(v153 - 16) = 1;
                        }
                        while ( v153 != v151 );
                      }
                    }
                    v154 = (char *)v20[1];
                    v235 = v238 - 1;
                    v155 = *((unsigned int *)v20 + 4);
                    v98 = v97 + v220;
                    v156 = &v154[48 * v155];
                    if ( v154 != v156 )
                    {
                      do
                      {
                        while ( *((_DWORD *)v154 + 1) != 2 )
                        {
                          v154 += 48;
                          if ( v156 == v154 )
                            goto LABEL_234;
                        }
                        v157 = *(_DWORD *)v154;
                        v158 = 48LL * (*(_DWORD *)v154 & v235);
                        v159 = v97 + v158;
                        if ( v220 == v158 )
                        {
LABEL_248:
                          if ( v97 == v159 )
                          {
LABEL_261:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v160 = v97;
                          while ( *(_DWORD *)(v160 + 4) )
                          {
                            v160 += 48;
                            if ( v159 == v160 )
                              goto LABEL_261;
                          }
                          *(_DWORD *)v160 = v157;
                          v176 = *((_DWORD *)v154 + 2);
                          *(_DWORD *)(v160 + 4) = 2;
                          *(_DWORD *)(v160 + 8) = v176;
                          v177 = *(_DWORD *)(v160 + 16);
                          *(_DWORD *)(v160 + 16) = *((_DWORD *)v154 + 4);
                          v178 = *((_QWORD *)v154 + 3);
                          *((_DWORD *)v154 + 4) = v177;
                          v179 = *(_QWORD *)(v160 + 24);
                          *(_QWORD *)(v160 + 24) = v178;
                          v180 = v154[20];
                          *((_QWORD *)v154 + 3) = v179;
                          LOBYTE(v178) = *(_BYTE *)(v160 + 20);
                          *(_BYTE *)(v160 + 20) = v180 & 2 | v178 & 0xFD;
                          LOBYTE(v179) = v154[20] & 0xFD | v178 & 2;
                          v154[20] = v179;
                          v181 = *(_BYTE *)(v160 + 20);
                          *(_BYTE *)(v160 + 20) = v179 & 1 | v181 & 0xFE;
                          LODWORD(v178) = *((_DWORD *)v154 + 8);
                          v154[20] = v181 & 1 | v154[20] & 0xFE;
                          LODWORD(v179) = *(_DWORD *)(v160 + 32);
                          *(_DWORD *)(v160 + 32) = v178;
                          v182 = *((_QWORD *)v154 + 5);
                          *((_DWORD *)v154 + 8) = v179;
                          v183 = *(_QWORD *)(v160 + 40);
                          *(_QWORD *)(v160 + 40) = v182;
                          v184 = v154[36];
                          *((_QWORD *)v154 + 5) = v183;
                          v171 = *(_BYTE *)(v160 + 36) & 2;
                          *(_BYTE *)(v160 + 36) = v184 & 2 | *(_BYTE *)(v160 + 36) & 0xFD;
                          v170 = v154[36] & 0xFD;
                        }
                        else
                        {
                          v160 = v97 + v158;
                          while ( *(_DWORD *)(v160 + 4) )
                          {
                            v160 += 48;
                            if ( v98 == v160 )
                              goto LABEL_248;
                          }
                          *(_DWORD *)v160 = v157;
                          v161 = *((_DWORD *)v154 + 2);
                          *(_DWORD *)(v160 + 4) = 2;
                          *(_DWORD *)(v160 + 8) = v161;
                          v162 = *(_DWORD *)(v160 + 16);
                          *(_DWORD *)(v160 + 16) = *((_DWORD *)v154 + 4);
                          v163 = *((_QWORD *)v154 + 3);
                          *((_DWORD *)v154 + 4) = v162;
                          v164 = *(_QWORD *)(v160 + 24);
                          *(_QWORD *)(v160 + 24) = v163;
                          v165 = v154[20];
                          *((_QWORD *)v154 + 3) = v164;
                          LOBYTE(v164) = *(_BYTE *)(v160 + 20);
                          *(_BYTE *)(v160 + 20) = v165 & 2 | v164 & 0xFD;
                          LOBYTE(v164) = v164 & 2 | v154[20] & 0xFD;
                          v154[20] = v164;
                          v166 = *(_BYTE *)(v160 + 20);
                          *(_BYTE *)(v160 + 20) = v164 & 1 | v166 & 0xFE;
                          LODWORD(v163) = *((_DWORD *)v154 + 8);
                          v154[20] = v166 & 1 | v154[20] & 0xFE;
                          LODWORD(v164) = *(_DWORD *)(v160 + 32);
                          *(_DWORD *)(v160 + 32) = v163;
                          v167 = *((_QWORD *)v154 + 5);
                          *((_DWORD *)v154 + 8) = v164;
                          v168 = *(_QWORD *)(v160 + 40);
                          *(_QWORD *)(v160 + 40) = v167;
                          v169 = v154[36];
                          *((_QWORD *)v154 + 5) = v168;
                          LOBYTE(v168) = *(_BYTE *)(v160 + 36);
                          *(_BYTE *)(v160 + 36) = v169 & 2 | v168 & 0xFD;
                          v170 = v168 & 2;
                          v171 = v154[36] & 0xFD;
                        }
                        v172 = v170 | v171;
                        v154 += 48;
                        *(v154 - 12) = v172;
                        v173 = *(_BYTE *)(v160 + 36) & 1;
                        *(_BYTE *)(v160 + 36) = v172 & 1 | *(_BYTE *)(v160 + 36) & 0xFE;
                        *(v154 - 12) = v173 | *(v154 - 12) & 0xFE;
                      }
                      while ( v156 != v154 );
LABEL_234:
                      v155 = *((unsigned int *)v20 + 4);
                      v156 = (char *)v20[1];
                    }
                    if ( v156 )
                    {
                      if ( (_DWORD)v155 )
                      {
                        v207 = v97;
                        *(_QWORD *)v221 = v20;
                        v203 = v156;
                        v174 = &v156[48 * v155];
                        v200 = v98;
                        v199 = v242;
                        *(_QWORD *)v245 = v156;
                        v198 = v149;
                        do
                        {
                          v175 = qword_1C7F2C0;
                          sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v245 + 16LL);
                          sub_182CBA0(v175, *(_QWORD *)v245 + 32LL);
                          *(_QWORD *)v245 += 48LL;
                        }
                        while ( *(char **)v245 != v174 );
                        v20 = *(_QWORD **)v221;
                        v23 = v211;
                        v97 = v207;
                        v242 = v199;
                        v156 = v203;
                        v98 = v200;
                        v149 = v198;
                      }
                      v204 = v149;
                      v208 = v98;
                      v212 = v97;
                      *(_QWORD *)v222 = v23;
                      sub_186B220(v156);
                      v23 = *(char **)v222;
                      v97 = v212;
                      v98 = v208;
                      v149 = v204;
                    }
                    v20[1] = v97;
                    *((_DWORD *)v20 + 4) = v149;
                    *((_DWORD *)v20 + 6) = 0;
                  }
                  else
                  {
                    v235 = v95 - 1;
                    v97 = v20[1];
                    v226 = 48 * v95;
                    v98 = v97 + 48 * v95;
                  }
                  v99 = (int)ptr;
                  v100 = 48LL * ((unsigned int)ptr & v235);
                  v101 = v97 + v100;
                  if ( v100 == v226 )
                  {
                    v103 = 0;
                  }
                  else
                  {
                    v102 = v97 + v100;
                    v103 = 0;
                    do
                    {
                      v104 = *(_DWORD *)(v102 + 4);
                      if ( v104 == 2 )
                      {
                        if ( (_DWORD)ptr == *(_DWORD *)v102 && (_DWORD)ptr == *(_DWORD *)(v102 + 8) )
                        {
                          *(_DWORD *)(v102 + 8) = (_DWORD)ptr;
                          v105 = *(_DWORD *)(v102 + 16);
                          *(_DWORD *)(v102 + 16) = v252;
                          LODWORD(v252) = v105;
                          v106 = *(_QWORD *)(v102 + 24);
                          *(_QWORD *)(v102 + 24) = v253;
                          v253 = v106;
                          v107 = *(_BYTE *)(v102 + 20);
                          *(_BYTE *)(v102 + 20) = BYTE4(v252) & 2 | v107 & 0xFD;
                          BYTE4(v252) = v107 & 2 | BYTE4(v252) & 0xFD;
                          v108 = *(_BYTE *)(v102 + 20);
                          *(_BYTE *)(v102 + 20) = v108 & 0xFE | BYTE4(v252) & 1;
                          BYTE4(v252) = v108 & 1 | BYTE4(v252) & 0xFE;
                          LODWORD(v106) = *(_DWORD *)(v102 + 32);
                          *(_DWORD *)(v102 + 32) = v254;
                          LODWORD(v254) = v106;
                          v109 = *(_QWORD *)(v102 + 40);
                          *(_QWORD *)(v102 + 40) = v255;
                          v255 = v109;
                          v110 = *(_BYTE *)(v102 + 36);
                          *(_BYTE *)(v102 + 36) = BYTE4(v254) & 2 | v110 & 0xFD;
                          BYTE4(v254) = v110 & 2 | BYTE4(v254) & 0xFD;
                          v111 = *(_BYTE *)(v102 + 36) & 1;
                          *(_BYTE *)(v102 + 36) = *(_BYTE *)(v102 + 36) & 0xFE | BYTE4(v254) & 1;
                          BYTE4(v254) = v111 | BYTE4(v254) & 0xFE;
                          *(_DWORD *)(v102 + 4) = 2;
                          goto LABEL_145;
                        }
                      }
                      else
                      {
                        if ( !v104 )
                        {
                          if ( !v103 )
                          {
                            v103 = v102;
                            goto LABEL_202;
                          }
                          goto LABEL_201;
                        }
                        v103 = v102;
                      }
                      v102 += 48;
                    }
                    while ( v102 != v98 );
                  }
                  if ( v101 == v97 )
                  {
LABEL_242:
                    sub_1872CE0("");
                    sub_1873130(114, 405);
                  }
                  while ( 1 )
                  {
                    v132 = *(_DWORD *)(v97 + 4);
                    if ( v132 == 2 )
                    {
                      if ( (_DWORD)ptr == *(_DWORD *)v97 && (_DWORD)ptr == *(_DWORD *)(v97 + 8) )
                      {
                        *(_DWORD *)(v97 + 8) = (_DWORD)ptr;
                        v133 = *(_DWORD *)(v97 + 16);
                        *(_DWORD *)(v97 + 16) = v252;
                        LODWORD(v252) = v133;
                        v134 = *(_QWORD *)(v97 + 24);
                        *(_QWORD *)(v97 + 24) = v253;
                        v253 = v134;
                        LOBYTE(v134) = *(_BYTE *)(v97 + 20);
                        *(_BYTE *)(v97 + 20) = BYTE4(v252) & 2 | v134 & 0xFD;
                        BYTE4(v252) = v134 & 2 | BYTE4(v252) & 0xFD;
                        v135 = *(_BYTE *)(v97 + 20);
                        *(_BYTE *)(v97 + 20) = v135 & 0xFE | BYTE4(v252) & 1;
                        BYTE4(v252) = v135 & 1 | BYTE4(v252) & 0xFE;
                        LODWORD(v134) = *(_DWORD *)(v97 + 32);
                        *(_DWORD *)(v97 + 32) = v254;
                        LODWORD(v254) = v134;
                        v136 = *(_QWORD *)(v97 + 40);
                        *(_QWORD *)(v97 + 40) = v255;
                        v255 = v136;
                        LOBYTE(v136) = *(_BYTE *)(v97 + 36);
                        *(_BYTE *)(v97 + 36) = BYTE4(v254) & 2 | v136 & 0xFD;
                        BYTE4(v254) = v136 & 2 | BYTE4(v254) & 0xFD;
                        v137 = *(_BYTE *)(v97 + 36) & 1;
                        *(_BYTE *)(v97 + 36) = *(_BYTE *)(v97 + 36) & 0xFE | BYTE4(v254) & 1;
                        BYTE4(v254) = v137 | BYTE4(v254) & 0xFE;
                        *(_DWORD *)(v97 + 4) = 2;
                        goto LABEL_145;
                      }
                    }
                    else
                    {
                      if ( !v132 )
                      {
                        if ( !v103 )
                        {
                          v103 = v97;
                          goto LABEL_202;
                        }
LABEL_201:
                        --*((_DWORD *)v20 + 6);
LABEL_202:
                        *(_DWORD *)(v103 + 8) = v99;
                        v141 = *(_DWORD *)(v103 + 16);
                        *(_DWORD *)(v103 + 16) = v252;
                        LODWORD(v252) = v141;
                        v142 = *(_QWORD *)(v103 + 24);
                        *(_QWORD *)(v103 + 24) = v253;
                        v253 = v142;
                        v143 = *(_BYTE *)(v103 + 20);
                        *(_BYTE *)(v103 + 20) = BYTE4(v252) & 2 | v143 & 0xFD;
                        BYTE4(v252) = v143 & 2 | BYTE4(v252) & 0xFD;
                        v144 = *(_BYTE *)(v103 + 20);
                        *(_BYTE *)(v103 + 20) = BYTE4(v252) & 1 | v144 & 0xFE;
                        BYTE4(v252) = v144 & 1 | BYTE4(v252) & 0xFE;
                        LODWORD(v142) = *(_DWORD *)(v103 + 32);
                        *(_DWORD *)(v103 + 32) = v254;
                        LODWORD(v254) = v142;
                        v145 = *(_QWORD *)(v103 + 40);
                        *(_QWORD *)(v103 + 40) = v255;
                        v255 = v145;
                        v146 = *(_BYTE *)(v103 + 36);
                        *(_BYTE *)(v103 + 36) = BYTE4(v254) & 2 | v146 & 0xFD;
                        BYTE4(v254) = v146 & 2 | BYTE4(v254) & 0xFD;
                        v147 = *(_BYTE *)(v103 + 36) & 1;
                        *(_BYTE *)(v103 + 36) = BYTE4(v254) & 1 | *(_BYTE *)(v103 + 36) & 0xFE;
                        BYTE4(v254) = v147 | BYTE4(v254) & 0xFE;
                        *(_DWORD *)(v103 + 4) = 2;
                        *(_DWORD *)v103 = v99;
                        ++*((_DWORD *)v20 + 5);
                        goto LABEL_145;
                      }
                      v103 = v97;
                    }
                    v97 += 48;
                    if ( v101 == v97 )
                      goto LABEL_242;
                  }
                }
                v33 = &v28[(unsigned __int64)v31 / 4];
                while ( 1 )
                {
                  v34 = v33[1];
                  if ( v34 == 2 )
                  {
                    if ( v27 == *v33 && v27 == v33[2] )
                    {
LABEL_39:
                      *(_QWORD *)v217 = v33;
                      v223 = v23;
                      v227 = qword_1C7F2C0;
                      sub_182CBA0(qword_1C7F2C0, &v252);
                      sub_182CBA0(v227, &v254);
                      v23 = v223;
                      v35 = *(_QWORD *)v217;
                      v36 = qword_1C7F2C0;
                      v37 = *((_DWORD *)v223 + 4);
                      v38 = *(_QWORD *)v217 + 16LL;
                      if ( !v37 )
                      {
                        v116 = *(_BYTE *)(*(_QWORD *)v217 + 20LL);
                        if ( (v116 & 1) != 0 )
                        {
                          sub_182C690(qword_1C7F2C0, v38, *(_QWORD *)v217 + 16LL);
                          v35 = *(_QWORD *)v217;
                          v23 = v223;
                        }
                        else
                        {
                          *(_BYTE *)(*(_QWORD *)v217 + 20LL) = v116 & 0xFE;
                        }
                        v117 = *(_BYTE *)(v35 + 36);
                        if ( (v117 & 1) == 0 )
                        {
                          v118 = *(_DWORD *)(v35 + 16);
                          *(_BYTE *)(v35 + 36) = v117 & 0xFE;
                          if ( v118 )
                            goto LABEL_45;
                          goto LABEL_154;
                        }
                        v229 = v23;
                        v239 = v35;
                        sub_182C690(v36, v35 + 32, v35 + 32);
LABEL_246:
                        v35 = v239;
                        v23 = v229;
                        goto LABEL_44;
                      }
                      if ( *(_DWORD *)(*(_QWORD *)v217 + 16LL) )
                      {
                        if ( (*(_BYTE *)(*(_QWORD *)v217 + 36LL) & 1) != 0
                          || *(_DWORD *)(*(_QWORD *)v217 + 32LL) != 1
                          || (v223[36] & 1) != 0
                          || *((_DWORD *)v223 + 8) != 1 )
                        {
                          sub_1851D20(qword_1C7F2C0, v38, v233, *(_QWORD *)v217 + 16LL);
                          v35 = *(_QWORD *)v217;
                          v23 = v223;
                        }
                        else
                        {
                          v230 = qword_1C7F2C0;
                          sub_1831A80(qword_1C7F2C0, v38, v233, *(_QWORD *)v217 + 16LL);
                          sub_182CBA0(v230, *(_QWORD *)v217 + 32LL);
                          v35 = *(_QWORD *)v217;
                          v23 = v223;
                          *(_BYTE *)(*(_QWORD *)v217 + 36LL) &= ~1u;
                          *(_DWORD *)(*(_QWORD *)v217 + 32LL) = 1;
                        }
                        goto LABEL_44;
                      }
                      if ( (v223[20] & 1) != 0 )
                      {
                        sub_182C690(qword_1C7F2C0, v38, v233);
                        v35 = *(_QWORD *)v217;
                        v23 = v223;
                      }
                      else
                      {
                        *(_BYTE *)(*(_QWORD *)v217 + 20LL) &= ~1u;
                        *(_DWORD *)(*(_QWORD *)v217 + 16LL) = v37;
                      }
                      if ( (v23[36] & 1) != 0 )
                      {
                        v229 = v23;
                        v239 = v35;
                        sub_182C690(v36, v35 + 32, v23 + 32);
                        goto LABEL_246;
                      }
                      v139 = *((_DWORD *)v23 + 8);
                      *(_BYTE *)(v35 + 36) &= ~1u;
                      *(_DWORD *)(v35 + 32) = v139;
LABEL_44:
                      if ( *(_DWORD *)(v35 + 16) )
                        goto LABEL_45;
LABEL_154:
                      v119 = *((unsigned int *)v20 + 4);
                      v120 = (_DWORD *)v20[1];
                      LODWORD(ptr) = v27;
                      v252 = 0;
                      v121 = v119 - 1;
                      v253 = 0;
                      v119 *= 48;
                      v254 = 1;
                      v255 = 0;
                      v122 = (_DWORD *)((char *)v120 + v119);
                      v123 = 48LL * (v27 & v121);
                      v124 = &v120[(unsigned __int64)v123 / 4];
                      if ( v123 == v119 )
                      {
LABEL_187:
                        if ( v120 != v124 )
                        {
                          v125 = v242;
                          v126 = v120;
                          while ( 1 )
                          {
                            v140 = v126[1];
                            if ( v140 == 2 )
                            {
                              if ( v27 == *v126 && v27 == v126[2] )
                                goto LABEL_161;
                            }
                            else if ( !v140 )
                            {
                              goto LABEL_171;
                            }
                            v126 += 12;
                            if ( v124 == v126 )
                              goto LABEL_171;
                          }
                        }
                        goto LABEL_145;
                      }
                      v125 = v242;
                      v126 = &v120[(unsigned __int64)v123 / 4];
                      while ( 2 )
                      {
                        v127 = v126[1];
                        if ( v127 != 2 )
                        {
                          if ( !v127 )
                          {
LABEL_171:
                            v242 = v125;
                            goto LABEL_145;
                          }
LABEL_157:
                          v126 += 12;
                          if ( v122 == v126 )
                            goto LABEL_187;
                          continue;
                        }
                        break;
                      }
                      if ( v27 != *v126 || v27 != v126[2] )
                        goto LABEL_157;
LABEL_161:
                      v128 = v126 + 12;
                      v242 = v125;
                      if ( v122 == v126 + 12 )
                        v128 = v120;
                      v129 = *((_DWORD *)v20 + 5) - 1;
                      if ( !v128[1] )
                      {
                        v126[1] = 0;
                        *((_DWORD *)v20 + 5) = v129;
                        goto LABEL_145;
                      }
                      v126[1] = 1;
                      v185 = *((_DWORD *)v20 + 6);
                      *((_DWORD *)v20 + 5) = v129;
                      v186 = v185 + 1;
                      if ( v129 < 0x40 )
                        v129 = 64;
                      *((_DWORD *)v20 + 6) = v186;
                      if ( v129 < v186 )
                      {
                        v240 = v23;
                        v187 = sub_186AF10(v120);
                        v23 = v240;
                        if ( !v187 )
                        {
                          v231 = *((_DWORD *)v20 + 4);
                          v188 = sub_186B270(48LL * v231);
                          v189 = v188;
                          if ( v231 )
                          {
                            v190 = v188;
                            v191 = v188 + 48LL * v231;
                            do
                            {
                              *(_BYTE *)(v190 + 20) &= 0xFCu;
                              *(_BYTE *)(v190 + 36) &= 0xFCu;
                              v190 += 48;
                              *(_QWORD *)(v190 - 48) = 0;
                              *(_QWORD *)(v190 - 24) = 0;
                              *(_QWORD *)(v190 - 8) = 0;
                            }
                            while ( v190 != v191 );
                            v192 = v189;
                            if ( (((_BYTE)v191 - (_BYTE)v189) & 0x10) == 0
                              || (v192 = v189 + 48, *(_DWORD *)(v189 + 16) = 0, v189 + 48 != v191) )
                            {
                              do
                              {
                                *(_DWORD *)(v192 + 16) = 0;
                                v192 += 96;
                                *(_DWORD *)(v192 - 32) = 0;
                              }
                              while ( v192 != v191 );
                            }
                            v193 = v189;
                            if ( (((_BYTE)v191 - (_BYTE)v189) & 0x10) == 0 )
                            {
                              v194 = v242;
                              goto LABEL_278;
                            }
                            v193 = v189 + 48;
                            *(_DWORD *)(v189 + 32) = 1;
                            v194 = v242;
                            if ( v189 + 48 != v191 )
                            {
                              do
                              {
LABEL_278:
                                *(_DWORD *)(v193 + 32) = 1;
                                v193 += 96;
                                *(_DWORD *)(v193 - 16) = 1;
                              }
                              while ( v193 != v191 );
                              v242 = v194;
                            }
                          }
                          sub_83E370((int *)v20[1], *((_DWORD *)v20 + 4), v189, *((_DWORD *)v20 + 4));
                          v195 = (char *)v20[1];
                          v23 = v240;
                          if ( v195 )
                          {
                            sub_A73030(v195, *((_DWORD *)v20 + 4));
                            v23 = v240;
                          }
                          v20[1] = v189;
                          *((_DWORD *)v20 + 6) = 0;
                        }
                      }
LABEL_145:
                      v112 = qword_1C7F2C0;
                      v236 = v23;
                      sub_182CBA0(qword_1C7F2C0, &v252);
                      sub_182CBA0(v112, &v254);
                      v23 = v236;
LABEL_45:
                      v39 = v23 + 48;
                      if ( v25 == v23 + 48 )
                        goto LABEL_50;
                      while ( 1 )
                      {
                        v23 = v39;
                        if ( *((_DWORD *)v39 + 1) == 2 )
                          break;
                        v39 += 48;
                        if ( v25 == v39 )
                          goto LABEL_50;
                      }
                      if ( v25 == v39 )
                        goto LABEL_50;
                      goto LABEL_31;
                    }
                  }
                  else if ( !v34 )
                  {
                    goto LABEL_130;
                  }
                  v33 += 12;
                  if ( v30 == v33 )
                    goto LABEL_122;
                }
              }
            }
          }
          else
          {
            *(_QWORD *)(v242 + 344) = 0;
          }
        }
LABEL_55:
        sub_A798E0((int **)(v242 + 352), v216 + 1);
        sub_A798E0((int **)(v242 + 816), v216 + 1);
        v43 = *(_QWORD *)(v242 + 344);
        if ( v43 )
        {
          v224 = v43 + 72LL * *(unsigned int *)(v43 - 4);
          if ( v43 != v224 )
            break;
        }
        v246 = nullptr;
        sub_A9D200(v242, &v246, 0);
LABEL_104:
        v216 += 5;
        if ( v202 == (__int64 *)v216 )
          goto LABEL_105;
      }
      v44 = nullptr;
      while ( 1 )
      {
        v45 = (unsigned int)(*(_DWORD *)v43 + 2);
        if ( (unsigned int)v45 > 5 )
        {
          sub_1872CE0("");
          sub_1873130(114, 1996);
        }
        v46 = byte_18C397F[v45];
        v234 = *(_DWORD *)v43 & 1;
        v228 = *(void **)(v242 + 8);
        if ( byte_18C3979[v45] )
          break;
        v250 = *(_QWORD *)(v242 + 8);
        ptr = nullptr;
        v252 = 0;
        v253 = 1;
        v254 = 0;
        v249 = 0;
        sub_A84BA0((__int64 *)&v247, (_QWORD *)v242, v43 + 8, v43 + 40, v46, (__int64)&ptr, &v249);
        v130 = v249;
        if ( v249 )
        {
          v67 = (*(_DWORD *)(v249 + 8))-- == 1;
          if ( v67 )
            sub_15D7BC0(v250, v130);
        }
        v131 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &ptr);
        sub_182CBA0(v131, &v253);
        v65 = v247;
        v73 = v247[2];
LABEL_98:
        v74 = v73 - 1;
        v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v242 + 16LL) + 8832LL) + 4LL * *v65);
        v65[2] = v74;
        v76 = v234 + 2 * v75;
        if ( v74 )
        {
          v77 = v76 ^ 1;
          if ( v44 )
            goto LABEL_100;
        }
        else
        {
          v77 = v76 ^ 1;
          sub_15D7BC0(v228, v65);
          if ( v44 )
          {
LABEL_100:
            v78 = *((unsigned int *)v44 - 1);
            if ( (_DWORD)v78 == *((_DWORD *)v44 - 2) )
            {
              v113 = (unsigned int)(3 * v78 + 1) >> 1;
              v114 = 4 * v113 + 8;
              if ( 4 * (int)v78 + 8 >= v114 || (unsigned int)v78 >= v113 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_137C7A((char **)&ptr);
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, &ptr);
                sub_233E40((__int64)&ptr);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v115 = (unsigned int *)sub_186B300(v44 - 1, v114);
              v44 = v115 + 2;
              *v115 = v113;
              v79 = (int *)&v115[v115[1] + 2];
            }
            else
            {
              v79 = (int *)v44 + v78;
            }
            goto LABEL_102;
          }
        }
        v138 = (_QWORD *)sub_186B270(0x10u);
        *v138 = 2;
        v44 = v138 + 1;
        v79 = (int *)(v138 + 1);
LABEL_102:
        *v79 = v77;
        v43 += 72;
        ++*((_DWORD *)v44 - 1);
        if ( v224 == v43 )
        {
          v246 = v44;
          sub_A9D200(v242, &v246, 0);
          sub_186B220(v44 - 1);
          goto LABEL_104;
        }
      }
      v47 = (_QWORD *)sub_186B270(0x180u);
      v47[34] = 1;
      *v47 = 0;
      v47[2] = 0;
      v47[3] = 0;
      v47[4] = 1;
      v47[5] = 0;
      v47[6] = 0;
      v47[8] = 0;
      v47[9] = 0;
      v47[10] = 1;
      v47[11] = 0;
      v47[12] = 0;
      v47[14] = 0;
      v47[15] = 0;
      v47[16] = 1;
      v47[17] = 0;
      v47[18] = 0;
      v47[20] = 0;
      v47[21] = 0;
      v47[22] = 1;
      v47[23] = 0;
      v47[24] = 0;
      v47[26] = 0;
      v47[27] = 0;
      v47[28] = 1;
      v47[29] = 0;
      v47[30] = 0;
      v47[32] = 0;
      v47[33] = 0;
      *((_BYTE *)v47 + 276) = 0;
      v47[35] = 0;
      v47[36] = 0;
      v47[38] = 0;
      v47[39] = 0;
      v47[40] = 1;
      v47[41] = 0;
      v47[42] = 0;
      v47[44] = 0;
      v47[45] = 0;
      v47[46] = 1;
      v47[47] = 0;
      ptr = v47;
      LODWORD(v253) = 0;
      v252 = 8;
      sub_A7CA80((_QWORD *)v242, v43 + 8, (__int64)&ptr, (__int64)&qword_1C7F280);
      v49 = (*(_BYTE *)(v43 + 60) & 1) == 0;
      if ( (*(_BYTE *)(v43 + 60) & 1) == 0 )
        v49 = *(_DWORD *)(v43 + 56) == 1;
      v50 = (char *)ptr;
      v51 = 48LL * (unsigned int)v252;
      v52 = (char *)ptr + v51;
      if ( ptr != (char *)ptr + v51 )
      {
        v53 = v242;
        while ( *((_DWORD *)v50 + 1) != 2 )
        {
          v50 += 48;
          if ( v52 == v50 )
          {
LABEL_78:
            v242 = v53;
            goto LABEL_79;
          }
        }
        while ( 1 )
        {
          v242 = v53;
          if ( v50 == v52 )
            break;
          v54 = *(_DWORD **)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)v53 + 32LL)
                                                     + 8LL * *((unsigned int *)v50 + 2)))
                           + 24);
          if ( v54 && *v54 == 5 && v54[1] == 1 && (v50[36] & 1) == 0 )
            v49 &= *((_DWORD *)v50 + 8) == 1;
          else
            v49 = 0;
          v55 = v50 + 48;
          if ( v52 == v50 + 48 )
            break;
          while ( 1 )
          {
            v50 = v55;
            if ( *((_DWORD *)v55 + 1) == 2 )
              break;
            v55 += 48;
            if ( v52 == v55 )
              goto LABEL_78;
          }
        }
      }
LABEL_79:
      sub_A846A0(&v248, v242, (__int64 *)&ptr, (__int64)&qword_1C7F2A0, v49, v48);
      v59 = v248.m128i_i64[0];
      v209 = *(_QWORD *)(v242 + 8);
      v60 = *(_QWORD *)(v242 + 24);
      v214 = v248.m128i_i64[1];
      if ( !v60 )
      {
        sub_16669E0(v242 + 16);
        v60 = *(_QWORD *)(v242 + 24);
      }
      v61 = sub_166A700(v60, (int)v43 + 40, v49, v56, v57, v58);
      v62 = *(_QWORD *)(v242 + 8);
      *(_QWORD *)v218 = v62;
      if ( v61 )
      {
        v63 = *(_DWORD *)(v61 + 8);
        *(_DWORD *)(v61 + 8) = v63 + 1;
        if ( v61 == v59 )
        {
          v65 = *(unsigned int **)(v62 + 856);
          if ( !v65 )
          {
            *(_DWORD *)(v59 + 8) = v63;
            if ( !v63 )
              sub_15D7BC0(v209, v59);
LABEL_88:
            v67 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v67 )
              sub_15D7BC0(v214, v59);
LABEL_90:
            v68 = (char *)ptr;
            if ( !ptr )
              goto LABEL_96;
            v69 = (unsigned int)v252;
            if ( !(_DWORD)v252 )
            {
LABEL_95:
              sub_186B220(v68);
LABEL_96:
              if ( v65 )
                goto LABEL_97;
              goto LABEL_212;
            }
LABEL_92:
            v215 = v43;
            v210 = v44;
            v70 = &v68[48 * v69];
            v71 = v242;
            *(_QWORD *)v244 = v68;
            v206 = v71;
            do
            {
              v72 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v244 + 16LL);
              sub_182CBA0(v72, *(_QWORD *)v244 + 32LL);
              *(_QWORD *)v244 += 48LL;
            }
            while ( v70 != *(char **)v244 );
            v43 = v215;
            v44 = v210;
            v242 = v206;
            goto LABEL_95;
          }
          ++v65[2];
          v67 = (*(_DWORD *)(v61 + 8))-- == 1;
          if ( !v67 )
          {
LABEL_87:
            if ( !v59 )
              goto LABEL_90;
            goto LABEL_88;
          }
LABEL_199:
          sub_15D7BC0(v209, v61);
          goto LABEL_87;
        }
      }
      else if ( !v59 )
      {
        v65 = *(unsigned int **)(v62 + 856);
        if ( v65 )
        {
          v68 = (char *)ptr;
          ++v65[2];
          if ( !v68 )
          {
LABEL_97:
            v73 = v65[2];
            if ( v73 )
              goto LABEL_98;
LABEL_208:
            sub_15D7BC0(*(_QWORD *)v218, v65);
            v73 = v65[2];
            goto LABEL_98;
          }
          v69 = (unsigned int)v252;
          if ( !(_DWORD)v252 )
          {
            sub_186B220(v68);
            v73 = v65[2];
            if ( v73 )
              goto LABEL_98;
            goto LABEL_208;
          }
          goto LABEL_92;
        }
        v68 = (char *)ptr;
        if ( ptr )
        {
          v69 = (unsigned int)v252;
          if ( (_DWORD)v252 )
            goto LABEL_92;
          sub_186B220(ptr);
        }
LABEL_212:
        v73 = 0;
        v65 = nullptr;
        goto LABEL_98;
      }
      v64 = sub_15E1B70(v62);
      v65 = (unsigned int *)v64;
      if ( v64 )
        ++*(_DWORD *)(v64 + 8);
      sub_B6F780(*(_QWORD *)(*(_QWORD *)v242 + 16LL));
      v66 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v242 + 16LL) + 7488LL);
      v205 = *(_QWORD *)(*(_QWORD *)v242 + 16LL);
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v66 + 48LL))(v66, v65);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v205 + 7488) + 64LL))(*(_QWORD *)(v205 + 7488));
      if ( !v61 )
        goto LABEL_87;
      v67 = (*(_DWORD *)(v61 + 8))-- == 1;
      if ( !v67 )
        goto LABEL_87;
      goto LABEL_199;
    }
  }
LABEL_105:
  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v242 + 16LL) + 112LL);
  if ( *(_BYTE *)(result + 264) )
  {
    result = *(unsigned int *)(result + 344);
    if ( *(_DWORD *)(v242 + 320) < (unsigned int)result )
    {
      v81 = *(unsigned int **)sub_1021E10(*(_QWORD *)(v242 + 328));
      if ( v81 )
      {
        v82 = &v81[18 * *(v81 - 1)];
        if ( v82 != v81 )
        {
          while ( 1 )
          {
            v86 = *v81;
            if ( (unsigned __int8)sub_753DF0((__int64)(v81 + 2), 1u) )
            {
              v83 = v242;
              v84 = *(_DWORD *)(v242 + 128);
              goto LABEL_111;
            }
            if ( (unsigned __int8)sub_753DF0((__int64)(v81 + 2), 0) )
              break;
            v196 = sub_A8D0A0(v242 + 736, (__int64)(v81 + 2));
            if ( v196 )
            {
              v84 = *(_DWORD *)(v196 + 40);
              v83 = v242;
LABEL_111:
              if ( (int)sub_FF9E10(*(_QWORD *)(v83 + 504), v86) >= 0 )
              {
                v85 = sub_A7A1D0((_QWORD *)v242, v84);
                sub_A9B400((unsigned int **)v242, v85, v86, (__int64)(v81 + 10), 1);
              }
            }
            v81 += 18;
            if ( v82 == v81 )
              goto LABEL_117;
          }
          v83 = v242;
          v84 = *(_DWORD *)(v242 + 132);
          goto LABEL_111;
        }
      }
LABEL_117:
      result = sub_1021E00(*(_QWORD *)(v242 + 328));
      v87 = *(unsigned int **)result;
      if ( *(_QWORD *)result )
      {
        result = 5LL * *(v87 - 1);
        for ( i = &v87[10 * *(v87 - 1)]; i != v87; result = sub_A9B400((unsigned int **)v242, v90, v89, v91, 0) )
        {
          v89 = v87[1];
          v90 = *v87;
          v91 = (__int64)(v87 + 2);
          v87 += 10;
        }
      }
    }
  }
  return result;
}

