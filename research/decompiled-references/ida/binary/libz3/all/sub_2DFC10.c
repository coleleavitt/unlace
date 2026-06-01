__int64 __fastcall sub_2DFC10(_QWORD *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int *v4; // rbx
  unsigned int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  char v9; // bp
  __int64 v10; // rdx
  char *v11; // rax
  std::istream *v12; // rdi
  unsigned int v13; // eax
  __int64 v14; // rdx
  _BYTE *v15; // rdx
  __int64 v16; // rsi
  unsigned int v17; // ebp
  _QWORD *v18; // rsi
  __int64 v19; // rax
  _QWORD *v20; // rax
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24; // rbp
  __int64 v25; // rdx
  _BYTE *v26; // rax
  std::istream *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rsi
  std::istream *v30; // rdi
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rdx
  _DWORD *v34; // rax
  __int64 v35; // rdx
  unsigned int v36; // r14d
  size_t v37; // rsi
  unsigned int *v38; // rdx
  _DWORD *v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // r13d
  size_t v42; // rdi
  __int64 v43; // rax
  _BYTE *v44; // r15
  _DWORD *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  _BYTE *v48; // rax
  _BYTE *v49; // rdi
  _QWORD *v50; // rdx
  char v51; // cl
  char v52; // r9
  __int64 v53; // rcx
  char v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rax
  _BYTE *v57; // r14
  _BYTE *v58; // rbx
  _QWORD *v59; // r15
  void *v60; // r12
  _BYTE *v61; // rsi
  unsigned int v62; // ebp
  size_t v63; // rsi
  unsigned int *v64; // rax
  _DWORD *v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  _BYTE *v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // ebp
  _QWORD *v71; // rsi
  __int64 v72; // rax
  _QWORD *v73; // rax
  char v74; // dl
  __int64 v75; // rdx
  __int64 v76; // rdx
  void *v77; // rbp
  __int64 v78; // rbp
  __int64 v79; // rdx
  __int64 v80; // rax
  __int64 v81; // rdi
  unsigned int v82; // eax
  char v83; // bp
  _BYTE *v84; // rax
  int v85; // edi
  __int64 v86; // rax
  bool v87; // zf
  char v88; // cl
  void *v89; // r15
  unsigned int v90; // eax
  unsigned int v91; // r13d
  void *v92; // r15
  _QWORD *v93; // rsi
  __int64 v94; // rax
  _QWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdx
  void *v98; // r13
  __int64 v99; // r13
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdi
  void *v103; // r13
  void *v104; // rbp
  __int64 v105; // rbp
  __int64 v106; // rdx
  __int64 v107; // rax
  void *v108; // rdi
  void *v109; // r15
  void *v110; // r15
  void *v111; // r15
  void *v112; // rdi
  void *v113; // rdi
  int v114; // edx
  __int64 v115; // rdx
  char v116; // cl
  __int64 v117; // rdx
  char v118; // cl
  unsigned int v119; // eax
  void *v120; // r13
  char **v121; // rbx
  __int64 v122; // r13
  __int64 v123; // rdx
  __int64 v124; // rax
  _QWORD *v125; // rax
  _QWORD *v126; // rax
  _QWORD *v127; // rax
  unsigned int v128; // edx
  __int64 v129; // rax
  _BYTE *v130; // r15
  _DWORD *v131; // r9
  __int64 v132; // rax
  __int64 v133; // rdx
  _BYTE *v134; // rax
  _BYTE *v135; // rdi
  _QWORD *v136; // rdx
  char v137; // cl
  char v138; // r8
  __int64 v139; // rcx
  char v140; // r8
  __int64 v141; // rcx
  __int64 v142; // rax
  _BYTE *v143; // r13
  _BYTE *v144; // rbx
  _QWORD *v145; // r15
  void *v146; // r12
  _BYTE *v147; // rsi
  void *v148; // r15
  void *v149; // r15
  void *v150; // r15
  void *v151; // r15
  int v152; // edx
  void *v153; // r13
  __int64 v154; // rdx
  char v155; // cl
  __int64 v156; // rdx
  unsigned int v157; // eax
  void *v158; // rdi
  void *v159; // rdi
  void *v160; // rdi
  void *v161; // rdi
  void *v162; // rdi
  void *v163; // rdi
  int v164; // edx
  __int64 v165; // rdx
  char v166; // cl
  __int64 v167; // rdx
  void *v168; // rdi
  void *v169; // rdi
  unsigned int v170; // edx
  char v171; // bp
  __int64 v172; // rdx
  _BYTE *v173; // rax
  std::istream *v174; // rdi
  _QWORD *v175; // rax
  unsigned int v176; // r13d
  unsigned int v177; // edx
  __int64 v178; // rax
  _BYTE *v179; // r15
  _DWORD *v180; // r8
  __int64 v181; // rax
  __int64 v182; // rdx
  _BYTE *v183; // rax
  _BYTE *v184; // rdi
  _QWORD *v185; // rdx
  char v186; // cl
  char v187; // r9
  __int64 v188; // rcx
  char v189; // r9
  __int64 v190; // rcx
  __int64 v191; // rax
  __int64 v192; // rdx
  unsigned int *v193; // rax
  _BYTE *v194; // rbx
  _BYTE *v195; // r14
  unsigned int *v196; // r15
  void *v197; // r12
  _BYTE *v198; // rsi
  unsigned int v199; // ebp
  unsigned int *v200; // rdx
  _DWORD *v201; // rax
  __int64 v202; // rdx
  _QWORD *v203; // rax
  unsigned int v204; // r13d
  unsigned int *v205; // rdx
  _DWORD *v206; // rax
  __int64 v207; // rdx
  unsigned int v208; // eax
  _QWORD *v209; // rax
  _QWORD *v210; // rax
  char **v211; // rbx
  char **v212; // rbp
  char **exception; // rbx
  char **v214; // rbx
  char **v215; // rbx
  char **v216; // rbp
  char **v217; // rbp
  char **v218; // rbx
  _DWORD *v219; // [rsp+0h] [rbp-1A0h]
  char v220; // [rsp+0h] [rbp-1A0h]
  void *v221; // [rsp+0h] [rbp-1A0h]
  void *v222; // [rsp+0h] [rbp-1A0h]
  void *v223; // [rsp+0h] [rbp-1A0h]
  void *v224; // [rsp+0h] [rbp-1A0h]
  void *v225; // [rsp+0h] [rbp-1A0h]
  void *v226; // [rsp+0h] [rbp-1A0h]
  void *v227; // [rsp+0h] [rbp-1A0h]
  _QWORD *v228; // [rsp+0h] [rbp-1A0h]
  _QWORD *v229; // [rsp+8h] [rbp-198h]
  _DWORD *v230; // [rsp+8h] [rbp-198h]
  char v231; // [rsp+8h] [rbp-198h]
  unsigned int v232; // [rsp+8h] [rbp-198h]
  _DWORD *v233; // [rsp+8h] [rbp-198h]
  _DWORD *v234; // [rsp+8h] [rbp-198h]
  unsigned int *v235; // [rsp+10h] [rbp-190h]
  _DWORD *v236; // [rsp+10h] [rbp-190h]
  _QWORD *v237; // [rsp+10h] [rbp-190h]
  _QWORD *v238; // [rsp+18h] [rbp-188h]
  _DWORD *v239; // [rsp+18h] [rbp-188h]
  unsigned int *v240; // [rsp+20h] [rbp-180h]
  void *v241; // [rsp+30h] [rbp-170h]
  void *v242; // [rsp+30h] [rbp-170h]
  void *v243; // [rsp+30h] [rbp-170h]
  void *v244; // [rsp+30h] [rbp-170h]
  void *v245; // [rsp+30h] [rbp-170h]
  void *v246; // [rsp+30h] [rbp-170h]
  void *v247; // [rsp+30h] [rbp-170h]
  void *v248; // [rsp+30h] [rbp-170h]
  void *v249; // [rsp+30h] [rbp-170h]
  char v250; // [rsp+5Fh] [rbp-141h]
  __int64 v251; // [rsp+68h] [rbp-138h] BYREF
  __int64 v252; // [rsp+70h] [rbp-130h]
  __int64 v253; // [rsp+78h] [rbp-128h] BYREF
  __int64 v254; // [rsp+80h] [rbp-120h]
  _QWORD v255[2]; // [rsp+88h] [rbp-118h] BYREF
  _QWORD v256[2]; // [rsp+98h] [rbp-108h] BYREF
  __int64 v257; // [rsp+A8h] [rbp-F8h] BYREF
  __int64 v258; // [rsp+B0h] [rbp-F0h]
  __int64 v259; // [rsp+B8h] [rbp-E8h] BYREF
  __int64 v260; // [rsp+C0h] [rbp-E0h]
  int v261; // [rsp+C8h] [rbp-D8h] BYREF
  char v262; // [rsp+CCh] [rbp-D4h]
  __int64 v263; // [rsp+D0h] [rbp-D0h]
  int v264; // [rsp+D8h] [rbp-C8h] BYREF
  char v265; // [rsp+DCh] [rbp-C4h]
  __int64 v266; // [rsp+E0h] [rbp-C0h]
  __int64 v267; // [rsp+E8h] [rbp-B8h] BYREF
  __int64 v268; // [rsp+F0h] [rbp-B0h]
  __int64 v269; // [rsp+F8h] [rbp-A8h] BYREF
  __int64 v270; // [rsp+100h] [rbp-A0h]
  __int64 v271; // [rsp+108h] [rbp-98h] BYREF
  __int64 v272; // [rsp+110h] [rbp-90h]
  int v273; // [rsp+118h] [rbp-88h] BYREF
  char v274; // [rsp+11Ch] [rbp-84h]
  __int64 v275; // [rsp+120h] [rbp-80h]
  __int64 v276; // [rsp+128h] [rbp-78h] BYREF
  __int64 v277; // [rsp+130h] [rbp-70h]
  __int64 v278; // [rsp+138h] [rbp-68h] BYREF
  __int64 v279; // [rsp+140h] [rbp-60h]
  __int64 v280; // [rsp+148h] [rbp-58h] BYREF
  __int64 v281; // [rsp+150h] [rbp-50h]
  unsigned int v282; // [rsp+158h] [rbp-48h]

  result = a2[2];
  if ( (_DWORD)result == -1 )
    return result;
  v4 = a2;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (int)result <= 8 )
        goto LABEL_4;
      if ( (int)result > 13 )
        break;
      if ( (_DWORD)result == 10 )
        ++v4[3];
