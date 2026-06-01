_QWORD *__fastcall sub_202A150(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  __int64 *v5; // rbx
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rdx
  __int64 v8; // rax
  void **v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rax
  int v12; // edx
  void *v13; // rcx
  void *v14; // rdx
  void *v15; // rcx
  void *v16; // rdx
  _QWORD *v17; // r15
  _QWORD *v18; // r12
  _DWORD *v19; // r13
  int v20; // eax
  __int64 v21; // rbx
  int v22; // eax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 *v32; // r14
  __int64 *v33; // rcx
  __int64 *v34; // r15
  signed __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned int v39; // esi
  __int64 v40; // r10
  unsigned __int64 v41; // rax
  void *v42; // r10
  unsigned __int64 v43; // rdi
  void *v44; // rax
  __int64 *v45; // r15
  unsigned __int64 v46; // rdi
  void *v47; // rax
  volatile signed __int32 *v49; // r13
  __int64 v50; // r10
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r14
  unsigned __int64 *v53; // r9
  unsigned int v54; // r14d
  __int64 v55; // rax
  int v56; // eax
  int v57; // r13d
  __int64 v58; // r13
  void *v59; // rdi
  unsigned int v60; // esi
  unsigned int v61; // ecx
  unsigned __int64 v62; // r9
  unsigned __int64 v63; // r12
  std::_V2 **v64; // r10
  int v65; // eax
  unsigned __int64 v66; // rdx
  int v67; // r13d
  int v68; // r12d
  __int64 v69; // r11
  unsigned __int64 v70; // rax
  void *v71; // r11
  unsigned int v72; // esi
  __int64 v73; // r11
  unsigned __int64 v74; // r9
  unsigned __int64 v75; // r15
  void ***v76; // r10
  int v77; // eax
  int v78; // r15d
  void *v79; // rax
  unsigned int v80; // r8d
  __int64 v81; // rax
  int v82; // eax
  __m128i si128; // xmm0
  void *v84; // r15
  void *v85; // rdi
  __int64 v86; // rax
  __int64 *v87; // rdi
  unsigned __int64 v88; // r12
  bool v89; // cf
  unsigned __int64 v90; // r12
  unsigned __int64 v91; // r12
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // r13
  __int64 *v94; // rax
  unsigned __int64 v95; // rdx
  __int64 v96; // rsi
  __int64 v97; // rsi
  unsigned __int64 v98; // rax
  __int64 *v99; // rdx
  __int64 v100; // r8
  __int64 *v101; // r12
  __int64 *v102; // r14
  __int64 *v103; // rax
  __int64 *v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rcx
  __int64 *v107; // r15
  __int64 *v108; // rbx
  volatile signed __int32 *v109; // r12
  __int64 v110; // rbx
  void *v111; // rdi
  unsigned __int64 v112; // rax
  __int64 v113; // r14
  int v114; // eax
  __int64 v115; // rbx
  int *v116; // rdi
  __int64 v117; // rdx
  __int64 v118; // rax
  __int64 v119; // r12
  __m128i *v120; // rax
  __m128i v121; // xmm0
  void *v122; // rax
  unsigned int v123; // r8d
  __int64 v124; // rax
  __int64 v125; // r12
  __int64 v126; // r12
  __m128i *v127; // rax
  __m128i v128; // xmm0
  __m128i *v129; // rax
  __int64 v130; // r8
  int v131; // eax
  _DWORD *v132; // r12
  int v133; // eax
  _QWORD *v134; // [rsp+0h] [rbp-138h]
  __int64 *v135; // [rsp+8h] [rbp-130h] BYREF
  char *v136; // [rsp+10h] [rbp-128h] BYREF
  unsigned __int64 v137; // [rsp+18h] [rbp-120h]
  const char *v138; // [rsp+20h] [rbp-118h] BYREF
  int *v139; // [rsp+28h] [rbp-110h]
  __int64 (__fastcall **v140)(); // [rsp+30h] [rbp-108h]
  const char *v141; // [rsp+38h] [rbp-100h] BYREF
  __int64 (__fastcall **v142)(); // [rsp+40h] [rbp-F8h]
  unsigned __int64 v143; // [rsp+48h] [rbp-F0h]
  __m128 v144; // [rsp+50h] [rbp-E8h] BYREF
  void *v145; // [rsp+60h] [rbp-D8h] BYREF
  char v146; // [rsp+68h] [rbp-D0h]
  __int64 v147; // [rsp+70h] [rbp-C8h] BYREF
  char v148; // [rsp+78h] [rbp-C0h]
  void *v149[2]; // [rsp+80h] [rbp-B8h] BYREF
  int v150; // [rsp+90h] [rbp-A8h] BYREF
  int v151; // [rsp+94h] [rbp-A4h]
  void *v152[2]; // [rsp+A0h] [rbp-98h] BYREF
  unsigned __int64 v153; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v154; // [rsp+B8h] [rbp-80h]
  void *v155[4]; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v156; // [rsp+E0h] [rbp-58h]
  char v157; // [rsp+E8h] [rbp-50h]
  int v158; // [rsp+ECh] [rbp-4Ch]
  void **v159; // [rsp+F0h] [rbp-48h]

  v5 = (__int64 *)a2;
  v6 = *(_QWORD *)(a2 + 64);
  v7 = *(unsigned int *)(a2 + 76);
  v134 = (_QWORD *)a1;
  LODWORD(v155[0]) = *(_DWORD *)(a2 + 36);
  v8 = *(unsigned int *)(a2 + 72);
  v9 = v155;
  v136 = a4;
  v10 = v8 + 1;
  memset(&v155[1], 0, 24);
  v11 = v6 + 32 * v8;
  if ( v10 > v7 )
  {
    a1 = (unsigned __int64)(v5 + 8);
    if ( v6 > (unsigned __int64)v155 || v11 <= (unsigned __int64)v155 )
    {
      sub_13A7520(a1, v10);
      v11 = v5[8] + 32LL * *((unsigned int *)v5 + 18);
    }
    else
    {
      sub_13A7520(a1, v10);
      v117 = v5[8];
      v9 = (void **)((char *)v155 + v117 - v6);
      v11 = v117 + 32LL * *((unsigned int *)v5 + 18);
    }
  }
  v12 = *(_DWORD *)v9;
  *(_QWORD *)(v11 + 24) = 0;
  *(_OWORD *)(v11 + 8) = 0;
  *(_DWORD *)v11 = v12;
  *(_QWORD *)(v11 + 8) = v9[1];
  v13 = v9[2];
  v9[1] = nullptr;
  v14 = *(void **)(v11 + 16);
  *(_QWORD *)(v11 + 16) = v13;
  v15 = v9[3];
  v9[2] = v14;
  v16 = *(void **)(v11 + 24);
  *(_QWORD *)(v11 + 24) = v15;
  v9[3] = v16;
  v17 = v155[2];
  v18 = v155[1];
  ++*((_DWORD *)v5 + 18);
  if ( v17 != v18 )
  {
    if ( &_pthread_key_create )
    {
      do
      {
        v49 = (volatile signed __int32 *)v18[1];
        if ( v49 )
        {
          if ( !_InterlockedSub(v49 + 2, 1u) )
          {
            a1 = (unsigned __int64)v49;
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 16LL))(v49);
            if ( !_InterlockedSub(v49 + 3, 1u) )
            {
              a1 = (unsigned __int64)v49;
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 24LL))(v49);
            }
          }
        }
        v18 += 2;
      }
      while ( v17 != v18 );
    }
    else
    {
      v135 = v5;
      do
      {
        while ( 1 )
        {
          v19 = (_DWORD *)v18[1];
          if ( v19 )
          {
            v20 = v19[2];
            v19[2] = v20 - 1;
            if ( v20 == 1 )
            {
              v21 = *(_QWORD *)v19;
              a1 = (unsigned __int64)v19;
              (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v19 + 16LL))(v19);
              v22 = v19[3];
              v19[3] = v22 - 1;
              if ( v22 == 1 )
                break;
            }
          }
          v18 += 2;
          if ( v18 == v17 )
            goto LABEL_10;
        }
        v18 += 2;
        a1 = (unsigned __int64)v19;
        (*(void (__fastcall **)(_DWORD *))(v21 + 24))(v19);
      }
      while ( v18 != v17 );
