__int64 __fastcall sub_CB6780(__int64 a1, __int64 *a2)
{
  char **exception; // r13
  char **v3; // r13
  __int64 result; // rax
  __int64 v6; // rsi
  unsigned int v7; // r15d
  __int64 v8; // r8
  _DWORD *v9; // rax
  __int64 v10; // rcx
  char v11; // dl
  unsigned int v12; // edx
  int v13; // edx
  __int64 *v14; // rax
  __int64 v15; // rax
  char *v16; // r9
  __int64 v17; // rax
  _DWORD *v18; // rdx
  __int64 v19; // rax
  int *v20; // r13
  int *v21; // r12
  int *v22; // rsi
  void *v23; // rbx
  void *v24; // r12
  void *v25; // r13
  char v26; // al
  char *v27; // r9
  char v28; // al
  __int64 v29; // rax
  int *v30; // r13
  void *v31; // rdi
  int v32; // eax
  __int64 v33; // r12
  unsigned __int64 v34; // rdx
  int *v35; // r13
  char v36; // dl
  void *v37; // rdi
  char v38; // r8
  __int64 v39; // rax
  char v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  char v43; // al
  char v44; // si
  int v45; // eax
  __int64 v46; // r9
  __int64 v47; // rax
  char v48; // si
  int v49; // esi
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // r12
  char v53; // r9
  int v54; // eax
  __int64 v55; // rax
  char v56; // dl
  char v57; // r9
  char v58; // si
  char v59; // r8
  __int64 v60; // rax
  char v61; // dl
  int *v62; // r13
  int v63; // r10d
  void *v64; // rdi
  unsigned int v65; // eax
  void *v66; // r12
  int v67; // eax
  int v68; // eax
  unsigned int v69; // edx
  unsigned int *v70; // rsi
  __int64 v71; // rax
  char *v72; // r9
  int *v73; // r8
  _DWORD *v74; // rdx
  int *v75; // rdi
  int *i; // rax
  int v77; // ecx
  char v78; // r10
  __int64 v79; // rcx
  char v80; // r10
  __int64 v81; // rcx
  __int64 v82; // rax
  int *v83; // r15
  void *v84; // r12
  __int64 v85; // r13
  unsigned int v86; // eax
  int *v87; // r12
  void *v88; // rdi
  int v89; // eax
  _QWORD *v90; // rax
  unsigned int v91; // edx
  __int64 v92; // rsi
  int v93; // r13d
  int v94; // eax
  __int64 v95; // r13
  __int64 v96; // rdx
  __int64 v97; // r12
  _QWORD *v98; // r8
  int v99; // esi
  __int64 v100; // rax
  __int64 v101; // rdi
  _QWORD *v102; // rax
  _QWORD *v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rax
  unsigned int v106; // ebx
  unsigned int v107; // edx
  __int64 v108; // rax
  __int64 v109; // rdi
  __int64 v110; // rdx
  _DWORD *v111; // rsi
  char *v112; // r9
  int *v113; // rax
  int *v114; // rdi
  int v115; // ecx
  char v116; // r8
  __int64 v117; // rcx
  char v118; // r8
  __int64 v119; // rcx
  __int64 v120; // rax
  int *v121; // r15
  void *v122; // r12
  __int64 v123; // r12
  unsigned int v124; // eax
  __int64 v125; // r13
  __int64 v126; // r12
  __int64 v127; // rsi
  __m128i *v128; // rdx
  __m128i *v129; // rax
  __int64 v130; // rdx
  void *v131; // rcx
  __int64 v132; // rdx
  __m128i *v133; // rsi
  const __m128i *v134; // rdi
  __m128i *v135; // rdx
  _QWORD *v136; // rax
  int v137; // [rsp-10h] [rbp-170h]
  int v138; // [rsp-8h] [rbp-168h]
  int v139; // [rsp-8h] [rbp-168h]
  int v140; // [rsp+0h] [rbp-160h]
  int v141; // [rsp+0h] [rbp-160h]
  int v142; // [rsp+8h] [rbp-158h]
  int v143; // [rsp+8h] [rbp-158h]
  int v144; // [rsp+10h] [rbp-150h]
  void *v145; // [rsp+18h] [rbp-148h]
  int v146; // [rsp+18h] [rbp-148h]
  void *v147; // [rsp+20h] [rbp-140h]
  int *v148; // [rsp+20h] [rbp-140h]
  int v149; // [rsp+20h] [rbp-140h]
  char *v150; // [rsp+20h] [rbp-140h]
  char *v151; // [rsp+20h] [rbp-140h]
  int v152; // [rsp+28h] [rbp-138h]
  char *v153; // [rsp+28h] [rbp-138h]
  char v154; // [rsp+28h] [rbp-138h]
  int v155; // [rsp+28h] [rbp-138h]
  unsigned int v156; // [rsp+28h] [rbp-138h]
  __int64 v157; // [rsp+28h] [rbp-138h]
  char *v158; // [rsp+28h] [rbp-138h]
  int *v159; // [rsp+30h] [rbp-130h]
  __int64 v160; // [rsp+30h] [rbp-130h]
  char *v161; // [rsp+30h] [rbp-130h]
  char *v162; // [rsp+30h] [rbp-130h]
  int v163; // [rsp+30h] [rbp-130h]
  unsigned int v164; // [rsp+30h] [rbp-130h]
  int *v165; // [rsp+30h] [rbp-130h]
  char *v166; // [rsp+30h] [rbp-130h]
  int *v167; // [rsp+38h] [rbp-128h]
  int v168; // [rsp+38h] [rbp-128h]
  int v169[2]; // [rsp+40h] [rbp-120h]
  int v170; // [rsp+40h] [rbp-120h]
  __int64 v171; // [rsp+48h] [rbp-118h]
  void *v172; // [rsp+48h] [rbp-118h]
  void *v173; // [rsp+50h] [rbp-110h]
  unsigned int v174; // [rsp+50h] [rbp-110h]
  char *v175; // [rsp+50h] [rbp-110h]
  __int64 v176; // [rsp+50h] [rbp-110h]
  char *v177; // [rsp+50h] [rbp-110h]
  char *v178; // [rsp+58h] [rbp-108h]
  int *v179; // [rsp+60h] [rbp-100h]
  int *v180; // [rsp+68h] [rbp-F8h]
  __int64 v181; // [rsp+68h] [rbp-F8h]
  char *ptr; // [rsp+70h] [rbp-F0h]
  unsigned int ptra; // [rsp+70h] [rbp-F0h]
  size_t ptrb; // [rsp+70h] [rbp-F0h]
  unsigned int ptrc; // [rsp+70h] [rbp-F0h]
  int v186[2]; // [rsp+78h] [rbp-E8h]
  void *v187; // [rsp+78h] [rbp-E8h]
  int v188[2]; // [rsp+78h] [rbp-E8h]
  bool v189; // [rsp+78h] [rbp-E8h]
  int v190[2]; // [rsp+78h] [rbp-E8h]
  int v191; // [rsp+78h] [rbp-E8h]
  int v192[2]; // [rsp+78h] [rbp-E8h]
  void *v193; // [rsp+78h] [rbp-E8h]
  int v194[2]; // [rsp+78h] [rbp-E8h]
  int v195; // [rsp+80h] [rbp-E0h]
  int v196; // [rsp+88h] [rbp-D8h]
  char v197; // [rsp+8Fh] [rbp-D1h] BYREF
  __int64 v198; // [rsp+90h] [rbp-D0h] BYREF
  int v199[2]; // [rsp+98h] [rbp-C8h] BYREF
  int v200; // [rsp+A0h] [rbp-C0h] BYREF
  void *v201; // [rsp+A8h] [rbp-B8h]
  int v202; // [rsp+B0h] [rbp-B0h] BYREF
  int v203[2]; // [rsp+B8h] [rbp-A8h]
  _QWORD v204[2]; // [rsp+D0h] [rbp-90h] BYREF
  _QWORD v205[2]; // [rsp+E0h] [rbp-80h] BYREF
  _QWORD v206[2]; // [rsp+F0h] [rbp-70h] BYREF
  _QWORD v207[2]; // [rsp+100h] [rbp-60h] BYREF
  __int64 v208; // [rsp+110h] [rbp-50h] BYREF
  __int64 v209; // [rsp+118h] [rbp-48h]
  __int64 v210; // [rsp+120h] [rbp-40h] BYREF
  __int64 v211; // [rsp+128h] [rbp-38h]

  LODWORD(v171) = a1;
  v179 = &v200;
  *(_QWORD *)v169 = *(_QWORD *)(a1 + 48);
  sub_16669D0(&v200, *(_QWORD *)v169);
  v167 = &v202;
  sub_16744A0(&v202, *(_QWORD *)v169);
  result = a2[9];
  if ( !result )
    return result;
  v6 = *a2;
  v7 = 0;
  while ( 2 )
  {
    v10 = result;
    v11 = *(_BYTE *)(result + 3) >> 6;
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_11;
LABEL_22:
      if ( v7 >= *(_DWORD *)(v10 + 4) + 1 )
        return result;
      goto LABEL_14;
    }
    do
    {
      v10 = *(_QWORD *)(v10 + 16);
      v11 = *(_BYTE *)(v10 + 3) >> 6;
    }
    while ( !v11 );
    if ( v11 == 1 )
      goto LABEL_22;
LABEL_11:
    if ( v11 == 2 )
      v12 = *(_DWORD *)(v10 + 4) - 1;
    else
      v12 = *(_DWORD *)(v10 + 4);
    if ( v7 >= v12 )
      return result;
LABEL_14:
    if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
    {
      v8 = *(_QWORD *)(v6 + 864);
      goto LABEL_4;
    }
    v13 = 17;
    while ( 1 )
    {
      if ( *(char *)(result + 3) < 0 )
      {
        if ( *(_BYTE *)(result + 3) >> 6 != 2 )
        {
          v14 = (__int64 *)(*(_QWORD *)(result + 16) + 8LL * v7);
          goto LABEL_19;
        }
        goto LABEL_25;
      }
      if ( *(_DWORD *)(result + 4) == v7 )
        break;
LABEL_25:
      result = *(_QWORD *)(result + 16);
      if ( !--v13 )
      {
        sub_233F80((__int64 *)(v6 + 616), (_DWORD *)a2 + 18);
        v14 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8LL * v7);
        goto LABEL_19;
      }
    }
    v14 = (__int64 *)(result + 8);
