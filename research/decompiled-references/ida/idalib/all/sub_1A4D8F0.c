void __fastcall sub_1A4D8F0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, double a6, double a7)
{
  __int64 v7; // r15
  void *v8; // rdi
  __int64 v9; // rdi
  int v10; // ebx
  unsigned int v11; // eax
  int v12; // eax
  const char *v13; // rdi
  size_t v14; // rax
  char *v15; // rbx
  __int64 v16; // rax
  char *v17; // r14
  _QWORD *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _BYTE *v23; // r12
  unsigned __int32 v24; // ebp
  unsigned int v25; // ebx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  char *v28; // r13
  __m128i *v29; // rsi
  char *v30; // rdi
  char v31; // bl
  __int16 v32; // ax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rsi
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  char *v41; // rsi
  int v42; // r14d
  __int64 v43; // rax
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rcx
  _QWORD *v48; // rdx
  _BYTE *v49; // rdi
  __int64 v50; // rax
  unsigned __int64 *v51; // r8
  unsigned __int64 *v52; // rdx
  unsigned __int64 v53; // r13
  __int64 v54; // rax
  int v55; // edx
  unsigned __int64 v56; // r9
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  _BYTE *v60; // r9
  unsigned __int8 v61; // r12
  char v62; // al
  __int64 v63; // rax
  __int64 v64; // rdx
  int v65; // edx
  unsigned __int64 v66; // r10
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int64 v69; // rdx
  _QWORD *v70; // rax
  unsigned __int64 v71; // rcx
  void *v72; // rdi
  _QWORD *v73; // rbx
  _QWORD *v74; // rax
  char v75; // bl
  __int64 v76; // rdx
  char v77; // bp
  __int64 v78; // rdi
  unsigned int v79; // edx
  char v80; // r12
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // rbp
  int v85; // r12d
  unsigned __int64 v86; // r14
  __int64 v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int32 v89; // ecx
  __int64 *v90; // rbp
  unsigned __int64 v91; // r12
  __int64 v92; // rax
  unsigned __int64 v93; // rbx
  __int64 v94; // rax
  void **v95; // rbp
  void **v96; // rbx
  __int64 v97; // rax
  int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // r9
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  void **v119; // r14
  char *v120; // rbp
  char *v121; // rbx
  char *v122; // r14
  int v123; // ecx
  char ***v124; // rsi
  char ***v125; // rdi
  void **v126; // rbx
  int v127; // eax
  __int64 *v128; // rdx
  __int64 v129; // rax
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rax
  __int64 v132; // rcx
  unsigned __int64 v133; // rdx
  int v134; // r10d
  _QWORD *v135; // rax
  int v136; // edi
  bool v137; // zf
  unsigned int *v138; // [rsp+0h] [rbp-278h]
  __int64 *v139; // [rsp+0h] [rbp-278h]
  int v140; // [rsp+8h] [rbp-270h]
  __int64 v141; // [rsp+8h] [rbp-270h]
  __int64 v143; // [rsp+18h] [rbp-260h]
  __int64 v144; // [rsp+18h] [rbp-260h]
  __int64 v145; // [rsp+20h] [rbp-258h]
  __int64 v146; // [rsp+20h] [rbp-258h]
  unsigned __int64 *v147; // [rsp+20h] [rbp-258h]
  _BYTE *v148; // [rsp+20h] [rbp-258h]
  unsigned __int64 *v149; // [rsp+20h] [rbp-258h]
  _BYTE *v150; // [rsp+20h] [rbp-258h]
  __int64 v151; // [rsp+28h] [rbp-250h]
  unsigned __int64 *v152; // [rsp+30h] [rbp-248h]
  char v153; // [rsp+30h] [rbp-248h]
  unsigned __int64 *v154; // [rsp+30h] [rbp-248h]
  unsigned __int64 v155; // [rsp+30h] [rbp-248h]
  unsigned __int64 *v156; // [rsp+30h] [rbp-248h]
  __int64 v157; // [rsp+38h] [rbp-240h]
  unsigned __int64 v158; // [rsp+38h] [rbp-240h]
  unsigned __int64 v159; // [rsp+38h] [rbp-240h]
  int v160; // [rsp+40h] [rbp-238h]
  unsigned __int32 v161; // [rsp+40h] [rbp-238h]
  int v162; // [rsp+40h] [rbp-238h]
  __int64 *v163; // [rsp+48h] [rbp-230h]
  unsigned int v164; // [rsp+48h] [rbp-230h]
  unsigned int v166; // [rsp+70h] [rbp-208h]
  bool v167; // [rsp+75h] [rbp-203h]
  bool v168; // [rsp+76h] [rbp-202h]
  char v169; // [rsp+77h] [rbp-201h]
  unsigned int v170; // [rsp+88h] [rbp-1F0h]
  unsigned __int64 v172; // [rsp+98h] [rbp-1E0h] BYREF
  const char *v173; // [rsp+A0h] [rbp-1D8h] BYREF
  size_t v174; // [rsp+A8h] [rbp-1D0h]
  _BYTE *v175; // [rsp+B0h] [rbp-1C8h] BYREF
  __int64 v176; // [rsp+B8h] [rbp-1C0h]
  _BYTE v177[16]; // [rsp+C0h] [rbp-1B8h] BYREF
  void *v178[2]; // [rsp+D0h] [rbp-1A8h] BYREF
  void *v179; // [rsp+E0h] [rbp-198h]
  void *v180; // [rsp+F0h] [rbp-188h] BYREF
  __int64 v181; // [rsp+F8h] [rbp-180h]
  _QWORD v182[6]; // [rsp+100h] [rbp-178h] BYREF
  __m128i v183; // [rsp+130h] [rbp-148h] BYREF
  __int64 v184; // [rsp+140h] [rbp-138h] BYREF
  int v185; // [rsp+148h] [rbp-130h]
  __int64 v186; // [rsp+150h] [rbp-128h]
  __int64 v187; // [rsp+158h] [rbp-120h]
  __int64 v188; // [rsp+160h] [rbp-118h]
  __int64 v189; // [rsp+168h] [rbp-110h]
  __int64 v190; // [rsp+170h] [rbp-108h]
  __int64 v191; // [rsp+178h] [rbp-100h]
  int v192; // [rsp+180h] [rbp-F8h]
  __int64 v193; // [rsp+188h] [rbp-F0h]
  __int64 v194; // [rsp+190h] [rbp-E8h]
  __int64 v195; // [rsp+198h] [rbp-E0h]
  __int64 v196; // [rsp+1A0h] [rbp-D8h]
  void *ptr; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v198; // [rsp+1B8h] [rbp-C0h]
  _BYTE v199[184]; // [rsp+1C0h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(a1 + 248);
  v151 = a2;
  v166 = a4;
  v170 = a4 + a5;
  v169 = 0;
  if ( !a5 )
    return;
  do
  {
    v9 = *(_QWORD *)(v7 + 2320);
    v10 = *((unsigned __int16 *)&unk_2648680 + 8 * v166 + 6);
    v11 = sub_FEAA90(v9);
    if ( v11 == 120 )
    {
      v12 = 4;
    }
    else if ( v11 > 0x78 )
    {
      if ( v11 == 200 )
      {
        v12 = 8;
      }
      else
      {
        if ( v11 != 300 )
        {
LABEL_217:
          sub_1A4ED10(v9, a2);
          return;
        }
        v12 = 16;
      }
    }
    else if ( v11 == 100 )
    {
      v12 = 1;
    }
    else
    {
      if ( v11 != 110 )
        goto LABEL_217;
      v12 = 2;
    }
    if ( (v12 & v10) == 0 )
      goto LABEL_5;
    v13 = off_2BC7460[*((unsigned __int16 *)&unk_2648680 + 8 * v166 + 5)];
    v173 = v13;
    if ( v13 )
    {
      v174 = j__strlen(v13);
      if ( v174 )
      {
        ptr = v199;
        v198 = 0x200000000LL;
        v14 = j__strlen(" ");
        sub_22471D0(&v173, &ptr, " ", v14, 0xFFFFFFFFLL, 1);
        v15 = (char *)ptr;
        v16 = 16LL * (unsigned int)v198;
        v17 = (char *)ptr + v16;
        if ( (char *)ptr + v16 != ptr )
        {
          while ( 1 )
          {
            a2 = *(_QWORD *)v15;
            v18 = *(_QWORD **)(a1 + 240);
            v23 = (_BYTE *)sub_6F3470((__int64)(v18 + 69), *(const void **)v15, *((_QWORD *)v15 + 1));
            if ( (v23[3] & 2) == 0 )
            {
LABEL_3:
              v8 = ptr;
              if ( ptr != v199 )
                goto LABEL_4;
              goto LABEL_5;
            }
            if ( (*(_BYTE *)(v18[7] + 21LL) & 2) != 0 )
              break;
LABEL_16:
            v15 += 16;
            if ( v17 == v15 )
            {
              v15 = (char *)ptr;
              goto LABEL_18;
            }
          }
          v180 = v23;
          v46 = v18[213];
          a2 = *(unsigned int *)(v46 + 16);
          if ( (_DWORD)a2 )
          {
            v22 = (unsigned int)(a2 - 1);
            v21 = *(_QWORD *)v46;
            v47 = (unsigned int)v22 & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
            v48 = (_QWORD *)(*(_QWORD *)v46 + 16 * v47);
            v49 = (_BYTE *)*v48;
            if ( v23 == (_BYTE *)*v48 )
              goto LABEL_54;
            v134 = 1;
            v135 = nullptr;
            if ( v49 != (_BYTE *)-4096LL )
            {
              while ( 1 )
              {
                if ( v49 == (_BYTE *)-8192LL && !v135 )
                  v135 = v48;
                LODWORD(v47) = v22 & (v134 + v47);
                v48 = (_QWORD *)(v21 + 16LL * (unsigned int)v47);
                v49 = (_BYTE *)*v48;
                if ( v23 == (_BYTE *)*v48 )
                  break;
                if ( v49 == (_BYTE *)-4096LL )
                {
                  if ( v135 )
                    goto LABEL_201;
                  goto LABEL_200;
                }
                ++v134;
              }
LABEL_54:
              v50 = v48[1];
              v51 = v48 + 1;
              v52 = (unsigned __int64 *)(v50 & 0xFFFFFFFFFFFFFFF8LL);
              v53 = v50 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v50 || (v50 & 4) == 0 )
                goto LABEL_60;
              v53 = 0;
              if ( v52 )
              {
                v53 = *v52;
                while ( v53 )
                {
                  if ( (*(_BYTE *)(v53 + 12) & 3) != 2 )
                    break;
                  v53 = *(_QWORD *)v53;
LABEL_60:
                  ;
                }
              }
LABEL_61:
              if ( (v23[4] & 0x10) != 0 )
              {
                a2 = (__int64)v23;
                v147 = v51;
                sub_145CD30((__int64)v18);
                v51 = v147;
                if ( (v23[3] & 2) == 0 )
                  goto LABEL_186;
              }
              else if ( (v23[3] & 2) == 0 )
              {
                v61 = 0;
                goto LABEL_195;
              }
              v54 = v18[7];
              if ( (*(_BYTE *)(v54 + 21) & 2) != 0 || *(char *)(v54 + 22) < 0 )
              {
                v55 = *(_DWORD *)(v18[213] + 48LL);
                if ( v55 )
                {
                  v56 = *v51 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !*v51 || (*v51 & 4) == 0 || (v57 = *v51 & 0xFFFFFFFFFFFFFFF8LL, !v56) )
                  {
                    v58 = v18[16];
                    v18[26] += 32LL;
                    v59 = (v58 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                    if ( v18[17] >= v59 + 32 && v58 )
                    {
                      v18[16] = v59 + 32;
                      v57 = (v58 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                    }
                    else
                    {
                      a2 = 32;
                      v155 = v56;
                      v149 = v51;
                      v57 = sub_986170((__int64)(v18 + 16), 32, 32, 4, (__int64)v51, v56);
                      v56 = v155;
                      v51 = v149;
                      v59 = v57 & 0xFFFFFFFFFFFFFFFBLL;
                    }
                    *(_QWORD *)(v57 + 8) = 0;
                    *(_DWORD *)(v57 + 16) = 0;
                    *(_QWORD *)(v57 + 24) = 0;
                    *(_QWORD *)v57 = v56;
                    *(_BYTE *)(v57 + 20) = 0;
                    *v51 = v59 | 4;
                    v55 = *(_DWORD *)(v18[213] + 48LL);
                  }
                  if ( *(_DWORD *)(v57 + 16) != v55 )
                  {
                    a2 = (__int64)v23;
                    v152 = v51;
                    v145 = v57;
                    sub_14476F0((__int64)v18, (__int64)v23, v57);
                    v57 = v145;
                    v51 = v152;
                  }
                  v60 = v180;
                  v61 = *(_BYTE *)(v57 + 20);
                  if ( (*((_BYTE *)v180 + 4) & 0x10) == 0 )
                    goto LABEL_76;
                  goto LABEL_187;
                }
              }
LABEL_186:
              v60 = v180;
              v61 = 0;
              if ( (*((_BYTE *)v180 + 4) & 0x10) == 0 )
              {
LABEL_76:
                v62 = v60[3] & 2;
LABEL_77:
                if ( v62 )
                {
                  v63 = v18[7];
                  if ( (*(_BYTE *)(v63 + 21) & 2) == 0 )
                  {
                    v64 = 0;
                    if ( *(char *)(v63 + 22) >= 0 )
                      goto LABEL_88;
                  }
                  v65 = *(_DWORD *)(v18[213] + 48LL);
                  if ( v65 )
                  {
                    v66 = *v51 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( !*v51 || (*v51 & 4) == 0 || (v67 = *v51 & 0xFFFFFFFFFFFFFFF8LL, !v66) )
                    {
                      v132 = v18[16];
                      v18[26] += 32LL;
                      v133 = (v132 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                      if ( v18[17] >= v133 + 32 && v132 )
                      {
                        v18[16] = v133 + 32;
                        v67 = (v132 + 15) & 0xFFFFFFFFFFFFFFF0LL;
                      }
                      else
                      {
                        a2 = 32;
                        v159 = v66;
                        v156 = v51;
                        v150 = v60;
                        v67 = sub_986170((__int64)(v18 + 16), 32, 32, 4, (__int64)v51, (__int64)v60);
                        v66 = v159;
                        v51 = v156;
                        v60 = v150;
                        v133 = v67 & 0xFFFFFFFFFFFFFFFBLL;
                      }
                      *(_QWORD *)(v67 + 8) = 0;
                      *(_DWORD *)(v67 + 16) = 0;
                      *(_QWORD *)(v67 + 24) = 0;
                      *(_QWORD *)v67 = v66;
                      *(_BYTE *)(v67 + 20) = 0;
                      *v51 = v133 | 4;
                      v65 = *(_DWORD *)(v18[213] + 48LL);
                    }
                    if ( *(_DWORD *)(v67 + 16) != v65 )
                    {
                      a2 = (__int64)v60;
                      v146 = v67;
                      sub_14476F0((__int64)v18, (__int64)v60, v67);
                      v67 = v146;
                    }
                    v68 = *(_QWORD *)(v67 + 8);
                    v69 = v68 & 0xFFFFFFFFFFFFFFF8LL;
                    if ( (v68 & 4) != 0 )
                      v64 = *(unsigned int *)(v69 + 8);
                    else
                      v64 = v69 != 0;
LABEL_88:
                    if ( (!v53
                       || (*(_BYTE *)(v53 + 12) & 3) != 0
                       || !((unsigned __int16)(4 * v61) & 0xFFF8 | v53 & 0xFFFFFFFFFFFFFFF8LL))
                      && !v64 )
                    {
                      goto LABEL_3;
                    }
                    goto LABEL_16;
                  }
                }
LABEL_195:
                v64 = 0;
                goto LABEL_88;
              }
LABEL_187:
              a2 = (__int64)v60;
              v154 = v51;
              v148 = v60;
              sub_145CD30((__int64)v18);
              v60 = v148;
              v51 = v154;
              v62 = v148[3] & 2;
              goto LABEL_77;
            }
LABEL_200:
            v135 = v48;
LABEL_201:
            v136 = *(_DWORD *)(v46 + 8);
            v20 = (unsigned int)(3 * a2);
            v183.m128i_i64[0] = (__int64)v135;
            v19 = (unsigned int)(v136 + 1);
            if ( 4 * (int)v19 < (unsigned int)v20 )
            {
              v20 = (unsigned int)(a2 - *(_DWORD *)(v46 + 12) - v19);
              if ( (unsigned int)v20 > (unsigned int)a2 >> 3 )
              {
LABEL_203:
                v137 = *v135 == -4096;
                *(_DWORD *)(v46 + 8) = v19;
                if ( !v137 )
                  --*(_DWORD *)(v46 + 12);
                *v135 = v23;
                v51 = v135 + 1;
                v53 = 0;
                v135[1] = 0;
                v23 = v180;
                goto LABEL_61;
              }
LABEL_208:
              sub_12F12D0(v46, a2, v19, v20, v21, v22);
              a2 = (__int64)&v180;
              sub_12EC520((__int64 *)v46, (__int64 *)&v180, &v183);
              v23 = v180;
              LODWORD(v19) = *(_DWORD *)(v46 + 8) + 1;
              v135 = (_QWORD *)v183.m128i_i64[0];
              goto LABEL_203;
            }
          }
          else
          {
            v183.m128i_i64[0] = 0;
          }
          LODWORD(a2) = 2 * a2;
          goto LABEL_208;
        }
LABEL_18:
        if ( v15 != v199 )
          free(v15);
      }
    }
    else
    {
      v174 = 0;
    }
    v175 = v177;
    v176 = 0x100000000LL;
    v138 = (unsigned int *)((char *)&unk_2648680 + 16 * v166);
    ptr = v199;
    v198 = 0x500000000LL;
    v140 = *v138;
    sub_1A4A360(a1, (__int64)&unk_2657160 + 16 * (unsigned __int16)aDdeeffgghh[*v138], (__int64)&v175, a6, a7);
    v24 = v176;
    if ( v138[1] > 1 )
    {
      v25 = 1;
      do
      {
        while ( 1 )
        {
          v183.m128i_i64[0] = (__int64)&v184;
          v183.m128i_i64[1] = 0x100000000LL;
          sub_1A4A360(
            a1,
            (__int64)&unk_2657160 + 16 * (unsigned __int16)aDdeeffgghh[v25 + v140],
            (__int64)&v183,
            a6,
            a7);
          if ( v24 < v183.m128i_i32[2] )
            v24 = v183.m128i_u32[2];
          v26 = (unsigned int)v198;
          v27 = (unsigned int)v198 + 1LL;
          if ( v27 > HIDWORD(v198) )
          {
            v153 = 0;
            v158 = -1;
            if ( ptr <= &v183 && &v183 < (__m128i *)((char *)ptr + 24 * (unsigned int)v198) )
            {
              v153 = 1;
              v158 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v183 - (_BYTE *)ptr) >> 3);
            }
            v28 = (char *)sub_2237400(&ptr, v199, v27, 24, &v180);
            v119 = (void **)((char *)ptr + 24 * (unsigned int)v198);
            if ( ptr != v119 )
            {
              v161 = v24;
              v120 = (char *)ptr;
              v164 = v25;
              v121 = (char *)ptr + 24 * (unsigned int)v198;
              v122 = v28;
              do
              {
                while ( 1 )
                {
                  *((_DWORD *)v122 + 2) = 0;
                  *((_DWORD *)v122 + 3) = 1;
                  v123 = *((_DWORD *)v120 + 2);
                  *(_QWORD *)v122 = v122 + 16;
                  if ( v123 )
                    break;
                  v120 += 24;
                  v122 += 24;
                  if ( v121 == v120 )
                    goto LABEL_156;
                }
                v124 = (char ***)v120;
                v125 = (char ***)v122;
                v120 += 24;
                v122 += 24;
                sub_1712470(v125, v124);
              }
              while ( v121 != v120 );
LABEL_156:
              v24 = v161;
              v25 = v164;
              v119 = (void **)((char *)ptr + 24 * (unsigned int)v198);
              if ( ptr != v119 )
              {
                v126 = (void **)ptr;
                do
                {
                  while ( 1 )
                  {
                    v119 -= 3;
                    if ( *v119 == v119 + 2 )
                      break;
                    free(*v119);
                    if ( v119 == v126 )
                    {
                      v25 = v164;
                      v119 = (void **)ptr;
                      goto LABEL_161;
                    }
                  }
                }
                while ( v119 != v126 );
                v25 = v164;
                v119 = (void **)ptr;
              }
            }
LABEL_161:
            v127 = (int)v180;
            if ( v119 != (void **)v199 )
            {
              v162 = (int)v180;
              free(v119);
              v127 = v162;
            }
            HIDWORD(v198) = v127;
            ptr = v28;
            v26 = (unsigned int)v198;
            v29 = &v183;
            if ( v153 )
              v29 = (__m128i *)&v28[24 * v158];
          }
          else
          {
            v28 = (char *)ptr;
            v29 = &v183;
          }
          v30 = &v28[24 * v26];
          *(_QWORD *)v30 = v30 + 16;
          *((_QWORD *)v30 + 1) = 0x100000000LL;
          if ( v29->m128i_i32[2] )
            sub_1712470((char ***)v30, (char ***)v29);
          LODWORD(v198) = v198 + 1;
          if ( (__int64 *)v183.m128i_i64[0] == &v184 )
            break;
          free((void *)v183.m128i_i64[0]);
          if ( v138[1] <= ++v25 )
            goto LABEL_30;
        }
        ++v25;
      }
      while ( v138[1] > v25 );
    }
LABEL_30:
    v31 = v169;
    a6 = 0.0;
    v179 = nullptr;
    if ( v24 >= 2 )
      v31 = 1;
    *(_OWORD *)v178 = 0;
    v169 = v31;
    v32 = sub_A64670(v7, 0, 0, 1);
    v183.m128i_i16[1] &= 0xF000u;
    v183.m128i_i16[0] = v32;
    v183.m128i_i64[1] = 0;
    LODWORD(v184) = 0;
    v185 = 0;
    v186 = 0;
    v187 = 0;
    v188 = 0;
    v189 = 0;
    v190 = 0;
    v191 = 0;
    v192 = 0;
    v193 = 0;
    v194 = 0;
    v195 = 0;
    v196 = 0;
    if ( (_DWORD)v176 && v24 )
    {
      v37 = 0;
      v141 = v24 - 1;
      while ( 1 )
      {
        v181 = 0x500000000LL;
        v180 = v182;
        if ( (_DWORD)v198 )
        {
          v34 = (__int64)ptr;
          v38 = *((unsigned int *)ptr + 2);
          if ( !*((_DWORD *)ptr + 2) )
            break;
          v33 = v37 % v38;
          v39 = *(_QWORD *)(*(_QWORD *)ptr + 8 * (v37 % v38));
          LODWORD(v181) = 1;
          v182[0] = v39;
          if ( (unsigned int)v198 <= 1 )
          {
            v34 = 1;
          }
          else
          {
            v40 = *((unsigned int *)ptr + 8);
            v41 = (char *)ptr + 24;
            if ( !*((_DWORD *)ptr + 8) )
              break;
            LODWORD(v34) = 1;
            v42 = 1;
            while ( 1 )
            {
              v44 = *(_QWORD *)(*(_QWORD *)v41 + 8 * (v37 % v40));
              v45 = (unsigned int)v34;
              if ( (unsigned __int64)(unsigned int)v34 + 1 > HIDWORD(v181) )
              {
                sub_2237220(&v180, v182, (unsigned int)v34 + 1LL, 8);
                v45 = (unsigned int)v181;
              }
              *((_QWORD *)v180 + v45) = v44;
              v34 = (unsigned int)(v181 + 1);
              v43 = (unsigned int)(v42 + 1);
              LODWORD(v181) = v181 + 1;
              v42 = v43;
              if ( (unsigned int)v198 <= (unsigned int)v43 )
                break;
              v33 = 3 * v43;
              v41 = (char *)ptr + 24 * v43;
              v40 = *((unsigned int *)v41 + 2);
              if ( !*((_DWORD *)v41 + 2) )
              {
                if ( v180 != v182 )
                  free(v180);
                goto LABEL_95;
              }
            }
          }
          v128 = (__int64 *)v180;
        }
        else
        {
          v34 = 0;
          v128 = v182;
        }
        v129 = 0;
        if ( (_DWORD)v176 != 1 )
          v129 = 8 * v37;
        v130 = sub_A73610(v7, *(_QWORD *)&v175[v129], v128, v34, &v183, 0);
        v172 = v130;
        if ( v178[1] == v179 )
        {
          sub_1A3AD60((__int64)v178, (char *)v178[1], &v172);
        }
        else
        {
          *(_QWORD *)v178[1] = v130;
          v178[1] = (char *)v178[1] + 8;
        }
        if ( v180 == v182 )
        {
          v131 = v37 + 1;
          if ( v141 == v37 )
            break;
        }
        else
        {
          free(v180);
          v131 = v37 + 1;
          if ( v141 == v37 )
            break;
        }
        v37 = v131;
      }
    }
LABEL_95:
    v160 = *(_DWORD *)(v151 + 128);
    a2 = *(_QWORD *)(*(_QWORD *)(v7 + 2264) + 80LL);
    v70 = sub_704780((__int64 *)(a2 + 72), a2, v33, v34, v35, v36);
    v72 = v178[0];
    v73 = v70;
    v74 = v70 + 5;
    if ( !v73 )
      v74 = nullptr;
    v157 = (__int64)v74;
    v163 = (__int64 *)v178[1];
    if ( v178[1] != v178[0] )
    {
      a2 = (__int64)&v180;
      v139 = (__int64 *)v178[0];
      v75 = *((_BYTE *)&unk_2648680 + 16 * v166 + 8);
      v76 = (v75 & 4) != 0;
      v168 = (v75 & 4) != 0;
      v167 = (v75 & 2) != 0;
      while ( 1 )
      {
        v77 = 1;
        v180 = nullptr;
        LODWORD(v181) = 0;
        v78 = *(_QWORD *)(*v139 & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v78 + 16) != 26 )
        {
          v77 = 0;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v78 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 )
            v77 = sub_F63050(v78, a2, v76, v71) != 0;
        }
        v79 = *(_DWORD *)(a1 + 224);
        if ( ((v79 >> 3) & 7) == 7 )
        {
          v80 = 1;
          if ( (v79 & 0x104) != 0 )
            goto LABEL_102;
        }
        else
        {
          v80 = 1;
          if ( ((v79 >> 3) & 7) != 1 )
            goto LABEL_102;
        }
        v80 = 1;
        if ( (unsigned __int8)v79 >> 6 != 3 )
          break;
        v98 = v79 & 0x100;
        if ( !v98 )
          goto LABEL_142;
LABEL_102:
        v81 = *v139;
        v183.m128i_i64[0] = a3;
        v183.m128i_i32[2] = v160;
        sub_B85890(&v184, a3);
        v82 = sub_B7CBC0(v7, v157, v160, v183.m128i_i64, v81, 0, 1, v80, 0, v77, 0, (__int64)&v180);
        *(_BYTE *)(v82 + 29) |= 2u;
        v83 = v82;
        v84 = *(_QWORD *)(*v139 & 0xFFFFFFFFFFFFFFF0LL);
        v183.m128i_i64[0] = (__int64)&v184;
        v183.m128i_i64[1] = 0x400000000LL;
        v85 = *(unsigned __int16 *)(v84 + 22);
        if ( *(_WORD *)(v84 + 22) )
        {
          v86 = 0;
          do
          {
            v97 = sub_B74530(v7, v83 + 72, 0, 0, 0, *(_QWORD *)(v84 + 8 * v86 + 48), 0, 0, 0);
            *(_DWORD *)(v97 + 96) &= 0xFFF01FFF;
            if ( v86 <= 0xFE )
            {
              *(_WORD *)(v97 + 98) = (16 * (unsigned __int8)v86) | *(_WORD *)(v97 + 98) & 0xF00F;
            }
            else
            {
              v143 = v97;
              sub_B74850(v97, v86);
              v97 = v143;
            }
            v87 = v183.m128i_u32[2];
            v88 = v183.m128i_u32[2] + 1LL;
            if ( v88 > v183.m128i_u32[3] )
            {
              v144 = v97;
              sub_2237220(&v183, &v184, v88, 8);
              v87 = v183.m128i_u32[2];
              v97 = v144;
            }
            *(_QWORD *)(v183.m128i_i64[0] + 8 * v87) = v97;
            ++v86;
            v89 = ++v183.m128i_i32[2];
          }
          while ( v85 != (_DWORD)v86 );
          v90 = (__int64 *)v183.m128i_i64[0];
          v91 = v89;
        }
        else
        {
          v91 = 0;
          v90 = &v184;
        }
        v92 = sub_B8C330(v83);
        sub_B7C440(v83, v92, v90, v91);
        if ( (*((_BYTE *)&unk_2648680 + 16 * v166 + 8) & 1) != 0 )
        {
          v109 = sub_B327B0(v7, 0, 0);
          sub_B8CC60(v83, v109, v110, v111, v112, v113);
        }
        if ( v167 )
        {
          v99 = sub_B330A0(v7, 0, 0);
          sub_B8CC60(v83, v99, v100, v101, v102, v103);
          if ( v168 )
          {
LABEL_144:
            v104 = sub_B33140(v7, 0, 0);
            sub_B8CC60(v83, v104, v105, v106, v107, v108);
          }
        }
        else if ( v168 )
        {
          goto LABEL_144;
        }
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 52LL) & 1) == 0 )
        {
          v114 = sub_B32D80(v7, 0, 0);
          sub_B8CC60(v83, v114, v115, v116, v117, v118);
        }
        a2 = v151;
        v93 = (*(_BYTE *)(v83 + 29) >> 5) & 3 | (unsigned __int64)v83;
        v172 = v93;
        v94 = *(unsigned int *)(v151 + 16);
        v71 = *(unsigned int *)(v151 + 20);
        if ( v94 + 1 > v71 )
        {
          a2 = v151 + 24;
          sub_2237220(v151 + 8, v151 + 24, v94 + 1, 8);
          v94 = *(unsigned int *)(v151 + 16);
        }
        v76 = *(_QWORD *)(v151 + 8);
        *(_QWORD *)(v76 + 8 * v94) = v93;
        *(_DWORD *)v151 = 2;
        ++*(_DWORD *)(v151 + 16);
        if ( (__int64 *)v183.m128i_i64[0] == &v184 )
        {
          if ( v163 == ++v139 )
          {
LABEL_121:
            v72 = v178[0];
            goto LABEL_122;
          }
        }
        else
        {
          free((void *)v183.m128i_i64[0]);
          if ( v163 == ++v139 )
            goto LABEL_121;
        }
      }
      if ( (unsigned __int8)v79 >> 6 )
        goto LABEL_102;
      v98 = v79 & 0x100;
LABEL_142:
      v80 = v98 != 0;
      goto LABEL_102;
    }
LABEL_122:
    if ( v72 )
      operator delete(v72);
    v95 = (void **)ptr;
    v96 = (void **)((char *)ptr + 24 * (unsigned int)v198);
    if ( ptr != v96 )
    {
      do
      {
        while ( 1 )
        {
          v96 -= 3;
          if ( *v96 == v96 + 2 )
            break;
          free(*v96);
          if ( v95 == v96 )
            goto LABEL_127;
        }
      }
      while ( v95 != v96 );
LABEL_127:
      v96 = (void **)ptr;
    }
    if ( v96 != (void **)v199 )
      free(v96);
    v8 = v175;
    if ( v175 != v177 )
LABEL_4:
      free(v8);
LABEL_5:
    ++v166;
  }
  while ( v170 != v166 );
  if ( a5 > 1 || v169 )
    sub_1A43500(v151);
}
