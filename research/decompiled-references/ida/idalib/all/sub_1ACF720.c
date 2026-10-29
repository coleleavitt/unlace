__int64 __fastcall sub_1ACF720(__int64 *a1, unsigned int a2, char a3, unsigned int a4, _QWORD *a5)
{
  __int64 v5; // r15
  unsigned int v6; // r11d
  char v8; // r12
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  _QWORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  char v20; // dl
  char v21; // dl
  char v22; // dl
  char v23; // dl
  char v24; // dl
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // ebp
  unsigned __int64 v29; // rsi
  unsigned int v30; // ecx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int8 **v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  __int64 v40; // rbp
  unsigned int v41; // r12d
  unsigned __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rdx
  _QWORD *jj; // rdx
  __int64 *v52; // r13
  __int64 v53; // rbp
  int v54; // eax
  int v55; // esi
  unsigned int v56; // edx
  _QWORD *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rdx
  _QWORD *v64; // rdi
  _QWORD *v65; // r14
  _QWORD *v66; // rbp
  unsigned __int64 v67; // r12
  unsigned __int64 v68; // rax
  _QWORD *v69; // r15
  _QWORD *v70; // rbx
  _QWORD *v71; // rdi
  void *v72; // rdi
  void **v73; // rbx
  void **v74; // r15
  int v75; // ebp
  int v76; // edx
  int v77; // ebp
  unsigned int v78; // esi
  __int64 v79; // rcx
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rax
  _QWORD *k; // rdx
  __int64 *v84; // r14
  __int64 v85; // rcx
  int v86; // eax
  int v87; // esi
  unsigned int v88; // edx
  _QWORD *v89; // rax
  __int64 v90; // rdi
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // rdi
  _QWORD *v97; // r15
  _QWORD *v98; // r12
  unsigned __int64 v99; // rbp
  unsigned __int64 v100; // rax
  _QWORD *v101; // r13
  _QWORD *v102; // rbx
  _QWORD *v103; // rdi
  void *v104; // rdi
  void **v105; // rbx
  void **v106; // r13
  int v107; // eax
  int v108; // edi
  unsigned int v109; // esi
  __int64 v110; // rdx
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  __int64 v115; // r15
  __int64 v116; // r13
  unsigned int v117; // ebx
  unsigned __int64 v118; // rsi
  unsigned int v119; // ecx
  __int64 *v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rdx
  char v123; // dl
  char v124; // dl
  __int64 v125; // rdx
  __int64 v126; // rdx
  __int64 *v127; // rdi
  __int64 *v128; // rdi
  __int64 v129; // rdx
  __int64 *v130; // rdi
  __int64 v131; // rcx
  unsigned __int64 v132; // rax
  __int64 v133; // rax
  _QWORD *v134; // rax
  _QWORD *i1; // rdx
  __int64 *v136; // r14
  __int64 v137; // rbx
  int v138; // eax
  int v139; // ecx
  unsigned int v140; // edx
  _QWORD *v141; // rax
  __int64 v142; // rdi
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  _QWORD *v148; // rdi
  _QWORD *v149; // r15
  _QWORD *v150; // rbp
  unsigned __int64 v151; // r12
  unsigned __int64 v152; // rax
  _QWORD *v153; // r13
  _QWORD *v154; // rbx
  _QWORD *v155; // rdi
  void *v156; // rdi
  void **v157; // rbx
  void **v158; // r13
  int v159; // edi
  int v160; // edi
  unsigned int v161; // esi
  int v162; // r11d
  __int64 *v163; // r9
  __int64 v164; // rdx
  unsigned __int64 v165; // rax
  unsigned __int64 v166; // rax
  __int64 v167; // rax
  _QWORD *v168; // rax
  _QWORD *mm; // rdx
  __int64 *v170; // r14
  int v171; // eax
  int v172; // ecx
  unsigned int v173; // edx
  _QWORD *v174; // rax
  __int64 v175; // rdi
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // rdx
  _QWORD *v181; // rdi
  _QWORD *v182; // r15
  _QWORD *v183; // rbp
  unsigned __int64 v184; // r12
  unsigned __int64 v185; // rax
  _QWORD *v186; // r13
  _QWORD *v187; // rbx
  _QWORD *v188; // rdi
  void *v189; // rdi
  void **v190; // rbx
  void **v191; // r13
  int v192; // edi
  int v193; // edi
  unsigned int v194; // ebx
  int v195; // esi
  __int64 *v196; // r8
  __int64 v197; // rdx
  unsigned __int64 v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // rax
  _QWORD *v201; // rax
  _QWORD *i; // rdx
  __int64 *v203; // r14
  __int64 v204; // rcx
  int v205; // eax
  int v206; // esi
  unsigned int v207; // edx
  _QWORD *v208; // rax
  __int64 v209; // rdi
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rdx
  __int64 v213; // rcx
  __int64 v214; // rdx
  _QWORD *v215; // rdi
  _QWORD *v216; // r15
  _QWORD *v217; // r12
  unsigned __int64 v218; // rbp
  unsigned __int64 v219; // rax
  _QWORD *v220; // r13
  _QWORD *v221; // rbx
  _QWORD *v222; // rdi
  void *v223; // rdi
  void **v224; // rbx
  void **v225; // r13
  int v226; // eax
  int v227; // r9d
  unsigned int v228; // r8d
  int v229; // edi
  __int64 *v230; // rsi
  __int64 v231; // rdx
  unsigned __int64 v232; // rax
  unsigned __int64 v233; // rax
  __int64 v234; // rax
  _QWORD *v235; // rax
  __int64 v236; // rdx
  _QWORD *n; // rdx
  __int64 *v238; // r13
  __int64 v239; // rbp
  int v240; // eax
  int v241; // esi
  unsigned int v242; // edx
  _QWORD *v243; // rax
  __int64 v244; // rdi
  __int64 v245; // rdx
  __int64 v246; // rcx
  __int64 v247; // rdx
  __int64 v248; // rcx
  __int64 v249; // rdx
  _QWORD *v250; // rdi
  _QWORD *v251; // r14
  _QWORD *v252; // rbp
  unsigned __int64 v253; // r12
  unsigned __int64 v254; // rax
  _QWORD *v255; // r15
  _QWORD *v256; // rbx
  _QWORD *v257; // rdi
  void *v258; // rdi
  void **v259; // rbx
  void **v260; // r15
  int v261; // ebp
  int v262; // ebp
  unsigned int v263; // esi
  int v264; // r8d
  __int64 *v265; // rdi
  __int64 v266; // rdx
  __int64 v267; // rdx
  _QWORD *kk; // rdx
  __int64 v269; // rdx
  _QWORD *i2; // rdx
  __int64 v271; // rdx
  _QWORD *m; // rdx
  __int64 v273; // rdx
  _QWORD *ii; // rdx
  __int64 v275; // rdx
  _QWORD *nn; // rdx
  __int64 v277; // rdx
  _QWORD *j; // rdx
  int v279; // r9d
  _QWORD *v280; // r8
  int v281; // r10d
  _QWORD *v282; // r9
  int v283; // r9d
  _QWORD *v284; // r8
  int v285; // r9d
  _QWORD *v286; // r8
  int v287; // r10d
  _QWORD *v288; // r9
  int v289; // r9d
  _QWORD *v290; // r8
  int v291; // r8d
  int v292; // r10d
  __int64 *v293; // r9
  __int64 *v295; // [rsp+10h] [rbp-118h]
  __int64 v297; // [rsp+20h] [rbp-108h]
  unsigned int v298; // [rsp+20h] [rbp-108h]
  __int64 *v299; // [rsp+20h] [rbp-108h]
  __int64 *v300; // [rsp+20h] [rbp-108h]
  __int64 v301; // [rsp+28h] [rbp-100h]
  __int64 v302; // [rsp+28h] [rbp-100h]
  unsigned int v303; // [rsp+28h] [rbp-100h]
  __int64 *v304; // [rsp+28h] [rbp-100h]
  __int64 *v305; // [rsp+30h] [rbp-F8h]
  __int64 v306; // [rsp+30h] [rbp-F8h]
  __int64 v307; // [rsp+30h] [rbp-F8h]
  __int64 v308; // [rsp+30h] [rbp-F8h]
  __int64 *v309; // [rsp+38h] [rbp-F0h]
  __int64 v310; // [rsp+38h] [rbp-F0h]
  __int64 v311; // [rsp+38h] [rbp-F0h]
  __int64 v312; // [rsp+38h] [rbp-F0h]
  __int64 v313; // [rsp+38h] [rbp-F0h]
  unsigned int v314; // [rsp+40h] [rbp-E8h]
  __int64 v315; // [rsp+40h] [rbp-E8h]
  __int64 v316; // [rsp+40h] [rbp-E8h]
  __int64 v317; // [rsp+40h] [rbp-E8h]
  __int64 v318; // [rsp+40h] [rbp-E8h]
  _QWORD *v319; // [rsp+48h] [rbp-E0h]
  _QWORD *v320; // [rsp+48h] [rbp-E0h]
  __int64 v321; // [rsp+48h] [rbp-E0h]
  __int64 v322; // [rsp+48h] [rbp-E0h]
  unsigned __int8 v323; // [rsp+50h] [rbp-D8h]
  _QWORD *v324; // [rsp+50h] [rbp-D8h]
  _QWORD *v325; // [rsp+50h] [rbp-D8h]
  unsigned int v326; // [rsp+58h] [rbp-D0h]
  unsigned __int8 v327; // [rsp+58h] [rbp-D0h]
  unsigned int v328; // [rsp+5Ch] [rbp-CCh]
  _QWORD v329[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v330; // [rsp+70h] [rbp-B8h]
  unsigned __int8 *v331[11]; // [rsp+80h] [rbp-A8h] BYREF
  char v332; // [rsp+D8h] [rbp-50h]
  unsigned int v333; // [rsp+E0h] [rbp-48h]
  char v334; // [rsp+E4h] [rbp-44h]

  if ( a3 == 51 || (_BYTE)a2 == 20 )
    return 0;
  v5 = (unsigned __int8)a2;
  switch ( a3 )
  {
    case 6:
    case 7:
      v8 = 5;
      break;
    case 9:
    case 10:
      v8 = 8;
      break;
    case 12:
    case 13:
      v8 = 11;
      break;
    case 15:
    case 16:
      v8 = 14;
      break;
    case 26:
      v8 = 25;
      break;
    default:
      v8 = a3;
      break;
  }
  v10 = a2;
  v12 = *((_QWORD *)sub_1ACF4A0(a2) + 2);
  if ( !_bittest64(&v12, v15) )
    return 0;
  v16 = (_QWORD *)(v13 + 8 * v14);
  v17 = (8 * v14) >> 5;
  v18 = (8 * v14) >> 3;
  if ( v17 <= 0 )
    goto LABEL_32;
  v19 = (_QWORD *)(v13 + 32 * v17);
  do
  {
    v20 = *(_BYTE *)(*a5 + 8LL);
    switch ( v20 )
    {
      case 6:
      case 7:
        v20 = 5;
        break;
      case 9:
      case 10:
        v20 = 8;
        break;
      case 12:
      case 13:
        v20 = 11;
        break;
      case 15:
      case 16:
        v20 = 14;
        break;
      case 26:
        v20 = 25;
        break;
      default:
        break;
    }
    if ( v8 == v20 )
      goto LABEL_49;
    v21 = *(_BYTE *)(a5[1] + 8LL);
    switch ( v21 )
    {
      case 6:
      case 7:
        v21 = 5;
        break;
      case 9:
      case 10:
        v21 = 8;
        break;
      case 12:
      case 13:
        v21 = 11;
        break;
      case 15:
      case 16:
        v21 = 14;
        break;
      case 26:
        v21 = 25;
        break;
      default:
        break;
    }
    if ( v8 == v21 )
    {
      ++a5;
      goto LABEL_49;
    }
    v22 = *(_BYTE *)(a5[2] + 8LL);
    switch ( v22 )
    {
      case 6:
      case 7:
        v22 = 5;
        break;
      case 9:
      case 10:
        v22 = 8;
        break;
      case 12:
      case 13:
        v22 = 11;
        break;
      case 15:
      case 16:
        v22 = 14;
        break;
      case 26:
        v22 = 25;
        break;
      default:
        break;
    }
    if ( v8 == v22 )
    {
      a5 += 2;
      goto LABEL_49;
    }
    v23 = *(_BYTE *)(a5[3] + 8LL);
    switch ( v23 )
    {
      case 6:
      case 7:
        v23 = 5;
        break;
      case 9:
      case 10:
        v23 = 8;
        break;
      case 12:
      case 13:
        v23 = 11;
        break;
      case 15:
      case 16:
        v23 = 14;
        break;
      case 26:
        v23 = 25;
        break;
      default:
        break;
    }
    if ( v8 == v23 )
    {
      a5 += 3;
      goto LABEL_49;
    }
    a5 += 4;
  }
  while ( v19 != a5 );
  v18 = v16 - a5;
LABEL_32:
  if ( v18 == 2 )
    goto LABEL_216;
  if ( v18 != 3 )
  {
    if ( v18 == 1 )
      goto LABEL_35;
    return v6;
  }
  v123 = *(_BYTE *)(*a5 + 8LL);
  switch ( v123 )
  {
    case 6:
    case 7:
      v123 = 5;
      break;
    case 9:
    case 10:
      v123 = 8;
      break;
    case 12:
    case 13:
      v123 = 11;
      break;
    case 15:
    case 16:
      v123 = 14;
      break;
    case 26:
      v123 = 25;
      break;
    default:
      break;
  }
  if ( v8 == v123 )
    goto LABEL_49;
  ++a5;
LABEL_216:
  v124 = *(_BYTE *)(*a5 + 8LL);
  switch ( v124 )
  {
    case 6:
    case 7:
      v124 = 5;
      break;
    case 9:
    case 10:
      v124 = 8;
      break;
    case 12:
    case 13:
      v124 = 11;
      break;
    case 15:
    case 16:
      v124 = 14;
      break;
    case 26:
      v124 = 25;
      break;
    default:
      break;
  }
  if ( v8 == v124 )
    goto LABEL_49;
  ++a5;
LABEL_35:
  v24 = *(_BYTE *)(*a5 + 8LL);
  switch ( v24 )
  {
    case 6:
    case 7:
      v24 = 5;
      break;
    case 9:
    case 10:
      v24 = 8;
      break;
    case 12:
    case 13:
      v24 = 11;
      break;
    case 15:
    case 16:
      v24 = 14;
      break;
    case 26:
      v24 = 25;
      break;
    default:
      break;
  }
  if ( v8 == v24 )
  {
LABEL_49:
    if ( v16 != a5 )
    {
      sub_168B9F0((__int64)v329, a1, a4, 0xB4Eu, 0);
      if ( !v332 )
      {
        if ( !v334 )
        {
LABEL_52:
          sub_15F7200(v329);
          sub_168B9F0((__int64)v329, a1, *(_DWORD *)(*a5 + 12LL), 0x1675u, 0);
          if ( v332 )
          {
            sub_1573010(v331, a3);
            goto LABEL_54;
          }
          if ( !v334 )
          {
LABEL_54:
            sub_15F7200(v329);
            return 1;
          }
          v35 = sub_168B9E0(v329);
          v39 = v330;
          v40 = v35;
          if ( v330 )
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v330 + 32LL))(v330);
          v41 = *(_DWORD *)(v40 + 16);
          v295 = *(__int64 **)v40;
          if ( !v41 )
            goto LABEL_112;
          v42 = v41 - 1;
          v298 = ((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4);
          v43 = v42 & v298;
          v44 = (__int64 *)(*(_QWORD *)v40 + 32LL * ((unsigned int)v42 & v298));
          v45 = *v44;
          if ( *v44 == v39 )
          {
LABEL_70:
            v46 = v44[1];
LABEL_71:
            sub_1573010((unsigned __int8 **)(v46 + 32LL * v333 + 8), a3);
            goto LABEL_54;
          }
          v37 = 1;
          v127 = nullptr;
          if ( v45 != -4096 )
          {
            while ( 1 )
            {
              if ( !v127 && v45 == -8192 )
                v127 = v44;
              v38 = (unsigned int)(v37 + 1);
              v43 = v42 & (v37 + v43);
              v44 = &v295[4 * v43];
              v45 = *v44;
              if ( v39 == *v44 )
                goto LABEL_70;
              if ( v45 == -4096 )
                break;
              v37 = (unsigned int)v38;
            }
            if ( v127 )
              v44 = v127;
          }
          v36 = (unsigned int)(*(_DWORD *)(v40 + 8) + 1);
          if ( 4 * (int)v36 < 3 * v41 )
          {
            if ( v41 - *(_DWORD *)(v40 + 12) - (unsigned int)v36 > v41 >> 3 )
            {
              v110 = *v44;
              goto LABEL_149;
            }
            v198 = (v42 >> 1) | v42 | (((v42 >> 1) | v42) >> 2);
            v199 = (((v198 >> 4) | v198) >> 8) | (v198 >> 4) | v198;
            v200 = ((v199 >> 16) | v199) + 1;
            if ( (unsigned int)v200 < 0x40 )
              LODWORD(v200) = 64;
            *(_DWORD *)(v40 + 16) = v200;
            v201 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v200, 8, 64, v36, v37, v38);
            *(_QWORD *)v40 = v201;
            if ( v295 )
            {
              *(_QWORD *)(v40 + 8) = 0;
              v313 = 4LL * v41;
              for ( i = &v201[4 * *(unsigned int *)(v40 + 16)]; i != v201; v201 += 4 )
                *v201 = -4096;
              v308 = v40;
              v203 = v295;
              v318 = v39;
              do
              {
                v204 = *v203;
                if ( *v203 != -4096 && v204 != -8192 )
                {
                  v205 = *(_DWORD *)(v308 + 16);
                  if ( !v205 )
                  {
                    *(_QWORD *)&dword_0 = *v203;
                    BUG();
                  }
                  v206 = v205 - 1;
                  v207 = (v205 - 1) & (((unsigned int)v204 >> 9) ^ ((unsigned int)v204 >> 4));
                  v208 = (_QWORD *)(*(_QWORD *)v308 + 32LL * v207);
                  v209 = *v208;
                  if ( *v208 != v204 )
                  {
                    v281 = 1;
                    v282 = nullptr;
                    if ( v209 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v282 && v209 == -8192 )
                          v282 = v208;
                        v207 = v206 & (v281 + v207);
                        v208 = (_QWORD *)(*(_QWORD *)v308 + 32LL * v207);
                        v209 = *v208;
                        if ( v204 == *v208 )
                          break;
                        if ( v209 == -4096 )
                        {
                          if ( v282 )
                            v208 = v282;
                          break;
                        }
                        ++v281;
                      }
                    }
                  }
                  v210 = *v203;
                  v208[1] = 0;
                  v208[2] = 0;
                  v208[3] = 0;
                  *v208 = v210;
                  v208[1] = v203[1];
                  v211 = v203[2];
                  v203[1] = 0;
                  v212 = v208[2];
                  v208[2] = v211;
                  v213 = v203[3];
                  v203[2] = v212;
                  v214 = v208[3];
                  v208[3] = v213;
                  v215 = (_QWORD *)v203[1];
                  v216 = (_QWORD *)v203[2];
                  v203[3] = v214;
                  ++*(_DWORD *)(v308 + 8);
                  v217 = v215;
                  if ( v216 != v215 )
                  {
                    do
                    {
                      v218 = v217[1];
                      if ( v218 )
                      {
                        v219 = v217[2];
                        if ( v219 )
                        {
                          if ( v218 < v219 || v218 > v219 + 14848 )
                          {
                            v220 = *(_QWORD **)(v218 + 528);
                            v221 = &v220[8 * (unsigned __int64)*(unsigned int *)(v218 + 536)];
                            if ( v220 != v221 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v221 -= 8;
                                  v222 = (_QWORD *)v221[3];
                                  if ( v222 == v221 + 5 )
                                    break;
                                  operator delete(v222);
                                  if ( v220 == v221 )
                                    goto LABEL_357;
                                }
                              }
                              while ( v220 != v221 );
LABEL_357:
                              v221 = *(_QWORD **)(v218 + 528);
                            }
                            if ( v221 != (_QWORD *)(v218 + 544) )
                              free(v221);
                            v223 = *(void **)(v218 + 416);
                            if ( v223 != (void *)(v218 + 432) )
                              free(v223);
                            v224 = (void **)(v218 + 384);
                            v225 = (void **)(v218 + 64);
                            do
                            {
                              while ( *v224 != v224 + 2 )
                              {
                                operator delete(*v224);
                                v224 -= 4;
                                if ( v225 == v224 )
                                  goto LABEL_365;
                              }
                              v224 -= 4;
                            }
                            while ( v224 != v225 );
LABEL_365:
                            operator delete((void *)v218, 0x3A0u);
                          }
                          else
                          {
                            v231 = *(unsigned int *)(v219 + 14976);
                            *(_DWORD *)(v219 + 14976) = v231 + 1;
                            *(_QWORD *)(v219 + 8 * v231 + 14848) = v218;
                          }
                        }
                      }
                      v217 += 4;
                    }
                    while ( v216 != v217 );
                    v215 = (_QWORD *)v203[1];
                  }
                  if ( v215 )
                    operator delete(v215);
                }
                v203 += 4;
              }
              while ( &v295[v313] != v203 );
              v40 = v308;
              v39 = v318;
              operator delete(v295, v313 * 8, 8);
            }
            else
            {
              v277 = *(unsigned int *)(v40 + 16);
              *(_QWORD *)(v40 + 8) = 0;
              for ( j = &v201[4 * v277]; j != v201; v201 += 4 )
                *v201 = -4096;
            }
            v226 = *(_DWORD *)(v40 + 16);
            LODWORD(v36) = *(_DWORD *)(v40 + 8) + 1;
            if ( v226 )
            {
              v227 = v226 - 1;
              v228 = (v226 - 1) & v298;
              v44 = (__int64 *)(*(_QWORD *)v40 + 32LL * v228);
              v110 = *v44;
              if ( v39 == *v44 )
              {
LABEL_149:
                *(_DWORD *)(v40 + 8) = v36;
                if ( v110 != -4096 )
                  --*(_DWORD *)(v40 + 12);
                goto LABEL_151;
              }
              v229 = 1;
              v230 = nullptr;
              if ( v110 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v230 && v110 == -8192 )
                    v230 = v44;
                  v228 = v227 & (v229 + v228);
                  v44 = (__int64 *)(*(_QWORD *)v40 + 32LL * v228);
                  v110 = *v44;
                  if ( v39 == *v44 )
                    goto LABEL_149;
                  if ( v110 == -4096 )
                  {
                    if ( !v230 )
                      break;
                    v110 = *v230;
                    v44 = v230;
                    goto LABEL_149;
                  }
                  ++v229;
                }
              }