LABEL_19:
    v8 = *v14;
LABEL_4:
    if ( *(_WORD *)(v8 + 4) )
      goto LABEL_7;
    v9 = *(_DWORD **)(*(_QWORD *)(v8 + 16) + 24LL);
    if ( !v9 || *v9 || v9[1] != 6 )
      goto LABEL_7;
    v15 = *(unsigned int *)(v8 + 24);
    v205[0] = 1;
    v204[0] = 0;
    v204[1] = 0;
    v205[1] = 0;
    if ( !(_DWORD)v15 )
      goto LABEL_39;
    v16 = (char *)v8;
    v180 = nullptr;
    *(_QWORD *)v186 = v8 + 8 * v15;
    v173 = nullptr;
    do
    {
      v17 = *((_QWORD *)v16 + 4);
      if ( *(_WORD *)(v17 + 4)
        || (v18 = *(_DWORD **)(*(_QWORD *)(v17 + 16) + 24LL)) == nullptr
        || *v18
        || v18[1] != 2
        || *(_DWORD *)(v17 + 24) != 2 )
      {
LABEL_34:
        if ( v180 )
        {
LABEL_35:
          v19 = (unsigned int)*(v180 - 1);
          if ( (_DWORD)v19 )
          {
            v20 = v180;
            v21 = &v180[8 * v19];
            do
            {
              v187 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v20);
              v22 = v20 + 4;
              v20 += 8;
              sub_182CBA0(v187, v22);
            }
            while ( v21 != v20 );
          }
          sub_186B220(v180 - 2);
        }
LABEL_39:
        v23 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v204);
        sub_182CBA0(v23, v205);
        goto LABEL_7;
      }
      v24 = *(void **)(v17 + 40);
      ptr = v16;
      v25 = *(void **)(v17 + 32);
      v26 = sub_1666AE0(v179, v24, v204, &v197);
      v27 = ptr;
      if ( v26 && v197 && (v25 == v173 || !v173) )
      {
        if ( v180 )
        {
          v86 = *(v180 - 1);
          if ( v86 == *(v180 - 2) )
          {
            v106 = (3 * v86 + 1) >> 1;
            v107 = 32 * v106 + 8;
            if ( 32 * v86 + 8 >= v107 || v86 >= v106 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v208, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, &v208);
              sub_233E40((__int64)&v208);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v108 = sub_186B270(v107);
            v109 = (unsigned int)*(v180 - 1);
            v110 = v108 + 8;
            v111 = (_DWORD *)v108;
            v112 = ptr;
            v165 = (int *)(v108 + 8);
            *(_DWORD *)(v108 + 4) = v109;
            v113 = v180;
            v114 = &v180[8 * v109];
            if ( v180 != v114 )
            {
              do
              {
                v115 = *v113;
                v116 = *((_BYTE *)v113 + 4);
                v113 += 8;
                v110 += 32;
                *(_DWORD *)(v110 - 32) = v115;
                *(_BYTE *)(v110 - 28) = v116 & 3 | *(_BYTE *)(v110 - 28) & 0xFC;
                v117 = *((_QWORD *)v113 - 3);
                *((_QWORD *)v113 - 3) = 0;
                *(_QWORD *)(v110 - 24) = v117;
                v118 = *((_BYTE *)v113 - 12);
                *(_DWORD *)(v110 - 16) = *(v113 - 4);
                *(_BYTE *)(v110 - 12) = v118 & 3 | *(_BYTE *)(v110 - 12) & 0xFC;
                v119 = *((_QWORD *)v113 - 1);
                *((_QWORD *)v113 - 1) = 0;
                *(_QWORD *)(v110 - 8) = v119;
              }
              while ( v113 != v114 );
            }
            v120 = (unsigned int)*(v180 - 1);
            if ( (_DWORD)v120 )
            {
              v151 = ptr;
              v157 = *(_QWORD *)v186;
              *(_QWORD *)v192 = v180;
              ptrc = v7;
              v121 = &v180[8 * v120];
              do
              {
                v122 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v192);
                sub_182CBA0(v122, *(_QWORD *)v192 + 16LL);
                *(_QWORD *)v192 += 32LL;
              }
              while ( *(int **)v192 != v121 );
              v7 = ptrc;
              v112 = v151;
              *(_QWORD *)v186 = v157;
            }
            v158 = v112;
            sub_186B220(v180 - 2);
            v27 = v158;
            v123 = (unsigned int)v111[1];
            *v111 = v106;
            v180 = v165;
            v87 = &v165[8 * v123];
          }
          else
          {
            v87 = &v180[8 * v86];
          }
        }
        else
        {
          v136 = (_QWORD *)sub_186B270(0x48u);
          *v136 = 2;
          v27 = ptr;
          v180 = (int *)(v136 + 1);
          v87 = (int *)(v136 + 1);
        }
        *(_QWORD *)v87 = 0;
        *((_QWORD *)v87 + 1) = 0;
        *((_QWORD *)v87 + 2) = 1;
        v88 = qword_1C7F2C0;
        *((_QWORD *)v87 + 3) = 0;
        if ( (v204[0] & 0x100000000LL) != 0 )
        {
          v166 = v27;
          sub_182C690(v88, v87, v204);
          v27 = v166;
        }
        else
        {
          *v87 = v204[0];
        }
        if ( (v205[0] & 0x100000000LL) != 0 )
        {
          v177 = v27;
          sub_182C690(v88, v87 + 4, v205);
          v27 = v177;
        }
        else
        {
          v89 = v205[0];
          *((_BYTE *)v87 + 20) &= ~1u;
          v87[4] = v89;
        }
        v173 = v25;
        ++*(v180 - 1);
      }
      else
      {
        v28 = sub_1666AE0(v179, v25, v204, &v197);
        v27 = ptr;
        if ( !v28 || !v197 || v24 != v173 && v173 )
          goto LABEL_34;
        if ( v180 )
        {
          v29 = (unsigned int)*(v180 - 1);
          if ( (_DWORD)v29 == *(v180 - 2) )
          {
            v174 = (unsigned int)(3 * v29 + 1) >> 1;
            v69 = 32 * v174 + 8;
            if ( 32 * (int)v29 + 8 >= v69 || (unsigned int)v29 >= (unsigned int)(3 * v29 + 1) >> 1 )
            {
              v3 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(&v208, "Overflow encountered when expanding vector");
              *v3 = (char *)off_1C63128;
              sub_2333C0(v3 + 1, &v208);
              sub_233E40((__int64)&v208);
              __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v70 = (unsigned int *)sub_186B270(v69);
            v71 = (unsigned int)*(v180 - 1);
            v72 = ptr;
            v73 = (int *)(v70 + 2);
            v70[1] = v71;
            v74 = v70 + 2;
            v75 = &v180[8 * v71];
            for ( i = v180; i != v75; *((_QWORD *)v74 - 1) = v81 )
            {
              v77 = *i;
              v78 = *((_BYTE *)i + 4);
              i += 8;
              v74 += 8;
              *(v74 - 8) = v77;
              *((_BYTE *)v74 - 28) = v78 & 3 | *(_BYTE *)(v74 - 7) & 0xFC;
              v79 = *((_QWORD *)i - 3);
              *((_QWORD *)i - 3) = 0;
              *((_QWORD *)v74 - 3) = v79;
              v80 = *((_BYTE *)i - 12);
              *(v74 - 4) = *(i - 4);
              *((_BYTE *)v74 - 12) = v80 & 3 | *(_BYTE *)(v74 - 3) & 0xFC;
              v81 = *((_QWORD *)i - 1);
              *((_QWORD *)i - 1) = 0;
            }
            v82 = (unsigned int)*(v180 - 1);
            if ( (_DWORD)v82 )
            {
              v153 = ptr;
              v147 = v24;
              v160 = *(_QWORD *)v186;
              ptra = v7;
              v83 = &v180[8 * v82];
              *(_QWORD *)v190 = v180;
              do
              {
                v84 = qword_1C7F2C0;
                sub_182CBA0(qword_1C7F2C0, *(_QWORD *)v190);
                sub_182CBA0(v84, *(_QWORD *)v190 + 16LL);
                *(_QWORD *)v190 += 32LL;
              }
              while ( *(int **)v190 != v83 );
              v7 = ptra;
              v72 = v153;
              v24 = v147;
              *(_QWORD *)v186 = v160;
              v73 = (int *)(v70 + 2);
            }
            v148 = v73;
            v161 = v72;
            sub_186B220(v180 - 2);
            v27 = v161;
            v85 = v70[1];
            v180 = v148;
            *v70 = v174;
            v30 = &v148[8 * v85];
          }
          else
          {
            v30 = &v180[8 * v29];
          }
        }
        else
        {
          v90 = (_QWORD *)sub_186B270(0x48u);
          *v90 = 2;
          v27 = ptr;
          v180 = (int *)(v90 + 1);
          v30 = (int *)(v90 + 1);
        }
        *(_QWORD *)v30 = 0;
        *((_QWORD *)v30 + 1) = 0;
        *((_QWORD *)v30 + 2) = 1;
        v31 = qword_1C7F2C0;
        *((_QWORD *)v30 + 3) = 0;
        if ( (v204[0] & 0x100000000LL) != 0 )
        {
          v162 = v27;
          sub_182C690(v31, v30, v204);
          v27 = v162;
        }
        else
        {
          *v30 = v204[0];
        }
        if ( (v205[0] & 0x100000000LL) != 0 )
        {
          v175 = v27;
          sub_182C690(v31, v30 + 4, v205);
          v27 = v175;
        }
        else
        {
          v32 = v205[0];
          *((_BYTE *)v30 + 20) &= ~1u;
          v30[4] = v32;
        }
        v173 = v24;
        ++*(v180 - 1);
      }
      v16 = v27 + 8;
    }
    while ( *(char **)v186 != v16 );
    if ( !v173 )
      goto LABEL_35;
    v33 = 8LL * (unsigned int)*(v180 - 1);
    v159 = &v180[v33];
    if ( &v180[v33] == v180 )
      goto LABEL_76;
    _BitScanReverse64(&v34, (v33 * 4) >> 5);
    sub_CB9610(v180, &v180[v33], 2LL * (int)v34);
    if ( (unsigned __int64)v33 <= 128 )
    {
      sub_CB1680(v180, v159);
      goto LABEL_76;
    }
    v35 = v180 + 128;
    sub_CB1680(v180, v180 + 128);
    while ( 2 )
    {
      v36 = *((_BYTE *)v35 + 4);
      v37 = qword_1C7F2C0;
      LODWORD(v208) = *v35;
      v38 = BYTE4(v210) & 0xFC;
      BYTE4(v208) = v36 & 3 | BYTE4(v208) & 0xFC;
      v39 = *((_QWORD *)v35 + 1);
      *((_QWORD *)v35 + 1) = 0;
      v209 = v39;
      LODWORD(v210) = v35[4];
      v40 = v35[5] & 3 | v38;
      v41 = *((_QWORD *)v35 + 3);
      *((_QWORD *)v35 + 3) = 0;
      BYTE4(v210) = v40;
      v211 = v41;
      v42 = (__int64)(v35 - 8);
      *(_QWORD *)v188 = v35 - 8;
      while ( 2 )
      {
        v52 = v42 + 32;
        if ( (v40 & 1) != 0 || (_DWORD)v210 != 1 || (*(_BYTE *)(v42 + 20) & 1) != 0 || *(_DWORD *)(v42 + 16) != 1 )
        {
          v43 = sub_1848D40(v37, &v208, *(_QWORD *)v188);
          v37 = qword_1C7F2C0;
          if ( !v43 )
            break;
          goto LABEL_66;
        }
        v53 = BYTE4(v208);
        if ( (v208 & 0x100000000LL) == 0 )
        {
          v44 = *(_BYTE *)(v42 + 4);
          if ( (v44 & 1) == 0 )
          {
            if ( (int)v208 >= *(_DWORD *)v42 )
              goto LABEL_75;
            goto LABEL_67;
          }
        }
        v68 = sub_182C7B0(v37, &v208, *(_QWORD *)v188);
        v37 = qword_1C7F2C0;
        if ( v68 < 0 )
        {
LABEL_66:
          v40 = BYTE4(v210);
          v44 = *(_BYTE *)(*(_QWORD *)v188 + 4LL);
LABEL_67:
          v45 = *(_DWORD *)(*(_QWORD *)v188 + 32LL);
          *(_DWORD *)(*(_QWORD *)v188 - 32LL + 64) = **(_DWORD **)v188;
          v46 = *(_QWORD *)(*(_QWORD *)v188 - 32LL + 40);
          **(_DWORD **)v188 = v45;
          v47 = *(_QWORD *)(*(_QWORD *)v188 - 32LL + 72);
          *(_QWORD *)(*(_QWORD *)v188 - 32LL + 72) = v46;
          LOBYTE(v46) = v44 & 2;
          *(_QWORD *)(*(_QWORD *)v188 - 32LL + 40) = v47;
          v48 = *(_BYTE *)(v52 + 4);
          *(_BYTE *)(v52 + 4) = v46 | v48 & 0xFD;
          LOBYTE(v47) = v48 & 2 | *(_BYTE *)(*(_QWORD *)v188 - 32LL + 36) & 0xFD;
          *(_BYTE *)(*(_QWORD *)v188 - 32LL + 36) = v47;
          LOBYTE(v46) = *(_BYTE *)(v52 + 4);
          *(_BYTE *)(v52 + 4) = v47 & 1 | v46 & 0xFE;
          v49 = *(_DWORD *)(*(_QWORD *)v188 - 32LL + 48);
          LOBYTE(v47) = v46 & 1 | *(_BYTE *)(*(_QWORD *)v188 - 32LL + 36) & 0xFE;
          LOBYTE(v46) = *(_BYTE *)(*(_QWORD *)v188 - 32LL + 52);
          *(_BYTE *)(*(_QWORD *)v188 - 32LL + 36) = v47;
          LODWORD(v47) = *(_DWORD *)(*(_QWORD *)v188 - 32LL + 80);
          *(_DWORD *)(*(_QWORD *)v188 - 32LL + 80) = v49;
          v50 = *(_QWORD *)(*(_QWORD *)v188 - 32LL + 56);
          *(_DWORD *)(*(_QWORD *)v188 - 32LL + 48) = v47;
          v51 = *(_QWORD *)(*(_QWORD *)v188 - 32LL + 88);
          *(_QWORD *)(*(_QWORD *)v188 - 32LL + 88) = v50;
          *(_QWORD *)(*(_QWORD *)v188 - 32LL + 56) = v51;
          LOBYTE(v50) = *(_BYTE *)(v52 + 20);
          *(_BYTE *)(v52 + 20) = v46 & 2 | v50 & 0xFD;
          LOBYTE(v51) = v50 & 2 | *(_BYTE *)(*(_QWORD *)v188 - 32LL + 52) & 0xFD;
          *(_BYTE *)(*(_QWORD *)v188 - 32LL + 52) = v51;
          LOBYTE(v46) = *(_BYTE *)(v52 + 20) & 1;
          *(_BYTE *)(v52 + 20) = v51 & 1 | *(_BYTE *)(v52 + 20) & 0xFE;
          *(_BYTE *)(*(_QWORD *)v188 - 32LL + 52) = v46 | *(_BYTE *)(*(_QWORD *)v188 - 32LL + 52) & 0xFE;
          v42 = *(_QWORD *)v188 - 32LL;
          *(_QWORD *)v188 -= 32LL;
          continue;
        }
        break;
      }
      v40 = BYTE4(v210);
      v53 = BYTE4(v208);
LABEL_75:
      v54 = *(_DWORD *)v52;
      v35 += 8;
      *(_DWORD *)v52 = v208;
      LODWORD(v208) = v54;
      v55 = *(_QWORD *)(v52 + 8);
      *(_QWORD *)(v52 + 8) = v209;
      v56 = *(_BYTE *)(v52 + 4);
      v209 = v55;
      LOBYTE(v55) = v53;
      v57 = v53 & 0xFD;
      *(_BYTE *)(v52 + 4) = v57 & 1 | v56 & 0xFC | v55 & 2;
      v58 = v40;
      v59 = v40 & 0xFD;
      BYTE4(v208) = v56 & 1 | v57 & 0xFE | v56 & 2;
      LODWORD(v55) = *(_DWORD *)(v52 + 16);
      *(_DWORD *)(v52 + 16) = v210;
      LODWORD(v210) = v55;
      v60 = *(_QWORD *)(v52 + 24);
      *(_QWORD *)(v52 + 24) = v211;
      v211 = v60;
      v61 = *(_BYTE *)(v52 + 20);
      LOBYTE(v60) = v61 & 2;
      v61 &= ~2u;
      BYTE4(v210) = v61 & 1 | (v59 | v60) & 0xFE;
      *(_BYTE *)(v52 + 20) = v59 & 1 | v61 & 0xFE | v58 & 2;
      sub_182CBA0(v37, &v208);
      sub_182CBA0(v37, &v210);
      if ( v159 != v35 )
        continue;
      break;
    }
