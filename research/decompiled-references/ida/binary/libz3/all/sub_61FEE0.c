_QWORD *__fastcall sub_61FEE0(_QWORD *a1, __int64 a2, double a3)
{
  char **v3; // r12
  char **v4; // r12
  char **v5; // r12
  char **v6; // r12
  char **v7; // r12
  char **exception; // r12
  __int64 v9; // r8
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __m128i *v14; // rcx
  unsigned int v15; // ecx
  __int64 *v16; // rbx
  int v17; // r9d
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // r13d
  size_t v24; // r12
  _OWORD *v25; // rax
  _OWORD *v26; // rcx
  _OWORD *v27; // rdx
  _QWORD *v28; // r12
  _QWORD *v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rdi
  bool v32; // zf
  _QWORD *v33; // r12
  _QWORD *v34; // r13
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // r8
  int v38; // r9d
  unsigned int v39; // r12d
  __int64 v40; // r15
  __int64 v41; // r14
  __int64 v42; // rdx
  int v43; // eax
  __int64 *v44; // rdx
  __int64 v45; // r13
  unsigned int v46; // eax
  unsigned int v47; // edx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r14
  __int64 v52; // rdx
  int v53; // eax
  __int64 *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // r13
  unsigned int v57; // eax
  unsigned int v58; // edx
  size_t v59; // rsi
  unsigned int *v60; // rax
  __int64 v61; // rax
  __m128i *v62; // r14
  unsigned __int64 v63; // rsi
  _OWORD *v64; // rax
  __int64 v65; // rdx
  __m128i v66; // kr00_16
  unsigned int v67; // r14d
  __int64 v68; // r13
  unsigned int v69; // eax
  __int64 v70; // rcx
  int v71; // eax
  __int64 *v72; // rcx
  int v73; // ecx
  int v74; // r8d
  int v75; // r9d
  __int64 v76; // rdi
  __int64 v77; // r14
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // r12
  unsigned int v81; // eax
  __int64 v82; // rdx
  int v83; // eax
  __int64 *v84; // rdx
  void *v85; // r12
  unsigned int v86; // r15d
  __int64 v87; // r12
  unsigned int v88; // edx
  unsigned int v89; // r13d
  size_t v90; // rsi
  unsigned int *v91; // rax
  char *v92; // rdi
  __int64 v93; // rdx
  int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // r9
  __int64 *v97; // rcx
  __int64 v98; // rax
  int v99; // edi
  unsigned int v100; // edx
  __int64 *v101; // rsi
  __int64 v102; // rdx
  __int64 *i; // rax
  __int64 v104; // rdx
  __int64 *v105; // r12
  __int64 v106; // rax
  unsigned __int64 v107; // r13
  __int64 v108; // rsi
  unsigned int v109; // r15d
  size_t v110; // rsi
  unsigned int *v111; // rax
  __int64 v112; // rdx
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  __int64 v115; // rax
  unsigned int v116; // r13d
  size_t v117; // rsi
  unsigned int *v118; // rax
  __int64 v119; // rdx
  _QWORD *v120; // rax
  __int64 v121; // rax
  __m128i *v122; // rsi
  __int64 v123; // r13
  __int64 v124; // rax
  __int64 v125; // r12
  void (__fastcall ***v126)(void *); // r14
  _QWORD *v127; // r12
  _QWORD *v128; // r13
  __int64 v129; // rsi
  __int64 v130; // rdi
  int v131; // ecx
  char *v132; // rdi
  __int64 v133; // rsi
  char *v134; // rax
  char *v135; // rdx
  unsigned int v136; // ecx
  unsigned int v137; // r13d
  size_t v138; // r12
  _OWORD *v139; // rdx
  _OWORD *v140; // rcx
  _OWORD *v141; // rax
  unsigned __int64 v142; // r12
  __int64 *v143; // r14
  __int64 v144; // rsi
  __int64 v146; // r15
  _QWORD *v147; // rdx
  unsigned int v148; // eax
  __int64 v149; // rcx
  int v150; // eax
  _QWORD *v151; // rcx
  __int64 v152; // rcx
  int v153; // edi
  unsigned int v154; // r10d
  _QWORD *v155; // r12
  unsigned int v156; // r8d
  __int64 v157; // rcx
  _QWORD *v158; // r13
  int v159; // esi
  _QWORD *v160; // r9
  _QWORD *v161; // rax
  _QWORD *v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rax
  unsigned int v165; // r12d
  size_t v166; // rsi
  unsigned int *v167; // rax
  __int64 v168; // r13
  _QWORD *v169; // rax
  int v170; // r10d
  char *v171; // r14
  char *v172; // r9
  __int64 v173; // rax
  _QWORD *v174; // rdx
  __int64 v175; // rdi
  _QWORD *v176; // rax
  __int64 v177; // rdx
  _QWORD *v178; // rax
  unsigned int v179; // esi
  _QWORD *v180; // rax
  size_t v181; // rsi
  __m128i *ptr; // [rsp+8h] [rbp-118h]
  __int64 v183; // [rsp+10h] [rbp-110h]
  __int64 v184; // [rsp+18h] [rbp-108h]
  unsigned int v185; // [rsp+20h] [rbp-100h]
  __int64 v186; // [rsp+28h] [rbp-F8h]
  __int64 v188; // [rsp+38h] [rbp-E8h]
  int v189; // [rsp+38h] [rbp-E8h]
  __int64 v190; // [rsp+40h] [rbp-E0h]
  unsigned int v191; // [rsp+48h] [rbp-D8h]
  _QWORD *v192; // [rsp+50h] [rbp-D0h]
  unsigned int v193; // [rsp+58h] [rbp-C8h]
  unsigned int v194; // [rsp+58h] [rbp-C8h]
  __int64 v195; // [rsp+58h] [rbp-C8h]
  __int64 v196; // [rsp+60h] [rbp-C0h]
  int v197; // [rsp+60h] [rbp-C0h]
  __int64 v198; // [rsp+60h] [rbp-C0h]
  int v199; // [rsp+68h] [rbp-B8h]
  void *v200; // [rsp+68h] [rbp-B8h]
  unsigned int v201; // [rsp+68h] [rbp-B8h]
  _DWORD *v202; // [rsp+70h] [rbp-B0h]
  __int64 v203; // [rsp+78h] [rbp-A8h]
  __int32 v204; // [rsp+78h] [rbp-A8h]
  __int64 v205; // [rsp+88h] [rbp-98h] BYREF
  __int64 v206; // [rsp+90h] [rbp-90h]
  __m128i v207; // [rsp+A0h] [rbp-80h] BYREF
  __m128i v208; // [rsp+B0h] [rbp-70h] BYREF
  _QWORD v209[2]; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v210[10]; // [rsp+D0h] [rbp-50h] BYREF

  v203 = (__int64)a1;
  if ( !(unsigned __int8)sub_64B380(a1[4]) )
    return nullptr;
  v184 = *(_QWORD *)(a2 + 8);
  v192 = (_QWORD *)sub_186B270(0xF8u);
  sub_63D370(v192, a1[4]);
  v10 = *(__int64 **)(a2 + 24);
  if ( v10 )
  {
    v11 = a1[4];
    v12 = a1[3];
    v13 = *((unsigned int *)v10 - 1);
    v205 = 0;
    v14 = *(__m128i **)(v11 + 2952);
    v186 = v12;
    v206 = v12;
    ptr = v14;
    if ( !v14 )
    {
      v15 = v203;
      *(_QWORD *)(v203 + 112) = 0;
      if ( (_DWORD)v13 )
      {
LABEL_5:
        v202 = nullptr;
        v183 = 8 * v13;
        v196 = *v10;
        v188 = 0;
        v190 = 0;
        v185 = *(_DWORD *)(*v10 + 56);
        v191 = *(_DWORD *)(*v10 + 68);
        v16 = nullptr;
        while ( 1 )
        {
          if ( v205 )
            *(_DWORD *)(v205 - 4) = 0;
          v17 = *(_DWORD *)(v203 + 100);
          if ( !v17 )
          {
            LODWORD(v9) = *(_DWORD *)(v203 + 104);
            if ( !(_DWORD)v9 )
              goto LABEL_24;
          }
          v15 = 0;
          v18 = *(_QWORD **)(v203 + 88);
          v19 = *(unsigned int *)(v203 + 96);
          v20 = v18;
          v21 = &v18[2 * v19];
          if ( v18 != v21 )
          {
            do
            {
              while ( *v20 )
              {
                *v20 = 0;
                v20 += 2;
                if ( v21 == v20 )
                  goto LABEL_15;
              }
              v20 += 2;
              ++v15;
            }
            while ( v21 != v20 );
LABEL_15:
            if ( (unsigned int)v19 > 0x10 )
            {
              v15 *= 4;
              if ( 3 * (int)v19 < v15 )
                break;
            }
          }
LABEL_23:
          *(_QWORD *)(v203 + 100) = 0;
LABEL_24:
          v28 = *(_QWORD **)(v203 + 64);
          if ( v28 )
          {
            v29 = &v28[*((unsigned int *)v28 - 1)];
            if ( v28 >= v29 )
              goto LABEL_32;
            do
            {
              while ( 1 )
              {
                v30 = *v28;
                if ( *v28 )
                {
                  v31 = *(_QWORD *)(v203 + 56);
                  v32 = (*(_DWORD *)(v30 + 8))-- == 1;
                  if ( v32 )
                    break;
                }
                if ( ++v28 >= v29 )
                  goto LABEL_31;
              }
              sub_15D7BC0(v31, v30);
              ++v28;
            }
            while ( v28 < v29 );
LABEL_31:
            v28 = *(_QWORD **)(v203 + 64);
            if ( v28 )
LABEL_32:
              *((_DWORD *)v28 - 1) = 0;
          }
          v33 = *(_QWORD **)(v203 + 80);
          if ( v33 )
          {
            v34 = &v33[*((unsigned int *)v33 - 1)];
            if ( v33 >= v34 )
              goto LABEL_41;
            do
            {
              while ( 1 )
              {
                v35 = *v33;
                if ( *v33 )
                {
                  v36 = *(_QWORD *)(v203 + 72);
                  v32 = (*(_DWORD *)(v35 + 8))-- == 1;
                  if ( v32 )
                    break;
                }
                if ( ++v33 >= v34 )
                  goto LABEL_40;
              }
              sub_15D7BC0(v36, v35);
              ++v33;
            }
            while ( v33 < v34 );
LABEL_40:
            v33 = *(_QWORD **)(v203 + 80);
            if ( v33 )
LABEL_41:
              *((_DWORD *)v33 - 1) = 0;
          }
          sub_62B3F0(v196, *(_QWORD *)(v203 + 24), (unsigned int)&v205, v15, v9, v17);
          if ( v205 )
            v39 = *(_DWORD *)(v205 - 4);
          else
            v39 = 0;
          if ( v191 )
          {
            v40 = v196 + 8LL * v191;
            v41 = v196;
            sub_61EBF0(&v208, (_QWORD *)v203, v39, *(_QWORD *)(v196 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            while ( 1 )
            {
              v45 = v208.m128i_i64[0];
              if ( !v16 )
                break;
              v46 = *((_DWORD *)v16 - 1);
              if ( v46 != *((_DWORD *)v16 - 2) )
              {
                v42 = v46;
                v43 = v46 + 1;
                v44 = &v16[v42];
                goto LABEL_47;
              }
              v47 = (3 * v46 + 1) >> 1;
              v48 = 8 * v47 + 8;
              if ( 8 * v46 + 8 >= (unsigned int)v48 || v46 >= v47 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v210, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v210);
                sub_233E40((__int64)v210);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              v193 = (3 * v46 + 1) >> 1;
              v49 = (unsigned int *)sub_186B300(v16 - 1, v48);
              v16 = (__int64 *)(v49 + 2);
              v41 += 8;
              *v49 = v193;
              LODWORD(v49) = v49[1];
              v16[(unsigned int)v49] = v45;
              *((_DWORD *)v16 - 1) = (_DWORD)v49 + 1;
              if ( v41 == v40 )
                goto LABEL_54;
LABEL_48:
              sub_61EBF0(&v208, (_QWORD *)v203, v39, *(_QWORD *)(v41 + 80) & 0xFFFFFFFFFFFFFFF8LL);
            }
            v113 = (_QWORD *)sub_186B270(0x18u);
            *v113 = 2;
            v16 = v113 + 1;
            v43 = 1;
            v44 = v16;
LABEL_47:
            v41 += 8;
            *v44 = v45;
            *((_DWORD *)v16 - 1) = v43;
            if ( v41 == v40 )
              goto LABEL_54;
            goto LABEL_48;
          }
LABEL_54:
          v50 = v191;
          if ( v191 < v185 )
          {
            v51 = v196 + 8LL * v191;
            do
            {
              v55 = sub_61F790(v203, v39, *(_QWORD *)(v51 + 80) & 0xFFFFFFFFFFFFFFF8LL, v50, v37, v38);
              v56 = v55;
              if ( v55 )
                ++*(_DWORD *)(v55 + 8);
              if ( v16 )
              {
                v57 = *((_DWORD *)v16 - 1);
                if ( v57 == *((_DWORD *)v16 - 2) )
                {
                  v58 = (3 * v57 + 1) >> 1;
                  v59 = 8 * v58 + 8;
                  if ( 8 * v57 + 8 >= (unsigned int)v59 || v57 >= v58 )
                  {
                    v6 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v210, "Overflow encountered when expanding vector");
                    *v6 = (char *)off_1C63128;
                    sub_2333C0(v6 + 1, v210);
                    sub_233E40((__int64)v210);
                    __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v194 = (3 * v57 + 1) >> 1;
                  v60 = (unsigned int *)sub_186B300(v16 - 1, v59);
                  v16 = (__int64 *)(v60 + 2);
                  *v60 = v194;
                  LODWORD(v60) = v60[1];
                  v54 = &v16[(unsigned int)v60];
                  v53 = (_DWORD)v60 + 1;
                }
                else
                {
                  v52 = v57;
                  v53 = v57 + 1;
                  v54 = &v16[v52];
                }
              }
              else
              {
                v114 = (_QWORD *)sub_186B270(0x18u);
                *v114 = 2;
                v16 = v114 + 1;
                v53 = 1;
                v54 = v16;
              }
              *v54 = v56;
              v51 += 8;
              *((_DWORD *)v16 - 1) = v53;
            }
            while ( v196 + 8 * (v191 + (unsigned __int64)(v185 - 1 - v191)) + 8 != v51 );
          }
          sub_61EBF0(&v207, (_QWORD *)v203, v39, *(_QWORD *)(v196 + 40));
          v65 = *(_QWORD *)(v203 + 80);
          v66 = v207;
          if ( v65 )
          {
            v67 = 0;
            do
            {
              if ( v67 >= *(_DWORD *)(v65 - 4) )
                break;
              v68 = *(_QWORD *)(v65 + 8LL * v67);
              if ( v68 )
                ++*(_DWORD *)(v68 + 8);
              if ( v16 )
              {
                v69 = *((_DWORD *)v16 - 1);
                if ( v69 == *((_DWORD *)v16 - 2) )
                {
                  v109 = (3 * v69 + 1) >> 1;
                  v110 = 8 * v109 + 8;
                  if ( 8 * v69 + 8 >= (unsigned int)v110 || v69 >= v109 )
                  {
                    v4 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v210, "Overflow encountered when expanding vector");
                    *v4 = (char *)off_1C63128;
                    sub_2333C0(v4 + 1, v210);
                    sub_233E40((__int64)v210);
                    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v111 = (unsigned int *)sub_186B300(v16 - 1, v110);
                  v112 = v111[1];
                  v16 = (__int64 *)(v111 + 2);
                  *v111 = v109;
                  LODWORD(v111) = v112;
                  v72 = &v16[v112];
                  v65 = *(_QWORD *)(v203 + 80);
                  v71 = (_DWORD)v111 + 1;
                }
                else
                {
                  v70 = v69;
                  v71 = v69 + 1;
                  v72 = &v16[v70];
                }
              }
              else
              {
                v120 = (_QWORD *)sub_186B270(0x18u);
                *v120 = 2;
                v16 = v120 + 1;
                v65 = *(_QWORD *)(v203 + 80);
                v71 = 1;
                v72 = v16;
              }
              *v72 = v68;
              ++v67;
              *((_DWORD *)v16 - 1) = v71;
            }
            while ( v65 );
          }
          v208 = 0u;
          v209[0] = 1;
          v209[1] = 0;
          sub_182CBA0(qword_1C7F2C0, v209);
          BYTE4(v209[0]) &= ~1u;
          LODWORD(v209[0]) = 1;
          v76 = *(_QWORD *)(v203 + 48);
          if ( !v76 )
          {
            sub_16669E0(v203 + 40);
            v76 = *(_QWORD *)(v203 + 48);
          }
          sub_166A700(v76, (unsigned int)&v208, 0, v73, v74, v75);
          v77 = *(_QWORD *)(v203 + 24);
          v78 = sub_15D2CD0(*(_QWORD *)(v203 + 40), 5, 0, 0, 0);
          sub_15DB5C0(v77, v39, v78);
          v79 = sub_15E1B70(*(_QWORD *)(v203 + 40));
          v80 = v79;
          if ( v79 )
            ++*(_DWORD *)(v79 + 8);
          if ( v16 )
          {
            v81 = *((_DWORD *)v16 - 1);
            if ( v81 == *((_DWORD *)v16 - 2) )
            {
              v116 = (3 * v81 + 1) >> 1;
              v117 = 8 * v116 + 8;
              if ( 8 * v81 + 8 >= (unsigned int)v117 || v81 >= v116 )
              {
                v5 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v210, "Overflow encountered when expanding vector");
                *v5 = (char *)off_1C63128;
                sub_2333C0(v5 + 1, v210);
                sub_233E40((__int64)v210);
                __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v118 = (unsigned int *)sub_186B300(v16 - 1, v117);
              v119 = v118[1];
              v16 = (__int64 *)(v118 + 2);
              *v118 = v116;
              LODWORD(v118) = v119;
              v84 = &v16[v119];
              v83 = (_DWORD)v118 + 1;
            }
            else
            {
              v82 = v81;
              v83 = v81 + 1;
              v84 = &v16[v82];
            }
          }
          else
          {
            v178 = (_QWORD *)sub_186B270(0x18u);
            v84 = v178 + 1;
            *v178 = 2;
            v83 = 1;
            v16 = v84;
          }
          *v84 = v80;
          *((_DWORD *)v16 - 1) = v83;
          v85 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v208);
          sub_182CBA0(v85, v209);
          v86 = *((_DWORD *)v16 - 1);
          if ( v202 )
          {
            v87 = (unsigned int)*(v202 - 1);
            if ( (unsigned int)v87 < v86 )
            {
              v88 = *(v202 - 2);
              if ( v88 < v86 )
                goto LABEL_87;
              *(v202 - 1) = v86;
              v92 = (char *)v202 + v87;
              v93 = (__int64)v202 + v86;
              goto LABEL_91;
            }
            *(v202 - 1) = v86;
          }
          else if ( v86 )
          {
            v121 = sub_186B270(0xAu);
            v88 = 2;
            LODWORD(v87) = 0;
            *(_QWORD *)v121 = 2;
            v202 = (_DWORD *)(v121 + 8);
            if ( v86 <= 2 )
            {
              *(_DWORD *)(v121 + 4) = v86;
              v92 = (char *)(v121 + 8);
              v93 = v121 + 8 + v86;
              goto LABEL_91;
            }
            do
            {
LABEL_87:
              v89 = (3 * v88 + 1) >> 1;
              v90 = v89 + 8;
              if ( v88 + 8 >= (unsigned int)v90 || v88 >= v89 )
              {
                v7 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v210, "Overflow encountered when expanding vector");
                *v7 = (char *)off_1C63128;
                sub_2333C0(v7 + 1, v210);
                sub_233E40((__int64)v210);
                __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v91 = (unsigned int *)sub_186B300(v202 - 2, v90);
              *v91 = v89;
              v88 = v89;
              v202 = v91 + 2;
            }
            while ( v89 < v86 );
            v91[1] = v86;
            v92 = (char *)v202 + (unsigned int)v87;
            v93 = (__int64)v202 + v86;
            if ( v86 != (_DWORD)v87 )
LABEL_91:
              memset(v92, 0, v93 - (_QWORD)v92);
            v86 = *((_DWORD *)v16 - 1);
            v94 = v196 + 72;
            goto LABEL_93;
          }
          v94 = v196 + 72;
LABEL_93:
          v95 = sub_62C680(v184, v66.m128i_i32[0], v86, (_DWORD)v16, (_DWORD)v202, v94, 1);
          v195 = v95;
          if ( v95 )
            sub_62A000(v184, v95);
          if ( v188 )
            sub_62A410(v184, v188);
          sub_63DAD0(v192, v195, a3);
          v96 = *(_QWORD *)(*(_QWORD *)(v196 + 40) + 16LL);
          v97 = *(__int64 **)(a2 + 152);
          v98 = *(unsigned int *)(a2 + 160);
          v99 = *(_DWORD *)(v96 + 12);
          v100 = v98 - 1;
          v98 *= 8;
          v101 = (__int64 *)((char *)v97 + v98);
          v102 = 8LL * (v99 & v100);
          v9 = (__int64)&v97[(unsigned __int64)v102 / 8];
          if ( v102 != v98 )
          {
            for ( i = &v97[(unsigned __int64)v102 / 8]; v101 != i; ++i )
            {
              v104 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v104 + 12) == v99 && v96 == v104 )
                {
LABEL_188:
                  v146 = *(_QWORD *)(*(_QWORD *)(v195 + 40) + 16LL);
                  if ( v146 )
                    ++*(_DWORD *)(v146 + 8);
                  v147 = (_QWORD *)v192[29];
                  if ( v147 )
                  {
                    v148 = *((_DWORD *)v147 - 1);
                    if ( v148 == *((_DWORD *)v147 - 2) )
                    {
                      v165 = (3 * v148 + 1) >> 1;
                      v166 = 8 * v165 + 8;
                      if ( 8 * v148 + 8 >= (unsigned int)v166 || v148 >= v165 )
                      {
                        v3 = (char **)__cxa_allocate_exception(0x28u);
                        sub_24ABB0(v210, "Overflow encountered when expanding vector");
                        *v3 = (char *)off_1C63128;
                        sub_2333C0(v3 + 1, v210);
                        sub_233E40((__int64)v210);
                        __cxa_throw(
                          v3,
                          (struct type_info *)&`typeinfo for'default_exception,
                          (void (*)(void *))sub_230E50);
                      }
                      v167 = (unsigned int *)sub_186B300(v147 - 1, v166);
                      v147 = v167 + 2;
                      *v167 = v165;
                      v192[29] = v167 + 2;
                      LODWORD(v167) = v167[1];
                      v151 = &v147[(unsigned int)v167];
                      v150 = (_DWORD)v167 + 1;
                    }
                    else
                    {
                      v149 = v148;
                      v150 = v148 + 1;
                      v151 = &v147[v149];
                    }
                  }
                  else
                  {
                    v180 = (_QWORD *)sub_186B270(0x18u);
                    *v180 = 2;
                    v147 = v180 + 1;
                    v192[29] = v180 + 1;
                    v151 = v180 + 1;
                    v150 = 1;
                  }
                  *v151 = v146;
                  *((_DWORD *)v147 - 1) = v150;
                  v152 = *((unsigned int *)v192 + 40);
                  v153 = *((_DWORD *)v192 + 42);
                  v154 = 2 * v152;
                  if ( 3 * (int)v152 < (unsigned int)(4 * (v153 + *((_DWORD *)v192 + 41))) )
                  {
                    v168 = v154;
                    v197 = 2 * v152;
                    v200 = (void *)(8LL * v154);
                    v169 = (_QWORD *)sub_186B270((size_t)v200);
                    v170 = v197;
                    v157 = (__int64)v200;
                    v155 = v169;
                    if ( v197 )
                    {
                      memset(v169, 0, 8 * v168);
                      v157 = (__int64)v200;
                      v170 = v197;
                    }
                    v156 = v170 - 1;
                    v158 = (_QWORD *)((char *)v155 + v157);
                    v171 = (char *)v192[19];
                    v172 = &v171[8 * *((unsigned int *)v192 + 40)];
                    if ( v171 != v172 )
                    {
                      do
                      {
                        while ( *(_QWORD *)v171 <= 1u )
                        {
                          v171 += 8;
                          if ( v172 == v171 )
                            goto LABEL_226;
                        }
                        v173 = 8LL * (*(_DWORD *)(*(_QWORD *)v171 + 12LL) & v156);
                        v174 = &v155[(unsigned __int64)v173 / 8];
                        if ( v157 == v173 )
                        {
LABEL_230:
                          if ( v155 == v174 )
                          {
LABEL_238:
                            sub_1872CE0("");
                            sub_1873130(114, 213);
                          }
                          v175 = v203;
                          v176 = v155;
                          while ( *v176 )
                          {
                            if ( v174 == ++v176 )
                              goto LABEL_238;
                          }
                        }
                        else
                        {
                          v175 = v203;
                          v176 = &v155[(unsigned __int64)v173 / 8];
                          while ( *v176 )
                          {
                            if ( v158 == ++v176 )
                              goto LABEL_230;
                          }
                        }
                        v177 = *(_QWORD *)v171;
                        v171 += 8;
                        v203 = v175;
                        *v176 = v177;
                      }
                      while ( v172 != v171 );
LABEL_226:
                      v172 = (char *)v192[19];
                    }
                    if ( v172 )
                    {
                      v189 = v170;
                      v198 = v157;
                      v201 = v170 - 1;
                      sub_186B220(v172);
                      v156 = v201;
                      v157 = v198;
                      v170 = v189;
                    }
                    v153 = 0;
                    v192[19] = v155;
                    *((_DWORD *)v192 + 40) = v170;
                    *((_DWORD *)v192 + 42) = 0;
                  }
                  else
                  {
                    v155 = (_QWORD *)v192[19];
                    v156 = v152 - 1;
                    v157 = 8 * v152;
                    v158 = (_QWORD *)((char *)v155 + v157);
                  }
                  v159 = *(_DWORD *)(v146 + 12);
                  v9 = 8LL * (v159 & v156);
                  v160 = (_QWORD *)((char *)v155 + v9);
                  if ( v9 == v157 )
                  {
                    v162 = nullptr;
LABEL_203:
                    if ( v160 == v155 )
                    {
LABEL_211:
                      sub_1872CE0("");
                      sub_1873130(114, 405);
                    }
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v164 = *v155;
                        if ( *v155 <= 1u )
                          break;
                        if ( *(_DWORD *)(v164 + 12) == v159 && v146 == v164 )
                        {
                          *v155 = v146;
                          goto LABEL_104;
                        }
                        if ( v160 == ++v155 )
                          goto LABEL_211;
                      }
                      if ( !v164 )
                        break;
                      v162 = v155++;
                      if ( v160 == v155 )
                        goto LABEL_211;
                    }
                    if ( v162 )
                      goto LABEL_236;
                    v162 = v155;
                  }
                  else
                  {
                    v161 = (_QWORD *)((char *)v155 + v9);
                    v162 = nullptr;
                    while ( 1 )
                    {
                      while ( 1 )
                      {
                        v163 = *v161;
                        if ( *v161 <= 1u )
                          break;
                        if ( *(_DWORD *)(v163 + 12) == v159 && v146 == v163 )
                        {
                          *v161 = v146;
                          goto LABEL_104;
                        }
                        if ( ++v161 == v158 )
                          goto LABEL_203;
                      }
                      if ( !v163 )
                        break;
                      v162 = v161++;
                      if ( v161 == v158 )
                        goto LABEL_203;
                    }
                    if ( v162 )
LABEL_236:
                      *((_DWORD *)v192 + 42) = v153 - 1;
                    else
                      v162 = v161;
                  }
                  *v162 = v146;
                  ++*((_DWORD *)v192 + 41);
                  goto LABEL_104;
                }
              }
              else if ( !v104 )
              {
                goto LABEL_104;
              }
            }
          }
          for ( ; (__int64 *)v9 != v97; ++v97 )
          {
            v115 = *v97;
            if ( (unsigned __int64)*v97 > 1 )
            {
              if ( *(_DWORD *)(v115 + 12) == v99 && v96 == v115 )
                goto LABEL_188;
            }
            else if ( !v115 )
            {
              break;
            }
          }
LABEL_104:
          if ( v66.m128i_i64[0] )
          {
            v199 = *(_DWORD *)(v66.m128i_i64[0] + 8);
            *(_DWORD *)(v66.m128i_i64[0] + 8) = v199 - 1;
            if ( v199 == 1 )
              sub_15D7BC0(v66.m128i_i64[1], v66.m128i_i64[0]);
          }
          v190 += 8;
          if ( v190 == v183 )
          {
            v122 = *(__m128i **)(v203 + 112);
            if ( v122 )
              goto LABEL_139;
            goto LABEL_145;
          }
          v105 = v16;
          v106 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + v190);
          v15 = *(_DWORD *)(v106 + 68);
          v196 = v106;
          v191 = v15;
          v185 = *(_DWORD *)(v106 + 56);
          v107 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
          if ( (unsigned __int64)v16 < v107 )
          {
            do
            {
              while ( 1 )
              {
                v108 = *v105;
                if ( *v105 )
                {
                  v32 = (*(_DWORD *)(v108 + 8))-- == 1;
                  if ( v32 )
                    break;
                }
                if ( (unsigned __int64)++v105 >= v107 )
                  goto LABEL_114;
              }
              sub_15D7BC0(v186, v108);
              ++v105;
            }
            while ( (unsigned __int64)v105 < v107 );
          }
LABEL_114:
          *((_DWORD *)v16 - 1) = 0;
          v188 = v195;
        }
        if ( v18 )
        {
          sub_186B220(v18);
          v22 = *(_DWORD *)(v203 + 96);
          *(_QWORD *)(v203 + 88) = 0;
          v23 = v22 >> 1;
          *(_DWORD *)(v203 + 96) = v22 >> 1;
          v24 = 16LL * (v22 >> 1);
          v25 = (_OWORD *)sub_186B270(v24);
          if ( !v23 )
          {
LABEL_22:
            v15 = v203;
            *(_QWORD *)(v203 + 88) = v25;
            goto LABEL_23;
          }
        }
        else
        {
          v179 = (unsigned int)v19 >> 1;
          *(_QWORD *)(v203 + 88) = 0;
          *(_DWORD *)(v203 + 96) = v179;
          v24 = 16LL * v179;
          v25 = (_OWORD *)sub_186B270(v24);
        }
        v26 = &v25[v24 / 0x10];
        a3 = 0.0;
        v27 = v25;
        if ( (v24 & 0x10) == 0 || (v27 = v25 + 1, *v25 = 0, v25 + 1 != v26) )
        {
          do
          {
            *v27 = 0;
            v27 += 2;
            *(v27 - 1) = 0;
          }
          while ( v27 != v26 );
        }
        goto LABEL_22;
      }
LABEL_252:
      v195 = 0;
      v16 = nullptr;
      ptr = nullptr;
      v202 = nullptr;
      goto LABEL_145;
    }
  }
  else
  {
    v205 = 0;
    v61 = a1[4];
    v186 = a1[3];
    v206 = v186;
    v13 = 0;
    if ( !*(_QWORD *)(v61 + 2952) )
    {
      a1[14] = 0;
      goto LABEL_252;
    }
  }
  v62 = (__m128i *)sub_186B270(0x60u);
  v62[1].m128i_i8[8] = 1;
  v62->m128i_i32[2] = 0;
  v63 = *(_QWORD *)(v203 + 24);
  v62[1].m128i_i64[0] = 0;
  ptr = v62;
  v62->m128i_i64[0] = (__int64)&off_1C68978;
  v62[3].m128i_i64[0] = 0;
  v62[2] = _mm_unpacklo_epi64((__m128i)v63, (__m128i)v63);
  sub_16669D0(&v62[3].m128i_u64[1], v63);
  v64 = (_OWORD *)sub_186B270(0x80u);
  a3 = 0.0;
  ++v62->m128i_i32[2];
  v62[4].m128i_i64[1] = (__int64)v64;
  v62[5].m128i_i64[0] = 8;
  v62[5].m128i_i32[2] = 0;
  *(_QWORD *)(v203 + 112) = v62;
  *v64 = 0;
  v64[1] = 0;
  v64[2] = 0;
  v64[3] = 0;
  v64[4] = 0;
  v64[5] = 0;
  v64[6] = 0;
  v64[7] = 0;
  if ( (_DWORD)v13 )
  {
    v10 = *(__int64 **)(a2 + 24);
    goto LABEL_5;
  }
  v195 = 0;
  v122 = v62;
  v16 = nullptr;
  v202 = nullptr;
LABEL_139:
  v123 = *(_QWORD *)(v203 + 32);
  v124 = sub_1336AB0(*(_QWORD *)(v123 + 2952), v122);
  v125 = v124;
  if ( v124 )
    ++*(_DWORD *)(v124 + 8);
  v126 = *(void (__fastcall ****)(void *))(v123 + 2952);
  if ( v126 )
  {
    v32 = (*((_DWORD *)v126 + 2))-- == 1;
    if ( v32 )
    {
      (**v126)(v126);
      sub_186B220(v126);
    }
  }
  *(_QWORD *)(v123 + 2952) = v125;
LABEL_145:
  v127 = *(_QWORD **)(v203 + 64);
  if ( v127 )
  {
    v128 = &v127[*((unsigned int *)v127 - 1)];
    if ( v127 >= v128 )
      goto LABEL_153;
    do
    {
      while ( 1 )
      {
        v129 = *v127;
        if ( *v127 )
        {
          v130 = *(_QWORD *)(v203 + 56);
          v32 = (*(_DWORD *)(v129 + 8))-- == 1;
          if ( v32 )
            break;
        }
        if ( ++v127 >= v128 )
          goto LABEL_152;
      }
      sub_15D7BC0(v130, v129);
      ++v127;
    }
    while ( v127 < v128 );
LABEL_152:
    v127 = *(_QWORD **)(v203 + 64);
    if ( v127 )
LABEL_153:
      *((_DWORD *)v127 - 1) = 0;
  }
  if ( *(_DWORD *)(v203 + 100) || *(_DWORD *)(v203 + 104) )
  {
    v131 = 0;
    v132 = *(char **)(v203 + 88);
    v133 = *(unsigned int *)(v203 + 96);
    v134 = v132;
    v135 = &v132[16 * v133];
    if ( v132 == v135 )
      goto LABEL_169;
    do
    {
      while ( *(_QWORD *)v134 )
      {
        *(_QWORD *)v134 = 0;
        v134 += 16;
        if ( v135 == v134 )
          goto LABEL_161;
      }
      v134 += 16;
      ++v131;
    }
    while ( v135 != v134 );
LABEL_161:
    if ( (unsigned int)v133 <= 0x10 || 3 * (int)v133 >= (unsigned int)(4 * v131) )
      goto LABEL_169;
    if ( v132 )
    {
      sub_186B220(v132);
      v136 = *(_DWORD *)(v203 + 96);
      *(_QWORD *)(v203 + 88) = 0;
      v137 = v136 >> 1;
      *(_DWORD *)(v203 + 96) = v136 >> 1;
      v138 = v136 >> 1;
      v139 = (_OWORD *)sub_186B270(v138 * 16);
      if ( !v137 )
      {
LABEL_168:
        *(_QWORD *)(v203 + 88) = v139;
LABEL_169:
        *(_QWORD *)(v203 + 100) = 0;
        goto LABEL_170;
      }
    }
    else
    {
      v181 = (unsigned int)v133 >> 1;
      *(_QWORD *)(v203 + 88) = 0;
      *(_DWORD *)(v203 + 96) = v181;
      v138 = v181;
      v139 = (_OWORD *)sub_186B270(16 * v181);
    }
    v140 = &v139[v138];
    v141 = v139;
    if ( ((v138 * 16) & 0x10) == 0 || (v141 = v139 + 1, *v139 = 0, v139 + 1 != v140) )
    {
      do
      {
        *v141 = 0;
        v141 += 2;
        *(v141 - 1) = 0;
      }
      while ( v141 != v140 );
    }
    goto LABEL_168;
  }
LABEL_170:
  if ( ptr )
  {
    v204 = ptr->m128i_i32[2];
    ptr->m128i_i32[2] = v204 - 1;
    if ( v204 == 1 )
    {
      (*(void (__fastcall **)(__m128i *))ptr->m128i_i64[0])(ptr);
      sub_186B220(ptr);
    }
  }
  if ( v205 )
    sub_186B220((void *)(v205 - 8));
  if ( v202 )
    sub_186B220(v202 - 2);
  if ( v16 )
  {
    v142 = (unsigned __int64)&v16[*((unsigned int *)v16 - 1)];
    if ( (unsigned __int64)v16 < v142 )
    {
      v143 = v16;
      do
      {
        while ( 1 )
        {
          v144 = *v143;
          if ( *v143 )
          {
            v32 = (*(_DWORD *)(v144 + 8))-- == 1;
            if ( v32 )
              break;
          }
          if ( (unsigned __int64)++v143 >= v142 )
            goto LABEL_184;
        }
        sub_15D7BC0(v186, v144);
        ++v143;
      }
      while ( (unsigned __int64)v143 < v142 );
    }
LABEL_184:
    sub_186B220(v16 - 1);
  }
  if ( v195 )
    sub_62A410(v184, v195);
  return v192;
}