LABEL_10:
      v5 = v135;
    }
    v18 = v155[1];
  }
  if ( v18 )
  {
    a1 = (unsigned __int64)v18;
    operator delete(v18);
  }
  v23 = (_QWORD *)(v5[8] + 32LL * *((unsigned int *)v5 + 18) - 32);
  v24 = v23[1];
  v23[1] = v5[5];
  v25 = v5[6];
  v5[5] = v24;
  v26 = v23[2];
  v23[2] = v25;
  v5[6] = v26;
  v27 = v23[3];
  v23[3] = v5[7];
  v28 = (__int64 *)v5[42];
  v5[7] = v27;
  if ( v28 )
  {
    v29 = v28[1];
    v30 = *v28;
    if ( v29 != *v28 )
    {
      if ( a3 == *(_DWORD *)(v29 - 88) )
      {
        v30 = v29 - 88;
        if ( v29 == 88 )
          goto LABEL_28;
      }
      else if ( a3 != *(_DWORD *)v30 )
      {
        v31 = v30 + 88;
        do
        {
          v30 = v31;
          if ( v29 == v31 )
            goto LABEL_28;
          v31 += 88;
        }
        while ( a3 != *(_DWORD *)(v31 - 88) );
      }
      v32 = *(__int64 **)(v30 + 16);
      v33 = *(__int64 **)(v30 + 8);
      v34 = (__int64 *)v5[6];
      if ( v32 == v33 )
        goto LABEL_28;
      v35 = (char *)v32 - (char *)v33;
      v36 = ((char *)v32 - (char *)v33) >> 4;
      if ( v36 <= (v27 - (__int64)v34) >> 4 )
      {
        v37 = v33;
        if ( &_pthread_key_create )
        {
          do
          {
            *v34 = *v37;
            v38 = v37[1];
            v34[1] = v38;
            if ( v38 )
              _InterlockedAdd((volatile signed __int32 *)(v38 + 8), 1u);
            v37 += 2;
            v34 += 2;
          }
          while ( v32 != v37 );
        }
        else
        {
          do
          {
            *v34 = *v33;
            v86 = v33[1];
            v34[1] = v86;
            if ( v86 )
              ++*(_DWORD *)(v86 + 8);
            v33 += 2;
            v34 += 2;
          }
          while ( v32 != v33 );
        }
        v5[6] += v35;
        goto LABEL_28;
      }
      v87 = (__int64 *)v5[5];
      v88 = ((char *)v34 - (char *)v87) >> 4;
      if ( v36 > 0xFFFFFFFFFFFFFFFLL - v88 )
        std::__throw_length_error("vector::_M_range_insert");
      if ( v36 < v88 )
        v36 = ((char *)v34 - (char *)v87) >> 4;
      v89 = __CFADD__(v36, v88);
      v90 = v36 + v88;
      if ( v89 || v90 > 0xFFFFFFFFFFFFFFFLL )
      {
        v91 = -16;
      }
      else
      {
        if ( !v90 )
        {
          v138 = nullptr;
          v93 = 0;
          goto LABEL_108;
        }
        v91 = 16 * v90;
      }
      v135 = v33;
      v92 = operator new(v91);
      v87 = (__int64 *)v5[5];
      v33 = v135;
      v93 = v92;
      v138 = (const char *)(v92 + v91);
LABEL_108:
      if ( v34 == v87 )
      {
        v98 = v93;
      }
      else
      {
        v94 = v87;
        v95 = v93;
        do
        {
          v96 = *v94;
          *(_QWORD *)(v95 + 8) = 0;
          v94 += 2;
          v95 += 16LL;
          *(_QWORD *)(v95 - 16) = v96;
          v97 = *(v94 - 1);
          *(v94 - 1) = 0;
          *(_QWORD *)(v95 - 8) = v97;
          *(v94 - 2) = 0;
        }
        while ( v34 != v94 );
        v98 = v93 + (((char *)(v34 - 2) - (char *)v87) & 0xFFFFFFFFFFFFFFF0LL) + 16;
      }
      v99 = v33;
      a1 = v98;
      if ( &_pthread_key_create )
      {
        do
        {
          *(_QWORD *)a1 = *v99;
          v100 = v99[1];
          *(_QWORD *)(a1 + 8) = v100;
          if ( v100 )
            _InterlockedAdd((volatile signed __int32 *)(v100 + 8), 1u);
          v99 += 2;
          a1 += 16LL;
        }
        while ( v32 != v99 );
      }
      else
      {
        do
        {
          *(_QWORD *)a1 = *v99;
          v130 = v99[1];
          *(_QWORD *)(a1 + 8) = v130;
          if ( v130 )
            ++*(_DWORD *)(v130 + 8);
          v99 += 2;
          a1 += 16LL;
        }
        while ( v32 != v99 );
      }
      v101 = (__int64 *)v5[6];
      v102 = (__int64 *)(v98 + (((char *)(v32 - 2) - (char *)v33) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      if ( v34 != v101 )
      {
        v103 = v34;
        v104 = v102;
        do
        {
          v105 = *v103;
          v104[1] = 0;
          v103 += 2;
          v104 += 2;
          *(v104 - 2) = v105;
          v106 = *(v103 - 1);
          *(v103 - 1) = 0;
          *(v104 - 1) = v106;
          *(v103 - 2) = 0;
        }
        while ( v101 != v103 );
        v102 = (__int64 *)((char *)v102 + (((char *)(v101 - 2) - (char *)v34) & 0xFFFFFFFFFFFFFFF0LL) + 16);
      }
      v107 = (__int64 *)v5[5];
      if ( v101 != v107 )
      {
        v135 = v5;
        v108 = v101;
        if ( &_pthread_key_create )
        {
          do
          {
            v109 = (volatile signed __int32 *)v107[1];
            if ( v109 )
            {
              if ( !_InterlockedSub(v109 + 2, 1u) )
              {
                a1 = (unsigned __int64)v109;
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v109 + 16LL))(v109);
                if ( !_InterlockedSub(v109 + 3, 1u) )
                {
                  a1 = (unsigned __int64)v109;
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v109 + 24LL))(v109);
                }
              }
            }
            v107 += 2;
          }
          while ( v108 != v107 );
        }
        else
        {
          do
          {
            v132 = (_DWORD *)v107[1];
            if ( v132 )
            {
              v133 = v132[2];
              v132[2] = v133 - 1;
              if ( v133 == 1 )
              {
                a1 = (unsigned __int64)v132;
                (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v132 + 16LL))(v132);
                v131 = v132[3];
                v132[3] = v131 - 1;
                if ( v131 == 1 )
                {
                  a1 = (unsigned __int64)v132;
                  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v132 + 24LL))(v132);
                }
              }
            }
            v107 += 2;
          }
          while ( v108 != v107 );
        }
        v5 = v135;
        v107 = (__int64 *)v135[5];
      }
      if ( v107 )
      {
        a1 = (unsigned __int64)v107;
        operator delete(v107);
      }
      v135 = v102;
      v5[7] = (__int64)v138;
      *(__m128 *)(v5 + 5) = _mm_loadh_ps((const double *)&v135);
    }
  }
