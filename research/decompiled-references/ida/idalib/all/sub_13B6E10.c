__int64 __fastcall sub_13B6E10(
        unsigned __int8 *a1,
        __int64 a2,
        unsigned __int8 *a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __m128i si128,
        int *a8,
        __int64 a9)
{
  unsigned __int64 v9; // r14
  _BYTE *v10; // r15
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rbx
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  _BYTE *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 *v21; // r8
  unsigned __int8 *v22; // r13
  __int64 v23; // r12
  __int64 v24; // rdx
  unsigned __int8 *v25; // r13
  unsigned __int8 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int8 *v30; // rax
  __int64 v31; // rcx
  unsigned __int8 *v32; // rax
  __int64 v33; // rcx
  unsigned __int64 v34; // r15
  char *v36; // r11
  __int64 v37; // rbp
  unsigned __int8 *v38; // rdi
  __int64 v39; // r10
  __int64 v40; // r15
  char *v41; // r9
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  char v44; // al
  unsigned __int8 *v45; // rdx
  char v46; // al
  _BYTE *v47; // rdx
  _BYTE *v48; // rax
  __int64 v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int8 *v52; // rax
  __int64 v53; // rcx
  unsigned __int8 *v54; // r13
  __int64 v55; // rdx
  unsigned __int64 v56; // r8
  unsigned __int8 *v57; // rax
  unsigned __int8 *v58; // rax
  unsigned __int8 *v59; // rax
  unsigned __int8 *v60; // rax
  __int64 v61; // rax
  unsigned int v62; // r9d
  __int64 *v63; // r8
  char *v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // r12
  unsigned int v67; // eax
  int v68; // eax
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rdx
  __int64 *v72; // rcx
  __int64 v73; // r13
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r13
  __int64 v78; // rsi
  _QWORD *v79; // rbx
  __int64 v80; // rax
  _QWORD *v81; // r12
  _QWORD *v82; // rdi
  _QWORD *v83; // rdi
  __int64 v84; // r11
  __int64 v85; // r12
  __int64 v86; // r13
  size_t v87; // rdx
  __int64 v88; // rbx
  unsigned __int64 v89; // rbp
  int v90; // eax
  unsigned __int64 v91; // r12
  size_t v92; // rdx
  int v93; // eax
  int v94; // eax
  bool v95; // zf
  unsigned __int8 *v96; // r15
  unsigned __int8 *v97; // r8
  unsigned __int8 *v98; // r9
  char v99; // r12
  unsigned int v100; // eax
  unsigned __int8 *v101; // r9
  __int64 v102; // rax
  __int64 v103; // rdx
  unsigned __int8 *v104; // rax
  __int64 v105; // rdx
  unsigned __int8 *v106; // rbp
  unsigned __int8 *v107; // r12
  _QWORD *v108; // rdx
  __int64 v109; // rax
  void **v110; // rbx
  unsigned __int64 v111; // rax
  void **v112; // r12
  void **v113; // rbp
  void **v114; // rdi
  void **v115; // rdi
  void **v116; // r12
  void **v117; // rbp
  unsigned __int8 *v118; // rsi
  unsigned __int8 *v119; // rdx
  unsigned int v120; // ecx
  unsigned __int8 *v121; // r12
  int v122; // eax
  unsigned __int8 *v123; // rdx
  unsigned int v124; // esi
  unsigned __int8 *v125; // rbp
  _QWORD *v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rbp
  int *v129; // r12
  unsigned __int64 v130; // rbx
  __int64 v131; // rdx
  int v132; // eax
  unsigned __int8 *v133; // rdx
  unsigned int v134; // ebx
  unsigned __int8 *v135; // r12
  unsigned __int8 *v136; // r12
  signed __int64 v137; // r8
  size_t v138; // rbx
  unsigned __int8 *v139; // r12
  size_t v140; // r13
  unsigned __int64 v141; // rbp
  int v142; // r14d
  unsigned __int8 *v143; // r15
  unsigned __int8 *v144; // rbp
  _QWORD *v145; // rdx
  __int64 v146; // rax
  unsigned __int8 *v147; // rbp
  _QWORD *v148; // rdx
  __int64 v149; // rax
  unsigned __int64 v150; // rdx
  int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rbp
  __int64 v154; // r15
  __int64 v155; // rbp
  void *v156; // rdi
  unsigned __int64 v157; // rbp
  unsigned __int8 *v158; // rdi
  _BYTE *v159; // rdi
  size_t v160; // rbp
  _BYTE *v161; // rax
  size_t v162; // r14
  unsigned __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // r13
  unsigned __int64 v166; // rcx
  size_t v167; // r8
  unsigned __int8 *v168; // rcx
  size_t v169; // rbp
  unsigned __int64 v170; // rax
  __int64 v171; // rbx
  unsigned __int64 v172; // rdi
  int *v173; // rdi
  int v174; // ecx
  char *v175; // rdx
  unsigned int v176; // esi
  unsigned int v177; // r12d
  unsigned int v178; // esi
  int v179; // esi
  int v180; // eax
  unsigned int v181; // eax
  int v182; // eax
  __int64 *v183; // rsi
  __int64 *v184; // rbp
  __int64 v185; // rax
  unsigned int v186; // esi
  int v187; // esi
  int v188; // eax
  int v189; // eax
  int v190; // eax
  unsigned __int64 v191; // rdx
  int v192; // eax
  unsigned __int64 v193; // rdx
  int v194; // eax
  unsigned __int64 v195; // rdx
  int v196; // eax
  unsigned int v197; // eax
  __int64 v198; // rdx
  __int64 v199; // r8
  __int64 v200; // r9
  size_t **v201; // r12
  size_t *v202; // r13
  __int64 v203; // rax
  unsigned __int64 v204; // rcx
  __int64 v205; // r12
  unsigned __int64 v206; // rdx
  char *v207; // rax
  unsigned __int64 v208; // r12
  int v209; // eax
  size_t v210; // rax
  size_t v211; // r12
  char *v212; // rcx
  _BYTE *v213; // rax
  unsigned __int8 *v214; // r12
  signed __int64 v215; // r13
  size_t v216; // rax
  size_t v217; // rbx
  const char *v218; // rsi
  __int64 v219; // rax
  __int64 v220; // r13
  __int64 v221; // r15
  __int64 v222; // r13
  void *v223; // rdi
  __int64 v224; // rax
  __int64 v225; // r12
  __int64 v226; // r15
  __int64 v227; // r12
  void *v228; // rdi
  __int64 v229; // rax
  __int64 v230; // r12
  __int64 v231; // r15
  __int64 v232; // r12
  void *v233; // rdi
  unsigned __int8 *i; // rax
  __int64 v235; // rcx
  size_t *v236; // r13
  size_t **v237; // r12
  size_t **v238; // rax
  unsigned __int8 *v239; // rdx
  __int64 v240; // rcx
  unsigned __int64 v241; // rbx
  unsigned __int64 v242; // rsi
  __int64 v243; // rax
  int v244; // r15d
  int v245; // eax
  unsigned int v246; // edx
  size_t v247; // rax
  unsigned __int64 v248; // rbp
  __int64 v249; // rax
  size_t v250; // rcx
  char *v251; // rbx
  const __m128i *v252; // rax
  __int64 v253; // rsi
  unsigned __int64 v254; // rdi
  char *v255; // rdx
  __int8 v256; // cl
  __int64 v257; // rcx
  __int64 v258; // rcx
  const __m128i *v259; // rcx
  size_t v260; // rdx
  __int64 v261; // rax
  _QWORD *v262; // r12
  _QWORD *v263; // rbx
  _QWORD *v264; // rdi
  _QWORD *v265; // rdi
  int v266; // eax
  size_t *v267; // rdi
  __int64 v268; // rax
  __int64 v269; // r12
  unsigned __int8 *s2; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *s2a; // [rsp+8h] [rbp-1B0h]
  char s2b; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *s2d; // [rsp+8h] [rbp-1B0h]
  unsigned __int8 *s2e; // [rsp+8h] [rbp-1B0h]
  char *s2f; // [rsp+8h] [rbp-1B0h]
  unsigned int s2g; // [rsp+8h] [rbp-1B0h]
  char *s2c; // [rsp+8h] [rbp-1B0h]
  int s2h; // [rsp+8h] [rbp-1B0h]
  unsigned int v280; // [rsp+20h] [rbp-198h]
  size_t v281; // [rsp+20h] [rbp-198h]
  size_t v282; // [rsp+20h] [rbp-198h]
  size_t v283; // [rsp+20h] [rbp-198h]
  size_t v284; // [rsp+20h] [rbp-198h]
  size_t v285; // [rsp+20h] [rbp-198h]
  __int64 *v286; // [rsp+28h] [rbp-190h]
  __int64 *v287; // [rsp+28h] [rbp-190h]
  int v288; // [rsp+28h] [rbp-190h]
  unsigned __int8 *v289; // [rsp+30h] [rbp-188h]
  void *v290; // [rsp+30h] [rbp-188h]
  char *v291; // [rsp+30h] [rbp-188h]
  char v292; // [rsp+38h] [rbp-180h]
  __int64 v293; // [rsp+40h] [rbp-178h]
  char *v294; // [rsp+48h] [rbp-170h]
  unsigned __int64 v295; // [rsp+48h] [rbp-170h]
  unsigned __int8 *v297; // [rsp+58h] [rbp-160h]
  __int16 *v299; // [rsp+68h] [rbp-150h]
  char v301; // [rsp+76h] [rbp-142h]
  unsigned __int8 v302; // [rsp+77h] [rbp-141h]
  unsigned __int8 *v303; // [rsp+80h] [rbp-138h]
  unsigned __int8 *v305; // [rsp+A0h] [rbp-118h] BYREF
  unsigned __int64 v306; // [rsp+A8h] [rbp-110h]
  void *ptr; // [rsp+B0h] [rbp-108h] BYREF
  signed __int64 v308; // [rsp+B8h] [rbp-100h]
  unsigned __int64 v309; // [rsp+C0h] [rbp-F8h]
  __int16 v310; // [rsp+C8h] [rbp-F0h] BYREF
  void *v311; // [rsp+D0h] [rbp-E8h] BYREF
  unsigned __int64 v312; // [rsp+D8h] [rbp-E0h]
  __int64 v313; // [rsp+E0h] [rbp-D8h]
  void *v314; // [rsp+F0h] [rbp-C8h]
  __int64 v315; // [rsp+100h] [rbp-B8h] BYREF
  __int16 v316; // [rsp+110h] [rbp-A8h]
  unsigned __int8 *v317; // [rsp+120h] [rbp-98h] BYREF
  void *src; // [rsp+128h] [rbp-90h] BYREF
  size_t n; // [rsp+130h] [rbp-88h]
  _BYTE v320[16]; // [rsp+138h] [rbp-80h] BYREF
  char v321; // [rsp+148h] [rbp-70h]
  __int64 v322; // [rsp+14Ch] [rbp-6Ch]
  void *v323; // [rsp+158h] [rbp-60h] BYREF
  size_t v324; // [rsp+160h] [rbp-58h]
  _QWORD v325[2]; // [rsp+168h] [rbp-50h] BYREF
  __int64 v326; // [rsp+178h] [rbp-40h]

  if ( a5 )
    v293 = *(_QWORD *)(a5 + 48);
  else
    v293 = *(_QWORD *)(a4 + 8);
  v9 = (unsigned __int64)&a1[a2];
  v10 = a1;
  if ( a1 >= &a1[a2] )
    return 0;
  s2 = a1 + 1;
  do
  {
    if ( (_BYTE *)v9 == v10 )
      break;
    v11 = sub_13B3A10(v10, v9, "#");
    v12 = v11;
    v10 = v11 + 1;
    if ( (unsigned __int8 *)v9 == v11 )
      break;
    if ( a1 == v11
      || (v13 = *(v11 - 1), (byte_2411740[2 * v13] & 7) != 0)
      || v11 > s2 && ((_BYTE)v13 == 47 || (_BYTE)v13 == 42) && *(v11 - 2) == 47 )
    {
      if ( *v11 == 35 )
      {
        v14 = v11[1];
        if ( (byte_2411740[2 * v14] & 0x68) != 0 || v14 == 45 || v14 == 95 )
        {
          if ( v9 <= (unsigned __int64)v10 )
            break;
          v15 = v10;
          while ( 1 )
          {
            v16 = (unsigned __int8)*++v15;
            if ( (byte_2411740[2 * v16] & 0x68) == 0 && *v15 != 95 && (_BYTE)v16 != 45 )
              break;
            if ( (_BYTE *)v9 == v15 )
            {
              v10 = (_BYTE *)v9;
              goto LABEL_22;
            }
          }
          if ( v10 >= v15 )
            continue;
          v10 = v15;
LABEL_22:
          v317 = v12;
          v17 = v10 - v12;
          src = (void *)(v10 - v12);
          v18 = sub_2244B30(v12, v10 - v12);
          v19 = (unsigned int)sub_2244CB0(a9 + 8, v12, v10 - v12, v18);
          v21 = (__int64 *)(*(_QWORD *)(a9 + 8) + 8 * v19);
          if ( *v21 )
          {
            if ( *v21 != -8 )
            {
              sub_13B5340((__int64 **)&v311, v21, 0);
              *(_DWORD *)(*(_QWORD *)v311 + 12LL) = a6;
              continue;
            }
            --*(_DWORD *)(a9 + 24);
          }
          v286 = v21;
          v280 = v19;
          v61 = sub_22300B0(v17 + 25, 8, v19, v20, v21, v19);
          v62 = v280;
          v63 = v286;
          v64 = (char *)v61;
          if ( v17 )
          {
            v291 = (char *)v61;
            memcpy((void *)(v61 + 24), v12, v10 - v12);
            v64 = v291;
            v63 = v286;
            v62 = v280;
          }
          v64[v17 + 24] = 0;
          *(_QWORD *)v64 = v17;
          *((_DWORD *)v64 + 2) = a6;
          *(_QWORD *)(v64 + 12) = 0;
          *v63 = (__int64)v64;
          ++*(_DWORD *)(a9 + 20);
          v65 = sub_22450D0(a9 + 8, v62);
          sub_13B5340((__int64 **)&v311, (__int64 *)(*(_QWORD *)(a9 + 8) + 8LL * v65), 0);
          v66 = *(_QWORD *)v311;
          v67 = sub_2244B30(v12, v10 - v12);
          v68 = sub_2244E60(a9 + 32, v12, v10 - v12, v67);
          if ( v68 != -1 )
          {
            v71 = *(_QWORD *)(a9 + 32);
            v72 = (__int64 *)(v71 + 8LL * v68);
            v287 = v72;
            if ( v72 != (__int64 *)(v71 + 8LL * *(unsigned int *)(a9 + 40)) )
            {
              v73 = *v72;
              v74 = *(unsigned int *)(*v72 + 16);
              v75 = *(_QWORD *)(*v72 + 8);
              v76 = v75 + 96 * v74;
              if ( v75 != v76 )
              {
                v77 = *(_QWORD *)(*v72 + 8);
                do
                {
                  if ( !*(_DWORD *)(v66 + 16) )
                    *(_DWORD *)(v66 + 16) = *(_DWORD *)(v77 + 44);
                  v78 = v77;
                  v77 += 96;
                  sub_13B49B0(*(_QWORD *)a9, v78, a6, 0, 0);
                }
                while ( v76 != v77 );
                v73 = *v287;
              }
              sub_2244F90(a9 + 32, v73, v74, v72, v69, v70);
              v79 = *(_QWORD **)(v73 + 8);
              v281 = *(_QWORD *)v73 + 217LL;
              v80 = 12LL * *(unsigned int *)(v73 + 16);
              v81 = &v79[v80];
              if ( v79 != &v79[v80] )
              {
                do
                {
                  while ( 1 )
                  {
                    v81 -= 12;
                    v82 = (_QWORD *)v81[7];
                    if ( v82 != v81 + 9 )
                      operator delete(v82);
                    v83 = (_QWORD *)v81[1];
                    if ( v83 == v81 + 3 )
                      break;
                    operator delete(v83);
                    if ( v79 == v81 )
                      goto LABEL_148;
                  }
                }
                while ( v79 != v81 );
LABEL_148:
                v81 = *(_QWORD **)(v73 + 8);
              }
              if ( v81 != (_QWORD *)(v73 + 24) )
                free(v81);
              operator delete(v73, v281, 8);
            }
          }
        }
      }
    }
  }
  while ( v9 > (unsigned __int64)v10 );
  v302 = 0;
  v22 = a1;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v293 + 40);
    v24 = *(_QWORD *)(v23 + 216);
    if ( *(_QWORD *)(v23 + 224) - v24 == 32 )
    {
      v36 = *(char **)v24;
      v37 = *(_QWORD *)(v293 + 40);
      v38 = v22;
      v39 = *(_QWORD *)(v24 + 8);
      v40 = *(_QWORD *)v24 + 1LL;
      v41 = (char *)(*(_QWORD *)v24 + v39);
      if ( !v39 )
      {
        while ( 1 )
        {
          if ( (unsigned __int8 *)v9 == v38 )
          {
            v26 = (unsigned __int8 *)v9;
            v38 = (unsigned __int8 *)(v9 + 1);
          }
          else if ( (byte_2411740[2 * *v38] & 0x60) != 0 )
          {
            v26 = v38++;
          }
          else
          {
            v54 = v38 + 1;
            do
            {
              v26 = v54;
              if ( (unsigned __int8 *)v9 == v54 )
                break;
              v55 = *v54++;
            }
            while ( (byte_2411740[2 * v55] & 0x60) == 0 );
            v38 = v26 + 1;
          }
LABEL_92:
          if ( (unsigned __int8 *)v9 == v26 )
            return v302;
          if ( a1 == v26 )
            break;
          v49 = *(v26 - 1);
          if ( (byte_2411740[2 * v49] & 7) != 0
            || v26 > a1 + 1 && ((_BYTE)v49 == 47 || (_BYTE)v49 == 42) && *(v26 - 2) == 47 )
          {
            v23 = v37;
            v22 = v38;
            goto LABEL_100;
          }
          if ( v9 <= (unsigned __int64)v38 )
            return v302;
          if ( v39 )
            goto LABEL_65;
        }
        v23 = v37;
        v22 = v38;
LABEL_100:
        if ( (unsigned __int8 *)v9 != v22 )
        {
          v50 = *v22;
          if ( (_BYTE)v50 == 45 || (_BYTE)v50 == 95 || (byte_2411740[2 * v50] & 0x68) != 0 )
          {
            while ( (unsigned __int8 *)v9 != ++v22 )
            {
              v51 = *v22;
              if ( (byte_2411740[2 * v51] & 0x68) == 0 && *v22 != 95 && (_BYTE)v51 != 45 )
                break;
            }
          }
        }
        if ( (((unsigned __int8)(*(_WORD *)&byte_2411740[2 * *(v22 - 1)] >> 3) ^ 1) & (*(v22 - 1) != 45)) == 0 )
        {
          v52 = v22 - 1;
          do
          {
            do
            {
              v53 = *(v52 - 1);
              v22 = v52--;
            }
            while ( (byte_2411740[2 * v53] & 8) != 0 );
          }
          while ( (_BYTE)v53 == 45 );
        }
        goto LABEL_49;
      }
LABEL_65:
      if ( (unsigned __int8 *)v9 == v38 || v36 == v41 )
      {
        v26 = v38;
        goto LABEL_91;
      }
      if ( v41 == (char *)v40 )
      {
        v26 = sub_13B3A10(v38, v9, v36);
        goto LABEL_91;
      }
      while ( 1 )
      {
        v42 = v9 - (_QWORD)v38;
        v43 = (__int64)(v9 - (_QWORD)v38) >> 2;
        if ( v43 <= 0 )
          break;
        v44 = *v36;
        if ( *v38 == *v36 )
        {
          v26 = v38;
          goto LABEL_85;
        }
        v26 = v38 + 1;
        if ( v44 != v38[1] )
        {
          v26 = v38 + 2;
          if ( v38[2] != v44 )
          {
            v45 = &v38[4 * v43];
            v26 = v38 + 3;
            if ( v38[3] != v44 )
            {
              while ( 1 )
              {
                v26 = v38 + 4;
                if ( v45 == v38 + 4 )
                  break;
                if ( v38[4] == v44 )
                  goto LABEL_85;
                if ( v38[5] == v44 )
                {
                  v26 = v38 + 5;
                  goto LABEL_85;
                }
                if ( v38[6] == v44 )
                {
                  v26 = v38 + 6;
                  goto LABEL_85;
                }
                if ( v38[7] == v44 )
                {
                  v26 = v38 + 7;
                  goto LABEL_85;
                }
                v38 += 4;
              }
              v42 = v9 - (_QWORD)v26;
LABEL_81:
              if ( v42 == 2 )
              {
                v46 = *v36;
                if ( *v26 != *v36 )
                  goto LABEL_325;
              }
              else
              {
                if ( v42 != 3 )
                {
                  if ( v42 == 1 )
                  {
                    v46 = *v36;
LABEL_260:
                    if ( *v26 == v46 )
                      goto LABEL_85;
                  }
LABEL_261:
                  v26 = (unsigned __int8 *)v9;
LABEL_91:
                  v38 = &v26[v39];
                  goto LABEL_92;
                }
                v46 = *v36;
                if ( *v26 != *v36 && *++v26 != v46 )
                {
LABEL_325:
                  ++v26;
                  goto LABEL_260;
                }
              }
            }
          }
        }
LABEL_85:
        if ( (unsigned __int8 *)v9 == v26 )
          goto LABEL_91;
        v38 = v26 + 1;
        if ( (unsigned __int8 *)v9 == v26 + 1 )
          goto LABEL_261;
        v47 = v26 + 1;
        v48 = (_BYTE *)v40;
        while ( *v47 == *v48 )
        {
          if ( v41 == ++v48 )
            goto LABEL_91;
          if ( (_BYTE *)v9 == ++v47 )
            goto LABEL_261;
        }
      }
      v26 = v38;
      goto LABEL_81;
    }
    if ( (byte_2411740[2 * *v22] & 0x60) == 0 )
    {
LABEL_29:
      v25 = v22 + 1;
      do
      {
        v26 = v25;
        if ( (unsigned __int8 *)v9 == v25 )
          return v302;
        v27 = *v25++;
      }
      while ( (byte_2411740[2 * v27] & 0x60) == 0 );
      goto LABEL_32;
    }
    while ( 1 )
    {
      v26 = v22;
LABEL_32:
      v22 = v26 + 1;
      if ( a1 == v26 )
        break;
      v28 = *(v26 - 1);
      if ( (byte_2411740[2 * v28] & 7) != 0 )
        break;
      if ( v26 > a1 + 1 && ((_BYTE)v28 == 47 || (_BYTE)v28 == 42) && *(v26 - 2) == 47 )
        break;
      if ( v9 <= (unsigned __int64)v22 )
        return v302;
      if ( (byte_2411740[2 * *v22] & 0x60) == 0 )
        goto LABEL_29;
    }
    if ( (unsigned __int8 *)v9 != v22 )
    {
      v29 = v26[1];
      if ( (byte_2411740[2 * v29] & 0x68) != 0 || v26[1] == 45 || (_BYTE)v29 == 95 )
      {
        v30 = v26 + 2;
        do
        {
          v22 = v30;
          if ( (unsigned __int8 *)v9 == v30 )
            break;
          v31 = *v30++;
        }
        while ( (byte_2411740[2 * v31] & 0x68) != 0 || (_BYTE)v31 == 45 || (_BYTE)v31 == 95 );
      }
    }
    if ( (((unsigned __int8)(*(_WORD *)&byte_2411740[2 * *(v22 - 1)] >> 3) ^ 1) & (*(v22 - 1) != 45)) == 0 )
    {
      v32 = v22 - 1;
      do
      {
        do
        {
          v33 = *(v32 - 1);
          v22 = v32--;
        }
        while ( (byte_2411740[2 * v33] & 8) != 0 );
      }
      while ( (_BYTE)v33 == 45 );
    }