LABEL_375:
              *(_DWORD *)(v40 + 8) = v36;
LABEL_151:
              *v44 = v39;
              v46 = 0;
              v44[1] = 0;
              v44[2] = 0;
              v44[3] = 0;
              goto LABEL_71;
            }
          }
          else
          {
LABEL_112:
            v80 = (((((((2 * v41 - 1) | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 2)
                    | (2 * v41 - 1)
                    | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 4)
                  | (((2 * v41 - 1) | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 2)
                  | (2 * v41 - 1)
                  | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 8)
                | (((((2 * v41 - 1) | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 2)
                  | (2 * v41 - 1)
                  | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 4)
                | (((2 * v41 - 1) | ((unsigned __int64)(2 * v41 - 1) >> 1)) >> 2)
                | (2 * v41 - 1)
                | ((unsigned __int64)(2 * v41 - 1) >> 1);
            v81 = ((v80 >> 16) | v80) + 1;
            if ( (unsigned int)v81 < 0x40 )
              LODWORD(v81) = 64;
            *(_DWORD *)(v40 + 16) = v81;
            v82 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v81, 8, 64, v36, v37, v38);
            *(_QWORD *)v40 = v82;
            if ( v295 )
            {
              *(_QWORD *)(v40 + 8) = 0;
              v306 = 4LL * v41;
              v299 = &v295[v306];
              for ( k = &v82[4 * *(unsigned int *)(v40 + 16)]; k != v82; v82 += 4 )
                *v82 = -4096;
              if ( v295 != v299 )
              {
                v302 = v40;
                v84 = v295;
                v310 = v39;
                do
                {
                  v85 = *v84;
                  if ( *v84 != -8192 && v85 != -4096 )
                  {
                    v86 = *(_DWORD *)(v302 + 16);
                    if ( !v86 )
                    {
                      *(_QWORD *)&dword_0 = *v84;
                      BUG();
                    }
                    v87 = v86 - 1;
                    v88 = (v86 - 1) & (((unsigned int)v85 >> 9) ^ ((unsigned int)v85 >> 4));
                    v89 = (_QWORD *)(*(_QWORD *)v302 + 32LL * v88);
                    v90 = *v89;
                    if ( *v89 != v85 )
                    {
                      v287 = 1;
                      v288 = nullptr;
                      if ( v90 != -4096 )
                      {
                        while ( 1 )
                        {
                          if ( v90 == -8192 && !v288 )
                            v288 = v89;
                          v88 = v87 & (v287 + v88);
                          v89 = (_QWORD *)(*(_QWORD *)v302 + 32LL * v88);
                          v90 = *v89;
                          if ( v85 == *v89 )
                            break;
                          if ( v90 == -4096 )
                          {
                            if ( v288 )
                              v89 = v288;
                            break;
                          }
                          ++v287;
                        }
                      }
                    }
                    v91 = *v84;
                    v89[1] = 0;
                    v89[2] = 0;
                    v89[3] = 0;
                    *v89 = v91;
                    v89[1] = v84[1];
                    v92 = v84[2];
                    v84[1] = 0;
                    v93 = v89[2];
                    v89[2] = v92;
                    v94 = v84[3];
                    v84[2] = v93;
                    v95 = v89[3];
                    v89[3] = v94;
                    v96 = (_QWORD *)v84[1];
                    v97 = (_QWORD *)v84[2];
                    v84[3] = v95;
                    ++*(_DWORD *)(v302 + 8);
                    v98 = v96;
                    if ( v97 != v96 )
                    {
                      do
                      {
                        v99 = v98[1];
                        if ( v99 )
                        {
                          v100 = v98[2];
                          if ( v100 )
                          {
                            if ( v99 < v100 || v99 > v100 + 14848 )
                            {
                              v101 = *(_QWORD **)(v99 + 528);
                              v102 = &v101[8 * (unsigned __int64)*(unsigned int *)(v99 + 536)];
                              if ( v101 != v102 )
                              {
                                do
                                {
                                  while ( 1 )
                                  {
                                    v102 -= 8;
                                    v103 = (_QWORD *)v102[3];
                                    if ( v103 == v102 + 5 )
                                      break;
                                    operator delete(v103);
                                    if ( v101 == v102 )
                                      goto LABEL_130;
                                  }
                                }
                                while ( v101 != v102 );
LABEL_130:
                                v102 = *(_QWORD **)(v99 + 528);
                              }
                              if ( v102 != (_QWORD *)(v99 + 544) )
                                free(v102);
                              v104 = *(void **)(v99 + 416);
                              if ( v104 != (void *)(v99 + 432) )
                                free(v104);
                              v105 = (void **)(v99 + 384);
                              v106 = (void **)(v99 + 64);
                              do
                              {
                                while ( *v105 != v105 + 2 )
                                {
                                  operator delete(*v105);
                                  v105 -= 4;
                                  if ( v106 == v105 )
                                    goto LABEL_138;
                                }
                                v105 -= 4;
                              }
                              while ( v105 != v106 );
LABEL_138:
                              operator delete((void *)v99, 0x3A0u);
                            }
                            else
                            {
                              v125 = *(unsigned int *)(v100 + 14976);
                              *(_DWORD *)(v100 + 14976) = v125 + 1;
                              *(_QWORD *)(v100 + 8 * v125 + 14848) = v99;
                            }
                          }
                        }
                        v98 += 4;
                      }
                      while ( v97 != v98 );
                      v96 = (_QWORD *)v84[1];
                    }
                    if ( v96 )
                      operator delete(v96);
                  }
                  v84 += 4;
                }
                while ( v299 != v84 );
                v40 = v302;
                v39 = v310;
              }
              operator delete(v295, v306 * 8, 8);
            }
            else
            {
              v271 = *(unsigned int *)(v40 + 16);
              *(_QWORD *)(v40 + 8) = 0;
              for ( m = &v82[4 * v271]; m != v82; v82 += 4 )
                *v82 = -4096;
            }
            v107 = *(_DWORD *)(v40 + 16);
            LODWORD(v36) = *(_DWORD *)(v40 + 8) + 1;
            if ( v107 )
            {
              v108 = v107 - 1;
              v109 = (v107 - 1) & (((unsigned int)v39 >> 9) ^ ((unsigned int)v39 >> 4));
              v44 = (__int64 *)(*(_QWORD *)v40 + 32LL * v109);
              v110 = *v44;
              if ( *v44 == v39 )
              {
                v110 = v39;
                goto LABEL_149;
              }
              v292 = 1;
              v293 = nullptr;
              if ( v110 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v293 && v110 == -8192 )
                    v293 = v44;
                  v109 = v108 & (v292 + v109);
                  v44 = (__int64 *)(*(_QWORD *)v40 + 32LL * v109);
                  v110 = *v44;
                  if ( v39 == *v44 )
                    goto LABEL_149;
                  if ( v110 == -4096 )
                  {
                    if ( !v293 )
                      goto LABEL_375;
                    v110 = *v293;
                    v44 = v293;
                    goto LABEL_149;
                  }
                  ++v292;
                }
              }
              goto LABEL_375;
            }
          }
          ++*(_DWORD *)(v40 + 8);
          BUG();
        }
        v297 = sub_168B9E0(v329);
        v301 = v330;
        if ( v330 )
          v301 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v330 + 32LL))(v330);
        v28 = *(_DWORD *)(v297 + 16);
        v305 = *(__int64 **)v297;
        if ( !v28 )
          goto LABEL_73;
        v29 = v28 - 1;
        v314 = ((unsigned int)v301 >> 9) ^ ((unsigned int)v301 >> 4);
        v30 = v29 & v314;
        v31 = (__int64 *)(*(_QWORD *)v297 + 32LL * ((unsigned int)v29 & v314));
        v32 = *v31;
        if ( v301 == *v31 )
        {
LABEL_64:
          v33 = v31[1];
LABEL_65:
          v34 = (unsigned __int8 **)(v33 + 32LL * v333 + 8);
          switch ( v5 )
          {
            case 0LL:
              sub_AE9DF0(v34, (__int64)"parallel", 1u);
              goto LABEL_157;
            case 1LL:
              sub_AE9DF0(v34, (__int64)"serial", 1u);
              goto LABEL_157;
            case 2LL:
              sub_AE9DF0(v34, (__int64)"kernels", 1u);
              goto LABEL_157;
            case 3LL:
              sub_AE9DF0(v34, (__int64)"data", 1u);
              goto LABEL_157;
            case 4LL:
              sub_AE9DF0(v34, (__int64)"enter data", 1u);
              goto LABEL_157;
            case 5LL:
              sub_AE9DF0(v34, (__int64)"exit data", 1u);
              goto LABEL_157;
            case 6LL:
              sub_AE9DF0(v34, (__int64)"host_data", 1u);
              goto LABEL_157;
            case 7LL:
              sub_AE9DF0(v34, (__int64)"loop", 1u);
              goto LABEL_157;
            case 8LL:
              sub_AE9DF0(v34, (__int64)"cache", 1u);
              goto LABEL_157;
            case 9LL:
              sub_AE9DF0(v34, (__int64)"parallel loop", 1u);
              goto LABEL_157;
            case 10LL:
              sub_AE9DF0(v34, (__int64)"serial loop", 1u);
              goto LABEL_157;
            case 11LL:
              sub_AE9DF0(v34, (__int64)"kernels loop", 1u);
              goto LABEL_157;
            case 12LL:
              sub_AE9DF0(v34, (__int64)"atomic", 1u);
              goto LABEL_157;
            case 13LL:
              sub_AE9DF0(v34, (__int64)"declare", 1u);
              goto LABEL_157;
            case 14LL:
              sub_AE9DF0(v34, (__int64)"init", 1u);
              goto LABEL_157;
            case 15LL:
              sub_AE9DF0(v34, (__int64)"shutdown", 1u);
              goto LABEL_157;
            case 16LL:
              sub_AE9DF0(v34, (__int64)"set", 1u);
              goto LABEL_157;
            case 17LL:
              sub_AE9DF0(v34, (__int64)"update", 1u);
              goto LABEL_157;
            case 18LL:
              sub_AE9DF0(v34, (__int64)"wait", 1u);
              goto LABEL_157;
            case 19LL:
              sub_AE9DF0(v34, (__int64)"routine", 1u);
              goto LABEL_157;
            default:
              goto LABEL_576;
          }
        }
        v26 = 1;
        v130 = nullptr;
        if ( v32 != -4096 )
        {
          while ( 1 )
          {
            if ( v32 == -8192 && !v130 )
              v130 = v31;
            v27 = (unsigned int)(v26 + 1);
            v30 = v29 & (v26 + v30);
            v31 = &v305[4 * v30];
            v32 = *v31;
            if ( v301 == *v31 )
              goto LABEL_64;
            if ( v32 == -4096 )
              break;
            v26 = (unsigned int)v27;
          }
          if ( v130 )
            v31 = v130;
        }
        v76 = *(_DWORD *)(v297 + 8) + 1;
        v25 = 3 * v28;
        if ( 4 * v76 < (unsigned int)v25 )
        {
          v131 = v28 - *(_DWORD *)(v297 + 12) - v76;
          if ( (unsigned int)v131 > v28 >> 3 )
          {
            v79 = *v31;
            goto LABEL_109;
          }
          v232 = (v29 >> 1) | v29 | (((v29 >> 1) | v29) >> 2);
          v233 = (((v232 >> 4) | v232) >> 8) | (v232 >> 4) | v232;
          v234 = ((v233 >> 16) | v233) + 1;
          if ( (unsigned int)v234 < 0x40 )
            LODWORD(v234) = 64;
          *(_DWORD *)(v297 + 16) = v234;
          v235 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v234, 8, 64, v131, v26, v27);
          *(_QWORD *)v297 = v235;
          if ( v305 )
          {
            v322 = 4LL * v28;
            v236 = *(unsigned int *)(v297 + 16);
            *(_QWORD *)(v297 + 8) = 0;
            for ( n = &v235[4 * v236]; n != v235; v235 += 4 )
              *v235 = -4096;
            v325 = a5;
            v327 = v5;
            v328 = v10;
            v238 = v305;
            do
            {
              v239 = *v238;
              if ( *v238 != -8192 && v239 != -4096 )
              {
                v240 = *(_DWORD *)(v297 + 16);
                if ( !v240 )
                {
                  *(_QWORD *)&dword_0 = *v238;
                  BUG();
                }
                v241 = v240 - 1;
                v242 = (v240 - 1) & (((unsigned int)v239 >> 9) ^ ((unsigned int)v239 >> 4));
                v243 = (_QWORD *)(*(_QWORD *)v297 + 32LL * v242);
                v244 = *v243;
                if ( v239 != *v243 )
                {
                  v285 = 1;
                  v286 = nullptr;
                  if ( v244 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v244 == -8192 && !v286 )
                        v286 = v243;
                      v242 = v241 & (v285 + v242);
                      v243 = (_QWORD *)(*(_QWORD *)v297 + 32LL * v242);
                      v244 = *v243;
                      if ( v239 == *v243 )
                        goto LABEL_392;
                      if ( v244 == -4096 )
                        break;
                      ++v285;
                    }
                    if ( v286 )
                      v243 = v286;
                  }
                }
LABEL_392:
                v245 = *v238;
                v243[1] = 0;
                v243[2] = 0;
                v243[3] = 0;
                *v243 = v245;
                v243[1] = v238[1];
                v246 = v238[2];
                v238[1] = 0;
                v247 = v243[2];
                v243[2] = v246;
                v248 = v238[3];
                v238[2] = v247;
                v249 = v243[3];
                v243[3] = v248;
                v250 = (_QWORD *)v238[1];
                v251 = (_QWORD *)v238[2];
                v238[3] = v249;
                ++*(_DWORD *)(v297 + 8);
                v252 = v250;
                if ( v251 != v250 )
                {
                  do
                  {
                    v253 = v252[1];
                    if ( v253 )
                    {
                      v254 = v252[2];
                      if ( v254 )
                      {
                        if ( v253 < v254 || v253 > v254 + 14848 )
                        {
                          v255 = *(_QWORD **)(v253 + 528);
                          v256 = &v255[8 * (unsigned __int64)*(unsigned int *)(v253 + 536)];
                          if ( v255 != v256 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v256 -= 8;
                                v257 = (_QWORD *)v256[3];
                                if ( v257 == v256 + 5 )
                                  break;
                                operator delete(v257);
                                if ( v255 == v256 )
                                  goto LABEL_399;
                              }
                            }
                            while ( v255 != v256 );
LABEL_399:
                            v256 = *(_QWORD **)(v253 + 528);
                          }
                          if ( v256 != (_QWORD *)(v253 + 544) )
                            free(v256);
                          v258 = *(void **)(v253 + 416);
                          if ( v258 != (void *)(v253 + 432) )
                            free(v258);
                          v259 = (void **)(v253 + 384);
                          v260 = (void **)(v253 + 64);
                          do
                          {
                            while ( *v259 != v259 + 2 )
                            {
                              operator delete(*v259);
                              v259 -= 4;
                              if ( v259 == v260 )
                                goto LABEL_407;
                            }
                            v259 -= 4;
                          }
                          while ( v260 != v259 );
LABEL_407:
                          operator delete((void *)v253, 0x3A0u);
                        }
                        else
                        {
                          v266 = *(unsigned int *)(v254 + 14976);
                          *(_DWORD *)(v254 + 14976) = v266 + 1;
                          *(_QWORD *)(v254 + 8 * v266 + 14848) = v253;
                        }
                      }
                    }
                    v252 += 4;
                  }
                  while ( v251 != v252 );
                  v250 = (_QWORD *)v238[1];
                }
                if ( v250 )
                  operator delete(v250);
              }
              v238 += 4;
            }
            while ( &v305[v322] != v238 );
            a5 = v325;
            v5 = v327;
            v10 = v328;
            operator delete(v305, v322 * 8, 8);
          }
          else
          {
            v273 = *(unsigned int *)(v297 + 16);
            *(_QWORD *)(v297 + 8) = 0;
            for ( ii = &v235[4 * v273]; ii != v235; v235 += 4 )
              *v235 = -4096;
          }
          v261 = *(_DWORD *)(v297 + 16);
          v76 = *(_DWORD *)(v297 + 8) + 1;
          if ( v261 )
          {
            v262 = v261 - 1;
            v263 = v262 & v314;
            v31 = (__int64 *)(*(_QWORD *)v297 + 32LL * (v262 & v314));
            v79 = *v31;
            if ( v301 != *v31 )
            {
              v264 = 1;
              v265 = nullptr;
              if ( v79 != -4096 )
              {
                while ( 1 )
                {
                  if ( !v265 && v79 == -8192 )
                    v265 = v31;
                  v263 = v262 & (v264 + v263);
                  v31 = (__int64 *)(*(_QWORD *)v297 + 32LL * v263);
                  v79 = *v31;
                  if ( v301 == *v31 )
                    goto LABEL_109;
                  if ( v79 == -4096 )
                    goto LABEL_529;
                  ++v264;
                }
              }
              goto LABEL_417;
            }
            goto LABEL_109;
          }
        }
        else
        {
LABEL_73:
          v47 = (((((((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
                  | (2 * v28 - 1)
                  | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 4)
                | (((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
                | (2 * v28 - 1)
                | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 8)
              | (((((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
                | (2 * v28 - 1)
                | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 4)
              | (((2 * v28 - 1) | ((unsigned __int64)(2 * v28 - 1) >> 1)) >> 2)
              | (2 * v28 - 1)
              | ((unsigned __int64)(2 * v28 - 1) >> 1);
          v48 = ((v47 >> 16) | v47) + 1;
          if ( (unsigned int)v48 < 0x40 )
            LODWORD(v48) = 64;
          *(_DWORD *)(v297 + 16) = v48;
          v49 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v48, 8, 64, v25, v26, v27);
          *(_QWORD *)v297 = v49;
          if ( v305 )
          {
            v315 = 4LL * v28;
            v309 = &v305[v315];
            v50 = *(unsigned int *)(v297 + 16);
            *(_QWORD *)(v297 + 8) = 0;
            for ( jj = &v49[4 * v50]; jj != v49; v49 += 4 )
              *v49 = -4096;
            if ( v305 != v309 )
            {
              v319 = a5;
              v52 = v305;
              v323 = v5;
              v326 = v10;
              do
              {
                v53 = *v52;
                if ( *v52 != -4096 && v53 != -8192 )
                {
                  v54 = *(_DWORD *)(v297 + 16);
                  if ( !v54 )
                  {
                    *(_QWORD *)&dword_0 = *v52;
                    BUG();
                  }
                  v55 = v54 - 1;
                  v56 = (v54 - 1) & (((unsigned int)v53 >> 9) ^ ((unsigned int)v53 >> 4));
                  v57 = (_QWORD *)(*(_QWORD *)v297 + 32LL * v56);
                  v58 = *v57;
                  if ( v53 != *v57 )
                  {
                    v283 = 1;
                    v284 = nullptr;
                    if ( v58 != -4096 )
                    {
                      while ( 1 )
                      {
                        if ( !v284 && v58 == -8192 )
                          v284 = v57;
                        v56 = v55 & (v283 + v56);
                        v57 = (_QWORD *)(*(_QWORD *)v297 + 32LL * v56);
                        v58 = *v57;
                        if ( v53 == *v57 )
                          goto LABEL_84;
                        if ( v58 == -4096 )
                          break;
                        ++v283;
                      }
                      if ( v284 )
                        v57 = v284;
                    }
                  }
LABEL_84:
                  v59 = *v52;
                  v57[1] = 0;
                  v57[2] = 0;
                  v57[3] = 0;
                  *v57 = v59;
                  v57[1] = v52[1];
                  v60 = v52[2];
                  v52[1] = 0;
                  v61 = v57[2];
                  v57[2] = v60;
                  v62 = v52[3];
                  v52[2] = v61;
                  v63 = v57[3];
                  v57[3] = v62;
                  v64 = (_QWORD *)v52[1];
                  v65 = (_QWORD *)v52[2];
                  v52[3] = v63;
                  ++*(_DWORD *)(v297 + 8);
                  v66 = v64;
                  if ( v65 != v64 )
                  {
                    do
                    {
                      v67 = v66[1];
                      if ( v67 )
                      {
                        v68 = v66[2];
                        if ( v68 )
                        {
                          if ( v67 < v68 || v67 > v68 + 14848 )
                          {
                            v69 = *(_QWORD **)(v67 + 528);
                            v70 = &v69[8 * (unsigned __int64)*(unsigned int *)(v67 + 536)];
                            if ( v69 != v70 )
                            {
                              do
                              {
                                while ( 1 )
                                {
                                  v70 -= 8;
                                  v71 = (_QWORD *)v70[3];
                                  if ( v71 == v70 + 5 )
                                    break;
                                  operator delete(v71);
                                  if ( v69 == v70 )
                                    goto LABEL_91;
                                }
                              }
                              while ( v69 != v70 );
LABEL_91:
                              v70 = *(_QWORD **)(v67 + 528);
                            }
                            if ( v70 != (_QWORD *)(v67 + 544) )
                              free(v70);
                            v72 = *(void **)(v67 + 416);
                            if ( v72 != (void *)(v67 + 432) )
                              free(v72);
                            v73 = (void **)(v67 + 384);
                            v74 = (void **)(v67 + 64);
                            do
                            {
                              while ( *v73 != v73 + 2 )
                              {
                                operator delete(*v73);
                                v73 -= 4;
                                if ( v74 == v73 )
                                  goto LABEL_99;
                              }
                              v73 -= 4;
                            }
                            while ( v74 != v73 );
LABEL_99:
                            operator delete((void *)v67, 0x3A0u);
                          }
                          else
                          {
                            v126 = *(unsigned int *)(v68 + 14976);
                            *(_DWORD *)(v68 + 14976) = v126 + 1;
                            *(_QWORD *)(v68 + 8 * v126 + 14848) = v67;
                          }
                        }
                      }
                      v66 += 4;
                    }
                    while ( v65 != v66 );
                    v64 = (_QWORD *)v52[1];
                  }
                  if ( v64 )
                    operator delete(v64);
                }
                v52 += 4;
              }
              while ( v309 != v52 );
              a5 = v319;
              v5 = v323;
              v10 = v326;
            }
            operator delete(v305, v315 * 8, 8);
          }
          else
          {
            v267 = *(unsigned int *)(v297 + 16);
            *(_QWORD *)(v297 + 8) = 0;
            for ( kk = &v49[4 * v267]; kk != v49; v49 += 4 )
              *v49 = -4096;
          }
          v75 = *(_DWORD *)(v297 + 16);
          v76 = *(_DWORD *)(v297 + 8) + 1;
          if ( v75 )
          {
            v77 = v75 - 1;
            v78 = v77 & (((unsigned int)v301 >> 9) ^ ((unsigned int)v301 >> 4));
            v31 = (__int64 *)(*(_QWORD *)v297 + 32LL * v78);
            v79 = *v31;
            if ( v301 == *v31 )
              goto LABEL_109;
            v291 = 1;
            v265 = nullptr;
            if ( v79 == -4096 )
              goto LABEL_417;
            while ( 1 )
            {
              if ( !v265 && v79 == -8192 )
                v265 = v31;
              v78 = v77 & (v291 + v78);
              v31 = (__int64 *)(*(_QWORD *)v297 + 32LL * v78);
              v79 = *v31;
              if ( v301 == *v31 )
                goto LABEL_109;
              if ( v79 == -4096 )
                break;
              ++v291;
            }
LABEL_529:
            if ( !v265 )
            {
LABEL_417:
              *(_DWORD *)(v297 + 8) = v76;
LABEL_111:
              v31[1] = 0;
              v33 = 0;
              v31[2] = 0;
              *v31 = v301;
              v31[3] = 0;
              goto LABEL_65;
            }
            v79 = *v265;
            v31 = v265;
LABEL_109:
            *(_DWORD *)(v297 + 8) = v76;
            if ( v79 != -4096 )
              --*(_DWORD *)(v297 + 12);
            goto LABEL_111;
          }
        }
        ++*(_DWORD *)(v297 + 8);
        BUG();
      }
      switch ( (char)a2 )
      {
        case 0:
          sub_AE9DF0(v331, (__int64)"parallel", 1u);
          break;
        case 1:
          sub_AE9DF0(v331, (__int64)"serial", 1u);
          break;
        case 2:
          sub_AE9DF0(v331, (__int64)"kernels", 1u);
          break;
        case 3:
          sub_AE9DF0(v331, (__int64)"data", 1u);
          break;
        case 4:
          sub_AE9DF0(v331, (__int64)"enter data", 1u);
          break;
        case 5:
          sub_AE9DF0(v331, (__int64)"exit data", 1u);
          break;
        case 6:
          sub_AE9DF0(v331, (__int64)"host_data", 1u);
          break;
        case 7:
          sub_AE9DF0(v331, (__int64)"loop", 1u);
          break;
        case 8:
          sub_AE9DF0(v331, (__int64)"cache", 1u);
          break;
        case 9:
          sub_AE9DF0(v331, (__int64)"parallel loop", 1u);
          break;
        case 10:
          sub_AE9DF0(v331, (__int64)"serial loop", 1u);
          break;
        case 11:
          sub_AE9DF0(v331, (__int64)"kernels loop", 1u);
          break;
        case 12:
          sub_AE9DF0(v331, (__int64)"atomic", 1u);
          break;
        case 13:
          sub_AE9DF0(v331, (__int64)"declare", 1u);
          break;
        case 14:
          sub_AE9DF0(v331, (__int64)"init", 1u);
          break;
        case 15:
          sub_AE9DF0(v331, (__int64)"shutdown", 1u);
          break;
        case 16:
          sub_AE9DF0(v331, (__int64)"set", 1u);
          break;
        case 17:
          sub_AE9DF0(v331, (__int64)"update", 1u);
          break;
        case 18:
          sub_AE9DF0(v331, (__int64)"wait", 1u);
          break;
        case 19:
          sub_AE9DF0(v331, (__int64)"routine", 1u);
          break;
      }
LABEL_157:
      if ( v332 )
      {
        sub_1573010(v331, a3);
        goto LABEL_52;
      }
      if ( !v334 )
        goto LABEL_52;
      v111 = sub_168B9E0(v329);
      v115 = v330;
      v116 = v111;
      if ( v330 )
        v115 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v330 + 32LL))(v330);
      v117 = *(_DWORD *)(v116 + 16);
      v300 = *(__int64 **)v116;
      if ( !v117 )
        goto LABEL_248;
      v118 = v117 - 1;
      v303 = ((unsigned int)v115 >> 9) ^ ((unsigned int)v115 >> 4);
      v119 = v118 & v303;
      v120 = (__int64 *)(*(_QWORD *)v116 + 32LL * ((unsigned int)v118 & v303));
      v121 = *v120;
      if ( v115 == *v120 )
      {
LABEL_203:
        v122 = v120[1];
LABEL_204:
        sub_1573010((unsigned __int8 **)(v122 + 32LL * v333 + 8), a3);
        goto LABEL_52;
      }
      v113 = 1;
      v128 = nullptr;
      if ( v121 != -4096 )
      {
        while ( 1 )
        {
          if ( !v128 && v121 == -8192 )
            v128 = v120;
          v114 = (unsigned int)(v113 + 1);
          v119 = v118 & (v113 + v119);
          v120 = &v300[4 * v119];
          v121 = *v120;
          if ( v115 == *v120 )
            goto LABEL_203;
          if ( v121 == -4096 )
            break;
          v113 = (unsigned int)v114;
        }
        if ( v128 )
          v120 = v128;
      }
      v112 = (unsigned int)(*(_DWORD *)(v116 + 8) + 1);
      if ( 4 * (int)v112 < 3 * v117 )
      {
        if ( v117 - *(_DWORD *)(v116 + 12) - (unsigned int)v112 > v117 >> 3 )
        {
          v129 = *v120;
          goto LABEL_241;
        }
        v165 = (v118 >> 1) | v118 | (((v118 >> 1) | v118) >> 2);
        v166 = (((v165 >> 4) | v165) >> 8) | (v165 >> 4) | v165;
        v167 = ((v166 >> 16) | v166) + 1;
        if ( (unsigned int)v167 < 0x40 )
          LODWORD(v167) = 64;
        *(_DWORD *)(v116 + 16) = v167;
        v168 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v167, 8, 64, v112, v113, v114);
        *(_QWORD *)v116 = v168;
        if ( v300 )
        {
          *(_QWORD *)(v116 + 8) = 0;
          v317 = 4LL * v117;
          for ( mm = &v168[4 * *(unsigned int *)(v116 + 16)]; mm != v168; v168 += 4 )
            *v168 = -4096;
          v312 = v116;
          v321 = v115;
          v324 = a5;
          v170 = v300;
          do
          {
            v10 = *v170;
            if ( *v170 != -4096 && v10 != -8192 )
            {
              v171 = *(_DWORD *)(v312 + 16);
              if ( !v171 )
              {
LABEL_576:
                *(_QWORD *)&dword_0 = v10;
                BUG();
              }
              v172 = v171 - 1;
              v173 = (v171 - 1) & (((unsigned int)v10 >> 9) ^ ((unsigned int)v10 >> 4));
              v174 = (_QWORD *)(*(_QWORD *)v312 + 32LL * v173);
              v175 = *v174;
              if ( *v174 != v10 )
              {
                v289 = 1;
                v290 = nullptr;
                if ( v175 != -4096 )
                {
                  while ( 1 )
                  {
                    if ( !v290 && v175 == -8192 )
                      v290 = v174;
                    v173 = v172 & (v289 + v173);
                    v174 = (_QWORD *)(*(_QWORD *)v312 + 32LL * v173);
                    v175 = *v174;
                    if ( v10 == *v174 )
                      break;
                    if ( v175 == -4096 )
                    {
                      if ( v290 )
                        v174 = v290;
                      break;
                    }
                    ++v289;
                  }
                }
              }
              v176 = *v170;
              v174[1] = 0;
              v174[2] = 0;
              v174[3] = 0;
              *v174 = v176;
              v174[1] = v170[1];
              v177 = v170[2];
              v170[1] = 0;
              v178 = v174[2];
              v174[2] = v177;
              v179 = v170[3];
              v170[2] = v178;
              v180 = v174[3];
              v174[3] = v179;
              v181 = (_QWORD *)v170[1];
              v182 = (_QWORD *)v170[2];
              v170[3] = v180;
              ++*(_DWORD *)(v312 + 8);
              v183 = v181;
              if ( v182 != v181 )
              {
                do
                {
                  v184 = v183[1];
                  if ( v184 )
                  {
                    v185 = v183[2];
                    if ( v185 )
                    {
                      if ( v184 < v185 || v184 > v185 + 14848 )
                      {
                        v186 = *(_QWORD **)(v184 + 528);
                        v187 = &v186[8 * (unsigned __int64)*(unsigned int *)(v184 + 536)];
                        if ( v186 != v187 )
                        {
                          do
                          {
                            while ( 1 )
                            {
                              v187 -= 8;
                              v188 = (_QWORD *)v187[3];
                              if ( v188 == v187 + 5 )
                                break;
                              operator delete(v188);
                              if ( v186 == v187 )
                                goto LABEL_309;
                            }
                          }
                          while ( v186 != v187 );
LABEL_309:
                          v187 = *(_QWORD **)(v184 + 528);
                        }
                        if ( v187 != (_QWORD *)(v184 + 544) )
                          free(v187);
                        v189 = *(void **)(v184 + 416);
                        if ( v189 != (void *)(v184 + 432) )
                          free(v189);
                        v190 = (void **)(v184 + 384);
                        v191 = (void **)(v184 + 64);
                        do
                        {
                          while ( *v190 != v190 + 2 )
                          {
                            operator delete(*v190);
                            v190 -= 4;
                            if ( v191 == v190 )
                              goto LABEL_317;
                          }
                          v190 -= 4;
                        }
                        while ( v191 != v190 );
LABEL_317:
                        operator delete((void *)v184, 0x3A0u);
                      }
                      else
                      {
                        v197 = *(unsigned int *)(v185 + 14976);
                        *(_DWORD *)(v185 + 14976) = v197 + 1;
                        *(_QWORD *)(v185 + 8 * v197 + 14848) = v184;
                      }
                    }
                  }
                  v183 += 4;
                }
                while ( v182 != v183 );
                v181 = (_QWORD *)v170[1];
              }
              if ( v181 )
                operator delete(v181);
            }
            v170 += 4;
          }
          while ( &v300[v317] != v170 );
          v116 = v312;
          v115 = v321;
          a5 = v324;
          operator delete(v300, v317 * 8, 8);
        }
        else
        {
          v275 = *(unsigned int *)(v116 + 16);
          *(_QWORD *)(v116 + 8) = 0;
          for ( nn = &v168[4 * v275]; nn != v168; v168 += 4 )
            *v168 = -4096;
        }
        v192 = *(_DWORD *)(v116 + 16);
        LODWORD(v112) = *(_DWORD *)(v116 + 8) + 1;
        if ( v192 )
        {
          v193 = v192 - 1;
          v194 = v193 & v303;
          v120 = (__int64 *)(*(_QWORD *)v116 + 32LL * (v193 & v303));
          v129 = *v120;
          if ( v115 != *v120 )
          {
            v195 = 1;
            v196 = nullptr;
            if ( v129 != -4096 )
            {
              while ( 1 )
              {
                if ( v129 == -8192 && !v196 )
                  v196 = v120;
                v194 = v193 & (v195 + v194);
                v120 = (__int64 *)(*(_QWORD *)v116 + 32LL * v194);
                v129 = *v120;
                if ( v115 == *v120 )
                  goto LABEL_241;
                if ( v129 == -4096 )
                {
                  if ( !v196 )
                    break;
                  v129 = *v196;
                  v120 = v196;
                  goto LABEL_241;
                }
                ++v195;
              }
            }
LABEL_285:
            *(_DWORD *)(v116 + 8) = v112;
LABEL_243:
            *v120 = v115;
            v122 = 0;
            v120[1] = 0;
            v120[2] = 0;
            v120[3] = 0;
            goto LABEL_204;
          }
          goto LABEL_241;
        }
      }
      else
      {
LABEL_248:
        v132 = (((((((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
                 | (2 * v117 - 1)
                 | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 4)
               | (((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
               | (2 * v117 - 1)
               | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 8)
             | (((((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
               | (2 * v117 - 1)
               | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 4)
             | (((2 * v117 - 1) | ((unsigned __int64)(2 * v117 - 1) >> 1)) >> 2)
             | (2 * v117 - 1)
             | ((unsigned __int64)(2 * v117 - 1) >> 1);
        v133 = ((v132 >> 16) | v132) + 1;
        if ( (unsigned int)v133 < 0x40 )
          LODWORD(v133) = 64;
        *(_DWORD *)(v116 + 16) = v133;
        v134 = (_QWORD *)sub_22300B0(32LL * (unsigned int)v133, 8, 64, v112, v113, v114);
        *(_QWORD *)v116 = v134;
        if ( v300 )
        {
          *(_QWORD *)(v116 + 8) = 0;
          v311 = 4LL * v117;
          v304 = &v300[v311];
          for ( i1 = &v134[4 * *(unsigned int *)(v116 + 16)]; i1 != v134; v134 += 4 )
            *v134 = -4096;
          if ( v300 != v304 )
          {
            v307 = v116;
            v316 = v115;
            v320 = a5;
            v136 = v300;
            do
            {
              v137 = *v136;
              if ( *v136 != -8192 && v137 != -4096 )
              {
                v138 = *(_DWORD *)(v307 + 16);
                if ( !v138 )
                {
                  *(_QWORD *)&dword_0 = *v136;
                  BUG();
                }
                v139 = v138 - 1;
                v140 = (v138 - 1) & (((unsigned int)v137 >> 9) ^ ((unsigned int)v137 >> 4));
                v141 = (_QWORD *)(*(_QWORD *)v307 + 32LL * v140);
                v142 = *v141;
                if ( v137 != *v141 )
                {
                  v279 = 1;
                  v280 = nullptr;
                  if ( v142 != -4096 )
                  {
                    while ( 1 )
                    {
                      if ( v142 == -8192 && !v280 )
                        v280 = v141;
                      v140 = v139 & (v279 + v140);
                      v141 = (_QWORD *)(*(_QWORD *)v307 + 32LL * v140);
                      v142 = *v141;
                      if ( v137 == *v141 )
                        break;
                      if ( v142 == -4096 )
                      {
                        if ( v280 )
                          v141 = v280;
                        break;
                      }
                      ++v279;
                    }
                  }
                }
                v143 = *v136;
                v141[1] = 0;
                v141[2] = 0;
                v141[3] = 0;
                *v141 = v143;
                v141[1] = v136[1];
                v144 = v136[2];
                v136[1] = 0;
                v145 = v141[2];
                v141[2] = v144;
                v146 = v136[3];
                v136[2] = v145;
                v147 = v141[3];
                v141[3] = v146;
                v148 = (_QWORD *)v136[1];
                v149 = (_QWORD *)v136[2];
                v136[3] = v147;
                ++*(_DWORD *)(v307 + 8);
                v150 = v148;
                if ( v149 != v148 )
                {
                  do
                  {
                    v151 = v150[1];
                    if ( v151 )
                    {
                      v152 = v150[2];
                      if ( v152 )
                      {
                        if ( v151 < v152 || v151 > v152 + 14848 )
                        {
                          v153 = *(_QWORD **)(v151 + 528);
                          v154 = &v153[8 * (unsigned __int64)*(unsigned int *)(v151 + 536)];
                          if ( v153 != v154 )
                          {
                            do
                            {
                              while ( 1 )
                              {
                                v154 -= 8;
                                v155 = (_QWORD *)v154[3];
                                if ( v155 == v154 + 5 )
                                  break;
                                operator delete(v155);
                                if ( v153 == v154 )
                                  goto LABEL_266;
                              }
                            }
                            while ( v153 != v154 );
LABEL_266:
                            v154 = *(_QWORD **)(v151 + 528);
                          }
                          if ( v154 != (_QWORD *)(v151 + 544) )
                            free(v154);
                          v156 = *(void **)(v151 + 416);
                          if ( v156 != (void *)(v151 + 432) )
                            free(v156);
                          v157 = (void **)(v151 + 384);
                          v158 = (void **)(v151 + 64);
                          do
                          {
                            while ( *v157 != v157 + 2 )
                            {
                              operator delete(*v157);
                              v157 -= 4;
                              if ( v158 == v157 )
                                goto LABEL_274;
                            }
                            v157 -= 4;
                          }
                          while ( v158 != v157 );
LABEL_274:
                          operator delete((void *)v151, 0x3A0u);
                        }
                        else
                        {
                          v164 = *(unsigned int *)(v152 + 14976);
                          *(_DWORD *)(v152 + 14976) = v164 + 1;
                          *(_QWORD *)(v152 + 8 * v164 + 14848) = v151;
                        }
                      }
                    }
                    v150 += 4;
                  }
                  while ( v149 != v150 );
                  v148 = (_QWORD *)v136[1];
                }
                if ( v148 )
                  operator delete(v148);
              }
              v136 += 4;
            }
            while ( v304 != v136 );
            v116 = v307;
            v115 = v316;
            a5 = v320;
          }
          operator delete(v300, v311 * 8, 8);
        }
        else
        {
          v269 = *(unsigned int *)(v116 + 16);
          *(_QWORD *)(v116 + 8) = 0;
          for ( i2 = &v134[4 * v269]; i2 != v134; v134 += 4 )
            *v134 = -4096;
        }
        v159 = *(_DWORD *)(v116 + 16);
        LODWORD(v112) = *(_DWORD *)(v116 + 8) + 1;
        if ( v159 )
        {
          v160 = v159 - 1;
          v161 = v160 & (((unsigned int)v115 >> 9) ^ ((unsigned int)v115 >> 4));
          v120 = (__int64 *)(*(_QWORD *)v116 + 32LL * v161);
          v129 = *v120;
          if ( v115 != *v120 )
          {
            v162 = 1;
            v163 = nullptr;
            if ( v129 != -4096 )
            {
              while ( 1 )
              {
                if ( !v163 && v129 == -8192 )
                  v163 = v120;
                v161 = v160 & (v162 + v161);
                v120 = (__int64 *)(*(_QWORD *)v116 + 32LL * v161);
                v129 = *v120;
                if ( v115 == *v120 )
                  goto LABEL_241;
                if ( v129 == -4096 )
                {
                  if ( !v163 )
                    goto LABEL_285;
                  v129 = *v163;
                  v120 = v163;
                  goto LABEL_241;
                }
                ++v162;
              }
            }
            goto LABEL_285;
          }
LABEL_241:
          *(_DWORD *)(v116 + 8) = v112;
          if ( v129 != -4096 )
            --*(_DWORD *)(v116 + 12);
          goto LABEL_243;
        }
      }
      ++*(_DWORD *)(v116 + 8);
      BUG();
    }
    return 0;
  }
  return v6;
}