LABEL_28:
  v39 = *((_DWORD *)v5 + 8);
  if ( v39 > 3 )
  {
    v40 = v5[3];
    v148 &= ~1u;
    LOBYTE(v155[1]) &= ~1u;
    v41 = v40;
    v42 = (void *)(v40 & 0xF);
    *((_DWORD *)v5 + 8) = v39 - 4;
    v155[0] = v42;
    v5[3] = v41 >> 4;
    goto LABEL_30;
  }
  v50 = 0;
  if ( v39 )
    v50 = v5[3];
  v51 = v5[2];
  v52 = v5[1];
  if ( v51 < v52 )
  {
    v53 = (unsigned __int64 *)(v51 + *v5);
    if ( v52 >= v51 + 8 )
    {
      a1 = *v53;
      v5[2] = v51 + 8;
      v56 = 64;
      LOBYTE(v57) = 4 - v39;
    }
    else
    {
      v5[3] = 0;
      v54 = v52 - v51;
      if ( !v54 )
      {
        *((_DWORD *)v5 + 8) = 0;
        v57 = 4 - v39;
        goto LABEL_50;
      }
      v55 = 0;
      a1 = 0;
      while ( 1 )
      {
        a1 |= (unsigned __int64)*((unsigned __int8 *)v53 + v55) << (8 * (unsigned __int8)v55);
        v5[3] = a1;
        if ( v54 - 1 == v55 )
          break;
        ++v55;
      }
      v56 = 8 * v54;
      v57 = 4 - v39;
      *((_DWORD *)v5 + 8) = 8 * v54;
      v5[2] = v54 + v51;
      if ( 4 - v39 > 8 * v54 )
      {
LABEL_50:
        v135 = (__int64 *)std::_V2::generic_category((std::_V2 *)a1);
        *(_OWORD *)&v155[2] = 0;
        v152[0] = &v153;
        v152[1] = nullptr;
        LOBYTE(v153) = 0;
        LODWORD(v155[1]) = 0;
        v157 = 0;
        v158 = 1;
        v156 = 0;
        v155[0] = &off_2BEBE68;
        v159 = v152;
        sub_227B8B0(v155, 0, 0, 0);
        v150 = v57;
        v138 = "Unexpected end of file reading %u of %u bits";
        v151 = *((_DWORD *)v5 + 8);
        *(__m128 *)v149 = _mm_loadh_ps((const double *)&v138);
        sub_227C560(v155, v149);
        v155[0] = &off_2BEBE68;
        sub_227B7A0(v155);
        v155[0] = v152;
        LOWORD(v156) = 260;
        v58 = operator new(0x40u);
        sub_2220590(v58, v155, 5, v135);
        v59 = v152[0];
        if ( v152[0] == &v153 )
          goto LABEL_52;
        goto LABEL_51;
      }
    }
    v148 &= ~1u;
    *((_DWORD *)v5 + 8) = v39 + v56 - 4;
    v5[3] = a1 >> v57;
    LOBYTE(v155[1]) &= ~1u;
    v42 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v39 + 60)) & a1) << v39) | v50);
    v155[0] = v42;