LABEL_49:
    v34 = v22 - v26;
    src = v320;
    v323 = v325;
    v317 = nullptr;
    n = 0;
    v320[0] = 0;
    v321 = 0;
    v322 = 0;
    v324 = 0;
    LOBYTE(v325[0]) = 0;
    v326 = 0x100000001LL;
    sub_99BDC0(&src, 0, 0, v26, v22 - v26);
    if ( (unsigned __int64)(v22 - v26) > 2 && *(_WORD *)(v22 - 3) == 29229 && *(v22 - 1) == 101 )
    {
      v321 = 1;
      if ( v34 > v34 - 3 )
        v34 -= 3LL;
      v294 = "regex";
    }
    else
    {
      v294 = "string";
    }
    if ( v34 <= 5 )
      goto LABEL_554;
    v56 = v34 - 6;
    v57 = &v26[v34 - 6];
    if ( *(_DWORD *)v57 == 1920099629 && *((_WORD *)v57 + 2) == 29295 )
    {
      v301 = 0;
      v317 = a3;
      goto LABEL_155;
    }
    if ( v34 <= 7 )
    {
LABEL_554:
      if ( v34 != 7 )
      {
        if ( v34 <= 4 )
          goto LABEL_55;
        goto LABEL_123;
      }
    }
    else
    {
      v56 = v34 - 8;
      if ( *(_QWORD *)&v26[v34 - 8] == 0x676E696E7261772DLL )
      {
        v301 = 0;
        v317 = a3 + 24;
        goto LABEL_155;
      }
    }
    v56 = v34 - 7;
    v58 = &v26[v34 - 7];
    if ( *(_DWORD *)v58 == 1835364909 && *((_WORD *)v58 + 2) == 29281 && v58[6] == 107 )
    {
      v301 = 0;
      v317 = a3 + 48;
      goto LABEL_155;
    }
