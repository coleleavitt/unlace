__int64 __fastcall sub_3C69E0(_QWORD *a1, __int64 *a2, int a3, __int64 *a4, int a5, __int64 **a6)
{
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  _QWORD *v9; // r15
  unsigned __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // rcx
  _QWORD *v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rdx
  _QWORD *v20; // r14
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // r13d
  int v25; // eax
  _QWORD *v27; // rdx
  unsigned int v28; // eax
  __int64 v29; // r14
  int v30; // eax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rax
  __m128i si128; // xmm0
  __int64 *v46; // rdi
  int v47; // ecx
  void *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r15
  void *v51; // rax
  int v52; // r13d
  void *v53; // rax
  void *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r14
  _OWORD *v57; // rax
  int v58; // edi
  unsigned int i; // r13d
  __int64 v60; // rax
  unsigned int v61; // r12d
  unsigned int v62; // edx
  unsigned int v63; // r13d
  __int64 *v64; // rax
  __int64 v65; // rdx
  __int64 v66; // r14
  __int64 v67; // rdi
  __int64 *v68; // rdi
  int v69; // r9d
  __int64 v70; // rdx
  __int64 v71; // r13
  unsigned int v72; // r14d
  __int64 v73; // rax
  __int64 v74; // r12
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rax
  unsigned int v78; // r13d
  void *v79; // rax
  __int64 v80; // r8
  int v81; // ecx
  __int64 v82; // rdi
  int v83; // r9d
  __int64 *v84; // rdx
  unsigned int v85; // r14d
  __int64 v86; // rax
  __int64 v87; // r8
  int v88; // ecx
  __int64 v89; // r12
  __int64 v90; // rdi
  __int64 *v91; // r12
  __int64 v92; // rax
  __int64 v93; // rsi
  int v94; // ecx
  __int64 v95; // rdi
  __int64 v96; // r12
  __int64 v97; // rdi
  _QWORD *v98; // rax
  char **exception; // r14
  void *v100; // r15
  _QWORD *v101; // rsi
  int v102; // [rsp+10h] [rbp-220h]
  int v103; // [rsp+10h] [rbp-220h]
  __int64 v104; // [rsp+18h] [rbp-218h]
  __int64 v105; // [rsp+18h] [rbp-218h]
  int v106; // [rsp+20h] [rbp-210h]
  __int64 *v107; // [rsp+28h] [rbp-208h]
  int v108; // [rsp+28h] [rbp-208h]
  __int64 v109; // [rsp+30h] [rbp-200h]
  int v110; // [rsp+30h] [rbp-200h]
  int v111; // [rsp+38h] [rbp-1F8h]
  int v112; // [rsp+38h] [rbp-1F8h]
  __int64 v113; // [rsp+40h] [rbp-1F0h]
  void *v114; // [rsp+48h] [rbp-1E8h]
  void *v115; // [rsp+48h] [rbp-1E8h]
  __int64 v116; // [rsp+58h] [rbp-1D8h]
  unsigned int v119; // [rsp+68h] [rbp-1C8h]
  __int64 v120; // [rsp+68h] [rbp-1C8h]
  __int64 v121; // [rsp+78h] [rbp-1B8h]
  __m128i v122; // [rsp+80h] [rbp-1B0h] BYREF
  __int64 *v123; // [rsp+90h] [rbp-1A0h]
  __int64 *v124; // [rsp+98h] [rbp-198h]
  __m128i *v125; // [rsp+A0h] [rbp-190h]
  void *p_ptr; // [rsp+A8h] [rbp-188h]
  char v127[8]; // [rsp+B8h] [rbp-178h] BYREF
  unsigned int *v128; // [rsp+C0h] [rbp-170h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-168h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-160h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-158h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-150h] BYREF
  _DWORD v133[2]; // [rsp+E8h] [rbp-148h] BYREF
  __m128i v134; // [rsp+F0h] [rbp-140h] BYREF
  __int64 v135; // [rsp+100h] [rbp-130h] BYREF
  __int64 v136; // [rsp+108h] [rbp-128h]
  __int64 v137; // [rsp+110h] [rbp-120h] BYREF
  __int64 v138; // [rsp+118h] [rbp-118h]
  __int64 v139; // [rsp+120h] [rbp-110h] BYREF
  __int64 v140; // [rsp+128h] [rbp-108h]
  __int64 v141; // [rsp+130h] [rbp-100h] BYREF
  int v142; // [rsp+138h] [rbp-F8h]
  __int64 v143; // [rsp+140h] [rbp-F0h] BYREF
  int v144; // [rsp+148h] [rbp-E8h]
  __int64 v145; // [rsp+150h] [rbp-E0h] BYREF
  int v146; // [rsp+158h] [rbp-D8h]
  __int64 v147; // [rsp+160h] [rbp-D0h] BYREF
  int v148; // [rsp+168h] [rbp-C8h]
  __int64 v149; // [rsp+170h] [rbp-C0h] BYREF
  int v150; // [rsp+178h] [rbp-B8h]
  __int64 v151; // [rsp+180h] [rbp-B0h] BYREF
  int v152; // [rsp+188h] [rbp-A8h]
  __int64 v153; // [rsp+190h] [rbp-A0h] BYREF
  int v154; // [rsp+198h] [rbp-98h]
  __int64 v155; // [rsp+1A0h] [rbp-90h] BYREF
  int v156; // [rsp+1A8h] [rbp-88h]
  __int64 *v157; // [rsp+1B0h] [rbp-80h] BYREF
  int v158; // [rsp+1B8h] [rbp-78h]
  __int64 v159; // [rsp+1C0h] [rbp-70h] BYREF
  __int64 v160; // [rsp+1C8h] [rbp-68h]
  void *ptr; // [rsp+1D0h] [rbp-60h] BYREF
  __int64 v162; // [rsp+1D8h] [rbp-58h]
  int v163; // [rsp+1E0h] [rbp-50h]
  __int128 v164; // [rsp+1E8h] [rbp-48h]

  v124 = a2;
  v7 = *a1;
  v123 = a4;
  LODWORD(v114) = a5;
  ptr = nullptr;
  p_ptr = &ptr;
  sub_E66730(v127, v7, &ptr, 1);
  sub_18572D0(&ptr);
  sub_FA3BF0(a1 + 9);
  v111 = (_DWORD)a1 + 200;
  sub_E69D00(a1 + 25);
  v8 = (_QWORD *)a1[95];
  v9 = v8;
  if ( v8 )
  {
    v10 = (unsigned __int64)&v8[*((unsigned int *)v8 - 1)];
    if ( (unsigned __int64)v8 >= v10 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v11 = *v9;
        if ( *v9 )
        {
          v12 = a1[94];
          v13 = (*(_DWORD *)(v11 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v9 >= v10 )
          goto LABEL_8;
      }
      sub_15D7BC0(v12, v11);
      ++v9;
    }
    while ( (unsigned __int64)v9 < v10 );
LABEL_8:
    v9 = (_QWORD *)a1[95];
    if ( v9 )
LABEL_9:
      *((_DWORD *)v9 - 1) = 0;
  }
  v14 = (_QWORD *)a1[97];
  v15 = v14;
  if ( v14 )
  {
    v16 = (unsigned __int64)&v14[*((unsigned int *)v14 - 1)];
    if ( (unsigned __int64)v14 >= v16 )
      goto LABEL_18;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = a1[96];
          v13 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_17;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_17:
    v15 = (_QWORD *)a1[97];
    if ( v15 )
LABEL_18:
      *((_DWORD *)v15 - 1) = 0;
  }
  v19 = (_QWORD *)a1[99];
  v20 = v19;
  if ( v19 )
  {
    v21 = (unsigned __int64)&v19[*((unsigned int *)v19 - 1)];
    if ( (unsigned __int64)v19 >= v21 )
      goto LABEL_27;
    do
    {
      while ( 1 )
      {
        v22 = *v20;
        if ( *v20 )
        {
          v23 = a1[98];
          v13 = (*(_DWORD *)(v22 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v20 >= v21 )
          goto LABEL_26;
      }
      sub_15D7BC0(v23, v22);
      ++v20;
    }
    while ( (unsigned __int64)v20 < v21 );
LABEL_26:
    v20 = (_QWORD *)a1[99];
    if ( v20 )
LABEL_27:
      *((_DWORD *)v20 - 1) = 0;
  }
  v24 = *((_DWORD *)v123 + 14);
  if ( v24 < *((_DWORD *)v124 + 14) )
    v24 = *((_DWORD *)v124 + 14);
  if ( *((_DWORD *)a1 + 22) <= 1u || *((_DWORD *)a1 + 23) < v24 )
  {
    v27 = (_QWORD *)a1[10];
    v28 = 2 * v24;
    LODWORD(v125) = 2 * v24;
    if ( v27 )
    {
      v29 = *((unsigned int *)v27 - 1);
      if ( (unsigned int)v29 >= v28 )
      {
        *((_DWORD *)v27 - 1) = v28;
        goto LABEL_38;
      }
    }
    else
    {
      if ( !v28 )
        goto LABEL_38;
      v98 = (_QWORD *)sub_186B270(0x38u);
      v27 = v98 + 1;
      *v98 = 2;
      v29 = 0;
      a1[10] = v98 + 1;
    }
    while ( 1 )
    {
      v36 = *((_DWORD *)v27 - 2);
      v37 = (unsigned int)v125;
      if ( v36 >= (unsigned int)v125 )
        break;
      v33 = (3 * v36 + 1) >> 1;
      v34 = 8 * (v33 + ((3 * v36 + 1) & 0xFFFFFFFE)) + 8;
      if ( 24 * v36 + 8 >= (unsigned int)v34 || v36 >= v33 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_3BCB70((__int64 *)p_ptr, "Overflow encountered when expanding vector");
        v100 = p_ptr;
        v101 = p_ptr;
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v101);
        sub_233E40((__int64)v100);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = (unsigned int *)sub_186B300(v27 - 1, v34);
      v27 = v35 + 2;
      *v35 = v33;
      a1[10] = v35 + 2;
    }
    *((_DWORD *)v27 - 1) = (_DWORD)v125;
    v38 = 3 * v37;
    v39 = &v27[3 * v29];
    v40 = &v27[v38];
    if ( 3 * v29 != v38 )
    {
      v41 = v39;
      do
      {
        *v41 = 0;
        v41 += 3;
        *((_DWORD *)v41 - 2) = 0;
      }
      while ( v40 != v41 );
      if ( (((_BYTE)v40 - (_BYTE)v39) & 8) == 0 || (*((_DWORD *)v39 + 2) = 0, v39 += 3, v40 != v39) )
      {
        do
        {
          *((_DWORD *)v39 + 2) = 0;
          v39 += 6;
          *((_DWORD *)v39 - 4) = 0;
        }
        while ( v40 != v39 );
      }
    }
LABEL_38:
    v30 = *((_DWORD *)a1 + 24);
    *((_DWORD *)a1 + 23) = v24;
    *((_DWORD *)a1 + 22) = 2;
    *((_DWORD *)a1 + 24) = ++v30;
    if ( v30 != -1 )
      goto LABEL_33;
    goto LABEL_39;
  }
  v25 = *((_DWORD *)a1 + 24) + 1;
  *((_DWORD *)a1 + 24) = v25;
  if ( v25 != -1 )
    goto LABEL_33;
LABEL_39:
  v31 = a1[10];
  if ( v31 )
  {
    v32 = v31 + 24LL * *(unsigned int *)(v31 - 4);
    if ( v31 != v32 )
    {
      if ( ((24 * (unsigned __int8)*(_DWORD *)(v31 - 4)) & 8) == 0 || (*(_DWORD *)(v31 + 16) = 0, v31 += 24, v32 != v31) )
      {
        do
        {
          *(_DWORD *)(v31 + 16) = 0;
          v31 += 48;
          *(_DWORD *)(v31 - 8) = 0;
        }
        while ( v32 != v31 );
      }
    }
  }
  *((_DWORD *)a1 + 24) = 1;
LABEL_33:
  HIBYTE(v114) = sub_FB5F20((int)a1 + 8);
  if ( !HIBYTE(v114) )
    goto LABEL_34;
  v42 = *a1;
  v135 = 0;
  v137 = 0;
  v109 = v42;
  v136 = v42;
  v138 = v42;
  v139 = 0;
  v140 = v42;
  v43 = sub_186B270(0x50u);
  v44 = *a1;
  *(_OWORD *)(v43 + 48) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18B6580);
  *(_QWORD *)v43 = 0;
  *(_QWORD *)(v43 + 8) = v44;
  *(_QWORD *)(v43 + 16) = v44;
  *(_QWORD *)(v43 + 40) = v44;
  *(_QWORD *)(v43 + 24) = 0;
  v46 = *a6;
  *(_QWORD *)(v43 + 32) = 0;
  v122 = _mm_move_epi64((__m128i)(unsigned __int64)v42);
  *(__m128i *)(v43 + 64) = si128;
  if ( v46 )
    sub_3BE360(v46);
  v133[0] = 0;
  v47 = (int)p_ptr;
  *a6 = (__int64 *)v43;
  v133[1] = v24;
  v48 = (void *)*v124;
  LODWORD(v162) = 0;
  v143 = 0;
  ptr = v48;
  v144 = 0;
  v141 = 0;
  v142 = 0;
  sub_FA4800((_DWORD)a1 + 72, 2, (unsigned int)v133, v47, (unsigned int)&v141, (unsigned int)&v143, (__int64)&v135);
  v116 = v135;
  if ( v135 )
    ++*(_DWORD *)(v135 + 8);
  v49 = v124[3];
  if ( v49 )
  {
    v50 = 0;
    LODWORD(v125) = 0;
    v121 = v42;
    v107 = &v147;
    do
    {
      if ( (unsigned int)v125 >= *(_DWORD *)(v49 - 4) )
        break;
      if ( a3 == (_DWORD)v125 )
      {
        v77 = v123[3];
        if ( v77 )
        {
          v78 = 0;
          do
          {
            if ( v78 >= *(_DWORD *)(v77 - 4) )
              break;
            v79 = *(void **)(v77 + 8LL * v78);
            LODWORD(v162) = 1;
            v151 = 0;
            ptr = v79;
            v152 = 0;
            v149 = 0;
            v150 = 0;
            sub_FA4800(
              (_DWORD)a1 + 72,
              2,
              (unsigned int)v133,
              (_DWORD)p_ptr,
              (unsigned int)&v149,
              (unsigned int)&v151,
              (__int64)&v135);
            v130 = v135;
            if ( v135 )
              ++*(_DWORD *)(v135 + 8);
            v134 = _mm_load_si128(&v122);
            sub_3BCFC0(&v134.m128i_i64[1], &v130);
            ++v78;
            v50 = v134.m128i_i64[1];
            v121 = v134.m128i_i64[0];
            v122 = _mm_load_si128(&v134);
            v77 = v123[3];
          }
          while ( v77 );
          v49 = v124[3];
        }
      }
      else
      {
        v51 = *(void **)(v49 + 8LL * (unsigned int)v125);
        LODWORD(v162) = 0;
        v147 = 0;
        ptr = v51;
        v148 = 0;
        v145 = 0;
        v146 = 0;
        sub_FA4800(
          (_DWORD)a1 + 72,
          2,
          (unsigned int)v133,
          (_DWORD)p_ptr,
          (unsigned int)&v145,
          (unsigned int)&v147,
          (__int64)&v135);
        v129 = v135;
        if ( v135 )
          ++*(_DWORD *)(v135 + 8);
        v134 = _mm_load_si128(&v122);
        sub_3BCFC0(&v134.m128i_i64[1], &v129);
        v50 = v134.m128i_i64[1];
        v121 = v134.m128i_i64[0];
        v122 = _mm_load_si128(&v134);
        v49 = v124[3];
      }
      LODWORD(v125) = (_DWORD)v125 + 1;
    }
    while ( v49 );
  }
  else
  {
    v50 = 0;
    v121 = v42;
  }
  LODWORD(v162) = 0;
  v155 = 0;
  v52 = (int)p_ptr;
  v53 = (void *)v124[4];
  v156 = 0;
  v153 = 0;
  ptr = v53;
  v154 = 0;
  sub_FA4800(
    (_DWORD)a1 + 72,
    2,
    (unsigned int)v133,
    (_DWORD)p_ptr,
    (unsigned int)&v153,
    (unsigned int)&v155,
    (__int64)&v135);
  LODWORD(v162) = 1;
  v159 = 0;
  LODWORD(v160) = 0;
  v54 = (void *)v123[4];
  v157 = nullptr;
  v158 = 0;
  ptr = v54;
  v122.m128i_i64[0] = (__int64)&v157;
  sub_FA4800((_DWORD)a1 + 72, 2, (unsigned int)v133, v52, (unsigned int)&v157, (unsigned int)&v159, (__int64)&v137);
  v55 = sub_15E1B70(*a1);
  v56 = v55;
  if ( v55 )
    ++*(_DWORD *)(v55 + 8);
  sub_3BCB50(v139, v140);
  v139 = v56;
  v157 = nullptr;
  v57 = (_OWORD *)sub_186B270(0x40u);
  ptr = v57;
  v58 = (int)p_ptr;
  *v57 = 0;
  v57[1] = 0;
  v57[2] = 0;
  v57[3] = 0;
  v162 = 8;
  v163 = 0;
  v125 = &v134;
  v164 = 0;
  sub_157E9E0(v58, v116);
  if ( v50 )
  {
    for ( i = 0; i < *(_DWORD *)(v50 - 4); ++i )
    {
      v125 = &v134;
      sub_157E920(p_ptr, *(_QWORD *)(v50 + 8LL * i));
    }
  }
  v60 = v164;
  v61 = 0;
  if ( (_QWORD)v164 )
  {
    while ( 1 )
    {
      if ( v61 >= *(_DWORD *)(v60 - 4) )
        goto LABEL_88;
      if ( *(_QWORD *)(v60 + 8LL * v61) )
        break;
LABEL_87:
      ++v61;
      if ( !v60 )
        goto LABEL_88;
    }
    v62 = v61 >> 5;
    v125 = (__m128i *)v157;
    if ( v157 )
    {
      v63 = v62 + 1;
      LODWORD(v107) = *((_DWORD *)v157 - 1);
      if ( v62 < (unsigned int)v107 )
      {
LABEL_86:
        v125->m128i_i32[v61 >> 5] |= 1 << v61;
        goto LABEL_87;
      }
    }
    else
    {
      LODWORD(v107) = 0;
      v63 = v62 + 1;
    }
    v64 = (__int64 *)v125;
    while ( !v64 || *((_DWORD *)v64 - 2) < v63 )
    {
      v125 = &v134;
      sub_2FD3F0((unsigned int **)v122.m128i_i64[0]);
      v64 = v157;
      v125 = (__m128i *)v157;
    }
    *((_DWORD *)v64 - 1) = v63;
    v65 = 4LL * v63;
    v66 = 4LL * (unsigned int)v107;
    if ( v66 != v65 )
      memset((char *)v64 + v66, 0, v65 - v66);
    v60 = v164;
    goto LABEL_86;
  }
LABEL_88:
  v125 = &v134;
  sub_E671B0(v127, v122.m128i_i64[0], 0, &v139);
  if ( *(_QWORD *)(*a1 + 864LL) == v139 )
  {
    HIBYTE(v114) = 0;
    v125 = &v134;
    goto LABEL_141;
  }
  v134.m128i_i64[1] = v50;
  v134.m128i_i64[0] = v121;
  v67 = (__int64)*a6;
  v125 = &v134;
  sub_3C3260(v67, v116, (__int64)&v134, v139);
  v68 = *a6;
  v128 = nullptr;
  sub_3BF620(v68, &v128);
  v70 = *a1;
  v122.m128i_i64[0] = (__int64)v128;
  v104 = v70;
  if ( !v128 )
  {
    if ( !(_BYTE)v114 )
      goto LABEL_141;
    v96 = v116;
    v71 = 0;
    goto LABEL_137;
  }
  LOBYTE(v107) = 0;
  v71 = 0;
  v72 = 0;
  v119 = 0;
  while ( v72 < *(_DWORD *)(v122.m128i_i64[0] - 4) )
  {
    v76 = *(_QWORD *)(v122.m128i_i64[0] + 8LL * v72);
    if ( v76 )
    {
      v73 = sub_15DB5C0(*a1, v119, v76);
      v74 = v73;
      if ( v73 )
      {
        v75 = *(_DWORD *)(v73 + 8) + 1;
        *(_DWORD *)(v74 + 8) = v75;
        if ( v71 )
        {
          v13 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v104, v71);
          v131 = v74;
          v75 = *(_DWORD *)(v74 + 8);
        }
        else
        {
          v131 = v74;
        }
        *(_DWORD *)(v74 + 8) = v75 + 1;
      }
      else
      {
        if ( v71 )
        {
          v13 = (*(_DWORD *)(v71 + 8))-- == 1;
          if ( v13 )
            sub_15D7BC0(v104, v71);
        }
        v131 = 0;
      }
      sub_3BD3D0(a1 + 95, &v131);
      ++v119;
      v71 = v74;
    }
    else
    {
      v132 = 0;
      sub_3BD3D0(a1 + 95, &v132);
      LOBYTE(v107) = HIBYTE(v114);
    }
    ++v72;
  }
  if ( !(_BYTE)v107 )
  {
    v96 = v116;
    if ( !(_BYTE)v114 )
      goto LABEL_128;
LABEL_137:
    sub_3C6490((unsigned int **)a1, (int)v133, v124, 0);
    sub_3C6490((unsigned int **)a1, (int)v133, v123, 1);
    v116 = v96;
    if ( !v71 )
      goto LABEL_140;
    v13 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( !v13 )
    {
LABEL_139:
      v116 = v96;
LABEL_140:
      if ( !v122.m128i_i64[0] )
        goto LABEL_141;
      goto LABEL_131;
    }
LABEL_157:
    sub_15D7BC0(v104, v71);
    goto LABEL_139;
  }
  v80 = a1[95];
  if ( v80 )
    v81 = *(_DWORD *)(v80 - 4);
  else
    v81 = 0;
  sub_157BE40(
    (int)&v159,
    v111,
    (*a6)[4],
    v81,
    v80,
    v69,
    v102,
    v104,
    (int)&v132,
    (int)v107,
    v109,
    v111,
    (__int64)&v159,
    v114);
  v82 = v139;
  v139 = v159;
  v159 = v82;
  sub_3BCB50(v82, v160);
  v84 = *a6;
  v85 = 0;
  v86 = (*a6)[3];
  if ( v86 )
  {
    while ( 1 )
    {
      v87 = a1[95];
      if ( v85 >= *(_DWORD *)(v86 - 4) )
        break;
      if ( v87 )
        v88 = *(_DWORD *)(v87 - 4);
      else
        v88 = 0;
      v89 = 8LL * v85;
      sub_157BE40(v113, v112, *(_QWORD *)(v86 + v89), v88, v87, v83, v103, v105, v106, v108, v110, v112, v113, v115);
      v90 = v135;
      v91 = (__int64 *)(v50 + v89);
      v135 = v159;
      v159 = v90;
      sub_3BCB50(v90, v160);
      v92 = v135;
      if ( v135 )
        ++*(_DWORD *)(v135 + 8);
      v93 = *v91;
      if ( *v91 )
      {
        v13 = (*(_DWORD *)(v93 + 8))-- == 1;
        if ( v13 )
        {
          v120 = v92;
          sub_15D7BC0(v121, v93);
          v92 = v120;
        }
      }
      *v91 = v92;
      ++v85;
      v84 = *a6;
      v86 = (*a6)[3];
      if ( !v86 )
        goto LABEL_122;
    }
  }
  else
  {
LABEL_122:
    v87 = a1[95];
  }
  if ( v87 )
    v94 = *(_DWORD *)(v87 - 4);
  else
    v94 = 0;
  sub_157BE40(v113, v112, *v84, v94, v87, v83, v103, v105, v106, v108, v110, v112, v113, v115);
  v95 = v135;
  v135 = v159;
  v159 = v95;
  sub_3BCB50(v95, v160);
  v96 = v135;
  if ( v135 )
    ++*(_DWORD *)(v135 + 8);
  sub_3BCB30(v116, v109);
  v134.m128i_i64[1] = v50;
  v97 = (__int64)*a6;
  v134.m128i_i64[0] = v121;
  sub_3C3260(v97, v96, (__int64)v125, v139);
  if ( (_BYTE)v114 )
    goto LABEL_137;
LABEL_128:
  if ( v71 )
  {
    v13 = (*(_DWORD *)(v71 + 8))-- == 1;
    if ( v13 )
      goto LABEL_157;
  }
  v116 = v96;
LABEL_131:
  sub_186B220((void *)(v122.m128i_i64[0] - 8));
LABEL_141:
  if ( *((_QWORD *)&v164 + 1) )
    sub_186B220((void *)(*((_QWORD *)&v164 + 1) - 8LL));
  if ( (_QWORD)v164 )
    sub_186B220((void *)(v164 - 8));
  if ( ptr )
    sub_186B220(ptr);
  if ( v157 )
    sub_186B220(v157 - 1);
  sub_3BCB30(v116, v109);
  sub_3BCB50(v139, v140);
  sub_3BCB50(v137, v138);
  sub_3BCB50(v135, v136);
  v134.m128i_i64[1] = v50;
  v134.m128i_i64[0] = v121;
  sub_2B4F40(v125->m128i_i64);
LABEL_34:
  sub_E66770(v127);
  return HIBYTE(v114);
}