LABEL_30:
    v43 = (unsigned __int64)v155;
    LODWORD(v147) = (_DWORD)v42;
    sub_A0AE70((__int64 *)v155);
    if ( (v148 & 1) != 0 )
    {
LABEL_31:
      v44 = (void *)v147;
      v146 |= 1u;
      v45 = &v147;
      v147 = 0;
      v145 = v44;
      goto LABEL_32;
    }
    goto LABEL_53;
  }
  v135 = (__int64 *)std::_V2::generic_category((std::_V2 *)a1);
  *(_OWORD *)&v155[2] = 0;
  v159 = v149;
  v155[0] = &off_2BEBE68;
  v149[0] = &v150;
  v149[1] = nullptr;
  LOBYTE(v150) = 0;
  LODWORD(v155[1]) = 0;
  v157 = 0;
  v158 = 1;
  v156 = 0;
  sub_227B8B0(v155, 0, 0, 0);
  v153 = v52;
  v138 = "Unexpected end of file reading %u of %u bytes";
  v154 = v5[2];
  *(__m128 *)v152 = _mm_loadh_ps((const double *)&v138);
  sub_227C560(v155, v152);
  v155[0] = &off_2BEBE68;
  sub_227B7A0(v155);
  v155[0] = v149;
  LOWORD(v156) = 260;
  v58 = operator new(0x40u);
  sub_2220590(v58, v155, 5, v135);
  v59 = v149[0];
  if ( v149[0] != &v150 )