LABEL_123:
    v56 = v34 - 5;
    v59 = &v26[v34 - 5];
    if ( *(_DWORD *)v59 == 1953459757 && v59[4] == 101 )
    {
      v301 = 0;
      v317 = a3 + 72;
    }
    else
    {
      if ( v34 <= 0xE )
        goto LABEL_55;
      v56 = v34 - 15;
      v60 = &v26[v34 - 15];
      if ( *(_QWORD *)v60 != 0x676169642D6F6E2DLL
        || *((_DWORD *)v60 + 2) != 1953722222
        || *((_WORD *)v60 + 6) != 25449
        || v60[14] != 115
        || v321 )
      {
        goto LABEL_55;
      }
      v301 = 1;
    }
LABEL_155:
    v84 = *(_QWORD *)(v23 + 216);
    if ( v34 > v56 )
      v34 = v56;
    v282 = *(_QWORD *)(v23 + 224);
    v85 = (__int64)(v282 - v84) >> 5;
    if ( (__int64)(v282 - v84) > 0 )
    {
      v289 = v22;
      v86 = v84;
      s2a = v26;
      while ( 1 )
      {
        while ( 1 )
        {
          v87 = v34;
          v88 = v86 + 32 * (v85 >> 1);
          v89 = *(_QWORD *)(v88 + 8);
          if ( v89 <= v34 )
            v87 = *(_QWORD *)(v88 + 8);
          if ( !v87 )
            break;
          v90 = memcmp(*(const void **)v88, s2a, v87);
          if ( !v90 )
            break;
          if ( v90 >= 0 )
          {
            v85 >>= 1;
            goto LABEL_167;
          }
LABEL_159:
          v86 = v88 + 32;
          v85 = v85 - (v85 >> 1) - 1;
          if ( v85 <= 0 )
            goto LABEL_168;
        }
        if ( v89 != v34 && v89 < v34 )
          goto LABEL_159;
        v85 >>= 1;
LABEL_167:
        if ( v85 <= 0 )
        {
LABEL_168:
          v84 = v86;
          v26 = s2a;
          v22 = v289;
          break;
        }
      }
    }
    if ( v282 == v84 )
      goto LABEL_55;
    v91 = *(_QWORD *)(v84 + 8);
    v92 = v34;
    if ( v91 <= v34 )
      v92 = *(_QWORD *)(v84 + 8);
    if ( v92 && (v93 = memcmp(v26, *(const void **)v84, v92)) != 0 )
    {
      if ( v93 < 0 )
        goto LABEL_55;
    }
    else if ( v91 != v34 && v91 > v34 )
    {
      goto LABEL_55;
    }
    v94 = *a8;
    if ( !v301 )
      break;
    if ( v94 == 3 )
    {
      sub_FC70B0((__int64)&v311, v293, a6, 771);
      sub_AEC220((unsigned __int8 **)&v311, src, n);
      v147 = (unsigned __int8 *)v311;
      if ( !v311 )
      {
        v195 = v312;
        v196 = *(_DWORD *)(v312 + 14976);
        if ( v196 )
        {
          v229 = (unsigned int)(v196 - 1);
          *(_DWORD *)(v312 + 14976) = v229;
          v147 = *(unsigned __int8 **)(v195 + 8 * v229 + 14848);
          v230 = *((unsigned int *)v147 + 134);
          *v147 = 0;
          v231 = *((_QWORD *)v147 + 66);
          *((_DWORD *)v147 + 106) = 0;
          v232 = v231 + (v230 << 6);
          while ( v231 != v232 )
          {
            while ( 1 )
            {
              v232 -= 64;
              v233 = *(void **)(v232 + 24);
              if ( v233 == (void *)(v232 + 40) )
                break;
              operator delete(v233);
              if ( v231 == v232 )
                goto LABEL_469;
            }
          }
LABEL_469:
          *((_DWORD *)v147 + 134) = 0;
        }
        else
        {
          v147 = (unsigned __int8 *)operator new(0x3A0u);
          *v147 = 0;
          *((_QWORD *)v147 + 12) = v147 + 112;
          *((_QWORD *)v147 + 16) = v147 + 144;
          *((_QWORD *)v147 + 20) = v147 + 176;
          *((_QWORD *)v147 + 24) = v147 + 208;
          *((_QWORD *)v147 + 28) = v147 + 240;
          *((_QWORD *)v147 + 32) = v147 + 272;
          *((_QWORD *)v147 + 36) = v147 + 304;
          *((_QWORD *)v147 + 40) = v147 + 336;
          *((_QWORD *)v147 + 44) = v147 + 368;
          *((_QWORD *)v147 + 48) = v147 + 400;
          *((_QWORD *)v147 + 52) = v147 + 432;
          *((_QWORD *)v147 + 13) = 0;
          v147[112] = 0;
          *((_QWORD *)v147 + 17) = 0;
          v147[144] = 0;
          *((_QWORD *)v147 + 21) = 0;
          v147[176] = 0;
          *((_QWORD *)v147 + 25) = 0;
          v147[208] = 0;
          *((_QWORD *)v147 + 29) = 0;
          v147[240] = 0;
          *((_QWORD *)v147 + 33) = 0;
          v147[272] = 0;
          *((_QWORD *)v147 + 37) = 0;
          v147[304] = 0;
          *((_QWORD *)v147 + 41) = 0;
          v147[336] = 0;
          *((_QWORD *)v147 + 45) = 0;
          v147[368] = 0;
          *((_QWORD *)v147 + 49) = 0;
          v147[400] = 0;
          *((_QWORD *)v147 + 53) = 0x800000000LL;
          *((_QWORD *)v147 + 66) = v147 + 544;
          *((_QWORD *)v147 + 67) = 0x600000000LL;
        }
        v311 = v147;
      }
      v147[*v147 + 1] = 2;
      v148 = v311;
      v149 = *(unsigned __int8 *)v311;
      *(_BYTE *)v311 = v149 + 1;
      v148[v149 + 2] = 1;
      sub_AEA040((__int64)&v311);
    }
    else if ( v94 != 2 )
    {
      v128 = n;
      v129 = *((int **)a8 + 1);
      *a8 = 2;
      if ( v129 == a8 + 6 )
        v130 = 15;
      else
        v130 = *((_QWORD *)a8 + 3);
      if ( v128 > v130 )
      {
        if ( v128 < 0 )
          std::__throw_length_error("basic_string::_M_create");
        v171 = 2 * v130;
        if ( v128 < (unsigned __int64)v171 )
        {
          v172 = v171 + 1;
          if ( v171 < 0 )
          {
            v172 = 0x8000000000000000LL;
            v171 = 0x7FFFFFFFFFFFFFFFLL;
          }
        }
        else
        {
          v172 = v128 + 1;
          v171 = v128;
        }
        v129 = (int *)operator new(v172);
        v173 = *((int **)a8 + 1);
        if ( a8 + 6 != v173 )
          operator delete(v173);
        *((_QWORD *)a8 + 1) = v129;
        *((_QWORD *)a8 + 3) = v171;
      }
      if ( v128 )
      {
        if ( v128 == 1 )
          *(_BYTE *)v129 = *(_BYTE *)src;
        else
          memcpy(v129, src, v128);
        v129 = *((int **)a8 + 1);
      }
      *((_QWORD *)a8 + 2) = v128;
      *((_BYTE *)v129 + v128) = 0;
    }