LABEL_76:
    v62 = v180;
    v206[0] = 1;
    v206[1] = 0;
    v207[0] = 1;
    v207[1] = 0;
    sub_182CBA0(qword_1C7F2C0, v207);
    v63 = *(v180 - 1);
    BYTE4(v207[0]) &= ~1u;
    LODWORD(v207[0]) = 1;
    v152 = 0;
    if ( !v63 )
      goto LABEL_114;
    while ( 2 )
    {
      v66 = qword_1C7F2C0;
      if ( (v206[0] & 0x100000000LL) != 0 || (v62[1] & 1) != 0 )
      {
        v67 = sub_182C7B0(qword_1C7F2C0, v206, v62);
        v189 = v67 == 0;
        if ( !v67 )
        {
LABEL_88:
          if ( (v207[0] & 0x100000000LL) != 0 || (v62[5] & 1) != 0 )
            v189 = (unsigned int)sub_182C7B0(v66, v207, v62 + 4) == 0;
          else
            v189 = LODWORD(v207[0]) == v62[4];
        }
      }
      else
      {
        v189 = LODWORD(v206[0]) == *v62;
        if ( LODWORD(v206[0]) == *v62 )
          goto LABEL_88;
      }
      v208 = 2;
      v209 = 0;
      v210 = 1;
      v211 = 0;
      sub_182CBA0(qword_1C7F2C0, &v210);
      v64 = qword_1C7F2C0;
      LODWORD(v210) = 1;
      BYTE4(v210) &= ~1u;
      if ( (v207[0] & 0x100000000LL) == 0 && LODWORD(v207[0]) == 1 )
      {
        sub_1831650(qword_1C7F2C0, v206, &v208);
        sub_182CBA0(v64, v207);
        BYTE4(v207[0]) &= ~1u;
        LODWORD(v207[0]) = 1;
      }
      else
      {
        sub_1848FF0(qword_1C7F2C0, v206, &v208);
      }
      v145 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v208);
      sub_182CBA0(v145, &v210);
      v65 = v152 + 1;
      if ( !v189 )
        goto LABEL_114;
      v62 += 8;
      if ( v65 < *(v180 - 1) )
      {
        ++v152;
        continue;
      }
      break;
    }
    v91 = 1;
    LODWORD(v92) = 0;
    do
    {
      v91 *= 2;
      v93 = v92;
      v92 = (unsigned int)(v92 + 1);
    }
    while ( v65 >= v91 );
    if ( !(_DWORD)v92 )
    {
LABEL_114:
      sub_25A130((char *)v206);
      goto LABEL_35;
    }
    v191 = sub_1674700(v167, v92);
    sub_180C5A0(&v208, "log2_v");
    v94 = sub_15E3D10(
            v169[0],
            (int)&v208,
            (int)&qword_18D6CD0,
            0,
            0,
            v191,
            1,
            v138,
            v140,
            v142,
            (int)v207,
            (int)v145,
            (int)v206,
            v152,
            (char)&v210,
            (int)v167,
            v169[0],
            v171,
            (int)v173,
            (int)v204,
            (int)v179,
            (int)v180,
            (int)&v208,
            v191,
            v195,
            v196,
            v198,
            v199[0],
            v200,
            v201,
            v202,
            *(__int64 *)v203);
    *(_QWORD *)v199 = sub_15DC610(
                        v170,
                        v94,
                        0,
                        0,
                        v137,
                        v139,
                        v141,
                        v143,
                        v144,
                        v146,
                        v149,
                        v154,
                        v163,
                        v168,
                        v170,
                        v172);
    LOBYTE(v209) = 0;
    LODWORD(v208) = v155 - v93;
    v95 = sub_15DCAD0(v203[0], (int)v199, 0);
    sub_15D0DF0(&v208);
    v198 = v95;
    if ( v95 )
      ++*(_DWORD *)(v95 + 8);
    sub_CB55F0((_QWORD *)(v171 + 56), &v198);
    v96 = *(unsigned int *)(v171 + 32);
    v164 = 2 * v96;
    if ( 3 * (int)v96 < (unsigned int)(4 * (*(_DWORD *)(v171 + 36) + *(_DWORD *)(v171 + 40))) )
    {
      ptrb = 16LL * v164;
      v97 = sub_186B270(ptrb);
      v128 = (__m128i *)v97;
      v129 = (__m128i *)(v97 + ptrb);
      if ( v164 )
      {
        if ( (ptrb & 0x10) == 0 || (v128 = (__m128i *)(v97 + 16), *(_OWORD *)v97 = 0, (__m128i *)(v97 + 16) != v129) )
        {
          do
          {
            *v128 = 0;
            v128 += 2;
            v128[-1] = 0;
          }
          while ( v128 != v129 );
        }
      }
      v98 = (_QWORD *)(v97 + ptrb);
      v156 = v164 - 1;
      v130 = 16LL * *(unsigned int *)(v171 + 32);
      *(_QWORD *)v194 = *(_QWORD *)(v171 + 24);
      v131 = (void *)(*(_QWORD *)v194 + v130);
      if ( *(_QWORD *)v194 != *(_QWORD *)v194 + v130 )
      {
        do
        {
          if ( **(_QWORD **)v194 > 1u )
          {
            v132 = 16LL * (*(_DWORD *)(**(_QWORD **)v194 + 12LL) & v156);
            v133 = (__m128i *)(v97 + v132);
            if ( ptrb == v132 )
            {
LABEL_170:
              if ( (__m128i *)v97 == v133 )
              {
LABEL_182:
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v134 = *(const __m128i **)v194;
              v135 = (__m128i *)v97;
              while ( v135->m128i_i64[0] )
              {
                if ( v133 == ++v135 )
                  goto LABEL_182;
              }
            }
            else
            {
              v134 = *(const __m128i **)v194;
              v135 = (__m128i *)(v97 + v132);
              while ( v135->m128i_i64[0] )
              {
                if ( v129 == ++v135 )
                  goto LABEL_170;
              }
            }
            *(_QWORD *)v194 = v134;
            *v135 = _mm_loadu_si128(v134);
          }
          *(_QWORD *)v194 += 16LL;
        }
        while ( v131 != *(void **)v194 );
        v131 = *(void **)(v171 + 24);
      }
      if ( v131 )
      {
        sub_186B220(v131);
        v98 = (_QWORD *)(v97 + ptrb);
      }
      *(_QWORD *)(v171 + 24) = v97;
      *(_DWORD *)(v171 + 32) = v164;
      *(_DWORD *)(v171 + 40) = 0;
    }
    else
    {
      v97 = *(_QWORD *)(v171 + 24);
      v156 = v96 - 1;
      ptrb = 16 * v96;
      v98 = (_QWORD *)(v97 + 16 * v96);
    }
    v99 = *(_DWORD *)(v176 + 12);
    v100 = 16LL * (v99 & v156);
    v101 = v97 + v100;
    if ( v100 == ptrb )
    {
      v103 = nullptr;
LABEL_132:
      if ( v101 == v97 )
      {
LABEL_152:
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      while ( 1 )
      {
        v105 = *(_QWORD *)v97;
        if ( *(_QWORD *)v97 > 1u )
        {
          if ( *(_DWORD *)(v105 + 12) == v99 && v176 == v105 )
          {
            *(_QWORD *)(v97 + 8) = v95;
            *(_QWORD *)v97 = v176;
            goto LABEL_153;
          }
        }
        else
        {
          if ( !v105 )
          {
            if ( v103 )
              goto LABEL_180;
            v103 = (_QWORD *)v97;
            goto LABEL_181;
          }
          v103 = (_QWORD *)v97;
        }
        v97 += 16;
        if ( v101 == v97 )
          goto LABEL_152;
      }
    }
    v102 = (_QWORD *)(v97 + v100);
    v103 = nullptr;
    while ( 2 )
    {
      v104 = *v102;
      if ( *v102 > 1u )
      {
        if ( *(_DWORD *)(v104 + 12) == v99 && v176 == v104 )
        {
          v102[1] = v95;
          *v102 = v176;
          goto LABEL_153;
        }
        goto LABEL_127;
      }
      if ( v104 )
      {
        v103 = v102;
LABEL_127:
        v102 += 2;
        if ( v102 == v98 )
          goto LABEL_132;
        continue;
      }
      break;
    }
    if ( v103 )
LABEL_180:
      --*(_DWORD *)(v171 + 40);
    else
      v103 = v102;
LABEL_181:
    v103[1] = v95;
    *v103 = v176;
    ++*(_DWORD *)(v171 + 36);
LABEL_153:
    sub_25A130(v150);
    v124 = *(_DWORD *)(v181 - 4);
    if ( v124 )
    {
      v125 = v181;
      v126 = v181 + 32LL * v124;
      do
      {
        v193 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v125);
        v127 = v125 + 16;
        v125 += 32;
        sub_182CBA0(v193, v127);
      }
      while ( v125 != v126 );
    }
    sub_186B220((void *)(v181 - 8));
    sub_25A130(v178);
LABEL_7:
    result = a2[9];
    ++v7;
    if ( result )
    {
      v6 = *a2;
      continue;
    }
    return result;
  }
}