LABEL_51:
    operator delete(v59);
LABEL_52:
  v43 = (unsigned __int64)v155;
  LOBYTE(v155[1]) |= 1u;
  v148 |= 1u;
  v155[0] = nullptr;
  v147 = v58;
  sub_A0AE70((__int64 *)v155);
  if ( (v148 & 1) != 0 )
    goto LABEL_31;
LABEL_53:
  if ( (v147 & 8) == 0 )
  {
    v146 &= ~1u;
    v46 = (unsigned __int64)&v147;
    LODWORD(v145) = v147;
    sub_A0AE90(&v147);
    if ( (v146 & 1) != 0 )
      goto LABEL_33;
    goto LABEL_55;
  }
  v67 = v147 & 7;
  v68 = 3;
  v138 = (const char *)v149;
  v139 = &v150;
  v135 = &v147;
  do
  {
    v72 = *((_DWORD *)v5 + 8);
    if ( v72 > 3 )
    {
      v69 = v5[3];
      LOBYTE(v155[1]) &= ~1u;
      LOBYTE(v152[1]) &= ~1u;
      v70 = v69;
      v71 = (void *)(v69 & 0xF);
      *((_DWORD *)v5 + 8) = v72 - 4;
      v155[0] = v71;
      v5[3] = v70 >> 4;
      goto LABEL_70;
    }
    v73 = 0;
    if ( v72 )
      v73 = v5[3];
    v74 = v5[2];
    v75 = v5[1];
    if ( v74 >= v75 )
    {
      v140 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v155);
      v149[0] = v139;
      v159 = (void **)v138;
      *(_OWORD *)&v155[2] = 0;
      v155[0] = &off_2BEBE68;
      v142 = &off_2BEBE68;
      v149[1] = nullptr;
      LOBYTE(v150) = 0;
      LODWORD(v155[1]) = 0;
      v157 = 0;
      v158 = 1;
      v156 = 0;
      sub_227B8B0(v155, 0, 0, 0);
      v153 = v75;
      v141 = "Unexpected end of file reading %u of %u bytes";
      v154 = v5[2];
      *(__m128 *)v152 = _mm_loadh_ps((const double *)&v141);
      sub_227C560(v155, v152);
      v155[0] = v142;
      sub_227B7A0(v155);
      LOWORD(v156) = 260;
      v155[0] = (void *)v138;
      v137 = v137 & 0xFFFFFFFF00000000LL | 5;
      v84 = (void *)operator new(0x40u);
      sub_2220590(v84, v155, (unsigned int)v137, v140);
      v85 = v149[0];
      if ( v149[0] == v139 )
        goto LABEL_91;
LABEL_90:
      operator delete(v85);
      goto LABEL_91;
    }
    v76 = (void ***)(v74 + *v5);
    if ( v75 >= v74 + 8 )
    {
      v43 = (unsigned __int64)*v76;
      v5[2] = v74 + 8;
      v77 = 64;
      LOBYTE(v78) = 4 - v72;
LABEL_82:
      LOBYTE(v155[1]) &= ~1u;
      *((_DWORD *)v5 + 8) = v72 + v77 - 4;
      v5[3] = v43 >> v78;
      LOBYTE(v152[1]) &= ~1u;
      v71 = (void *)((((0xFFFFFFFFFFFFFFFFLL >> ((unsigned __int8)v72 + 60)) & v43) << v72) | v73);
      v155[0] = v71;
LABEL_70:
      LODWORD(v152[0]) = (_DWORD)v71;
      goto LABEL_71;
    }
    v5[3] = 0;
    v80 = v75 - v74;
    if ( (_DWORD)v75 == (_DWORD)v74 )
    {
      *((_DWORD *)v5 + 8) = 0;
      v78 = 4 - v72;
    }
    else
    {
      v81 = 0;
      v43 = 0;
      while ( 1 )
      {
        v43 |= (unsigned __int64)*((unsigned __int8 *)v76 + v81) << (8 * (unsigned __int8)v81);
        v5[3] = v43;
        if ( v80 - 1 == v81 )
          break;
        ++v81;
      }
      v77 = 8 * v80;
      v78 = 4 - v72;
      *((_DWORD *)v5 + 8) = 8 * v80;
      v5[2] = v80 + v74;
      if ( 4 - v72 <= 8 * v80 )
        goto LABEL_82;
    }
    v140 = off_2C02AD8;
    v144 = _mm_loadh_ps((const double *)off_2BE5CA8);
    v140 = (__int64 (__fastcall **)())std::_V2::generic_category((std::_V2 *)v43);
    v152[0] = &v153;
    v142 = (__int64 (__fastcall **)())&v153;
    *(_OWORD *)&v155[2] = 0;
    v155[0] = &off_2BEBE68;
    v141 = (const char *)&off_2BEBE68;
    v152[1] = nullptr;
    LOBYTE(v153) = 0;
    LODWORD(v155[1]) = 0;
    v157 = 0;
    v158 = 1;
    v156 = 0;
    v159 = v152;
    sub_227B8B0(v155, 0, 0, 0);
    v82 = *((_DWORD *)v5 + 8);
    si128 = _mm_load_si128((const __m128i *)&v144);
    v150 = v78;
    v151 = v82;
    *(__m128i *)v149 = si128;
    sub_227C560(v155, v138);
    v155[0] = (void *)v141;
    sub_227B7A0(v155);
    LOWORD(v156) = 260;
    v155[0] = v152;
    v143 = v143 & 0xFFFFFFFF00000000LL | 5;
    v84 = (void *)operator new(0x40u);
    sub_2220590(v84, v155, (unsigned int)v143, v140);
    v85 = v152[0];
    if ( v152[0] != v142 )
      goto LABEL_90;