LABEL_55:
    if ( v323 != v325 )
      operator delete(v323);
    if ( src != v320 )
      operator delete(src);
LABEL_59:
    if ( v9 <= (unsigned __int64)v22 )
      return v302;
  }
  if ( v94 == 2 )
  {
    sub_FC70B0((__int64)&v311, v293, a6, 771);
    sub_AEC220((unsigned __int8 **)&v311, src, n);
    v144 = (unsigned __int8 *)v311;
    if ( !v311 )
    {
      v193 = v312;
      v194 = *(_DWORD *)(v312 + 14976);
      if ( v194 )
      {
        v224 = (unsigned int)(v194 - 1);
        *(_DWORD *)(v312 + 14976) = v224;
        v144 = *(unsigned __int8 **)(v193 + 8 * v224 + 14848);
        v225 = *((unsigned int *)v144 + 134);
        *v144 = 0;
        v226 = *((_QWORD *)v144 + 66);
        *((_DWORD *)v144 + 106) = 0;
        v227 = v226 + (v225 << 6);
        while ( v226 != v227 )
        {
          while ( 1 )
          {
            v227 -= 64;
            v228 = *(void **)(v227 + 24);
            if ( v228 == (void *)(v227 + 40) )
              break;
            operator delete(v228);
            if ( v226 == v227 )
              goto LABEL_462;
          }
        }
LABEL_462:
        *((_DWORD *)v144 + 134) = 0;
      }
      else
      {
        v144 = (unsigned __int8 *)operator new(0x3A0u);
        *v144 = 0;
        *((_QWORD *)v144 + 12) = v144 + 112;
        *((_QWORD *)v144 + 16) = v144 + 144;
        *((_QWORD *)v144 + 20) = v144 + 176;
        *((_QWORD *)v144 + 24) = v144 + 208;
        *((_QWORD *)v144 + 28) = v144 + 240;
        *((_QWORD *)v144 + 32) = v144 + 272;
        *((_QWORD *)v144 + 36) = v144 + 304;
        *((_QWORD *)v144 + 40) = v144 + 336;
        *((_QWORD *)v144 + 44) = v144 + 368;
        *((_QWORD *)v144 + 48) = v144 + 400;
        *((_QWORD *)v144 + 52) = v144 + 432;
        *((_QWORD *)v144 + 13) = 0;
        v144[112] = 0;
        *((_QWORD *)v144 + 17) = 0;
        v144[144] = 0;
        *((_QWORD *)v144 + 21) = 0;
        v144[176] = 0;
        *((_QWORD *)v144 + 25) = 0;
        v144[208] = 0;
        *((_QWORD *)v144 + 29) = 0;
        v144[240] = 0;
        *((_QWORD *)v144 + 33) = 0;
        v144[272] = 0;
        *((_QWORD *)v144 + 37) = 0;
        v144[304] = 0;
        *((_QWORD *)v144 + 41) = 0;
        v144[336] = 0;
        *((_QWORD *)v144 + 45) = 0;
        v144[368] = 0;
        *((_QWORD *)v144 + 49) = 0;
        v144[400] = 0;
        *((_QWORD *)v144 + 53) = 0x800000000LL;
        *((_QWORD *)v144 + 66) = v144 + 544;
        *((_QWORD *)v144 + 67) = 0x600000000LL;
      }
      v311 = v144;
    }
    v144[*v144 + 1] = 2;
    v145 = v311;
    v146 = *(unsigned __int8 *)v311;
    *(_BYTE *)v311 = v146 + 1;
    v145[v146 + 2] = 0;
    sub_AEC220((unsigned __int8 **)&v311, *((_BYTE **)a8 + 1), *((_QWORD *)a8 + 2));
    sub_AEA040((__int64)&v311);
    goto LABEL_55;
  }
  v95 = v317 == nullptr;
  *a8 = 3;
  if ( v95 )
  {
    v302 = 1;
    goto LABEL_412;
  }
  v96 = v22 + 1;
  v97 = v22 + 1;
  if ( v9 < (unsigned __int64)(v22 + 1) || *v22 != 64 )
  {
    v292 = 0;
    s2b = 0;
    v288 = a6;
    v290 = nullptr;
    v284 = 0;
    goto LABEL_190;
  }
  v98 = v22 + 2;
  if ( v9 < (unsigned __int64)(v22 + 2) )
    goto LABEL_278;
  if ( v22[1] == 43 )
  {
    v99 = 1;
    goto LABEL_184;
  }
  v99 = 0;
  if ( v22[1] != 45 )
  {
LABEL_278:
    if ( (unsigned __int8 *)v9 != v96 )
    {
      v132 = (char)v22[1];
      if ( (unsigned __int8)(v22[1] - 48) > 9u )
      {
        if ( v22[1] == 35 )
        {
          s2b = v22[2] != 95 && v22[2] != 45 && (byte_2411740[2 * v22[2]] & 0x68) == 0;
          if ( !s2b && v9 > (unsigned __int64)v98 )
          {
            for ( i = v22 + 3; ; ++i )
            {
              v235 = *i;
              if ( (byte_2411740[2 * v235] & 0x68) == 0 && *i != 95 && (_BYTE)v235 != 45 )
                break;
              if ( (unsigned __int8 *)v9 == i )
                break;
            }
            if ( v98 < i )
            {
              v284 = i - v96;
              if ( i != v96 )
              {
                v290 = v22 + 1;
                v22 = i;
                v292 = 0;
                v288 = 0;
                goto LABEL_401;
              }
              goto LABEL_186;
            }
          }
        }
      }
      else
      {
        v133 = v22 + 2;
        v134 = 0;
        do
        {
          v135 = v133;
          v134 = v132 + 10 * v134 - 48;
          if ( v9 <= (unsigned __int64)v133 )
            break;
          v132 = (char)*v133++;
        }
        while ( (unsigned __int8)(v132 - 48) <= 9u );
        if ( v96 != v135 )
        {
          if ( v134 )
          {
            v186 = a6 & 0x7FFFFFFF;
            if ( (a6 & 0x7FFFFFFFu) < *(_DWORD *)(a4 + 476) || v186 >= *(_DWORD *)(a4 + 480) )
            {
              v190 = sub_101D590(a4, v186);
              v97 = v22 + 1;
              v187 = v190;
            }
            else
            {
              v187 = *(_DWORD *)(a4 + 472);
            }
            s2e = v97;
            v188 = sub_10224B0((__int64 *)a4, v187, v134, 1);
            v97 = s2e;
            v288 = v188;
            if ( v188 )
            {
              v292 = 0;
              v22 = v135;
              s2b = 0;
              v290 = nullptr;
              v284 = 0;
              goto LABEL_401;
            }
          }
LABEL_186:
          s2d = v97;
          sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v97 - (_DWORD)a1, 775);
          sub_AE9DF0((unsigned __int8 **)&v311, (__int64)v294, 1u);
          sub_AEA040((__int64)&v311);
          v22 = s2d;
          goto LABEL_55;
        }
      }
    }
    if ( !a5 )
      goto LABEL_451;
    v210 = j__strlen(":");
    v97 = v22 + 1;
    v98 = v22 + 2;
    v211 = v210;
    if ( v210 )
    {
      v212 = &aComment_0[v210 + 10];
      if ( (unsigned __int8 *)v9 == v96 || v212 == ":" )
      {
        v213 = v22 + 1;
      }
      else
      {
        v213 = sub_13B3DC0(v22 + 1, v9, ":", v212);
        v97 = v22 + 1;
        v98 = v22 + 2;
      }
      v214 = &v213[v211];
    }
    else
    {
      if ( (unsigned __int8 *)v9 == v96 )
      {
        v213 = (_BYTE *)v9;
      }
      else if ( (byte_2411740[2 * v22[1]] & 0x60) != 0 )
      {
        v213 = v22 + 1;
      }
      else
      {
        v239 = v22 + 2;
        do
        {
          v213 = v239;
          if ( (unsigned __int8 *)v9 == v239 )
            break;
          v240 = *v239++;
        }
        while ( (byte_2411740[2 * v240] & 0x60) == 0 );
      }
      v214 = v213 + 1;
    }
    if ( (_BYTE *)v9 == v213 )
    {
LABEL_451:
      if ( v9 >= (unsigned __int64)v98 && v22[1] == 42 )
      {
        v22 = v98;
        s2b = 0;
        v290 = nullptr;
        v284 = 0;
        v288 = 0;
        v292 = 1;
        goto LABEL_401;
      }
      goto LABEL_186;
    }
    v215 = v213 - v96;
    v216 = j__strlen("*");
    v284 = v216;
    if ( v215 != v216 )
      goto LABEL_497;
    v217 = v216;
    if ( v216 )
    {
      if ( !memcmp(v96, "*", v216) )
      {
        v22 = &v214[v217];
        if ( v9 >= (unsigned __int64)&v214[v217] && !memcmp(v214, "*", v217) )
        {
          v290 = nullptr;
          v284 = 0;
          v288 = 0;
          v292 = 1;
          s2b = 1;
          goto LABEL_401;
        }
        goto LABEL_448;
      }
LABEL_497:
      v241 = sub_141EB20(a5, a6, (_DWORD)v96, v215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1);
      v242 = v241;
      if ( v241 )
      {
        while ( 1 )
        {
          v243 = *(_QWORD *)(v242 + 8);
          if ( !v243 )
            break;
          v242 = v243 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v243 & 4) == 0 || !v242 )
            goto LABEL_501;
        }
        v242 = 0;
