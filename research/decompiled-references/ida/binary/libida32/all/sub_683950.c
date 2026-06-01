__int64 __fastcall sub_683950(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int *v6; // rdx
  unsigned int v7; // ecx
  __int64 fchunk; // rax
  unsigned int *v9; // rbx
  _QWORD *v10; // rax
  unsigned int v11; // ebx
  __int64 func; // rsi
  void **v13; // rbp
  unsigned int v14; // ebx
  int v15; // edx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r8
  __int64 v20; // r9
  void *v21; // rdi
  char *v22; // rdi
  __int64 v23; // rax
  char *v24; // rbx
  char v25; // al
  __int64 v26; // rax
  int *v27; // rdx
  int v28; // r15d
  int v29; // ecx
  __int64 v30; // rsi
  char v31; // r10
  char v32; // r11
  int v33; // r14d
  __int64 v34; // rax
  int v35; // edx
  int *v36; // r12
  void *v37; // rax
  void *v38; // rdx
  int v39; // edx
  char *v40; // rax
  int v41; // edx
  int v42; // edx
  void *v43; // rax
  __int64 v44; // rsi
  void *v45; // rdx
  int v46; // edx
  int *v47; // rax
  unsigned int v48; // r12d
  bool v50; // cf
  __int128 v51; // xmm0
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rax
  void *v55; // rax
  void *v56; // rsi
  char *v57; // rdx
  int v58; // eax
  int v59; // eax
  unsigned int *v60; // rsi
  void *v61; // rax
  void *v62; // rsi
  char *v63; // rdx
  int v64; // eax
  int v65; // eax
  void *v66; // rax
  void *v67; // rdx
  char *v68; // rax
  int v69; // edx
  int v70; // edx
  int v71; // r12d
  __int64 v72; // rax
  char *v73; // rax
  int v74; // edx
  int v75; // edx
  __int64 v76; // r14
  void *v77; // rax
  void *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r14
  __m128i *v81; // rbx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rdx
  const __m128i *v84; // r14
  char *v85; // rdi
  __int64 v86; // r15
  __int64 v87; // r14
  void *v88; // rdi
  char *v89; // rbx
  char v90; // al
  char *v91; // rdx
  __int64 v92; // rbp
  __int64 i; // r12
  char *v94; // rax
  void *v95; // rdi
  void *v96; // rax
  __int64 v97; // r10
  char *v98; // r11
  signed __int64 v99; // r8
  char *v100; // r15
  char *v101; // rdi
  __int64 v102; // r8
  signed __int64 v103; // r9
  int v104; // r14d
  int v105; // r8d
  __int64 v106; // r9
  unsigned __int64 v107; // rdx
  __int64 v108; // rbx
  _BYTE *v109; // rsi
  void *v110; // rdi
  void *v111; // rdi
  _DWORD *v112; // rsi
  unsigned int v113; // esi
  char v114; // bl
  const char *v115; // rsi
  __int64 v116; // rbx
  __int64 v117; // r14
  unsigned __int64 v118; // rdx
  _BYTE *v119; // rsi
  __m128i v120; // xmm0
  char *v121; // rbx
  __int64 v122; // rbx
  __int64 v123; // r14
  unsigned __int64 v124; // rdx
  _BYTE *v125; // rsi
  __m128i v126; // xmm0
  char *v127; // rbx
  void *v128; // rdi
  __int64 v129; // rbx
  __int64 v130; // r14
  unsigned __int64 v131; // rdx
  _BYTE *v132; // rsi
  __m128i v133; // xmm0
  __m128i *v134; // rbx
  __m128i v135; // xmm0
  unsigned int v136; // edx
  void *v137; // rdx
  size_t v138; // r14
  __int64 v139; // rbx
  size_t v140; // r9
  _BYTE *v141; // rsi
  __int64 v142; // r14
  unsigned __int64 v143; // rdx
  _BYTE *v144; // rsi
  _QWORD *v145; // rbx
  __int64 v146; // r14
  unsigned __int64 v147; // rdx
  _BYTE *v148; // rsi
  __m128i si128; // xmm0
  char *v150; // rbx
  unsigned int v151; // ebx
  int v152; // eax
  __int64 v153; // r14
  unsigned __int64 v154; // rdx
  _BYTE *v155; // rsi
  _QWORD *v156; // rbx
  __int64 v157; // rax
  unsigned int *v158; // rsi
  __int64 v159; // rbx
  unsigned __int64 v160; // rdx
  __int64 v161; // r14
  _BYTE *v162; // rsi
  __int64 v163; // r14
  unsigned __int64 v164; // rdx
  _BYTE *v165; // rsi
  char *v166; // rbx
  __int64 v167; // rcx
  __int64 v168; // rbx
  __int64 v169; // r14
  unsigned __int64 v170; // rdx
  _BYTE *v171; // rsi
  __m128i v172; // xmm0
  char *v173; // rbx
  __int64 v174; // rax
  __int64 v175; // rbx
  __int64 v176; // r14
  unsigned __int64 v177; // rdx
  _BYTE *v178; // rsi
  __m128i v179; // xmm0
  char *v180; // rbx
  __int64 v181; // r14
  __int64 v182; // r9
  unsigned __int64 v183; // rdx
  _BYTE *v184; // rsi
  char *v185; // r8
  __int64 v186; // rax
  size_t v187; // r14
  __int64 v188; // rbx
  __int64 v189; // r8
  unsigned __int64 v190; // rdx
  __int64 v191; // rbx
  __int64 v192; // r14
  unsigned __int64 v193; // rdx
  _BYTE *v194; // rsi
  __int64 v195; // rax
  int v196; // [rsp+0h] [rbp-108h]
  void *v197; // [rsp+8h] [rbp-100h]
  void *v198; // [rsp+10h] [rbp-F8h]
  int v199; // [rsp+10h] [rbp-F8h]
  void **v200; // [rsp+10h] [rbp-F8h]
  void *v201; // [rsp+10h] [rbp-F8h]
  void *v202; // [rsp+10h] [rbp-F8h]
  void *v203; // [rsp+10h] [rbp-F8h]
  void *v204; // [rsp+10h] [rbp-F8h]
  void *v205; // [rsp+10h] [rbp-F8h]
  void *v206; // [rsp+10h] [rbp-F8h]
  void *v207; // [rsp+10h] [rbp-F8h]
  void *v208; // [rsp+10h] [rbp-F8h]
  void *v209; // [rsp+10h] [rbp-F8h]
  void *v210; // [rsp+10h] [rbp-F8h]
  void *v211; // [rsp+10h] [rbp-F8h]
  void *v212; // [rsp+10h] [rbp-F8h]
  void *v213; // [rsp+10h] [rbp-F8h]
  void *v214; // [rsp+10h] [rbp-F8h]
  void *v215; // [rsp+10h] [rbp-F8h]
  int v216; // [rsp+18h] [rbp-F0h]
  int v217; // [rsp+18h] [rbp-F0h]
  char v218; // [rsp+18h] [rbp-F0h]
  int v219; // [rsp+18h] [rbp-F0h]
  __int64 v220; // [rsp+18h] [rbp-F0h]
  size_t v221; // [rsp+18h] [rbp-F0h]
  __int64 v222; // [rsp+18h] [rbp-F0h]
  int v223; // [rsp+20h] [rbp-E8h]
  char v224; // [rsp+20h] [rbp-E8h]
  __int64 v225; // [rsp+20h] [rbp-E8h]
  void **p_ptr; // [rsp+28h] [rbp-E0h]
  __int64 v227; // [rsp+30h] [rbp-D8h]
  char v228; // [rsp+39h] [rbp-CFh]
  char v229; // [rsp+39h] [rbp-CFh]
  char v230; // [rsp+3Ah] [rbp-CEh]
  char v231; // [rsp+3Ah] [rbp-CEh]
  char v232; // [rsp+3Bh] [rbp-CDh]
  _QWORD v234[4]; // [rsp+40h] [rbp-C8h] BYREF
  void *v235; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v236; // [rsp+68h] [rbp-A0h]
  void *ptr; // [rsp+80h] [rbp-88h] BYREF
  __int128 v238; // [rsp+88h] [rbp-80h]
  void *src; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v240; // [rsp+A8h] [rbp-60h]
  __int64 v241; // [rsp+B8h] [rbp-50h]
  int v242; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v243; // [rsp+C8h] [rbp-40h]

  v227 = a1;
  HIDWORD(v197) = a2;
  v243 = __readfsqword(0x28u);
  v3 = qword_2CA1698;
  v4 = *(_QWORD *)(qword_2CA1698 + 1648);
  v232 = getinf_flag(44, 1024);
  if ( !v232 )
    return 0;
  v5 = *(_QWORD *)(v4 + 24);
  if ( !v5 )
    return 0;
  v6 = *(unsigned int **)(v4 + 16);
  if ( a2 != -1 )
  {
    v7 = a2 & 0xFFFFFFFE;
    if ( (*(_BYTE *)(v3 + 772) & 8) == 0 )
      v7 = a2;
    HIDWORD(v197) = v7;
    if ( v7 < *v6 )
      goto LABEL_7;
  }
  if ( v6[2 * (int)v5 - 1] < HIDWORD(v197) )
  {
LABEL_7:
    v235 = nullptr;
    v234[0] = 0;
    src = nullptr;
    v241 = 0;
    v242 = -1;
    v236 = 0;
    v240 = 0;
    fchunk = get_fchunk(HIDWORD(v197));
    v9 = (unsigned int *)fchunk;
    if ( fchunk )
    {
      if ( *(char *)(fchunk + 9) >= 0 )
      {
        sub_67A520((int)&src, fchunk);
      }
      else
      {
        ptr = nullptr;
        p_ptr = &ptr;
        func_parent_iterator_set(&ptr, fchunk);
        v10 = ptr;
        v11 = *v9;
        LODWORD(v238) = 0;
        if ( ptr )
        {
          if ( *((char *)ptr + 9) >= 0 )
            goto LABEL_16;
          if ( *((int *)ptr + 5) > 0 )
          {
            while ( 1 )
            {
              func = get_func(*(unsigned int *)(v10[3] + 4LL * (int)v238));
              if ( func )
                sub_67A520((int)&src, func);
              v10 = (_QWORD *)get_fchunk(v11);
              ptr = v10;
              if ( (int)v238 + 1 >= *((_DWORD *)v10 + 5) )
                break;
              LODWORD(v238) = v238 + 1;
            }
          }
          if ( v10 )
LABEL_16:
            lock_func_range(v10, 0);
        }
      }
    }
    v13 = &v235;
    v14 = HIDWORD(v197) + 2;
    LODWORD(v234[0]) = HIDWORD(v197);
    HIDWORD(v234[0]) = HIDWORD(v197) + 2;
    goto LABEL_18;
  }
  if ( *(_DWORD *)(v4 + 64) >= HIDWORD(v197) )
  {
    v235 = nullptr;
    v51 = 0;
    v236 = 0;
    goto LABEL_69;
  }
  v50 = HIDWORD(v197) < *(_DWORD *)(v4 + 68);
  v51 = 0;
  v235 = nullptr;
  v236 = 0;
  if ( !v50 )
  {
LABEL_69:
    v13 = (void **)(v4 + 72);
    v234[0] = 0;
    src = nullptr;
    v241 = 0;
    v242 = -1;
    v240 = v51;
    sub_67C060((_QWORD *)v4, v234, &src, HIDWORD(v197));
    v52 = *(void **)(v4 + 72);
    if ( v52 )
    {
      *(_QWORD *)(v4 + 80) = 0;
      qfree(v52);
      *(_QWORD *)(v4 + 72) = 0;
      *(_QWORD *)(v4 + 88) = 0;
    }
    *(_QWORD *)(v4 + 64) = v234[0];
    v14 = HIDWORD(v234[0]);
LABEL_18:
    if ( v14 < (unsigned int)getinf(20) )
      ++HIDWORD(v234[0]);
    rangeset_t_add((int)&src, (int)v234, v15, v16, v17, v18, v196, v197, (__int64)v198, v216, v223, (int)p_ptr, v227);
    ptr = nullptr;
    v238 = 0;
    sub_67DB00((__int64 *)&ptr, &src);
    v21 = *v13;
    if ( *v13 )
    {
      v13[1] = nullptr;
      qfree(v21);
      *v13 = nullptr;
      v13[2] = nullptr;
    }
    v22 = nullptr;
    v23 = 0;
    v199 = 0;
    if ( !(_QWORD)v238 )
    {
LABEL_123:
      v80 = 20LL * (_QWORD)v13[1];
      v81 = (__m128i *)&v22[v80];
      if ( &v22[v80] == v22 )
        goto LABEL_128;
      v82 = 0xCCCCCCCCCCCCCCCDLL * (v80 >> 2);
      if ( v82 )
      {
        _BitScanReverse64(&v83, v82);
        sub_683650((__int64)v22, v81, 2LL * (int)v83, (__int64 (__fastcall *)(__int64, __int64))sub_678330, v19, v20);
        if ( v80 > 320 )
        {
          v84 = (const __m128i *)(v22 + 320);
          sub_6815B0(v22, v22 + 320, (__int64 (__fastcall *)(__m128i *, char *))sub_678330);
          do
          {
            sub_681520(v84, (__int64 (__fastcall *)(__m128i *, char *))sub_678330);
            v84 = (const __m128i *)((char *)v84 + 20);
          }
          while ( v81 != v84 );
LABEL_128:
          v85 = (char *)ptr;
          if ( ptr )
          {
            v86 = v238;
            if ( (_QWORD)v238 )
            {
              v200 = v13;
              v87 = 0;
              do
              {
                v89 = &v85[96 * v87];
                v90 = v89[89];
                if ( v90 == 2 )
                {
                  v91 = *((char **)v89 + 3);
                  if ( v91 )
                  {
                    v92 = *((_QWORD *)v89 + 4);
                    if ( v92 )
                    {
                      for ( i = 0; i != v92; ++i )
                      {
                        v94 = &v91[40 * i];
                        v95 = *(void **)v94;
                        if ( *(_QWORD *)v94 )
                        {
                          *((_QWORD *)v94 + 1) = 0;
                          qfree(v95);
                          v91 = *((char **)v89 + 3);
                        }
                      }
                    }
                    *((_QWORD *)v89 + 4) = 0;
                    qfree(v91);
                  }
                }
                else if ( v90 == 1 )
                {
                  v110 = *((void **)v89 + 7);
                  if ( v110 )
                  {
                    *((_QWORD *)v89 + 8) = 0;
                    qfree(v110);
                  }
                  v111 = *((void **)v89 + 3);
                  if ( v111 )
                  {
                    *((_QWORD *)v89 + 4) = 0;
                    qfree(v111);
                  }
                }
                v88 = *(void **)v89;
                v89[89] = 0;
                if ( v88 )
                {
                  *((_QWORD *)v89 + 1) = 0;
                  qfree(v88);
                }
                ++v87;
                v85 = (char *)ptr;
              }
              while ( v86 != v87 );
              v13 = v200;
            }
            *(_QWORD *)&v238 = 0;
            qfree(v85);
          }
          if ( src )
          {
            *(_QWORD *)&v240 = 0;
            qfree(src);
          }
          v96 = v13[1];
          if ( !v96 )
            goto LABEL_166;
          goto LABEL_148;
        }
      }
      else
      {
        sub_683650((__int64)v22, v81, -2, (__int64 (__fastcall *)(__int64, __int64))sub_678330, v19, v20);
      }
      sub_6815B0(v22, v81->m128i_i8, (__int64 (__fastcall *)(__m128i *, char *))sub_678330);
      goto LABEL_128;
    }
LABEL_25:
    v24 = (char *)ptr + 96 * v23;
    v25 = v24[89];
    if ( v25 == 2 )
    {
      if ( !*((_QWORD *)v24 + 1) )
      {
        v31 = 0;
        v32 = 0;
        v28 = -1;
        if ( !*((_QWORD *)v24 + 4) )
          goto LABEL_24;
LABEL_116:
        v71 = 0;
        v72 = 0;
        do
        {
          v76 = *((_QWORD *)v24 + 3) + 40 * v72;
          v77 = v13[1];
          v78 = (char *)v77 + 1;
          if ( v13[2] < (char *)v77 + 1 )
          {
            v224 = v31;
            v218 = v32;
            v79 = qvector_reserve(v13, v22, v78, 20);
            *v13 = (void *)v79;
            v22 = (char *)v79;
            v77 = v13[1];
            v31 = v224;
            v32 = v218;
            v78 = (char *)v77 + 1;
          }
          v13[1] = v78;
          v73 = &v22[20 * (_QWORD)v77];
          v74 = **(_DWORD **)v76;
          if ( v74 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
            v74 &= ~1u;
          *(_DWORD *)v73 = v74;
          ++v71;
          *((_DWORD *)v73 + 1) = *(_DWORD *)(v76 + 36);
          v75 = (unsigned __int8)v24[90];
          *((_DWORD *)v73 + 2) = v28;
          *((_DWORD *)v73 + 3) = v75;
          *((_DWORD *)v73 + 4) = 16;
          v72 = v71;
          v22 = (char *)*v13;
        }
        while ( (unsigned __int64)v71 < *((_QWORD *)v24 + 4) );
LABEL_84:
        if ( !v32 )
        {
LABEL_85:
          if ( !v31 )
            goto LABEL_24;
LABEL_86:
          if ( *((_QWORD *)v24 + 8) && **((_DWORD **)v24 + 7) != -1 )
          {
            v55 = v13[1];
            v56 = (char *)v55 + 1;
            if ( v13[2] < (char *)v55 + 1 )
            {
              v174 = qvector_reserve(v13, v22, (char *)v55 + 1, 20);
              *v13 = (void *)v174;
              v22 = (char *)v174;
              v55 = v13[1];
              v56 = (char *)v55 + 1;
            }
            v13[1] = v56;
            v57 = &v22[20 * (_QWORD)v55];
            v58 = **((_DWORD **)v24 + 7);
            if ( v58 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
              v58 &= ~1u;
            *(_DWORD *)v57 = v58;
            v59 = -1;
            if ( *((_QWORD *)v24 + 4) )
              v59 = **((_DWORD **)v24 + 3);
            *((_DWORD *)v57 + 1) = v59;
            *((_DWORD *)v57 + 2) = v28;
            *(_QWORD *)(v57 + 12) = 0xC00000001LL;
            v22 = (char *)*v13;
          }
          goto LABEL_24;
        }
LABEL_96:
        if ( !*((_QWORD *)v24 + 4) )
          goto LABEL_24;
        v60 = *((unsigned int **)v24 + 3);
LABEL_98:
        if ( *v60 != -1 )
        {
          v61 = v13[1];
          v62 = (char *)v61 + 1;
          if ( v13[2] < (char *)v61 + 1 )
          {
            v157 = qvector_reserve(v13, v22, (char *)v61 + 1, 20);
            *v13 = (void *)v157;
            v22 = (char *)v157;
            v61 = v13[1];
            v62 = (char *)v61 + 1;
          }
          v13[1] = v62;
          v63 = &v22[20 * (_QWORD)v61];
          v64 = **((_DWORD **)v24 + 3);
          if ( v64 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
            v64 &= ~1u;
          *(_DWORD *)v63 = v64;
          if ( *((_QWORD *)v24 + 8) )
            v65 = **((_DWORD **)v24 + 7);
          else
            v65 = *((_DWORD *)v24 + 20);
          *((_DWORD *)v63 + 1) = v65;
          *((_DWORD *)v63 + 2) = v28;
          *(_QWORD *)(v63 + 12) = 0x800000001LL;
          v22 = (char *)*v13;
          if ( *((_QWORD *)v24 + 8) && **((_DWORD **)v24 + 7) != -1 )
          {
            v66 = v13[1];
            v67 = (char *)v66 + 1;
            if ( v13[2] < (char *)v66 + 1 )
            {
              v195 = qvector_reserve(v13, *v13, v67, 20);
              *v13 = (void *)v195;
              v22 = (char *)v195;
              v66 = v13[1];
              v67 = (char *)v66 + 1;
            }
            v13[1] = v67;
            v68 = &v22[20 * (_QWORD)v66];
            v69 = **((_DWORD **)v24 + 7);
            if ( v69 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
              v69 &= ~1u;
            *(_DWORD *)v68 = v69;
            v70 = **((_DWORD **)v24 + 7);
            *((_DWORD *)v68 + 2) = v28;
            *((_DWORD *)v68 + 1) = v70;
            *(_QWORD *)(v68 + 12) = 0xA00000001LL;
            v22 = (char *)*v13;
          }
        }
        goto LABEL_24;
      }
      v27 = *(int **)v24;
      v28 = **(_DWORD **)v24;
      if ( v28 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
      {
        v217 = 14;
        v28 &= ~1u;
        v31 = 0;
        v32 = 0;
      }
      else
      {
        v217 = 14;
        v31 = 0;
        v32 = 0;
      }
      goto LABEL_37;
    }
    if ( v25 != 1 )
      goto LABEL_24;
    v26 = *((_QWORD *)v24 + 1);
    v27 = *(int **)v24;
    if ( v26 )
    {
      v28 = *v27;
      if ( *v27 == -1 )
      {
        v29 = v27[1];
        if ( v29 == -1 )
        {
          v167 = *((_QWORD *)v24 + 4);
          if ( v167 == 1 )
            goto LABEL_180;
          if ( v167 )
          {
LABEL_183:
            v217 = 6;
            v32 = v232;
            v31 = 0;
            goto LABEL_37;
          }
LABEL_36:
          v217 = 2;
          v31 = 0;
          v32 = 0;
LABEL_37:
          v33 = 0;
          v34 = 0;
          while ( 1 )
          {
            v36 = &v27[2 * v34];
            if ( *v36 != -1 )
              break;
LABEL_41:
            v34 = ++v33;
            if ( (unsigned __int64)v33 >= *((_QWORD *)v24 + 1) )
            {
              if ( v24[89] != 2 )
                goto LABEL_84;
              if ( *((_QWORD *)v24 + 4) )
                goto LABEL_116;
              if ( !v32 )
                goto LABEL_85;
LABEL_24:
              v23 = ++v199;
              if ( v199 >= (unsigned __int64)v238 )
                goto LABEL_123;
              goto LABEL_25;
            }
            v27 = *(int **)v24;
          }
          v37 = v13[1];
          v38 = (char *)v37 + 1;
          if ( v13[2] < (char *)v37 + 1 )
          {
            v231 = v31;
            v229 = v32;
            v54 = qvector_reserve(v13, v22, v38, 20);
            *v13 = (void *)v54;
            v22 = (char *)v54;
            v37 = v13[1];
            v31 = v231;
            v32 = v229;
            v38 = (char *)v37 + 1;
          }
          v13[1] = v38;
          v39 = *v36;
          v40 = &v22[20 * (_QWORD)v37];
          if ( *v36 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
            v39 &= ~1u;
          *(_DWORD *)v40 = v39;
          if ( v32 )
          {
            *((_DWORD *)v40 + 1) = 0;
            if ( !v31 )
            {
              v41 = -1;
              if ( *((_QWORD *)v24 + 4) )
              {
                v41 = **((_DWORD **)v24 + 3);
                if ( v41 != -1 && (*(_BYTE *)(v3 + 772) & 8) != 0 )
                  v41 &= ~1u;
              }
              goto LABEL_54;
            }
          }
          else if ( v24[89] == 1 )
          {
            *((_DWORD *)v40 + 1) = *((_DWORD *)v24 + 20);
            if ( !v31 )
            {
LABEL_55:
              *((_DWORD *)v40 + 2) = v28;
              v42 = (unsigned __int8)v24[90];
              *((_DWORD *)v40 + 4) = v217;
              *((_DWORD *)v40 + 3) = v42;
              v43 = v13[1];
              v44 = (__int64)*v13;
              v45 = (char *)v43 + 1;
              if ( v13[2] < (char *)v43 + 1 )
              {
                v230 = v31;
                v228 = v32;
                v53 = qvector_reserve(v13, v44, v45, 20);
                *v13 = (void *)v53;
                v44 = v53;
                v43 = v13[1];
                v31 = v230;
                v32 = v228;
                v45 = (char *)v43 + 1;
              }
              v13[1] = v45;
              v46 = v36[1];
              v47 = (int *)(v44 + 20LL * (_QWORD)v43);
              if ( v46 != -1 || (v46 = *v36, *v36 != -1) )
              {
                if ( (*(_BYTE *)(v3 + 772) & 8) != 0 )
                  v46 &= ~1u;
              }
              *v47 = v46;
              v47[2] = v28;
              v47[3] = (unsigned __int8)v24[90];
              if ( v31 )
              {
                if ( *((_QWORD *)v24 + 8) )
                {
                  v35 = **((_DWORD **)v24 + 7);
LABEL_40:
                  v47[1] = v35;
                  v47[4] = v217 | 1;
                  v22 = (char *)*v13;
                  goto LABEL_41;
                }
              }
              else
              {
                v35 = 0;
                if ( v32 || v24[89] != 1 )
                  goto LABEL_40;
              }
              v35 = *((_DWORD *)v24 + 20);
              goto LABEL_40;
            }
          }
          else
          {
            *((_DWORD *)v40 + 1) = 0;
            if ( !v31 )
              goto LABEL_55;
          }
          if ( *((_QWORD *)v24 + 8) )
            v41 = **((_DWORD **)v24 + 7);
          else
            v41 = *((_DWORD *)v24 + 20);
LABEL_54:
          *((_DWORD *)v40 + 1) = v41;
          goto LABEL_55;
        }
        goto LABEL_32;
      }
      if ( (*(_BYTE *)(v3 + 772) & 8) != 0 )
        v28 &= ~1u;
    }
    else
    {
      v28 = -1;
    }
    v29 = v27[1];
    if ( v29 == -1 )
    {
      v29 = *v27;
      if ( *v27 == -1 )
      {
        v30 = *((_QWORD *)v24 + 4);
        if ( v30 == 1 )
        {
LABEL_180:
          v112 = *((_DWORD **)v24 + 3);
          if ( v112[1] != -1 || *v112 != -1 )
          {
LABEL_182:
            if ( !v26 )
              goto LABEL_96;
            goto LABEL_183;
          }
LABEL_263:
          if ( !v26 )
            goto LABEL_86;
          v217 = 4;
          v31 = v232;
          v32 = 0;
          goto LABEL_37;
        }
        goto LABEL_34;
      }
    }
LABEL_32:
    v30 = *((_QWORD *)v24 + 4);
    if ( (*(_BYTE *)(v3 + 772) & 8) != 0 )
    {
      if ( v30 != 1 )
      {
LABEL_34:
        if ( v30 )
          goto LABEL_182;
        if ( !v26 )
          goto LABEL_24;
        goto LABEL_36;
      }
      v158 = *((unsigned int **)v24 + 3);
      v19 = v158[1];
      if ( (_DWORD)v19 == -1 )
        goto LABEL_182;
      v29 &= ~1u;
      v19 = (unsigned int)v19 & 0xFFFFFFFE;
      if ( v29 != (_DWORD)v19 )
        goto LABEL_182;
      v19 = *v158;
      v113 = *v158 & 0xFFFFFFFE;
      if ( (_DWORD)v19 == -1 )
        goto LABEL_182;
    }
    else
    {
      if ( v30 != 1 )
        goto LABEL_34;
      v60 = *((unsigned int **)v24 + 3);
      v19 = v60[1];
      if ( (_DWORD)v19 == -1 )
      {
        if ( !v26 )
          goto LABEL_98;
        goto LABEL_183;
      }
      if ( (_DWORD)v19 != v29 )
        goto LABEL_182;
      v113 = *v60;
      if ( v113 == -1 )
        goto LABEL_182;
    }
    if ( v113 != v29 )
      goto LABEL_182;
    goto LABEL_263;
  }
  v96 = *(void **)(v4 + 80);
  v48 = 0;
  v13 = (void **)(v4 + 72);
  if ( !v96 )
    return v48;
LABEL_148:
  *(_QWORD *)((char *)v234 + 4) = -1;
  v97 = 20LL * (_QWORD)v96;
  LODWORD(v234[0]) = HIDWORD(v197);
  *(_QWORD *)((char *)&v234[1] + 4) = 0x7FFFFFFF7FFFFFFFLL;
  v98 = (char *)*v13;
  v99 = 0xCCCCCCCCCCCCCCCDLL * ((20 * (__int64)v96) >> 2);
  v100 = (char *)*v13;
  while ( v99 > 0 )
  {
    while ( 1 )
    {
      v101 = &v100[20 * (v99 >> 1)];
      if ( !sub_678330(v101, v234) )
        break;
      v100 = v101 + 20;
      v99 = v102 - 1 - v103;
      if ( v99 <= 0 )
        goto LABEL_152;
    }
    v99 = v103;
  }
LABEL_152:
  if ( v100 != &v98[v97] )
  {
    v48 = 0;
    while ( *(_DWORD *)v100 == HIDWORD(v197) )
    {
      v104 = *((_DWORD *)v100 + 4);
      if ( ((a3 & 1) == 0) == (v100[16] & 1) )
      {
        ptr = nullptr;
        v238 = 0;
        sub_3573A0((char **)&ptr);
        v105 = *((_DWORD *)v100 + 3);
        if ( v105 > 0 )
        {
          do
          {
            v108 = v238;
            if ( (_QWORD)v238 )
            {
              v106 = v238 + 1;
              v107 = v238 + 2;
              v108 = v238 - 1;
            }
            else
            {
              v107 = 3;
              v106 = 2;
            }
            v109 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v107 )
            {
              v225 = v106;
              v219 = v105;
              v201 = (void *)v107;
              ptr = (void *)qvector_reserve(&ptr, ptr, v107, 1);
              v106 = v225;
              v109 = ptr;
              v105 = v219;
              v107 = (unsigned __int64)v201;
            }
            *(_QWORD *)&v238 = v107;
            v109[v106] = 0;
            *(_WORD *)((char *)ptr + v108) = 8224;
            --v105;
          }
          while ( v105 );
        }
        switch ( *((_DWORD *)v100 + 4) & 0xFFFFFFFE )
        {
          case 2u:
            v129 = v238;
            if ( (v104 & 1) != 0 )
              goto LABEL_271;
            if ( (_QWORD)v238 )
            {
              v146 = v238 + 17;
              v147 = v238 + 18;
              v129 = v238 - 1;
            }
            else
            {
              v147 = 19;
              v146 = 18;
            }
            v148 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v147 )
            {
              v206 = (void *)v147;
              ptr = (void *)qvector_reserve(&ptr, ptr, v147, 1);
              v147 = (unsigned __int64)v206;
              v148 = ptr;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_2383FE0);
            *(_QWORD *)&v238 = v147;
            v148[v146] = 0;
            v150 = (char *)ptr + v129;
            *((_WORD *)v150 + 8) = 2306;
            *(__m128i *)v150 = si128;
            v151 = *((_DWORD *)v100 + 1);
            if ( v151 - 1 <= 0xFFFFFFFD )
            {
              v181 = v238;
              if ( (_QWORD)v238 )
              {
                v182 = v238 + 5;
                v183 = v238 + 6;
                v181 = v238 - 1;
              }
              else
              {
                v183 = 7;
                v182 = 6;
              }
              v184 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v183 )
              {
                v220 = v182;
                v212 = (void *)v183;
                ptr = (void *)qvector_reserve(&ptr, ptr, v183, 1);
                v182 = v220;
                v184 = ptr;
                v183 = (unsigned __int64)v212;
              }
              *(_QWORD *)&v238 = v183;
              v184[v182] = 0;
              v185 = (char *)ptr + v181;
              *(_DWORD *)v185 = 788660512;
              *((_WORD *)v185 + 2) = 8239;
              src = nullptr;
              v240 = 0;
              sub_67CBE0(*(_DWORD *)(v3 + 772), (char **)&src, v151);
              if ( (_QWORD)v240 )
              {
                v186 = v240 - 1;
                v187 = v240 - 1;
                if ( (_QWORD)v240 != 1 )
                {
                  v188 = ((_QWORD)v238 == 0) + (_QWORD)v238 - 1LL;
                  v189 = v186 + v188;
                  v190 = v186 + ((_QWORD)v238 == 0) + (_QWORD)v238;
                  if ( *((_QWORD *)&v238 + 1) < v190 )
                  {
                    v222 = v186 + v188;
                    v215 = (void *)(v186 + ((_QWORD)v238 == 0) + (_QWORD)v238);
                    ptr = (void *)qvector_reserve(&ptr, ptr, v190, 1);
                    v189 = v222;
                    v190 = (unsigned __int64)v215;
                  }
                  *(_QWORD *)&v238 = v190;
                  *((_BYTE *)ptr + v189) = 0;
                  memcpy((char *)ptr + v188, src, v187);
                }
              }
              v191 = v238;
              if ( (_QWORD)v238 )
              {
                v192 = v238 + 1;
                v193 = v238 + 2;
                v191 = v238 - 1;
              }
              else
              {
                v193 = 3;
                v192 = 2;
              }
              v194 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v193 )
              {
                v213 = (void *)v193;
                ptr = (void *)qvector_reserve(&ptr, ptr, v193, 1);
                v193 = (unsigned __int64)v213;
                v194 = ptr;
              }
              *(_QWORD *)&v238 = v193;
              v194[v192] = 0;
              *(_WORD *)((char *)ptr + v191) = 514;
              v128 = src;
              if ( !src )
                goto LABEL_196;
              goto LABEL_315;
            }
            if ( *((_DWORD *)v100 + 2) != HIDWORD(v197) )
            {
              v114 = 0;
              goto LABEL_197;
            }
            goto LABEL_198;
          case 4u:
            v129 = v238;
            if ( (v104 & 1) != 0 )
              goto LABEL_271;
            if ( (_QWORD)v238 )
            {
              v142 = v238 + 14;
              v143 = v238 + 15;
              v129 = v238 - 1;
            }
            else
            {
              v143 = 16;
              v142 = 15;
            }
            v144 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v143 )
            {
              v207 = (void *)v143;
              ptr = (void *)qvector_reserve(&ptr, ptr, v143, 1);
              v143 = (unsigned __int64)v207;
              v144 = ptr;
            }
            *(_QWORD *)&v238 = v143;
            v144[v142] = 0;
            v145 = (char *)ptr + v129;
            *v145 = 0x27972745F5F2001LL;
            *(_QWORD *)((char *)v145 + 7) = 0x9027B0901202002LL;
            src = nullptr;
            v240 = 0;
            sub_67CBE0(*(_DWORD *)(v3 + 772), (char **)&src, *((_DWORD *)v100 + 1));
            sub_357520((__int64 *)&ptr);
            v128 = src;
            if ( !src )
              goto LABEL_196;
            goto LABEL_315;
          case 6u:
            v129 = v238;
            if ( (v104 & 1) != 0 )
              goto LABEL_271;
            if ( (_QWORD)v238 )
            {
              v130 = v238 + 32;
              v131 = v238 + 33;
              v129 = v238 - 1;
            }
            else
            {
              v131 = 34;
              v130 = 33;
            }
            v132 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v131 )
            {
              v209 = (void *)v131;
              ptr = (void *)qvector_reserve(&ptr, ptr, v131, 1);
              v131 = (unsigned __int64)v209;
              v132 = ptr;
            }
            v133 = _mm_load_si128((const __m128i *)&xmmword_2383FF0);
            *(_QWORD *)&v238 = v131;
            v132[v130] = 0;
            v134 = (__m128i *)((char *)ptr + v129);
            *v134 = v133;
            v135 = _mm_load_si128((const __m128i *)&xmmword_2384000);
            v134[2].m128i_i8[0] = 32;
            v134[1] = v135;
            v136 = *((_DWORD *)v100 + 1);
            src = nullptr;
            v240 = 0;
            sub_67CBE0(*(_DWORD *)(v3 + 772), (char **)&src, v136);
            v137 = (void *)v240;
            if ( (_QWORD)v240 )
            {
              v138 = v240 - 1;
              if ( (_QWORD)v240 != 1 )
              {
                v139 = v238;
                v140 = v240 - 1;
                if ( (_QWORD)v238 )
                {
                  v139 = v238 - 1;
                  v140 = v138 + v238 - 1;
                  v137 = (void *)(v240 + v238 - 1);
                }
                v141 = ptr;
                if ( *((_QWORD *)&v238 + 1) < (unsigned __int64)v137 )
                {
                  v221 = v140;
                  v214 = v137;
                  ptr = (void *)qvector_reserve(&ptr, ptr, v137, 1);
                  v140 = v221;
                  v141 = ptr;
                  v137 = v214;
                }
                *(_QWORD *)&v238 = v137;
                v141[v140] = 0;
                memcpy((char *)ptr + v139, src, v138);
              }
            }
            v128 = src;
            if ( src )
              goto LABEL_315;
            goto LABEL_196;
          case 8u:
            if ( *((_DWORD *)v100 + 1) <= 1u )
              goto LABEL_195;
            src = nullptr;
            v240 = 0;
            sub_67CBE0(*(_DWORD *)(v3 + 772), (char **)&src, *((_DWORD *)v100 + 1));
            sub_357520((__int64 *)&ptr);
            v128 = src;
            if ( src )
              goto LABEL_315;
            goto LABEL_196;
          case 0xAu:
            v122 = v238;
            if ( (_QWORD)v238 )
            {
              v123 = v238 + 23;
              v124 = v238 + 24;
              v122 = v238 - 1;
            }
            else
            {
              v124 = 25;
              v123 = 24;
            }
            v125 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v124 )
            {
              v205 = (void *)v124;
              ptr = (void *)qvector_reserve(&ptr, ptr, v124, 1);
              v124 = (unsigned __int64)v205;
              v125 = ptr;
            }
            v126 = _mm_load_si128((const __m128i *)&xmmword_2384020);
            *(_QWORD *)&v238 = v124;
            v125[v123] = 0;
            v127 = (char *)ptr + v122;
            *((_QWORD *)v127 + 2) = 0x2F2F020120200272LL;
            *(__m128i *)v127 = v126;
            goto LABEL_196;
          case 0xCu:
            v116 = v238;
            if ( (_QWORD)v238 )
            {
              v117 = v238 + 17;
              v118 = v238 + 18;
              v116 = v238 - 1;
            }
            else
            {
              v118 = 19;
              v117 = 18;
            }
            v119 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v118 )
            {
              v204 = (void *)v118;
              ptr = (void *)qvector_reserve(&ptr, ptr, v118, 1);
              v118 = (unsigned __int64)v204;
              v119 = ptr;
            }
            v120 = _mm_load_si128((const __m128i *)&xmmword_2384010);
            *(_QWORD *)&v238 = v118;
            v119[v117] = 0;
            v121 = (char *)ptr + v116;
            *((_WORD *)v121 + 8) = 12079;
            *(__m128i *)v121 = v120;
            goto LABEL_196;
          case 0xEu:
            v129 = v238;
            if ( (v104 & 1) != 0 )
            {
LABEL_271:
              if ( v129 )
              {
                v163 = v129 + 9;
                v164 = v129 + 10;
                --v129;
              }
              else
              {
                v164 = 11;
                v163 = 10;
              }
              v165 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v164 )
              {
                v203 = (void *)v164;
                ptr = (void *)qvector_reserve(&ptr, ptr, v164, 1);
                v164 = (unsigned __int64)v203;
                v165 = ptr;
              }
              *(_QWORD *)&v238 = v164;
              v165[v163] = 0;
              v166 = (char *)ptr + v129;
              *(_QWORD *)v166 = 0x2012009027D0901LL;
              *((_WORD *)v166 + 4) = 12079;
LABEL_196:
              v114 = v232;
              if ( *((_DWORD *)v100 + 2) != HIDWORD(v197) )
              {
LABEL_197:
                sub_357520((__int64 *)&ptr);
                if ( !v114 )
                  goto LABEL_198;
              }
              v159 = v238;
              if ( (_QWORD)v238 )
              {
                v161 = v238 + 1;
                v160 = v238 + 2;
                v159 = v238 - 1;
              }
              else
              {
                v160 = 3;
                v161 = 2;
              }
              v162 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v160 )
              {
                v202 = (void *)v160;
                ptr = (void *)qvector_reserve(&ptr, ptr, v160, 1);
                v160 = (unsigned __int64)v202;
                v162 = ptr;
              }
              *(_QWORD *)&v238 = v160;
              v162[v161] = 0;
              *(_WORD *)((char *)ptr + v159) = 514;
              goto LABEL_198;
            }
            if ( (_QWORD)v238 )
            {
              v153 = v238 + 12;
              v154 = v238 + 13;
              v129 = v238 - 1;
            }
            else
            {
              v154 = 14;
              v153 = 13;
            }
            v155 = ptr;
            if ( *((_QWORD *)&v238 + 1) < v154 )
            {
              v208 = (void *)v154;
              ptr = (void *)qvector_reserve(&ptr, ptr, v154, 1);
              v154 = (unsigned __int64)v208;
              v155 = ptr;
            }
            *(_QWORD *)&v238 = v154;
            v155[v153] = 0;
            v156 = (char *)ptr + v129;
            *v156 = 0x2020027972742001LL;
            *(_QWORD *)((char *)v156 + 5) = 0x9027B0901202002LL;
            v114 = 0;
            if ( *((_DWORD *)v100 + 2) != HIDWORD(v197) )
              goto LABEL_197;
LABEL_198:
            v115 = haystack;
            if ( (_QWORD)v238 )
              v115 = (const char *)ptr;
            v48 += (*(unsigned __int8 (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)v227 + 136LL))(
                     v227,
                     v115,
                     0);
            if ( ptr )
            {
              *(_QWORD *)&v238 = 0;
              qfree(ptr);
            }
            v98 = (char *)*v13;
            break;
          case 0x10u:
            v152 = *((_DWORD *)v100 + 1);
            if ( v152 == -1 )
            {
              v175 = v238;
              if ( (_QWORD)v238 )
              {
                v176 = v238 + 22;
                v177 = v238 + 23;
                v175 = v238 - 1;
              }
              else
              {
                v177 = 24;
                v176 = 23;
              }
              v178 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v177 )
              {
                v211 = (void *)v177;
                ptr = (void *)qvector_reserve(&ptr, ptr, v177, 1);
                v177 = (unsigned __int64)v211;
                v178 = ptr;
              }
              v179 = _mm_load_si128((const __m128i *)&xmmword_2384030);
              *(_QWORD *)&v238 = v177;
              v178[v176] = 0;
              v180 = (char *)ptr + v175;
              *(__m128i *)v180 = v179;
              *(_QWORD *)(v180 + 15) = 0x2F2F020120090229LL;
            }
            else if ( v152 == -2 )
            {
              v168 = v238;
              if ( (_QWORD)v238 )
              {
                v169 = v238 + 21;
                v170 = v238 + 22;
                v168 = v238 - 1;
              }
              else
              {
                v170 = 23;
                v169 = 22;
              }
              v171 = ptr;
              if ( *((_QWORD *)&v238 + 1) < v170 )
              {
                v210 = (void *)v170;
                ptr = (void *)qvector_reserve(&ptr, ptr, v170, 1);
                v170 = (unsigned __int64)v210;
                v171 = ptr;
              }
              v172 = _mm_load_si128((const __m128i *)&xmmword_2384040);
              *(_QWORD *)&v238 = v170;
              v171[v169] = 0;
              v173 = (char *)ptr + v168;
              *(__m128i *)v173 = v172;
              *(_QWORD *)(v173 + 14) = 0x2F2F020120090229LL;
            }
            else
            {
              src = nullptr;
              v240 = 0;
              sub_67CBE0(*(_DWORD *)(v3 + 772), (char **)&src, *((_DWORD *)v100 + 1));
              sub_357520((__int64 *)&ptr);
              v128 = src;
              if ( src )
              {
LABEL_315:
                *(_QWORD *)&v240 = 0;
                qfree(v128);
              }
            }
            goto LABEL_196;
          default:
LABEL_195:
            sub_357520((__int64 *)&ptr);
            goto LABEL_196;
        }
      }
      v100 += 20;
      if ( v100 == &v98[20 * (_QWORD)v13[1]] )
        goto LABEL_167;
    }
    goto LABEL_167;
  }
LABEL_166:
  v48 = 0;
LABEL_167:
  if ( v235 )
  {
    *(_QWORD *)&v236 = 0;
    qfree(v235);
  }
  return v48;
}