LABEL_91:
    LOBYTE(v155[1]) |= 1u;
    LOBYTE(v152[1]) |= 1u;
    v155[0] = nullptr;
    v152[0] = v84;
LABEL_71:
    sub_A0AE90(v135);
    v148 = (__int64)v152[1] & 1 | v148 & 0xFE;
    if ( ((__int64)v152[1] & 1) != 0 )
    {
      v79 = v152[0];
      v152[0] = nullptr;
      v147 = (__int64)v79;
    }
    else
    {
      LODWORD(v147) = v152[0];
    }
    sub_A0AE90((__int64 *)v152);
    v43 = (unsigned __int64)v155;
    sub_A0AE70((__int64 *)v155);
    if ( (v148 & 1) != 0 )
    {
      v122 = (void *)v147;
      v45 = v135;
      v147 = 0;
      v146 |= 1u;
      v145 = v122;
      goto LABEL_32;
    }
    v67 |= (v147 & 7) << v68;
    if ( (v147 & 8) == 0 )
    {
      v45 = v135;
      v146 &= ~1u;
      LODWORD(v145) = v67;
      goto LABEL_32;
    }
    v68 += 3;
  }
  while ( v68 != 33 );
  v118 = std::_V2::generic_category((std::_V2 *)v155);
  v45 = v135;
  v119 = v118;
  v155[0] = &v155[2];
  v120 = (__m128i *)operator new(0x11u);
  v121 = _mm_load_si128((const __m128i *)&xmmword_23AA3E0);
  v120[1].m128i_i8[0] = 0;
  v155[0] = v120;
  *v120 = v121;
  v155[2] = &word_10;
  v155[1] = &word_10;
  sub_22205D0(v152, v155, 84, v119);
  if ( v155[0] != &v155[2] )
    operator delete(v155[0]);
  v146 |= 1u;
  v145 = v152[0];