LABEL_501:
        v244 = sub_10210B0(a4, v242);
        if ( !v244 )
          v244 = sub_1026F70(a4, v241, a6, 0, 0, 0, si128);
        if ( v9 <= (unsigned __int64)v214 )
          goto LABEL_510;
        v245 = (char)*v214;
        if ( (unsigned __int8)(*v214 - 48) > 9u )
          goto LABEL_510;
        v22 = v214;
        v246 = 0;
        while ( 1 )
        {
          ++v22;
          v246 = v245 + 10 * v246 - 48;
          if ( (unsigned __int8 *)v9 == v22 )
            break;
          v245 = (char)*v22;
          if ( (unsigned __int8)(*v22 - 48) > 9u )
            goto LABEL_508;
        }
        v22 = (unsigned __int8 *)v9;
LABEL_508:
        if ( v214 != v22 && v246 )
        {
          v288 = sub_10224B0((__int64 *)a4, v244, v246, 1);
          if ( v288 )
          {
            v292 = 0;
            s2b = 0;
            v290 = nullptr;
            v284 = 0;
            goto LABEL_401;
          }
        }
        else
        {
LABEL_510:
          v247 = j__strlen("*");
          v22 = &v214[v247];
          if ( v9 >= (unsigned __int64)&v214[v247] && !memcmp(v214, "*", v247) )
          {
            s2b = 0;
            v288 = sub_10224B0((__int64 *)a4, v244, 1u, 1);
            v290 = nullptr;
            v284 = 0;
            v292 = 1;
            goto LABEL_401;
          }
        }
        v97 = v214;
        goto LABEL_186;
      }
      sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v214 - (_DWORD)a1, 774);
      sub_AEC220((unsigned __int8 **)&v311, v96, v215);
      v218 = v294;
    }
    else
    {
      if ( v9 >= (unsigned __int64)v214 )
      {
        v22 = v214;
        v288 = 0;
        v290 = nullptr;
        v292 = 1;
        s2b = 1;
        goto LABEL_401;
      }
LABEL_448:
      sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v214 - (_DWORD)a1, 775);
      v218 = "'*'";
    }
    v22 = v214;
    sub_AE9DF0((unsigned __int8 **)&v311, (__int64)v218, 1u);
    sub_AEA040((__int64)&v311);
    goto LABEL_55;
  }