LABEL_48:
      LODWORD(result) = std::istream::get(*(std::istream **)v4);
      v4[2] = result;
    }
    if ( (_DWORD)result == 32 )
      goto LABEL_48;
LABEL_4:
    v5 = result;
    if ( (_BYTE)result == 92 )
      break;
    if ( (_BYTE)result != 45 )
    {
      if ( (unsigned __int8)(result - 48) > 9u )
      {
        v6 = a1[2];
        if ( v6 )
          *(_DWORD *)(v6 - 4) = 0;
        v7 = 0xBFF71FE00000000LL;
        v8 = v5;
        if ( (unsigned __int8)((v5 & 0xDF) - 65) > 0x19u )
        {
          v9 = v5;
          while ( 1 )
          {
            if ( v9 <= 10 )
            {
              if ( v9 > 8 )
                goto LABEL_19;
            }
            else if ( v9 == 32 )
            {
              goto LABEL_19;
            }
            if ( v4[2] == -1 )
              goto LABEL_19;
            if ( v6 )
            {
              v10 = *(unsigned int *)(v6 - 4);
              if ( (_DWORD)v10 == *(_DWORD *)(v6 - 8) )
              {
                v31 = (unsigned int)(3 * v10 + 1) >> 1;
                v32 = v31 + 8;
                if ( (int)v10 + 8 >= (unsigned int)v32 || (unsigned int)v10 >= v31 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v276, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v276);
                  sub_233E40((__int64)&v276);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v33 = (unsigned int *)sub_186B300((void *)(v6 - 8), v32);
                v34 = v33 + 2;
                *v33 = v31;
                v35 = v33[1];
                a1[2] = v34;
                v11 = (char *)v34 + v35;
              }
              else
              {
                v11 = (char *)(v10 + v6);
              }
            }
            else
            {
              v11 = (char *)(sub_186B270(0xAu) + 8);
              *((_QWORD *)v11 - 1) = 2;
              a1[2] = v11;
            }
            *v11 = v9;
            v12 = *(std::istream **)v4;
            ++*(_DWORD *)(a1[2] - 4LL);
            v13 = std::istream::get(v12);
            v4[2] = v13;
            v9 = v13;
            v6 = a1[2];
          }
        }
        while ( 2 )
        {
          if ( (char)v8 <= 59 )
          {
            if ( (char)v8 <= 32 )
              goto LABEL_19;
            if ( !_bittest64(&v7, v8) )
              goto LABEL_57;
          }
          else
          {
            if ( (unsigned __int8)(v8 - 63) <= 0x3Eu )
            {
              v29 = 0x5FFFFFFF0FFFFFFFLL;
              if ( !_bittest64(&v29, (unsigned int)(v8 - 63)) || v4[2] == -1 )
                goto LABEL_19;
              if ( (unsigned __int8)(v8 - 65) <= 0x19u )
              {
                LOBYTE(v8) = v8 + 32;
                if ( !v6 )
                {
LABEL_42:
                  v26 = (_BYTE *)(sub_186B270(0xAu) + 8);
                  *((_QWORD *)v26 - 1) = 2;
                  a1[2] = v26;
LABEL_35:
                  *v26 = v8;
                  v27 = *(std::istream **)v4;
                  ++*(_DWORD *)(a1[2] - 4LL);
                  v28 = std::istream::get(v27);
                  v4[2] = v28;
                  v8 = v28;
                  v6 = a1[2];
                  continue;
                }
LABEL_33:
                v25 = *(unsigned int *)(v6 - 4);
                if ( (_DWORD)v25 == *(_DWORD *)(v6 - 8) )
                {
                  v36 = (unsigned int)(3 * v25 + 1) >> 1;
                  v37 = v36 + 8;
                  if ( (int)v25 + 8 >= (unsigned int)v37 || (unsigned int)v25 >= v36 )
                  {
                    v218 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v276, "Overflow encountered when expanding vector");
                    *v218 = (char *)off_1C63128;
                    sub_2333C0(v218 + 1, &v276);
                    sub_233E40((__int64)&v276);
                    __cxa_throw(
                      v218,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v38 = (unsigned int *)sub_186B300((void *)(v6 - 8), v37);
                  v39 = v38 + 2;
                  *v38 = v36;
                  v40 = v38[1];
                  a1[2] = v39;
                  v26 = (char *)v39 + v40;
                }
                else
                {
                  v26 = (_BYTE *)(v25 + v6);
                }
                goto LABEL_35;
              }
LABEL_32:
              if ( !v6 )
                goto LABEL_42;
              goto LABEL_33;
            }
LABEL_57:
            if ( (_BYTE)v8 != 41 && (_BYTE)v8 != 126 )
            {
LABEL_19:
              if ( v6 )
              {
                v14 = *(unsigned int *)(v6 - 4);
                if ( (_DWORD)v14 == *(_DWORD *)(v6 - 8) )
                {
                  v62 = (unsigned int)(3 * v14 + 1) >> 1;
                  v63 = v62 + 8;
                  if ( (int)v14 + 8 >= (unsigned int)v63 || (unsigned int)v14 >= v62 )
                  {
                    v215 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v276, "Overflow encountered when expanding vector");
                    *v215 = (char *)off_1C63128;
                    sub_2333C0(v215 + 1, &v276);
                    sub_233E40((__int64)&v276);
                    __cxa_throw(
                      v215,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v64 = (unsigned int *)sub_186B300((void *)(v6 - 8), v63);
                  v65 = v64 + 2;
                  *v64 = v62;
                  v66 = v64[1];
                  a1[2] = v65;
                  v15 = (char *)v65 + v66;
                }
                else
                {
                  v15 = (_BYTE *)(v6 + v14);
                }
              }
              else
              {
                v126 = (_QWORD *)sub_186B270(0xAu);
                v15 = v126 + 1;
                *v126 = 2;
                a1[2] = v126 + 1;
              }
              *v15 = 0;
              v16 = a1[2];
              ++*(_DWORD *)(v16 - 4);
              v17 = v4[3];
              sub_180C5A0(&v267, v16);
              v18 = (_QWORD *)*a1;
              LOBYTE(v276) = 0;
              v278 = 0;
              v277 = v267;
              v279 = 0;
              v280 = 1;
              v281 = 0;
              v282 = v17;
              if ( v18 )
              {
                v19 = *((unsigned int *)v18 - 1);
                if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
                {
                  v41 = (unsigned int)(3 * v19 + 1) >> 1;
                  v42 = 56 * v41 + 8;
                  if ( 56 * (int)v19 + 8 >= (unsigned int)v42 || (unsigned int)v19 >= v41 )
                  {
                    v216 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(&v271, "Overflow encountered when expanding vector");
                    *v216 = (char *)off_1C63128;
                    sub_2333C0(v216 + 1, &v271);
                    sub_233E40((__int64)&v271);
                    __cxa_throw(
                      v216,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                  v43 = sub_186B270(v42);
                  v44 = (_BYTE *)*a1;
                  v45 = (_DWORD *)v43;
                  v18 = (_QWORD *)(v43 + 8);
                  if ( *a1 )
                  {
                    v46 = *((unsigned int *)v44 - 1);
                    v45[1] = v46;
                    v47 = 7 * v46;
                    v48 = v44;
                    v49 = &v44[8 * v47];
                    v50 = v18;
                    if ( v49 != v44 )
                    {
                      do
                      {
                        v51 = *v48;
                        v52 = v48[20];
                        v48 += 56;
                        v50 += 7;
                        *((_BYTE *)v50 - 56) = v51;
                        *(v50 - 6) = *((_QWORD *)v48 - 6);
                        *((_DWORD *)v50 - 10) = *((_DWORD *)v48 - 10);
                        *((_BYTE *)v50 - 36) = v52 & 3 | *((_BYTE *)v50 - 36) & 0xFC;
                        v53 = *((_QWORD *)v48 - 4);
                        *((_QWORD *)v48 - 4) = 0;
                        *(v50 - 4) = v53;
                        v54 = *(v48 - 20);
                        *((_DWORD *)v50 - 6) = *((_DWORD *)v48 - 6);
                        *((_BYTE *)v50 - 20) = v54 & 3 | *((_BYTE *)v50 - 20) & 0xFC;
                        v55 = *((_QWORD *)v48 - 2);
                        *((_QWORD *)v48 - 2) = 0;
                        *(v50 - 2) = v55;
                        *((_DWORD *)v50 - 2) = *((_DWORD *)v48 - 2);
                      }
                      while ( v49 != v48 );
                    }
                    v56 = *((unsigned int *)v44 - 1);
                    if ( (_DWORD)v56 )
                    {
                      v219 = v45;
                      v229 = a1;
                      v235 = v4;
                      v57 = &v44[56 * v56];
                      v58 = v44;
                      v59 = v18;
                      do
                      {
                        v60 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v58 + 16);
                        v61 = v58 + 32;
                        v58 += 56;
                        sub_182CBA0(v60, v61);
                      }
                      while ( v57 != v58 );
                      a1 = v229;
                      v18 = v59;
                      v45 = v219;
                      v4 = v235;
                      v44 = (_BYTE *)*v229;
                    }
                    v230 = v45;
                    sub_186B220(v44 - 8);
                    v45 = v230;
                    v20 = &v18[7 * (unsigned int)v230[1]];
                  }
                  else
                  {
                    *(_DWORD *)(v43 + 4) = 0;
                    v20 = (_QWORD *)(v43 + 8);
                  }
                  *a1 = v18;
                  v21 = v276;
                  *v45 = v41;
                  v17 = v282;
                }
                else
                {
                  v20 = &v18[7 * v19];
                  v21 = 0;
                }
              }
              else
              {
                v125 = (_QWORD *)sub_186B270(0x78u);
                v18 = v125 + 1;
                *v125 = 2;
                v21 = v276;
                *a1 = v125 + 1;
                v17 = v282;
                v20 = v125 + 1;
              }
              *(_BYTE *)v20 = v21;
              v20[1] = v277;
              *((_DWORD *)v20 + 4) = v278;
              *((_BYTE *)v20 + 20) = BYTE4(v278) & 3 | *((_BYTE *)v20 + 20) & 0xFC;
              v22 = v279;
              v279 = 0;
              v20[3] = v22;
              *((_DWORD *)v20 + 8) = v280;
              *((_BYTE *)v20 + 36) = BYTE4(v280) & 3 | *((_BYTE *)v20 + 36) & 0xFC;
              v23 = v281;
              v281 = 0;
              *((_DWORD *)v20 + 12) = v17;
              v20[5] = v23;
              ++*((_DWORD *)v18 - 1);
              v24 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v278);
              sub_182CBA0(v24, &v280);
              if ( (unsigned int)sub_180B130() <= 9 )
                goto LABEL_26;
LABEL_81:
              if ( !(unsigned __int8)sub_186A530() )
              {
                v105 = sub_180B150();
                std::__ostream_insert<char,std::char_traits<char>>();
                v106 = *a1;
                v107 = 0x37FFFFFFC8LL;
                if ( *a1 )
                  v107 = 56LL * (unsigned int)(*(_DWORD *)(v106 - 4) - 1);
                sub_2DAFD0(v105, v106 + v107);
                std::__ostream_insert<char,std::char_traits<char>>();
                goto LABEL_26;
              }
              sub_186A4C0();
              v78 = sub_180B150();
              std::__ostream_insert<char,std::char_traits<char>>();
              v79 = *a1;
              v80 = 0x37FFFFFFC8LL;
              if ( *a1 )
                v80 = 56LL * (unsigned int)(*(_DWORD *)(v79 - 4) - 1);
              v81 = sub_2DAFD0(v78, v79 + v80);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v81, "\n");
              result = v4[2];
              goto LABEL_27;
            }
          }
          break;
        }
        if ( v4[2] == -1 )
          goto LABEL_19;
        goto LABEL_32;
      }
      v250 = 0;
LABEL_89:
      v220 = v5;
      v251 = 0;
      v252 = 0;
      v253 = 1;
      v254 = 0;
      sub_182CBA0(qword_1C7F2C0, &v253);
      BYTE4(v253) &= ~1u;
      LODWORD(v253) = 1;
      v255[0] = 1;
      v255[1] = 0;
      v256[0] = 1;
      v256[1] = 0;
      sub_182CBA0(qword_1C7F2C0, v256);
      BYTE4(v256[0]) &= ~1u;
      v87 = v4[2] == -1;
      LODWORD(v256[0]) = 1;
      v88 = v220;
      if ( v87 )
      {
LABEL_90:
        v276 = 1;
        v277 = 0;
        v278 = 1;
        v279 = 0;
        sub_182CBA0(qword_1C7F2C0, &v278);
        BYTE4(v278) &= ~1u;
        v89 = qword_1C7F2C0;
        LODWORD(v278) = 1;
        if ( (v256[0] & 0x100000000LL) == 0 && LODWORD(v256[0]) == 1 )
        {
          if ( (v276 & 0x100000000LL) != 0 || (v255[0] & 0x100000000LL) != 0 )
          {
            v208 = sub_182C7B0(qword_1C7F2C0, &v276, v255);
            v89 = qword_1C7F2C0;
            v90 = v208 >> 31;
          }
          else
          {
            LOBYTE(v90) = (int)v276 < SLODWORD(v255[0]);
          }
        }
        else
        {
          LOBYTE(v90) = sub_1848D40(qword_1C7F2C0, &v276, v255);
          v89 = qword_1C7F2C0;
        }
        v231 = v90;
        sub_182CBA0(v89, &v276);
        sub_182CBA0(v89, &v278);
        if ( !v231 )
        {
LABEL_94:
          if ( v250 )
            sub_1831620(qword_1C7F2C0, &v251);
          v276 = 1;
          v91 = v4[3];
          v277 = 0;
          v92 = qword_1C7F2C0;
          v278 = 0;
          v279 = 0;
          v280 = 1;
          v281 = 0;
          if ( (v251 & 0x100000000LL) != 0 )
          {
            sub_182C690(qword_1C7F2C0, &v278, &v251);
            if ( (v253 & 0x100000000LL) != 0 )
              goto LABEL_184;
LABEL_98:
            BYTE4(v280) &= ~1u;
            LODWORD(v280) = v253;
          }
          else
          {
            LODWORD(v278) = v251;
            if ( (v253 & 0x100000000LL) == 0 )
              goto LABEL_98;
LABEL_184:
            sub_182C690(v92, &v280, &v253);
          }
          v93 = (_QWORD *)*a1;
          v282 = v91;
          if ( v93 )
          {
            v94 = *((unsigned int *)v93 - 1);
            if ( (_DWORD)v94 == *((_DWORD *)v93 - 2) )
            {
              v232 = (unsigned int)(3 * v94 + 1) >> 1;
              v128 = 56 * v232 + 8;
              if ( 56 * (int)v94 + 8 >= v128 || (unsigned int)v94 >= (unsigned int)(3 * v94 + 1) >> 1 )
              {
                v217 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(&v271, "Overflow encountered when expanding vector");
                *v217 = (char *)off_1C63128;
                sub_2333C0(v217 + 1, &v271);
                sub_233E40((__int64)&v271);
                __cxa_throw(v217, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v129 = sub_186B270(v128);
              v130 = (_BYTE *)*a1;
              v131 = (_DWORD *)v129;
              v93 = (_QWORD *)(v129 + 8);
              if ( *a1 )
              {
                v132 = *((unsigned int *)v130 - 1);
                v131[1] = v132;
                v133 = 7 * v132;
                v134 = v130;
                v135 = &v130[8 * v133];
                v136 = v93;
                if ( v130 != v135 )
                {
                  do
                  {
                    v137 = *v134;
                    v138 = v134[20];
                    v134 += 56;
                    v136 += 7;
                    *((_BYTE *)v136 - 56) = v137;
                    *(v136 - 6) = *((_QWORD *)v134 - 6);
                    *((_DWORD *)v136 - 10) = *((_DWORD *)v134 - 10);
                    *((_BYTE *)v136 - 36) = v138 & 3 | *((_BYTE *)v136 - 36) & 0xFC;
                    v139 = *((_QWORD *)v134 - 4);
                    *((_QWORD *)v134 - 4) = 0;
                    *(v136 - 4) = v139;
                    v140 = *(v134 - 20);
                    *((_DWORD *)v136 - 6) = *((_DWORD *)v134 - 6);
                    *((_BYTE *)v136 - 20) = v140 & 3 | *((_BYTE *)v136 - 20) & 0xFC;
                    v141 = *((_QWORD *)v134 - 2);
                    *((_QWORD *)v134 - 2) = 0;
                    *(v136 - 2) = v141;
                    *((_DWORD *)v136 - 2) = *((_DWORD *)v134 - 2);
                  }
                  while ( v135 != v134 );
                }
                v142 = *((unsigned int *)v130 - 1);
                if ( (_DWORD)v142 )
                {
                  v236 = v131;
                  v238 = a1;
                  v240 = v4;
                  v143 = &v130[56 * v142];
                  v144 = v130;
                  v145 = v93;
                  do
                  {
                    v146 = qword_1C7F2C0;
                    sub_182CBA0(qword_1C7F2C0, v144 + 16);
                    v147 = v144 + 32;
                    v144 += 56;
                    sub_182CBA0(v146, v147);
                  }
                  while ( v144 != v143 );
                  a1 = v238;
                  v93 = v145;
                  v131 = v236;
                  v4 = v240;
                  v130 = (_BYTE *)*v238;
                }
                v239 = v131;
                sub_186B220(v130 - 8);
                v131 = v239;
                v95 = &v93[7 * (unsigned int)v239[1]];
              }
              else
              {
                *(_DWORD *)(v129 + 4) = 0;
                v95 = (_QWORD *)(v129 + 8);
              }
              v91 = v282;
              *a1 = v93;
              *v131 = v232;
            }
            else
            {
              v95 = &v93[7 * v94];
            }
          }
          else
          {
            v203 = (_QWORD *)sub_186B270(0x78u);
            *v203 = 2;
            v91 = v282;
            v93 = v203 + 1;
            *a1 = v203 + 1;
            v95 = v203 + 1;
          }
          *(_BYTE *)v95 = v276;
          v95[1] = v277;
          *((_DWORD *)v95 + 4) = v278;
          *((_BYTE *)v95 + 20) = BYTE4(v278) & 3 | *((_BYTE *)v95 + 20) & 0xFC;
          v96 = v279;
          v279 = 0;
          v95[3] = v96;
          *((_DWORD *)v95 + 8) = v280;
          *((_BYTE *)v95 + 36) = BYTE4(v280) & 3 | *((_BYTE *)v95 + 36) & 0xFC;
          v97 = v281;
          v281 = 0;
          v95[5] = v97;
          *((_DWORD *)v95 + 12) = v91;
          v98 = qword_1C7F2C0;
          ++*((_DWORD *)v93 - 1);
          sub_182CBA0(v98, &v278);
          sub_182CBA0(v98, &v280);
          if ( (unsigned int)sub_180B130() > 9 )
          {
            if ( (unsigned __int8)sub_186A530() )
            {
              sub_186A4C0();
              v99 = sub_180B150();
              std::__ostream_insert<char,std::char_traits<char>>();
              v100 = 0x37FFFFFFC8LL;
              v101 = *a1;
              if ( *a1 )
                v100 = 56LL * (unsigned int)(*(_DWORD *)(v101 - 4) - 1);
              v102 = sub_2DAFD0(v99, v101 + v100);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v102, "\n");
            }
            else
            {
              v122 = sub_180B150();
              std::__ostream_insert<char,std::char_traits<char>>();
              v123 = 0x37FFFFFFC8LL;
              v124 = *a1;
              if ( *a1 )
                v123 = 56LL * (unsigned int)(*(_DWORD *)(v124 - 4) - 1);
              sub_2DAFD0(v122, v124 + v123);
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          v103 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v255);
          sub_182CBA0(v103, v256);
          v104 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v251);
          sub_182CBA0(v104, &v253);
          result = v4[2];
          goto LABEL_27;
        }
        v276 = 0;
        v148 = qword_1C7F2C0;
        v277 = 0;
        v278 = 1;
        v279 = 0;
        if ( (v251 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v276, &v251);
        else
          LODWORD(v276) = v251;
        if ( (v253 & 0x100000000LL) != 0 )
        {
          sub_182C690(v148, &v278, &v253);
        }
        else
        {
          BYTE4(v278) &= ~1u;
          LODWORD(v278) = v253;
        }
        v149 = qword_1C7F2C0;
        if ( (_DWORD)v276
          && ((v255[0] & 0x100000000LL) != 0
           || LODWORD(v255[0]) != 1
           || (v256[0] & 0x100000000LL) != 0
           || LODWORD(v256[0]) != 1) )
        {
          sub_1831650(qword_1C7F2C0, &v276, v256);
          sub_1831650(v149, &v278, v255);
          if ( (int)v278 < 0 )
          {
            sub_1831620(v149, &v276);
            sub_1831620(v149, &v278);
          }
          v271 = 0;
          v272 = 0;
          sub_1832C70(v149, &v276, &v278, &v271);
          if ( (v271 & 0x100000000LL) != 0 || (_DWORD)v271 != 1 )
          {
            sub_1833EB0(v149, &v276, &v271, &v276);
            sub_1833EB0(v149, &v278, &v271, &v278);
          }
          sub_182CBA0(v149, &v271);
        }
        else
        {
          if ( (v276 & 0x100000000LL) != 0 )
            sub_182C690(qword_1C7F2C0, &v276, &v276);
          else
            BYTE4(v276) &= ~1u;
          if ( (v278 & 0x100000000LL) != 0 )
            sub_182C690(v149, &v278, &v278);
          else
            BYTE4(v278) &= ~1u;
        }
        BYTE4(v271) &= 0xFCu;
        v150 = qword_1C7F2C0;
        v274 &= 0xFCu;
        LODWORD(v271) = 0;
        v272 = 0;
        v273 = 1;
        v275 = 0;
        if ( (v276 & 0x100000000LL) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v271, &v276);
          if ( (v278 & 0x100000000LL) != 0 )
            goto LABEL_271;
LABEL_198:
          v274 &= ~1u;
          v273 = v278;
        }
        else
        {
          LODWORD(v271) = v276;
          if ( (v278 & 0x100000000LL) == 0 )
            goto LABEL_198;
LABEL_271:
          sub_182C690(v150, &v273, &v278);
        }
        v151 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v276);
        sub_182CBA0(v151, &v278);
        v152 = v271;
        v153 = qword_1C7F2C0;
        LODWORD(v271) = v251;
        LODWORD(v251) = v152;
        v154 = v272;
        v272 = v252;
        v252 = v154;
        v155 = BYTE4(v271) & 1;
        LOBYTE(v154) = BYTE4(v251) & 0xFC | BYTE4(v271) & 2;
        BYTE4(v271) = BYTE4(v251) & 1 | BYTE4(v271) & 0xFC | BYTE4(v251) & 2;
        BYTE4(v251) = v155 | v154;
        LODWORD(v154) = v273;
        v273 = v253;
        LODWORD(v253) = v154;
        v156 = v275;
        v275 = v254;
        v254 = v156;
        LOBYTE(v156) = v274 & 1 | BYTE4(v253) & 0xFC | v274 & 2;
        v274 = BYTE4(v253) & 1 | v274 & 0xFC | BYTE4(v253) & 2;
        BYTE4(v253) = v156;
        sub_182CBA0(qword_1C7F2C0, &v271);
        sub_182CBA0(v153, &v273);
        goto LABEL_94;
      }
      while ( 2 )
      {
        v268 = 0;
        v269 = 1;
        v270 = 0;
        v267 = (unsigned int)(char)(v88 - 48);
        sub_182CBA0(qword_1C7F2C0, &v269);
        BYTE4(v269) &= ~1u;
        LODWORD(v269) = 1;
        v257 = 10;
        v258 = 0;
        v259 = 1;
        v260 = 0;
        sub_182CBA0(qword_1C7F2C0, &v259);
        BYTE4(v259) &= ~1u;
        v120 = qword_1C7F2C0;
        LODWORD(v259) = 1;
        v276 = 0;
        v277 = 0;
        v278 = 1;
        v279 = 0;
        if ( (v251 & 0x100000000LL) != 0 )
        {
          sub_182C690(qword_1C7F2C0, &v276, &v251);
          if ( (v253 & 0x100000000LL) != 0 )
          {
LABEL_137:
            sub_182C690(v120, &v278, &v253);
            goto LABEL_114;
          }
        }
        else
        {
          LODWORD(v276) = v251;
          if ( (v253 & 0x100000000LL) != 0 )
            goto LABEL_137;
        }
        BYTE4(v278) &= ~1u;
        LODWORD(v278) = v253;
LABEL_114:
        v108 = qword_1C7F2C0;
        if ( (v278 & 0x100000000LL) != 0 || (_DWORD)v278 != 1 || (v259 & 0x100000000LL) != 0 || (_DWORD)v259 != 1 )
        {
          sub_1848FF0(qword_1C7F2C0, &v276, &v257);
        }
        else
        {
          sub_1831650(qword_1C7F2C0, &v276, &v257);
          sub_182CBA0(v108, &v278);
          BYTE4(v278) &= ~1u;
          LODWORD(v278) = 1;
        }
        v262 &= 0xFCu;
        v109 = qword_1C7F2C0;
        v265 &= 0xFCu;
        v261 = 0;
        v263 = 0;
        v264 = 1;
        v266 = 0;
        if ( (v276 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v261, &v276);
        else
          v261 = v276;
        if ( (v278 & 0x100000000LL) != 0 )
        {
          sub_182C690(v109, &v264, &v278);
        }
        else
        {
          v265 &= ~1u;
          v264 = v278;
        }
        v110 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v276);
        sub_182CBA0(v110, &v278);
        v111 = qword_1C7F2C0;
        v276 = 0;
        v277 = 0;
        v278 = 1;
        v279 = 0;
        if ( (v262 & 1) != 0 )
          sub_182C690(qword_1C7F2C0, &v276, &v261);
        else
          LODWORD(v276) = v261;
        if ( (v265 & 1) != 0 )
        {
          sub_182C690(v111, &v278, &v264);
        }
        else
        {
          BYTE4(v278) &= ~1u;
          LODWORD(v278) = v264;
        }
        v112 = qword_1C7F2C0;
        if ( (_DWORD)v267 )
        {
          if ( (_DWORD)v276 )
          {
            if ( (v278 & 0x100000000LL) != 0 || (_DWORD)v278 != 1 || (v269 & 0x100000000LL) != 0 || (_DWORD)v269 != 1 )
            {
              sub_1851D20(qword_1C7F2C0, &v276, &v267, &v276);
            }
            else
            {
              sub_1831A80(qword_1C7F2C0, &v276, &v267, &v276);
              sub_182CBA0(v112, &v278);
              BYTE4(v278) &= ~1u;
              LODWORD(v278) = 1;
            }
          }
          else
          {
            if ( (v267 & 0x100000000LL) != 0 )
            {
              v227 = qword_1C7F2C0;
              sub_182C690(qword_1C7F2C0, &v276, &v267);
              v112 = v227;
            }
            else
            {
              BYTE4(v276) &= ~1u;
              LODWORD(v276) = v267;
            }
            if ( (v269 & 0x100000000LL) != 0 )
            {
              sub_182C690(v112, &v278, &v269);
            }
            else
            {
              BYTE4(v278) &= ~1u;
              LODWORD(v278) = v269;
            }
          }
        }
        else
        {
          if ( (v276 & 0x100000000LL) != 0 )
          {
            v226 = qword_1C7F2C0;
            sub_182C690(qword_1C7F2C0, &v276, &v276);
            v112 = v226;
          }
          else
          {
            BYTE4(v276) &= ~1u;
          }
          if ( (v278 & 0x100000000LL) != 0 )
            sub_182C690(v112, &v278, &v278);
          else
            BYTE4(v278) &= ~1u;
        }
        BYTE4(v271) &= 0xFCu;
        v113 = qword_1C7F2C0;
        v274 &= 0xFCu;
        LODWORD(v271) = 0;
        v272 = 0;
        v273 = 1;
        v275 = 0;
        if ( (v276 & 0x100000000LL) != 0 )
          sub_182C690(qword_1C7F2C0, &v271, &v276);
        else
          LODWORD(v271) = v276;
        if ( (v278 & 0x100000000LL) != 0 )
        {
          sub_182C690(v113, &v273, &v278);
        }
        else
        {
          v274 &= ~1u;
          v273 = v278;
        }
        v221 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v276);
        sub_182CBA0(v221, &v278);
        v114 = v271;
        LODWORD(v271) = v251;
        LODWORD(v251) = v114;
        v115 = v272;
        v272 = v252;
        v252 = v115;
        v222 = qword_1C7F2C0;
        v116 = BYTE4(v271) & 1;
        LOBYTE(v115) = BYTE4(v251) & 0xFC | BYTE4(v271) & 2;
        BYTE4(v271) = BYTE4(v251) & 1 | BYTE4(v271) & 0xFC | BYTE4(v251) & 2;
        BYTE4(v251) = v116 | v115;
        LODWORD(v115) = v273;
        v273 = v253;
        LODWORD(v253) = v115;
        v117 = v275;
        v275 = v254;
        v254 = v117;
        v118 = v274 & 1;
        LOBYTE(v117) = BYTE4(v253) & 0xFC | v274 & 2;
        v274 = BYTE4(v253) & 1 | v274 & 0xFC | BYTE4(v253) & 2;
        BYTE4(v253) = v118 | v117;
        sub_182CBA0(qword_1C7F2C0, &v271);
        sub_182CBA0(v222, &v273);
        v223 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v261);
        sub_182CBA0(v223, &v264);
        v224 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v257);
        sub_182CBA0(v224, &v259);
        v225 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v267);
        sub_182CBA0(v225, &v269);
        v119 = std::istream::get(*(std::istream **)v4);
        v4[2] = v119;
        v88 = v119;
        if ( (unsigned __int8)(v119 - 48) > 9u )
        {
          if ( (_BYTE)v119 != 46 )
            goto LABEL_90;
          v157 = std::istream::get(*(std::istream **)v4);
          v4[2] = v157;
          if ( (unsigned __int8)(v157 - 48) > 9u )
            goto LABEL_90;
          v158 = qword_1C7F2C0;
          while ( 2 )
          {
            v268 = 0;
            v269 = 1;
            v270 = 0;
            v267 = (unsigned int)(char)(v157 - 48);
            sub_182CBA0(v158, &v269);
            LODWORD(v269) = 1;
            BYTE4(v269) &= ~1u;
            v257 = 10;
            v258 = 0;
            v259 = 1;
            v260 = 0;
            sub_182CBA0(qword_1C7F2C0, &v259);
            BYTE4(v259) &= ~1u;
            v169 = qword_1C7F2C0;
            LODWORD(v259) = 1;
            v276 = 0;
            v277 = 0;
            v278 = 1;
            v279 = 0;
            if ( (v251 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v276, &v251);
              if ( (v253 & 0x100000000LL) != 0 )
              {
LABEL_231:
                sub_182C690(v169, &v278, &v253);
                goto LABEL_205;
              }
            }
            else
            {
              LODWORD(v276) = v251;
              if ( (v253 & 0x100000000LL) != 0 )
                goto LABEL_231;
            }
            BYTE4(v278) &= ~1u;
            LODWORD(v278) = v253;
LABEL_205:
            v159 = qword_1C7F2C0;
            if ( (v278 & 0x100000000LL) != 0 || (_DWORD)v278 != 1 || (v259 & 0x100000000LL) != 0 || (_DWORD)v259 != 1 )
            {
              sub_1848FF0(qword_1C7F2C0, &v276, &v257);
            }
            else
            {
              sub_1831650(qword_1C7F2C0, &v276, &v257);
              sub_182CBA0(v159, &v278);
              BYTE4(v278) &= ~1u;
              LODWORD(v278) = 1;
            }
            v262 &= 0xFCu;
            v160 = qword_1C7F2C0;
            v265 &= 0xFCu;
            v261 = 0;
            v263 = 0;
            v264 = 1;
            v266 = 0;
            if ( (v276 & 0x100000000LL) != 0 )
              sub_182C690(qword_1C7F2C0, &v261, &v276);
            else
              v261 = v276;
            if ( (v278 & 0x100000000LL) != 0 )
            {
              sub_182C690(v160, &v264, &v278);
            }
            else
            {
              v265 &= ~1u;
              v264 = v278;
            }
            v241 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v276);
            sub_182CBA0(v241, &v278);
            v161 = qword_1C7F2C0;
            v276 = 0;
            v277 = 0;
            v278 = 1;
            v279 = 0;
            if ( (v262 & 1) != 0 )
              sub_182C690(qword_1C7F2C0, &v276, &v261);
            else
              LODWORD(v276) = v261;
            if ( (v265 & 1) != 0 )
            {
              sub_182C690(v161, &v278, &v264);
            }
            else
            {
              BYTE4(v278) &= ~1u;
              LODWORD(v278) = v264;
            }
            v162 = qword_1C7F2C0;
            if ( (_DWORD)v267 )
            {
              if ( (_DWORD)v276 )
              {
                if ( (v278 & 0x100000000LL) != 0
                  || (_DWORD)v278 != 1
                  || (v269 & 0x100000000LL) != 0
                  || (_DWORD)v269 != 1 )
                {
                  sub_1851D20(qword_1C7F2C0, &v276, &v267, &v276);
                }
                else
                {
                  sub_1831A80(qword_1C7F2C0, &v276, &v267, &v276);
                  sub_182CBA0(v162, &v278);
                  BYTE4(v278) &= ~1u;
                  LODWORD(v278) = 1;
                }
              }
              else
              {
                if ( (v267 & 0x100000000LL) != 0 )
                {
                  v249 = qword_1C7F2C0;
                  sub_182C690(qword_1C7F2C0, &v276, &v267);
                  v162 = v249;
                }
                else
                {
                  BYTE4(v276) &= ~1u;
                  LODWORD(v276) = v267;
                }
                if ( (v269 & 0x100000000LL) != 0 )
                {
                  sub_182C690(v162, &v278, &v269);
                }
                else
                {
                  BYTE4(v278) &= ~1u;
                  LODWORD(v278) = v269;
                }
              }
            }
            else
            {
              if ( (v276 & 0x100000000LL) != 0 )
              {
                v248 = qword_1C7F2C0;
                sub_182C690(qword_1C7F2C0, &v276, &v276);
                v162 = v248;
              }
              else
              {
                BYTE4(v276) &= ~1u;
              }
              if ( (v278 & 0x100000000LL) != 0 )
                sub_182C690(v162, &v278, &v278);
              else
                BYTE4(v278) &= ~1u;
            }
            BYTE4(v271) &= 0xFCu;
            v163 = qword_1C7F2C0;
            v274 &= 0xFCu;
            LODWORD(v271) = 0;
            v272 = 0;
            v273 = 1;
            v275 = 0;
            if ( (v276 & 0x100000000LL) != 0 )
            {
              sub_182C690(qword_1C7F2C0, &v271, &v276);
              if ( (v278 & 0x100000000LL) != 0 )
                goto LABEL_252;
LABEL_223:
              v274 &= ~1u;
              v273 = v278;
            }
            else
            {
              LODWORD(v271) = v276;
              if ( (v278 & 0x100000000LL) == 0 )
                goto LABEL_223;
LABEL_252:
              sub_182C690(v163, &v273, &v278);
            }
            v242 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v276);
            sub_182CBA0(v242, &v278);
            v164 = v271;
            LODWORD(v271) = v251;
            LODWORD(v251) = v164;
            v165 = v272;
            v272 = v252;
            v252 = v165;
            v243 = qword_1C7F2C0;
            v166 = BYTE4(v271) & 1;
            LOBYTE(v165) = BYTE4(v251) & 0xFC | BYTE4(v271) & 2;
            BYTE4(v271) = BYTE4(v251) & 1 | BYTE4(v271) & 0xFC | BYTE4(v251) & 2;
            BYTE4(v251) = v166 | v165;
            LODWORD(v165) = v273;
            v273 = v253;
            LODWORD(v253) = v165;
            v167 = v275;
            v275 = v254;
            v254 = v167;
            LOBYTE(v167) = v274 & 1 | BYTE4(v253) & 0xFC | v274 & 2;
            v274 = BYTE4(v253) & 1 | v274 & 0xFC | BYTE4(v253) & 2;
            BYTE4(v253) = v167;
            sub_182CBA0(qword_1C7F2C0, &v271);
            sub_182CBA0(v243, &v273);
            v244 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v261);
            sub_182CBA0(v244, &v264);
            v245 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v257);
            sub_182CBA0(v245, &v259);
            v246 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v267);
            sub_182CBA0(v246, &v269);
            v4[2] = std::istream::get(*(std::istream **)v4);
            v276 = 10;
            v277 = 0;
            v278 = 1;
            v279 = 0;
            sub_182CBA0(qword_1C7F2C0, &v278);
            LODWORD(v278) = 1;
            v168 = qword_1C7F2C0;
            BYTE4(v278) &= ~1u;
            if ( (v256[0] & 0x100000000LL) == 0 && LODWORD(v256[0]) == 1 )
            {
              sub_1831650(qword_1C7F2C0, v255, &v276);
              sub_182CBA0(v168, v256);
              BYTE4(v256[0]) &= ~1u;
              LODWORD(v256[0]) = 1;
            }
            else
            {
              sub_1848FF0(qword_1C7F2C0, v255, &v276);
            }
            v247 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v276);
            sub_182CBA0(v247, &v278);
            v157 = v4[2];
            if ( (unsigned __int8)(v157 - 48) > 9u )
              goto LABEL_90;
            v158 = qword_1C7F2C0;
            continue;
          }
        }
        continue;
      }
    }
    v82 = std::istream::get(*(std::istream **)v4);
    v4[2] = v82;
    v83 = v82;
    LOBYTE(v5) = v82;
    v84 = (_BYTE *)a1[2];
    if ( v84 )
    {
      v85 = *((_DWORD *)v84 - 2);
      *((_DWORD *)v84 - 1) = 0;
      if ( !v85 )
      {
        v121 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v276, "Overflow encountered when expanding vector");
        *v121 = (char *)off_1C63128;
        sub_2333C0(v121 + 1, &v276);
        sub_233E40((__int64)&v276);
        __cxa_throw(v121, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
    }
    else
    {
      v127 = (_QWORD *)sub_186B270(0xAu);
      LOBYTE(v5) = v83;
      *v127 = 2;
      v84 = v127 + 1;
      a1[2] = v84;
    }
    *v84 = 45;
    v86 = a1[2];
    v250 = 1;
    ++*(_DWORD *)(v86 - 4);
    if ( (unsigned __int8)(v83 - 48) <= 9u )
      goto LABEL_89;
    if ( (unsigned __int8)(v83 - 9) <= 1u || v83 == 32 )
      goto LABEL_75;
    v170 = v4[2];
    v171 = v5;
    do
    {
      if ( v170 == -1 )
        break;
      if ( v86 )
      {
        v172 = *(unsigned int *)(v86 - 4);
        if ( (_DWORD)v172 == *(_DWORD *)(v86 - 8) )
        {
          v204 = (unsigned int)(3 * v172 + 1) >> 1;
          if ( (int)v172 + 8 >= v204 + 8 || (unsigned int)v172 >= v204 )
          {
            v211 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v276, "Overflow encountered when expanding vector");
            *v211 = (char *)off_1C63128;
            sub_2333C0(v211 + 1, &v276);
            sub_233E40((__int64)&v276);
            __cxa_throw(v211, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v205 = (unsigned int *)sub_186B300((void *)(v86 - 8), v204 + 8);
          v206 = v205 + 2;
          *v205 = v204;
          v207 = v205[1];
          a1[2] = v206;
          v173 = (char *)v206 + v207;
        }
        else
        {
          v173 = (_BYTE *)(v172 + v86);
        }
      }
      else
      {
        v210 = (_QWORD *)sub_186B270(0xAu);
        *v210 = 2;
        v173 = v210 + 1;
        a1[2] = v173;
      }
      *v173 = v171;
      v174 = *(std::istream **)v4;
      ++*(_DWORD *)(a1[2] - 4LL);
      v170 = std::istream::get(v174);
      v4[2] = v170;
      v171 = v170;
      v86 = a1[2];
      if ( (unsigned __int8)(v170 - 9) <= 1u )
        break;
    }
    while ( (_BYTE)v170 != 32 );
    if ( v86 )
    {
LABEL_75:
      v67 = *(unsigned int *)(v86 - 4);
      if ( (_DWORD)v67 == *(_DWORD *)(v86 - 8) )
      {
        v199 = (unsigned int)(3 * v67 + 1) >> 1;
        if ( (int)v67 + 8 >= v199 + 8 || (unsigned int)v67 >= v199 )
        {
          v214 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v276, "Overflow encountered when expanding vector");
          *v214 = (char *)off_1C63128;
          sub_2333C0(v214 + 1, &v276);
          sub_233E40((__int64)&v276);
          __cxa_throw(v214, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v200 = (unsigned int *)sub_186B300((void *)(v86 - 8), v199 + 8);
        v201 = v200 + 2;
        *v200 = v199;
        v202 = v200[1];
        a1[2] = v201;
        v68 = (char *)v201 + v202;
      }
      else
      {
        v68 = (_BYTE *)(v67 + v86);
      }
    }
    else
    {
      v175 = (_QWORD *)sub_186B270(0xAu);
      *v175 = 2;
      v68 = v175 + 1;
      a1[2] = v68;
    }
    *v68 = 0;
    v69 = a1[2];
    ++*(_DWORD *)(v69 - 4);
    v70 = v4[3];
    sub_180C5A0(&v267, v69);
    v71 = (_QWORD *)*a1;
    LOBYTE(v276) = 0;
    v278 = 0;
    v277 = v267;
    v279 = 0;
    v280 = 1;
    v281 = 0;
    v282 = v70;
    if ( v71 )
    {
      v72 = *((unsigned int *)v71 - 1);
      if ( (_DWORD)v72 == *((_DWORD *)v71 - 2) )
      {
        v176 = (unsigned int)(3 * v72 + 1) >> 1;
        v177 = 56 * v176 + 8;
        if ( 56 * (int)v72 + 8 >= v177 || (unsigned int)v72 >= v176 )
        {
          v212 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(&v271, "Overflow encountered when expanding vector");
          *v212 = (char *)off_1C63128;
          sub_2333C0(v212 + 1, &v271);
          sub_233E40((__int64)&v271);
          __cxa_throw(v212, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v178 = sub_186B270(v177);
        v179 = (_BYTE *)*a1;
        v180 = (_DWORD *)v178;
        v71 = (_QWORD *)(v178 + 8);
        if ( *a1 )
        {
          v181 = *((unsigned int *)v179 - 1);
          v180[1] = v181;
          v182 = 7 * v181;
          v183 = v179;
          v184 = &v179[8 * v182];
          v185 = v71;
          if ( v179 != v184 )
          {
            do
            {
              v186 = *v183;
              v187 = v183[20];
              v183 += 56;
              v185 += 7;
              *((_BYTE *)v185 - 56) = v186;
              *(v185 - 6) = *((_QWORD *)v183 - 6);
              *((_DWORD *)v185 - 10) = *((_DWORD *)v183 - 10);
              *((_BYTE *)v185 - 36) = v187 & 3 | *((_BYTE *)v185 - 36) & 0xFC;
              v188 = *((_QWORD *)v183 - 4);
              *((_QWORD *)v183 - 4) = 0;
              *(v185 - 4) = v188;
              v189 = *(v183 - 20);
              *((_DWORD *)v185 - 6) = *((_DWORD *)v183 - 6);
              *((_BYTE *)v185 - 20) = v189 & 3 | *((_BYTE *)v185 - 20) & 0xFC;
              v190 = *((_QWORD *)v183 - 2);
              *((_QWORD *)v183 - 2) = 0;
              *(v185 - 2) = v190;
              *((_DWORD *)v185 - 2) = *((_DWORD *)v183 - 2);
            }
            while ( v184 != v183 );
          }
          v191 = *((unsigned int *)v179 - 1);
          if ( (_DWORD)v191 )
          {
            v228 = v71;
            v233 = v180;
            v192 = 7 * v191;
            v193 = v4;
            v194 = v179;
            v237 = a1;
            v195 = &v179[8 * v192];
            v196 = v193;
            do
            {
              v197 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v194 + 16);
              v198 = v194 + 32;
              v194 += 56;
              sub_182CBA0(v197, v198);
            }
            while ( v194 != v195 );
            a1 = v237;
            v4 = v196;
            v71 = v228;
            v180 = v233;
            v179 = (_BYTE *)*v237;
          }
          v234 = v180;
          sub_186B220(v179 - 8);
          v180 = v234;
          v73 = &v71[7 * (unsigned int)v234[1]];
        }
        else
        {
          *(_DWORD *)(v178 + 4) = 0;
          v73 = (_QWORD *)(v178 + 8);
        }
        *a1 = v71;
        v74 = v276;
        *v180 = v176;
        v70 = v282;
      }
      else
      {
        v73 = &v71[7 * v72];
        v74 = 0;
      }
    }
    else
    {
      v209 = (_QWORD *)sub_186B270(0x78u);
      *v209 = 2;
      v74 = v276;
      v71 = v209 + 1;
      v70 = v282;
      *a1 = v209 + 1;
      v73 = v209 + 1;
    }
    *(_BYTE *)v73 = v74;
    v73[1] = v277;
    *((_DWORD *)v73 + 4) = v278;
    *((_BYTE *)v73 + 20) = BYTE4(v278) & 3 | *((_BYTE *)v73 + 20) & 0xFC;
    v75 = v279;
    v279 = 0;
    v73[3] = v75;
    *((_DWORD *)v73 + 8) = v280;
    *((_BYTE *)v73 + 36) = BYTE4(v280) & 3 | *((_BYTE *)v73 + 36) & 0xFC;
    v76 = v281;
    v281 = 0;
    *((_DWORD *)v73 + 12) = v70;
    v73[5] = v76;
    ++*((_DWORD *)v71 - 1);
    v77 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v278);
    sub_182CBA0(v77, &v280);
    if ( (unsigned int)sub_180B130() > 9 )
      goto LABEL_81;
LABEL_26:
    result = v4[2];
LABEL_27:
    if ( (_DWORD)result == -1 )
      return result;
  }
  do
  {
    v30 = *(std::istream **)v4;
    if ( (_DWORD)result == 10 )
    {
      ++v4[3];
      result = std::istream::get(v30);
      v4[2] = result;
      goto LABEL_27;
    }
    result = std::istream::get(v30);
    v4[2] = result;
  }
  while ( (_DWORD)result != -1 );
  return result;
}