LABEL_32:
  v46 = (unsigned __int64)v45;
  sub_A0AE90(v45);
  if ( (v146 & 1) != 0 )
  {
LABEL_33:
    v47 = v145;
    v145 = nullptr;
    *v134 = v47;
    goto LABEL_34;
  }
LABEL_55:
  v60 = (unsigned int)v145;
  *((_DWORD *)v5 + 9) = (_DWORD)v145;
  if ( v60 <= 0x20 )
  {
    v61 = *((_DWORD *)v5 + 8);
    if ( v61 > 0x1F )
    {
      v5[3] = (unsigned __int64)v5[3] >> ((unsigned __int8)v61 - 32);
      v112 = v5[3];
      *((_DWORD *)v5 + 8) = 0;
      LODWORD(v66) = v112;
      LOBYTE(v152[1]) &= ~1u;
      v5[3] = HIDWORD(v112);
      v152[0] = (void *)(unsigned int)v112;
    }
    else
    {
      v62 = v5[2];
      v63 = v5[1];
      *((_DWORD *)v5 + 8) = 0;
      if ( v62 >= v63 )
      {
        v135 = (__int64 *)std::_V2::generic_category((std::_V2 *)v46);
        *(_OWORD *)&v155[2] = 0;
        v149[0] = &v150;
        v155[0] = &off_2BEBE68;
        v137 = (unsigned __int64)&off_2BEBE68;
        v149[1] = nullptr;
        LOBYTE(v150) = 0;
        LODWORD(v155[1]) = 0;
        v157 = 0;
        v158 = 1;
        v156 = 0;
        v159 = v149;
        sub_227B8B0(v155, 0, 0, 0);
        v153 = v63;
        v136 = "Unexpected end of file reading %u of %u bytes";
        v154 = v5[2];
        *(__m128 *)v152 = _mm_loadh_ps((const double *)&v136);
        sub_227C560(v155, v152);
        v155[0] = (void *)v137;
        sub_227B7A0(v155);
        v155[0] = v149;
        LOWORD(v156) = 260;
        v110 = operator new(0x40u);
        sub_2220590(v110, v155, 5, v135);
        v111 = v149[0];
        if ( v149[0] != &v150 )
          goto LABEL_152;
        goto LABEL_129;
      }
      v64 = (std::_V2 **)(v62 + *v5);
      if ( v63 >= v62 + 8 )
      {
        v46 = (unsigned __int64)*v64;
        v5[2] = v62 + 8;
        v65 = 64;
        goto LABEL_60;
      }
      v5[3] = 0;
      v123 = v63 - v62;
      if ( (_DWORD)v63 == (_DWORD)v62 )
        goto LABEL_151;
      v124 = 0;
      v46 = 0;
      while ( 1 )
      {
        v46 |= (unsigned __int64)*((unsigned __int8 *)v64 + v124) << (8 * (unsigned __int8)v124);
        v5[3] = v46;
        if ( v123 - 1 == v124 )
          break;
        ++v124;
      }
      v65 = 8 * v123;
      *((_DWORD *)v5 + 8) = 8 * v123;
      v5[2] = v123 + v62;
      if ( 8 * v123 <= 0x1F )
      {
LABEL_151:
        v125 = std::_V2::generic_category((std::_V2 *)v46);
        *(_OWORD *)&v155[2] = 0;
        v152[1] = nullptr;
        v152[0] = &v153;
        LOBYTE(v153) = 0;
        LODWORD(v155[1]) = 0;
        v157 = 0;
        v158 = 1;
        v156 = 0;
        v155[0] = &off_2BEBE68;
        v159 = v152;
        sub_227B8B0(v155, 0, 0, 0);
        v150 = 32;
        v135 = (__int64 *)"Unexpected end of file reading %u of %u bits";
        v151 = *((_DWORD *)v5 + 8);
        *(__m128 *)v149 = _mm_loadh_ps((const double *)&v135);
        sub_227C560(v155, v149);
        v155[0] = &off_2BEBE68;
        sub_227B7A0(v155);
        v155[0] = v152;
        LOWORD(v156) = 260;
        v110 = operator new(0x40u);
        sub_2220590(v110, v155, 5, v125);
        v111 = v152[0];
        if ( v152[0] != &v153 )
LABEL_152:
          operator delete(v111);
LABEL_129:
        LOBYTE(v152[1]) |= 1u;
        v152[0] = nullptr;
        *v134 = v110;
LABEL_67:
        sub_A0AE70((__int64 *)v152);
        goto LABEL_34;
      }
LABEL_60:
      v66 = (unsigned int)v46;
      v46 >>= 32;
      LOBYTE(v152[1]) &= ~1u;
      v5[3] = v46;
      *((_DWORD *)v5 + 8) = v65 - 32;
      v152[0] = (void *)v66;
    }
    if ( v136 )
    {
      *(_DWORD *)v136 = v66;
      v60 = *((_DWORD *)v5 + 9);
    }
    if ( v60 )
    {
      if ( *((_DWORD *)v5 + 8) || v5[1] > (unsigned __int64)v5[2] )
      {
        *v134 = 0;
        goto LABEL_67;
      }
      v126 = std::_V2::generic_category((std::_V2 *)v46);
      v155[0] = &v155[2];
      v129 = (__m128i *)operator new(0x30u);
      v155[0] = v129;
      *v129 = _mm_load_si128((const __m128i *)&xmmword_23AAFC0);
      v155[2] = &qword_28 + 7;
      v129[1] = _mm_load_si128(xmmword_23AAFD0);
      strcpy(v129[2].m128i_i8, "t end of stream");
      v155[1] = &qword_28 + 7;
    }
    else
    {
      v126 = std::_V2::generic_category((std::_V2 *)v46);
      v155[0] = &v155[2];
      v127 = (__m128i *)operator new(0x2Eu);
      v155[2] = &qword_28 + 5;
      v155[0] = v127;
      *v127 = _mm_load_si128((const __m128i *)&xmmword_23AAFA0);
      v128 = _mm_load_si128((const __m128i *)&xmmword_23AAFB0);
      strcpy(v127[2].m128i_i8, "ode size is 0");
      v155[1] = &qword_28 + 5;
      v127[1] = v128;
    }
    sub_22205D0(v134, v155, 84, v126);
    if ( v155[0] != &v155[2] )
      operator delete(v155[0]);
    goto LABEL_67;
  }
  v113 = std::_V2::generic_category((std::_V2 *)v46);
  *(_OWORD *)&v155[2] = 0;
  v149[0] = &v150;
  v149[1] = nullptr;
  LOBYTE(v150) = 0;
  LODWORD(v155[1]) = 0;
  v157 = 0;
  v158 = 1;
  v156 = 0;
  v155[0] = &off_2BEBE68;
  v159 = v149;
  sub_227B8B0(v155, 0, 0, 0);
  v114 = *((_DWORD *)v5 + 9);
  v154 = 32;
  LODWORD(v153) = v114;
  v135 = (__int64 *)"can't read more than %zu at a time, trying to read %u";
  *(__m128 *)v152 = _mm_loadh_ps((const double *)&v135);
  sub_227C560(v155, v152);
  v155[0] = &off_2BEBE68;
  sub_227B7A0(v155);
  v155[0] = v149;
  LOWORD(v156) = 260;
  v115 = operator new(0x40u);
  sub_2220590(v115, v155, 84, v113);
  v116 = (int *)v149[0];
  *v134 = v115;
  if ( v116 != &v150 )
    operator delete(v116);
LABEL_34:
  sub_A0AE90((__int64 *)&v145);
  return v134;
}