LABEL_184:
  v283 = (size_t)(v22 + 2);
  LOBYTE(v311) = 0;
  v100 = sub_10228C0(a4, a6, (bool *)&v311);
  v101 = v22 + 2;
  s2b = (char)v311;
  if ( (_BYTE)v311 )
    goto LABEL_185;
  if ( v9 <= v283 )
    goto LABEL_185;
  v174 = (char)v22[2];
  if ( (unsigned __int8)(v22[2] - 48) > 9u )
    goto LABEL_185;
  v175 = (char *)(v22 + 3);
  v176 = 0;
  do
  {
    v22 = (unsigned __int8 *)v175;
    v176 = v174 + 10 * v176 - 48;
    if ( (char *)v9 == v175 )
      break;
    v174 = *v175++;
  }
  while ( (unsigned __int8)(v174 - 48) <= 9u );
  if ( (unsigned __int8 *)v283 == v22 )
    goto LABEL_185;
  if ( v99 )
  {
    v177 = v100 + v176;
    goto LABEL_379;
  }
  if ( v100 <= v176 )
    goto LABEL_185;
  v177 = v100 - v176;
LABEL_379:
  v178 = a6 & 0x7FFFFFFF;
  if ( (a6 & 0x7FFFFFFFu) < *(_DWORD *)(a4 + 476) || v178 >= *(_DWORD *)(a4 + 480) )
  {
    v189 = sub_101D590(a4, v178);
    v101 = (unsigned __int8 *)v283;
    v179 = v189;
  }
  else
  {
    v179 = *(_DWORD *)(a4 + 472);
  }
  v285 = (size_t)v101;
  v180 = sub_10224B0((__int64 *)a4, v179, v177, 1);
  v101 = (unsigned __int8 *)v285;
  v288 = v180;
  if ( !v180 )
  {
LABEL_185:
    v97 = v101;
    goto LABEL_186;
  }
  v292 = 0;
  v290 = nullptr;
  v284 = 0;
LABEL_401:
  v96 = v22 + 1;
  v97 = v22 + 1;
LABEL_190:
  if ( v9 <= (unsigned __int64)v22 )
  {
    v118 = v22;
    goto LABEL_195;
  }
  v102 = *v22;
  if ( (byte_2411740[2 * v102] & 7) != 0 )
  {
    while ( 1 )
    {
      v118 = v96;
      v97 = v96 + 1;
      if ( (unsigned __int8 *)v9 == v96 )
        goto LABEL_195;
      v103 = *v96++;
      LOBYTE(v102) = v103;
      if ( (byte_2411740[2 * v103] & 7) == 0 )
        goto LABEL_226;
    }
  }
  v118 = v22;
LABEL_226:
  if ( (unsigned __int8)(v102 - 48) > 9u )
  {
LABEL_195:
    v22 = v118;
    goto LABEL_196;
  }
  v119 = v118;
  v120 = 0;
  while ( 1 )
  {
    v22 = v119 + 1;
    v120 = (char)v102 + 10 * v120 - 48;
    if ( v9 <= (unsigned __int64)(v119 + 1) )
      break;
    LOBYTE(v102) = v119[1];
    if ( (unsigned __int8)(v102 - 48) > 9u )
      break;
    ++v119;
  }
  if ( v22 == v118 )
  {
LABEL_196:
    if ( v9 >= (unsigned __int64)v97 && *v22 == 43 )
    {
      HIDWORD(v326) = -1;
      v22 = v97;
    }
    goto LABEL_199;
  }
  v121 = v119 + 2;
  LODWORD(v326) = v120;
  if ( v9 < (unsigned __int64)(v119 + 2) )
    goto LABEL_263;
  if ( *v22 == 43 )
  {
    HIDWORD(v326) = -1;
    v22 = v119 + 2;
    goto LABEL_199;
  }
  if ( *v22 == 45 )
  {
    if ( (unsigned __int8 *)v9 == v121 )
      goto LABEL_242;
    v122 = (char)v119[2];
    if ( (unsigned __int8)(v119[2] - 48) > 9u )
      goto LABEL_242;
    v123 = v119 + 3;
    v124 = 0;
    do
    {
      v22 = v123;
      v124 = v122 + 10 * v124 - 48;
      if ( v9 <= (unsigned __int64)v123 )
        break;
      v122 = (char)*v123++;
    }
    while ( (unsigned __int8)(v122 - 48) <= 9u );
    if ( v121 == v22 || (HIDWORD(v326) = v124, v120 > v124) )
    {
LABEL_242:
      sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v121 - (_DWORD)a1, 772);
      v125 = (unsigned __int8 *)v311;
      if ( !v311 )
      {
        v191 = v312;
        v192 = *(_DWORD *)(v312 + 14976);
        if ( v192 )
        {
          v219 = (unsigned int)(v192 - 1);
          *(_DWORD *)(v312 + 14976) = v219;
          v125 = *(unsigned __int8 **)(v191 + 8 * v219 + 14848);
          v220 = *((unsigned int *)v125 + 134);
          *v125 = 0;
          v221 = *((_QWORD *)v125 + 66);
          *((_DWORD *)v125 + 106) = 0;
          v222 = v221 + (v220 << 6);
          while ( v221 != v222 )
          {
            while ( 1 )
            {
              v222 -= 64;
              v223 = *(void **)(v222 + 24);
              if ( v223 == (void *)(v222 + 40) )
                break;
              operator delete(v223);
              if ( v221 == v222 )
                goto LABEL_457;
            }
          }
LABEL_457:
          *((_DWORD *)v125 + 134) = 0;
        }
        else
        {
          v125 = (unsigned __int8 *)operator new(0x3A0u);
          *v125 = 0;
          *((_QWORD *)v125 + 12) = v125 + 112;
          *((_QWORD *)v125 + 16) = v125 + 144;
          *((_QWORD *)v125 + 20) = v125 + 176;
          *((_QWORD *)v125 + 24) = v125 + 208;
          *((_QWORD *)v125 + 28) = v125 + 240;
          *((_QWORD *)v125 + 32) = v125 + 272;
          *((_QWORD *)v125 + 36) = v125 + 304;
          *((_QWORD *)v125 + 40) = v125 + 336;
          *((_QWORD *)v125 + 44) = v125 + 368;
          *((_QWORD *)v125 + 48) = v125 + 400;
          *((_QWORD *)v125 + 52) = v125 + 432;
          *((_QWORD *)v125 + 13) = 0;
          v125[112] = 0;
          *((_QWORD *)v125 + 17) = 0;
          v125[144] = 0;
          *((_QWORD *)v125 + 21) = 0;
          v125[176] = 0;
          *((_QWORD *)v125 + 25) = 0;
          v125[208] = 0;
          *((_QWORD *)v125 + 29) = 0;
          v125[240] = 0;
          *((_QWORD *)v125 + 33) = 0;
          v125[272] = 0;
          *((_QWORD *)v125 + 37) = 0;
          v125[304] = 0;
          *((_QWORD *)v125 + 41) = 0;
          v125[336] = 0;
          *((_QWORD *)v125 + 45) = 0;
          v125[368] = 0;
          *((_QWORD *)v125 + 49) = 0;
          v125[400] = 0;
          *((_QWORD *)v125 + 53) = 0x800000000LL;
          *((_QWORD *)v125 + 66) = v125 + 544;
          *((_QWORD *)v125 + 67) = 0x600000000LL;
        }
        v311 = v125;
      }
      v22 = v121;
      v125[*v125 + 1] = 1;
      v126 = v311;
      v127 = *(unsigned __int8 *)v311;
      *(_BYTE *)v311 = v127 + 1;
      v126[v127 + 2] = v294;
      sub_AEA040((__int64)&v311);
      goto LABEL_55;
    }
  }
  else
  {
LABEL_263:
    HIDWORD(v326) = v120;
  }
