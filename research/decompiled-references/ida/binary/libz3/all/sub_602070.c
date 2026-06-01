__int64 __fastcall sub_602070(
        __int64 a1,
        __int64 *a2,
        double a3,
        __m128i a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  char **v9; // rbp
  char **exception; // rbp
  char **v11; // rbp
  char **v12; // rbp
  char **v13; // r12
  __int64 v14; // rbx
  __int64 v15; // rax
  unsigned int v16; // r14d
  __int64 v17; // rdi
  __int64 v18; // rbp
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // edx
  size_t v27; // rsi
  unsigned int v28; // r14d
  unsigned int *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbp
  unsigned int v32; // r14d
  _QWORD *v33; // r12
  _QWORD *v34; // r13
  __int64 v35; // r15
  unsigned int v36; // eax
  __int64 v37; // rax
  __int64 v38; // rbp
  unsigned int v39; // eax
  unsigned int v40; // r13d
  unsigned int v41; // r12d
  unsigned int v42; // r15d
  _QWORD *v43; // rdx
  unsigned int v44; // ebp
  int v45; // esi
  int v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // eax
  unsigned int v49; // r12d
  int v50; // esi
  _QWORD *v51; // rax
  _QWORD *v52; // rax
  unsigned int v53; // r12d
  size_t v54; // rsi
  unsigned int *v55; // rax
  unsigned int v56; // eax
  unsigned int v57; // r13d
  __int64 v58; // r12
  __int64 v59; // rax
  int *v60; // rax
  __int64 v61; // rcx
  char v62; // bp
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // r13
  __int64 v68; // rbx
  __int64 v69; // rsi
  __int64 v70; // r13
  __int64 v71; // rax
  unsigned int v72; // eax
  _QWORD *v73; // rdx
  __int64 v74; // rbp
  unsigned int v75; // r12d
  size_t v76; // rsi
  unsigned int *v77; // rax
  unsigned int v78; // ecx
  __int64 v79; // rsi
  _QWORD *v80; // rcx
  _QWORD *v81; // rdx
  _QWORD *v82; // rax
  int v83; // eax
  unsigned int v84; // r13d
  size_t v85; // rsi
  unsigned int *v86; // rax
  unsigned int v87; // ecx
  __int64 v88; // rsi
  __int64 v89; // rax
  _QWORD *v90; // rcx
  _QWORD *v91; // rdx
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  unsigned int v94; // ebp
  int v95; // esi
  unsigned int v96; // r15d
  size_t v97; // rsi
  unsigned int *v98; // rax
  unsigned int v99; // ecx
  __int64 v100; // rdi
  __int64 v101; // rax
  _QWORD *v102; // rcx
  _QWORD *v103; // rdx
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rdx
  __int64 v107; // r12
  __int64 v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rbp
  __int64 v111; // r12
  __int64 v112; // r13
  __int64 v113; // rsi
  __int64 *v114; // rbx
  unsigned __int64 v115; // rbp
  __int64 v116; // rsi
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdx
  _QWORD *v121; // rcx
  _QWORD *v122; // rax
  __int64 v123; // rbp
  __int64 v124; // rdx
  double v125; // xmm4_8
  double v126; // xmm5_8
  _QWORD *v127; // r12
  _BYTE *v128; // rbx
  _BYTE *v129; // r14
  void *v130; // rbx
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  unsigned int n; // [rsp+0h] [rbp-118h]
  size_t na; // [rsp+0h] [rbp-118h]
  _QWORD *v135; // [rsp+8h] [rbp-110h]
  __int64 v136; // [rsp+10h] [rbp-108h]
  unsigned int s; // [rsp+18h] [rbp-100h]
  _DWORD *sa; // [rsp+18h] [rbp-100h]
  unsigned int sb; // [rsp+18h] [rbp-100h]
  __int64 v140; // [rsp+20h] [rbp-F8h]
  __int64 v141; // [rsp+20h] [rbp-F8h]
  __int64 v142; // [rsp+28h] [rbp-F0h]
  __int64 v143; // [rsp+30h] [rbp-E8h]
  __int64 v144; // [rsp+38h] [rbp-E0h]
  __int64 v145; // [rsp+40h] [rbp-D8h]
  __int64 v146; // [rsp+48h] [rbp-D0h]
  unsigned int v147; // [rsp+48h] [rbp-D0h]
  int v148; // [rsp+54h] [rbp-C4h]
  unsigned int v149; // [rsp+54h] [rbp-C4h]
  __int64 v151; // [rsp+60h] [rbp-B8h]
  __int64 v152; // [rsp+68h] [rbp-B0h]
  _BYTE *v153; // [rsp+70h] [rbp-A8h]
  __int64 v154; // [rsp+78h] [rbp-A0h]
  int v155; // [rsp+80h] [rbp-98h]
  unsigned __int8 v156; // [rsp+86h] [rbp-92h]
  char v157; // [rsp+87h] [rbp-91h]
  __int64 v158; // [rsp+88h] [rbp-90h]
  __int64 v159; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v160; // [rsp+B8h] [rbp-60h]
  __int64 v161[11]; // [rsp+C0h] [rbp-58h] BYREF

  v14 = a1;
  v15 = *(_QWORD *)(*a2 + 24);
  if ( !v15 )
  {
    v143 = a1 + 1528;
    sub_6005E0(a1 + 1528, 0);
    v145 = a1 + 1600;
    sub_6005E0(a1 + 1600, 0);
    v152 = a1 + 1128;
    sub_FB6F60(a1 + 1128);
    v154 = a1 + 1264;
    sub_FB6F60(a1 + 1264);
    v144 = *(_QWORD *)(a1 + 32);
    goto LABEL_175;
  }
  v16 = *(_DWORD *)(v15 - 4);
  v143 = a1 + 1528;
  n = v16;
  sub_6005E0(a1 + 1528, v16);
  v145 = a1 + 1600;
  sub_6005E0(a1 + 1600, v16);
  v152 = a1 + 1128;
  sub_FB6F60(a1 + 1128);
  v154 = a1 + 1264;
  sub_FB6F60(a1 + 1264);
  v17 = *(_QWORD *)(a1 + 32);
  v144 = *(_QWORD *)(v14 + 32);
  if ( !v16 )
  {
LABEL_175:
    n = 0;
    v32 = 0;
    v135 = nullptr;
    v136 = v144 + 16;
    goto LABEL_21;
  }
  v18 = **(_QWORD **)(*a2 + 24);
  sub_62A000(v17, v18);
  v19 = (_QWORD *)sub_186B270(0x18u);
  v20 = v19 + 1;
  *v19 = 2;
  v21 = 0;
  v135 = v19 + 1;
  v22 = 1;
  v23 = 8LL * v16;
  while ( 1 )
  {
    *v20 = v18;
    v21 += 8;
    *((_DWORD *)v135 - 1) = v22;
    if ( v23 == v21 )
      break;
    v18 = *(_QWORD *)(*(_QWORD *)(*a2 + 24) + v21);
    sub_62A000(v144, v18);
    v24 = *((_DWORD *)v135 - 1);
    if ( v24 == *((_DWORD *)v135 - 2) )
    {
      v26 = (3 * v24 + 1) >> 1;
      v27 = 8 * v26 + 8;
      v28 = v26;
      if ( 8 * v24 + 8 >= (unsigned int)v27 || v24 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v161, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v161);
        sub_233E40((__int64)v161);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v29 = (unsigned int *)sub_186B300(v135 - 1, v27);
      v30 = v29[1];
      *v29 = v28;
      v135 = v29 + 2;
      LODWORD(v29) = v30;
      v20 = &v135[v30];
      v22 = (_DWORD)v29 + 1;
    }
    else
    {
      v25 = v24;
      v22 = v24 + 1;
      v20 = &v135[v25];
    }
  }
  v31 = 0;
  do
  {
    sub_6001A0(v14, *a2, v135[v31], v31);
    ++v31;
  }
  while ( n != v31 );
  v32 = 0;
  v136 = *(_QWORD *)(v14 + 32) + 16LL;
  v33 = v135;
  v34 = &v135[(unsigned __int64)v23 / 8];
  do
  {
    v35 = *v33;
    v36 = sub_148C740(v136, *(_QWORD *)(*v33 + 40LL));
    if ( v32 < v36 )
      v32 = v36;
    v37 = *(unsigned int *)(v35 + 68);
    if ( (_DWORD)v37 )
    {
      v38 = v35 + 8 * v37;
      do
      {
        v39 = sub_148C740(v136, *(_QWORD *)(v35 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v32 < v39 )
          v32 = v39;
        v35 += 8;
      }
      while ( v35 != v38 );
    }
    ++v33;
  }
  while ( v34 != v33 );
LABEL_21:
  sub_FA3BF0(v14 + 1400);
  v40 = *(_DWORD *)(v14 + 1420);
  v41 = v32 + 1;
  v42 = *(_DWORD *)(v14 + 1416);
  if ( v40 >= v32 + 1 )
    goto LABEL_26;
  v43 = *(_QWORD **)(v14 + 1408);
  v44 = v42 * v41;
  if ( !v43 )
  {
    if ( !v44 )
      goto LABEL_25;
    v132 = (_QWORD *)sub_186B270(0x38u);
    v43 = v132 + 1;
    *v132 = 2;
    *(_QWORD *)(v14 + 1408) = v132 + 1;
    s = 0;
LABEL_92:
    while ( 1 )
    {
      v87 = *((_DWORD *)v43 - 2);
      if ( v87 >= v44 )
        break;
      v84 = (3 * v87 + 1) >> 1;
      v85 = 8 * (v84 + ((3 * v87 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v87 + 8 >= (unsigned int)v85 || v87 >= v84 )
      {
        v11 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v161, "Overflow encountered when expanding vector");
        *v11 = (char *)off_1C63128;
        sub_2333C0(v11 + 1, v161);
        sub_233E40((__int64)v161);
        __cxa_throw(v11, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v86 = (unsigned int *)sub_186B300(v43 - 1, v85);
      v43 = v86 + 2;
      *v86 = v84;
      *(_QWORD *)(v14 + 1408) = v86 + 2;
    }
    *((_DWORD *)v43 - 1) = v44;
    v88 = 24LL * s;
    v89 = 24LL * v44;
    v90 = &v43[(unsigned __int64)v88 / 8];
    v91 = &v43[(unsigned __int64)v89 / 8];
    if ( v88 != v89 )
    {
      v92 = v90;
      do
      {
        *v92 = 0;
        v92 += 3;
        *((_DWORD *)v92 - 2) = 0;
      }
      while ( v91 != v92 );
      if ( (((_BYTE)v91 - (_BYTE)v90) & 8) == 0 || (*((_DWORD *)v90 + 2) = 0, v90 += 3, v91 != v90) )
      {
        do
        {
          *((_DWORD *)v90 + 2) = 0;
          v90 += 6;
          *((_DWORD *)v90 - 4) = 0;
        }
        while ( v91 != v90 );
      }
    }
    goto LABEL_25;
  }
  s = *((_DWORD *)v43 - 1);
  if ( s < v44 )
    goto LABEL_92;
  *((_DWORD *)v43 - 1) = v44;
LABEL_25:
  a5 = _mm_cvtsi32_si128(v41);
  v40 = v32 + 1;
  *(_QWORD *)&a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v42), a5).m128i_u64[0];
  *(double *)(v14 + 1416) = a3;
LABEL_26:
  v45 = *(_DWORD *)(v14 + 1424) + 1;
  v46 = *(_DWORD *)(v14 + 1144);
  *(_DWORD *)(v14 + 1424) = v45;
  v47 = v46 + 3;
  v48 = *(_DWORD *)(v14 + 1280) + 1;
  if ( v47 >= v48 )
    v48 = v47;
  v49 = v48;
  if ( v45 != -1 )
  {
    if ( v42 >= v48 )
    {
      v50 = v45 + 1;
      *(_DWORD *)(v14 + 1424) = v50;
      if ( v50 != -1 )
        goto LABEL_31;
LABEL_144:
      v119 = *(_QWORD *)(v14 + 1408);
      if ( v119 )
      {
        v120 = v119 + 24LL * *(unsigned int *)(v119 - 4);
        if ( v119 != v120 )
        {
          if ( ((24 * (unsigned __int8)*(_DWORD *)(v119 - 4)) & 8) == 0
            || (*(_DWORD *)(v119 + 16) = 0, v119 += 24, v120 != v119) )
          {
            do
            {
              *(_DWORD *)(v119 + 16) = 0;
              v119 += 48;
              *(_DWORD *)(v119 - 8) = 0;
            }
            while ( v120 != v119 );
          }
        }
      }
      *(_DWORD *)(v14 + 1424) = 1;
      if ( n )
        goto LABEL_32;
LABEL_150:
      sa = nullptr;
      goto LABEL_38;
    }
    v93 = *(_QWORD **)(v14 + 1408);
    v94 = v48 * v40;
    if ( v93 )
    {
      sb = *((_DWORD *)v93 - 1);
      if ( sb >= v94 )
      {
LABEL_102:
        *((_DWORD *)v93 - 1) = v94;
        v45 = *(_DWORD *)(v14 + 1424);
        goto LABEL_103;
      }
      goto LABEL_108;
    }
    if ( !v94 )
      goto LABEL_103;
    goto LABEL_169;
  }
  v93 = *(_QWORD **)(v14 + 1408);
  if ( v93 )
  {
    v121 = &v93[3 * *((unsigned int *)v93 - 1)];
    v122 = *(_QWORD **)(v14 + 1408);
    if ( v93 != v121 )
    {
      if ( ((24 * (unsigned __int8)*((_DWORD *)v93 - 1)) & 8) == 0
        || (v122 = v93 + 3, *((_DWORD *)v93 + 4) = 0, v121 != v93 + 3) )
      {
        do
        {
          *((_DWORD *)v122 + 4) = 0;
          v122 += 6;
          *((_DWORD *)v122 - 2) = 0;
        }
        while ( v121 != v122 );
      }
    }
    if ( v42 < v49 )
    {
      *(_DWORD *)(v14 + 1424) = 1;
      v94 = v49 * v40;
      sb = *((_DWORD *)v93 - 1);
      if ( sb >= v49 * v40 )
        goto LABEL_102;
      goto LABEL_108;
    }
LABEL_159:
    *(_DWORD *)(v14 + 1424) = 2;
    goto LABEL_31;
  }
  if ( v42 >= v48 )
    goto LABEL_159;
  *(_DWORD *)(v14 + 1424) = 1;
  v94 = v48 * v40;
  if ( !(v48 * v40) )
  {
    *(_DWORD *)(v14 + 1420) = v40;
    *(_DWORD *)(v14 + 1416) = v48;
    *(_DWORD *)(v14 + 1424) = 2;
    goto LABEL_31;
  }
LABEL_169:
  v131 = (_QWORD *)sub_186B270(0x38u);
  v93 = v131 + 1;
  *v131 = 2;
  *(_QWORD *)(v14 + 1408) = v131 + 1;
  sb = 0;
LABEL_108:
  while ( 1 )
  {
    v99 = *((_DWORD *)v93 - 2);
    if ( v99 >= v94 )
      break;
    v96 = (3 * v99 + 1) >> 1;
    v97 = 8 * (v96 + ((3 * v99 + 1) & 0xFFFFFFFE)) + 8;
    if ( 24 * v99 + 8 >= (unsigned int)v97 || v99 >= v96 )
    {
      v9 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v161, "Overflow encountered when expanding vector");
      *v9 = (char *)off_1C63128;
      sub_2333C0(v9 + 1, v161);
      sub_233E40((__int64)v161);
      __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v98 = (unsigned int *)sub_186B300(v93 - 1, v97);
    v93 = v98 + 2;
    *v98 = v96;
    *(_QWORD *)(v14 + 1408) = v98 + 2;
  }
  *((_DWORD *)v93 - 1) = v94;
  v45 = *(_DWORD *)(v14 + 1424);
  v100 = 24LL * sb;
  v101 = 24LL * v94;
  v102 = &v93[(unsigned __int64)v100 / 8];
  v103 = &v93[(unsigned __int64)v101 / 8];
  if ( v100 != v101 )
  {
    v104 = v102;
    do
    {
      *v104 = 0;
      v104 += 3;
      *((_DWORD *)v104 - 2) = 0;
    }
    while ( v103 != v104 );
    if ( (((_BYTE)v103 - (_BYTE)v102) & 8) == 0 || (*((_DWORD *)v102 + 2) = 0, v102 += 3, v103 != v102) )
    {
      do
      {
        *((_DWORD *)v102 + 2) = 0;
        v102 += 6;
        *((_DWORD *)v102 - 4) = 0;
      }
      while ( v103 != v102 );
    }
  }
LABEL_103:
  v95 = v45 + 1;
  *(_DWORD *)(v14 + 1420) = v40;
  *(_DWORD *)(v14 + 1416) = v49;
  *(_DWORD *)(v14 + 1424) = v95;
  if ( v95 == -1 )
    goto LABEL_144;
LABEL_31:
  if ( !n )
    goto LABEL_150;
LABEL_32:
  v51 = (_QWORD *)sub_186B270(0xAu);
  *v51 = 2;
  v52 = v51 + 1;
  sa = v52;
  while ( 1 )
  {
    v56 = *((_DWORD *)v52 - 2);
    if ( v56 >= n )
      break;
    v53 = (3 * v56 + 1) >> 1;
    v54 = v53 + 8;
    if ( v56 + 8 >= (unsigned int)v54 || v56 >= v53 )
    {
      v13 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v161, "Overflow encountered when expanding vector");
      *v13 = (char *)off_1C63128;
      sub_2333C0(v13 + 1, v161);
      sub_233E40((__int64)v161);
      __cxa_throw(v13, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v55 = (unsigned int *)sub_186B300(sa - 2, v54);
    *v55 = v53;
    sa = v55 + 2;
    v52 = v55 + 2;
  }
  *(sa - 1) = n;
  memset(sa, 1, n);
LABEL_38:
  v157 = sub_1859630(
           **(_QWORD **)(*(_QWORD *)(v14 + 40) + 32LL),
           "xform.inline_linear_branch",
           *(_QWORD *)(*(_QWORD *)(v14 + 40) + 32LL) + 8LL,
           0);
  if ( n )
  {
    v158 = n;
    v57 = 0;
    na = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v58 = v135[na];
        v142 = *(_QWORD *)(v14 + 32);
        if ( v58 )
          sub_62A000(*(_QWORD *)(v14 + 32), v58);
        if ( !*((_BYTE *)sa + na) || !*(_BYTE *)(*(_QWORD *)(v14 + 1568) + na) )
        {
          if ( !v58 )
            goto LABEL_129;
          goto LABEL_128;
        }
        v59 = *(_QWORD *)(v14 + 1552);
        if ( v59 )
          *(_DWORD *)(v59 - 4) = 0;
        sub_FBAB00(v152, *(_QWORD *)(v58 + 80) & 0xFFFFFFFFFFFFFFF8LL, v143, 0, 1, 2);
        v60 = *(int **)(v14 + 1552);
        if ( v60 )
        {
          if ( *(v60 - 1) == 1 )
          {
            v61 = (unsigned int)*v60;
            v62 = *(_BYTE *)(*(_QWORD *)(v14 + 1560) + v61);
            v155 = *v60;
            v146 = v61;
            if ( v62 )
            {
              v153 = (char *)sa + v61;
              if ( *((_BYTE *)sa + v61) == 1 && (_DWORD)v61 != (_DWORD)na )
              {
                v63 = *(_QWORD *)(v14 + 1624);
                v140 = v135[v61];
                if ( v63 )
                  *(_DWORD *)(v63 - 4) = 0;
                sub_FBAB00(v154, *(_QWORD *)(v140 + 40), v145, 0, 1, 2);
                v64 = *(_QWORD *)(v14 + 1624);
                if ( v64 )
                {
                  v148 = *(_DWORD *)(v64 - 4);
                  v62 = v148 != 1;
                }
                else
                {
                  v148 = 0;
                }
                if ( v157 == 1 || !v62 )
                  break;
              }
            }
          }
        }
LABEL_128:
        sub_62A410(v142, v58);
LABEL_129:
        if ( ++na == v158 )
        {
          if ( (_BYTE)v57 )
          {
            v123 = sub_186B270(0xF8u);
            sub_63D370(v123, *(_QWORD *)(v14 + 40));
            v161[0] = v123;
            v127 = v135;
            v128 = sa;
            v129 = (char *)sa + v158;
            do
            {
              while ( !*v128 )
              {
                ++v128;
                ++v127;
                if ( v128 == v129 )
                  goto LABEL_164;
              }
              sub_63DAD0(v123, *v127, a3);
              ++v128;
              ++v127;
            }
            while ( v128 != v129 );
LABEL_164:
            sub_63DFA0(v123, *a2, v124, a3, *(double *)a4.m128i_i64, *(double *)a5.m128i_i64, a6, v125, v126, a9);
            v161[0] = 0;
            v130 = (void *)*a2;
            if ( v123 != *a2 )
            {
              if ( v130 )
              {
                sub_63D960(v130);
                sub_186B220(v130);
              }
              *a2 = v123;
            }
          }
          sub_186B220(sa - 2);
LABEL_132:
          v114 = v135;
          v115 = (unsigned __int64)&v135[*((unsigned int *)v135 - 1)];
          if ( (unsigned __int64)v135 < v115 )
          {
            do
            {
              v116 = *v114++;
              sub_62A410(v144, v116);
            }
            while ( (unsigned __int64)v114 < v115 );
          }
          sub_186B220(v135 - 1);
          return v57;
        }
      }
      v65 = *(_QWORD *)(v14 + 32);
      v159 = 0;
      v160 = v65;
      v156 = sub_600B70(v14, v58, v140, 0, &v159);
      if ( !v156 )
      {
        if ( v159 )
          sub_62A410(v160, v159);
        goto LABEL_128;
      }
      sub_5FEA40(v143, *(_QWORD *)(v58 + 40), na);
      v66 = *(unsigned int *)(v58 + 68);
      if ( (_DWORD)v66 )
      {
        v151 = v14;
        v67 = v58 + 8 * v66;
        v68 = v58;
        do
        {
          v69 = *(_QWORD *)(v68 + 80);
          v68 += 8;
          sub_5FEA40(v145, v69 & 0xFFFFFFFFFFFFFFF8LL, na);
        }
        while ( v68 != v67 );
        v14 = v151;
      }
      sub_6001A0(v14, *a2, v159, na);
      v70 = v159;
      if ( v58 != v159 )
      {
        sub_62A410(v142, v58);
        v70 = v159;
        if ( v159 )
          sub_62A000(v142, v159);
      }
      sub_62A000(v144, v70);
      sub_62A410(v144, v135[na]);
      v71 = *(_QWORD *)(v14 + 1568);
      v135[na] = v70;
      *(_BYTE *)(v71 + na) = *(_BYTE *)(v71 + v146);
      if ( v148 == 1 )
      {
        v107 = v140;
        v108 = *(_QWORD *)(v14 + 464);
        *v153 = 0;
        sub_6481D0(v108);
        sub_5FEA40(v143, *(_QWORD *)(v140 + 40), v155);
        v109 = *(unsigned int *)(v140 + 68);
        if ( (_DWORD)v109 )
        {
          v110 = v140;
          v141 = v70;
          v111 = v107 + 8 * v109;
          v112 = v110;
          do
          {
            v113 = *(_QWORD *)(v112 + 80);
            v112 += 8;
            sub_5FEA40(v145, v113 & 0xFFFFFFFFFFFFFFF8LL, v155);
          }
          while ( v111 != v112 );
          v70 = v141;
        }
      }
      v72 = sub_648530(v136, v70);
      if ( v32 < v72 )
        v32 = v72;
      if ( *(_DWORD *)(v14 + 1420) < v32 + 1 )
      {
        v73 = *(_QWORD **)(v14 + 1408);
        v149 = *(_DWORD *)(v14 + 1416);
        v74 = v149 * (v32 + 1);
        if ( v73 )
        {
          v147 = *((_DWORD *)v73 - 1);
          if ( v147 >= (unsigned int)v74 )
          {
            *((_DWORD *)v73 - 1) = v74;
LABEL_82:
            a4 = _mm_cvtsi32_si128(v32 + 1);
            *(_QWORD *)&a3 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v149), a4).m128i_u64[0];
            *(double *)(v14 + 1416) = a3;
            goto LABEL_83;
          }
        }
        else
        {
          if ( !(_DWORD)v74 )
            goto LABEL_82;
          v118 = (_QWORD *)sub_186B270(0x38u);
          v73 = v118 + 1;
          v147 = 0;
          *(_QWORD *)(v14 + 1408) = v118 + 1;
          *v118 = 2;
        }
        while ( 1 )
        {
          v78 = *((_DWORD *)v73 - 2);
          if ( v78 >= (unsigned int)v74 )
            break;
          v75 = (3 * v78 + 1) >> 1;
          v76 = 8 * (v75 + ((3 * v78 + 1) & 0xFFFFFFFE)) + 8;
          if ( 24 * v78 + 8 >= (unsigned int)v76 || v78 >= v75 )
          {
            v12 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v161, "Overflow encountered when expanding vector");
            *v12 = (char *)off_1C63128;
            sub_2333C0(v12 + 1, v161);
            sub_233E40((__int64)v161);
            __cxa_throw(v12, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v77 = (unsigned int *)sub_186B300(v73 - 1, v76);
          v73 = v77 + 2;
          *v77 = v75;
          *(_QWORD *)(v14 + 1408) = v77 + 2;
        }
        *((_DWORD *)v73 - 1) = v74;
        v79 = 3LL * v147;
        v80 = &v73[v79];
        v81 = &v73[3 * v74];
        if ( v79 != 3 * v74 )
        {
          v82 = v80;
          do
          {
            *v82 = 0;
            v82 += 3;
            *((_DWORD *)v82 - 2) = 0;
          }
          while ( v81 != v82 );
          if ( (((_BYTE)v81 - (_BYTE)v80) & 8) == 0 || (*((_DWORD *)v80 + 2) = 0, v80 += 3, v81 != v80) )
          {
            do
            {
              *((_DWORD *)v80 + 2) = 0;
              v80 += 6;
              *((_DWORD *)v80 - 4) = 0;
            }
            while ( v81 != v80 );
          }
        }
        goto LABEL_82;
      }
LABEL_83:
      v83 = *(_DWORD *)(v14 + 1424) + 1;
      *(_DWORD *)(v14 + 1424) = v83;
      if ( v83 == -1 )
      {
        v105 = *(_QWORD *)(v14 + 1408);
        if ( v105 )
        {
          v106 = v105 + 24LL * *(unsigned int *)(v105 - 4);
          if ( v105 != v106 )
          {
            if ( ((24 * (unsigned __int8)*(_DWORD *)(v105 - 4)) & 8) == 0
              || (*(_DWORD *)(v105 + 16) = 0, v105 += 24, v106 != v105) )
            {
              do
              {
                *(_DWORD *)(v105 + 16) = 0;
                v105 += 48;
                *(_DWORD *)(v105 - 8) = 0;
              }
              while ( v106 != v105 );
            }
          }
        }
        *(_DWORD *)(v14 + 1424) = 1;
      }
      if ( v159 )
        sub_62A410(v160, v159);
      if ( v70 )
        sub_62A410(v142, v70);
      v57 = v156;
    }
  }
  if ( sa )
  {
    v57 = 0;
    sub_186B220(sa - 2);
    if ( v135 )
      goto LABEL_132;
  }
  else
  {
    v57 = 0;
    if ( v135 )
      goto LABEL_132;
  }
  return v57;
}