LABEL_199:
  if ( v9 > (unsigned __int64)v22 && (byte_2411740[2 * *v22] & 7) != 0 )
  {
    v104 = v22 + 1;
    do
    {
      v22 = v104;
      if ( (unsigned __int8 *)v9 == v104 )
        break;
      v105 = *v104++;
    }
    while ( (byte_2411740[2 * v105] & 7) != 0 );
  }
  v106 = v22 + 2;
  if ( v9 < (unsigned __int64)(v22 + 2) || *(_WORD *)v22 != 31611 )
  {
    sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v22 - (_DWORD)a1, 777);
    v107 = (unsigned __int8 *)v311;
    if ( !v311 )
    {
      v150 = v312;
      v151 = *(_DWORD *)(v312 + 14976);
      if ( v151 )
      {
        v152 = (unsigned int)(v151 - 1);
        *(_DWORD *)(v312 + 14976) = v152;
        v107 = *(unsigned __int8 **)(v150 + 8 * v152 + 14848);
        v153 = *((unsigned int *)v107 + 134);
        v154 = *((_QWORD *)v107 + 66);
        *v107 = 0;
        *((_DWORD *)v107 + 106) = 0;
        v155 = v154 + (v153 << 6);
        while ( v154 != v155 )
        {
          while ( 1 )
          {
            v155 -= 64;
            v156 = *(void **)(v155 + 24);
            if ( v156 == (void *)(v155 + 40) )
              break;
            operator delete(v156);
            if ( v154 == v155 )
              goto LABEL_323;
          }
        }
LABEL_323:
        *((_DWORD *)v107 + 134) = 0;
      }
      else
      {
        v107 = (unsigned __int8 *)operator new(0x3A0u);
        *v107 = 0;
        *((_QWORD *)v107 + 12) = v107 + 112;
        *((_QWORD *)v107 + 16) = v107 + 144;
        *((_QWORD *)v107 + 20) = v107 + 176;
        *((_QWORD *)v107 + 24) = v107 + 208;
        *((_QWORD *)v107 + 28) = v107 + 240;
        *((_QWORD *)v107 + 32) = v107 + 272;
        *((_QWORD *)v107 + 36) = v107 + 304;
        *((_QWORD *)v107 + 40) = v107 + 336;
        *((_QWORD *)v107 + 44) = v107 + 368;
        *((_QWORD *)v107 + 48) = v107 + 400;
        *((_QWORD *)v107 + 52) = v107 + 432;
        *((_QWORD *)v107 + 13) = 0;
        v107[112] = 0;
        *((_QWORD *)v107 + 17) = 0;
        v107[144] = 0;
        *((_QWORD *)v107 + 21) = 0;
        v107[176] = 0;
        *((_QWORD *)v107 + 25) = 0;
        v107[208] = 0;
        *((_QWORD *)v107 + 29) = 0;
        v107[240] = 0;
        *((_QWORD *)v107 + 33) = 0;
        v107[272] = 0;
        *((_QWORD *)v107 + 37) = 0;
        v107[304] = 0;
        *((_QWORD *)v107 + 41) = 0;
        v107[336] = 0;
        *((_QWORD *)v107 + 45) = 0;
        v107[368] = 0;
        *((_QWORD *)v107 + 49) = 0;
        v107[400] = 0;
        *((_QWORD *)v107 + 53) = 0x800000000LL;
        *((_QWORD *)v107 + 66) = v107 + 544;
        *((_QWORD *)v107 + 67) = 0x600000000LL;
      }
      v311 = v107;
    }
    v107[*v107 + 1] = 1;
    v108 = v311;
    v109 = *(unsigned __int8 *)v311;
    *(_BYTE *)v311 = v109 + 1;
    v108[v109 + 2] = v294;
    if ( (_BYTE)v316 )
    {
      sub_FC7790(v313, (__int64 *)&v311, SHIBYTE(v316));
      v313 = 0;
      v316 = 0;
    }
    if ( v314 != &v315 )
      operator delete(v314);
    v110 = (void **)v311;
    if ( v311 )
    {
      v111 = v312;
      if ( v312 )
      {
        if ( (unsigned __int64)v311 < v312 || (unsigned __int64)v311 > v312 + 14848 )
        {
          v112 = *((void ***)v311 + 66);
          v113 = &v112[8 * (unsigned __int64)*((unsigned int *)v311 + 134)];
          if ( v112 != v113 )
          {
            do
            {
              while ( 1 )
              {
                v113 -= 8;
                v114 = (void **)v113[3];
                if ( v114 == v113 + 5 )
                  break;
                operator delete(v114);
                if ( v112 == v113 )
                  goto LABEL_217;
              }
            }
            while ( v112 != v113 );
LABEL_217:
            v113 = (void **)v110[66];
          }
          if ( v113 != v110 + 68 )
            free(v113);
          v115 = (void **)v110[52];
          if ( v115 != v110 + 54 )
            free(v115);
          v116 = v110 + 48;
          v117 = v110 + 8;
          do
          {
            while ( *v116 != v116 + 2 )
            {
              operator delete(*v116);
              v116 -= 4;
              if ( v116 == v117 )
                goto LABEL_225;
            }
            v116 -= 4;
          }
          while ( v116 != v117 );
LABEL_225:
          operator delete(v110, 0x3A0u);
        }
        else
        {
          v131 = *(unsigned int *)(v312 + 14976);
          *(_DWORD *)(v312 + 14976) = v131 + 1;
          *(_QWORD *)(v111 + 8 * v131 + 14848) = v110;
        }
      }
    }
    goto LABEL_55;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v309 = si128.m128i_u64[1];
  ptr = &v310;
  v310 = 32125;
  v308 = 2;
  if ( v321 )
  {
    v299 = &v310;
    v137 = 2;
    v138 = 2;
  }
  else
  {
    v136 = v22 + 3;
    v137 = 2;
    if ( v22 + 3 != (unsigned __int8 *)(v9 + 1) )
    {
      while ( *(v136 - 1) == 123 )
      {
        if ( v137 + 1 > v309 )
        {
          sub_2236E10(&ptr, &v310, v137 + 1, 1);
          *((_BYTE *)ptr + v308) = 125;
        }
        else
        {
          *((_BYTE *)ptr + v137) = 125;
        }
        v137 = ++v308;
        if ( v321 )
        {
          v106 = v136;
          v138 = v136 - v22;
          v299 = (__int16 *)ptr;
          goto LABEL_296;
        }
        v106 = v136++;
        if ( v136 == (unsigned __int8 *)(v9 + 1) )
          break;
      }
    }
    v138 = v106 - v22;
    v299 = (__int16 *)ptr;
  }
LABEL_296:
  v139 = v106;
  if ( v9 <= (unsigned __int64)v106 )
  {
LABEL_309:
    sub_FC70B0((__int64)&v311, v293, a6 + (_DWORD)v106 - (_DWORD)a1, 773);
    sub_AE9DF0((unsigned __int8 **)&v311, (__int64)v294, 1u);
    sub_AEC220((unsigned __int8 **)&v311, ptr, v308);
    sub_AEA040((__int64)&v311);
    if ( ptr != &v310 )
      free(ptr);
    v22 = v106;
    goto LABEL_55;
  }
  v297 = v22;
  v140 = v137;
  v303 = v106;
  v141 = v9;
  v142 = 1;
  while ( 1 )
  {
    if ( v141 - (unsigned __int64)v139 >= v138 && (!v138 || !memcmp(v139, v297, v138)) )
    {
      ++v142;
      v139 += v138;
      goto LABEL_301;
    }
    if ( v141 - (unsigned __int64)v139 < v140 || v140 && memcmp(v139, v299, v140) )
    {
      ++v139;
LABEL_301:
      if ( v141 <= (unsigned __int64)v139 )
        goto LABEL_308;
      continue;
    }
    v143 = &v139[v140];
    if ( !--v142 )
      break;
    v139 += v140;
    if ( v141 <= (unsigned __int64)v143 )
    {
LABEL_308:
      v9 = v141;
      v106 = v303;
      goto LABEL_309;
    }
  }
  v295 = v141;
  LODWORD(v322) = a6;
  v305 = v303;
  v306 = v139 - v303;
  v157 = 0;
  HIDWORD(v322) = a6 + (_DWORD)v303 - (_DWORD)a1;
  while ( 1 )
  {
    v164 = sub_2246AB0(&v305, "\\n", 2, v157);
    v165 = v164;
    if ( v164 == -1 )
      break;
    v166 = v306;
    if ( v157 <= v306 )
      v166 = v157;
    v167 = v306 - v166;
    if ( v164 - v157 <= v306 - v166 )
      v167 = v164 - v157;
    v168 = &v305[v166];
    if ( 0x7FFFFFFFFFFFFFFFLL - v324 < v167 )
      std::__throw_length_error("basic_string::append");
    v159 = v323;
    v169 = v324 + v167;
    if ( v323 == v325 )
      v170 = 15;
    else
      v170 = v325[0];
    if ( v169 <= v170 )
    {
      if ( v167 )
      {
        v158 = (unsigned __int8 *)v323 + v324;
        if ( v167 == 1 )
          *v158 = *v168;
        else
          memcpy(v158, v168, v167);
        v159 = v323;
      }
    }
    else
    {
      sub_998B30((__int64)&v323, v324, 0, v168, v167);
      v159 = v323;
    }
    v324 = v169;
    v159[v169] = 0;
    v160 = v324;
    v161 = v323;
    v162 = v324 + 1;
    if ( v323 == v325 )
      v163 = 15;
    else
      v163 = v325[0];
    if ( v162 > v163 )
    {
      sub_998B30((__int64)&v323, v324, 0, nullptr, 1u);
      v161 = v323;
    }
    v161[v160] = 10;
    v324 = v162;
    *((_BYTE *)v323 + v160 + 1) = 0;
    v157 = v165 + 2;
  }
  v9 = v295;
  if ( !v324 )
    sub_99BDC0(&v323, 0, 0, v303, v139 - v303);
  if ( !v321 || sub_9983C0((__int64 *)&v323, "{{", 0, 2u) != -1 )
  {
    if ( !v284 )
    {
      sub_13B49B0(v293, (__int64)&v317, v288, s2b, v292 & 1);
LABEL_356:
      if ( ptr != &v310 )
        free(ptr);
      if ( v323 != v325 )
        operator delete(v323);
      if ( src != v320 )
        operator delete(src);
      v22 = v143;
      v302 = 1;
      goto LABEL_59;
    }
    v181 = sub_2244B30(v290, v284);
    v182 = sub_2244E60(a9 + 8, v290, v284, v181);
    if ( v182 == -1 )
      v183 = (__int64 *)(*(_QWORD *)(a9 + 8) + 8LL * *(unsigned int *)(a9 + 16));
    else
      v183 = (__int64 *)(*(_QWORD *)(a9 + 8) + 8LL * v182);
    sub_13B5340((__int64 **)&v311, v183, 1);
    v184 = (__int64 *)v311;
    sub_13B5340((__int64 **)&v311, (__int64 *)(*(_QWORD *)(a9 + 8) + 8LL * *(unsigned int *)(a9 + 16)), 1);
    if ( v184 != v311 )
    {
      v185 = *v184;
      if ( !*(_DWORD *)(*v184 + 16) )
        *(_DWORD *)(v185 + 16) = v322;
      sub_13B49B0(*(_QWORD *)a9, (__int64)&v317, *(_DWORD *)(v185 + 8), 0, 0);
      goto LABEL_356;
    }
    v197 = sub_2244B30(v290, v284);
    v198 = (unsigned int)sub_2244CB0(a9 + 32, v290, v284, v197);
    v201 = (size_t **)(*(_QWORD *)(a9 + 32) + 8 * v198);
    v202 = *v201;
    if ( *v201 )
    {
      if ( v202 != (size_t *)-8LL )
      {
LABEL_434:
        v203 = *((unsigned int *)v202 + 4);
        v204 = v202[1];
        v205 = 3 * v203;
        v206 = v203 + 1;
        v207 = (char *)&v317;
        v208 = v204 + 32 * v205;
        if ( v206 > *((unsigned int *)v202 + 5) )
        {
          v248 = -1;
          if ( v204 <= (unsigned __int64)&v317 && v208 > (unsigned __int64)&v317 )
          {
            v301 = 1;
            v248 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)&v317 - v204) >> 5);
          }
          v249 = sub_2237400(v202 + 1, v202 + 3, v206, 96, &v311);
          v250 = v202[1];
          v251 = (char *)v249;
          if ( v250 != v250 + 96LL * *((unsigned int *)v202 + 4) )
          {
            v252 = (const __m128i *)(v250 + 24);
            v253 = v250 + 72;
            v254 = v250 + ((96LL * *((unsigned int *)v202 + 4) - 96) & 0xFFFFFFFFFFFFFFE0LL) + 120;
            v255 = v251;
            do
            {
              *(_QWORD *)v255 = v252[-2].m128i_i64[1];
              *((_QWORD *)v255 + 1) = v255 + 24;
              v259 = (const __m128i *)v252[-1].m128i_i64[0];
              if ( v259 == v252 )
              {
                *(__m128i *)(v255 + 24) = _mm_loadu_si128(v252);
              }
              else
              {
                *((_QWORD *)v255 + 1) = v259;
                *((_QWORD *)v255 + 3) = v252->m128i_i64[0];
              }
              *((_QWORD *)v255 + 2) = v252[-1].m128i_i64[1];
              v256 = v252[1].m128i_i8[0];
              v252[-1].m128i_i64[0] = (__int64)v252;
              v252[-1].m128i_i64[1] = 0;
              v252->m128i_i8[0] = 0;
              v255[40] = v256;
              *((_DWORD *)v255 + 11) = v252[1].m128i_i32[1];
              *((_DWORD *)v255 + 12) = v252[1].m128i_i32[2];
              *((_QWORD *)v255 + 7) = v255 + 72;
              v257 = v252[2].m128i_i64[0];
              if ( v257 == v253 )
              {
                *(__m128i *)(v255 + 72) = _mm_loadu_si128(v252 + 3);
              }
              else
              {
                *((_QWORD *)v255 + 7) = v257;
                *((_QWORD *)v255 + 9) = v252[3].m128i_i64[0];
              }
              v258 = v252[2].m128i_i64[1];
              v252 += 6;
              v255 += 96;
              *((_QWORD *)v255 - 4) = v258;
              LODWORD(v258) = v252[-2].m128i_i32[0];
              v252[-4].m128i_i64[0] = v253;
              v253 += 96;
              v252[-4].m128i_i64[1] = 0;
              v252[-3].m128i_i8[0] = 0;
              *((_DWORD *)v255 - 2) = v258;
              *((_DWORD *)v255 - 1) = v252[-2].m128i_i32[1];
            }
            while ( (const __m128i *)v254 != v252 );
            v260 = v202[1];
            v261 = 96LL * *((unsigned int *)v202 + 4);
            v262 = (_QWORD *)(v260 + v261);
            if ( v260 != v260 + v261 )
            {
              s2c = v251;
              v263 = (_QWORD *)v202[1];
              do
              {
                while ( 1 )
                {
                  v262 -= 12;
                  v264 = (_QWORD *)v262[7];
                  if ( v264 != v262 + 9 )
                    operator delete(v264);
                  v265 = (_QWORD *)v262[1];
                  if ( v265 == v262 + 3 )
                    break;
                  operator delete(v265);
                  if ( v263 == v262 )
                    goto LABEL_532;
                }
              }
              while ( v263 != v262 );
LABEL_532:
              v251 = s2c;
            }
          }
          v266 = (int)v311;
          v267 = (size_t *)v202[1];
          if ( v202 + 3 != v267 )
          {
            s2h = (int)v311;
            free(v267);
            v266 = s2h;
          }
          *((_DWORD *)v202 + 5) = v266;
          v268 = *((unsigned int *)v202 + 4);
          v202[1] = (size_t)v251;
          v269 = 3 * v268;
          v207 = (char *)&v317;
          v208 = (unsigned __int64)&v251[32 * v269];
          if ( v301 )
            v207 = &v251[96 * v248];
        }
        s2f = v207;
        *(_QWORD *)v208 = *(_QWORD *)v207;
        *(_QWORD *)(v208 + 8) = v208 + 24;
        sub_13B3C40((_QWORD *)(v208 + 8), *((_BYTE **)v207 + 1), *((_QWORD *)v207 + 1) + *((_QWORD *)v207 + 2));
        *(_BYTE *)(v208 + 40) = s2f[40];
        *(_DWORD *)(v208 + 44) = *((_DWORD *)s2f + 11);
        *(_DWORD *)(v208 + 48) = *((_DWORD *)s2f + 12);
        *(_QWORD *)(v208 + 56) = v208 + 72;
        sub_13B3C40((_QWORD *)(v208 + 56), *((_BYTE **)s2f + 7), *((_QWORD *)s2f + 7) + *((_QWORD *)s2f + 8));
        v209 = *((_DWORD *)s2f + 23);
        *(_DWORD *)(v208 + 88) = *((_DWORD *)s2f + 22);
        *(_DWORD *)(v208 + 92) = v209;
        ++*((_DWORD *)v202 + 4);
        goto LABEL_356;
      }
      --*(_DWORD *)(a9 + 48);
    }
    s2g = v198;
    v236 = (size_t *)sub_22300B0(v284 + 217, 8, v198, v198, v199, v200);
    memcpy(v236 + 27, v290, v284);
    *((_BYTE *)v236 + v284 + 216) = 0;
    *v236 = v284;
    v236[1] = (size_t)(v236 + 3);
    v236[2] = 0x200000000LL;
    *v201 = v236;
    ++*(_DWORD *)(a9 + 44);
    v237 = (size_t **)(*(_QWORD *)(a9 + 32) + 8LL * (unsigned int)sub_22450D0(a9 + 32, s2g));
    v202 = *v237;
    if ( !*v237 || v202 == (size_t *)-8LL )
    {
      v238 = v237 + 1;
      do
      {
        do
          v202 = *v238++;
        while ( !v202 );
      }
      while ( v202 == (size_t *)-8LL );
    }
    goto LABEL_434;
  }
  sub_FC70B0((__int64)&v311, v293, SHIDWORD(v322), 776);
  sub_AEC220((unsigned __int8 **)&v311, v323, v324);
  sub_AEA040((__int64)&v311);
  if ( ptr != &v310 )
    free(ptr);
  v302 = 0;
LABEL_412:
  if ( v323 != v325 )
    operator delete(v323);
  if ( src != v320 )
    operator delete(src);
  return v302;
}
