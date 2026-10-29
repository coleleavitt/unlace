__int64 __fastcall sub_93CDE0(_QWORD *a1, __int64 *a2)
{
  _QWORD *v2; // rdx
  unsigned int v3; // eax
  __int64 **v4; // rcx
  int v5; // eax
  __int64 v6; // rdi
  bool v7; // bl
  _DWORD *v8; // rax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  bool *v13; // rdx
  _QWORD *v14; // r15
  __int64 v15; // rax
  int v16; // edx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // r14
  unsigned int v22; // eax
  const __m128i **v23; // rbp
  __m128i *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __m128i si128; // xmm0
  void *v29; // r14
  void *v30; // r14
  const __m128i *v31; // rdx
  __int64 v32; // rax
  int v33; // esi
  __int64 v34; // rdx
  int v35; // eax
  _QWORD *v36; // rax
  __m128i *v37; // rbp
  unsigned int v38; // eax
  unsigned int v39; // ebx
  unsigned int v40; // r13d
  size_t v41; // rdi
  unsigned int *v42; // rax
  const __m128i *v43; // r15
  unsigned int *v44; // rbx
  __int64 v45; // rax
  __m128i *v46; // rdx
  __int64 v47; // rsi
  const __m128i *v48; // rax
  const __m128i *v49; // rsi
  __int32 v50; // ecx
  __int8 v51; // di
  __int64 v52; // rcx
  __int8 v53; // di
  __int64 v54; // rcx
  __int8 v55; // di
  __int64 v56; // rcx
  __int8 v57; // di
  __m128i v58; // xmm0
  __int64 v59; // rax
  const __m128i *v60; // r12
  __int64 v61; // rdi
  void *v62; // r14
  void *v63; // r14
  __int64 *v64; // rsi
  __m128i *v65; // rax
  void *v66; // r13
  __int64 v67; // rbx
  void *v68; // r12
  unsigned int v70; // ebx
  unsigned int v71; // ecx
  unsigned int v72; // eax
  unsigned int *v73; // rax
  __int64 v74; // rcx
  unsigned int v75; // edx
  __int64 v76; // rax
  __int64 *v77; // r13
  __int64 v78; // rsi
  __int64 *v79; // rdi
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rax
  __m128i v83; // xmm0
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // r15
  __int64 v89; // rdi
  void *v90; // rbp
  void *v91; // rbp
  __int64 v92; // rsi
  unsigned int v93; // ebx
  unsigned int v94; // edx
  unsigned int *v95; // r13
  __int64 v96; // r14
  __int64 v97; // rax
  _DWORD *v98; // rdx
  _DWORD *v99; // rsi
  _DWORD *i; // rax
  int v101; // ecx
  char v102; // di
  __int64 v103; // rcx
  char v104; // di
  __int64 v105; // rcx
  char v106; // di
  __int64 v107; // rcx
  char v108; // di
  __int64 v109; // rax
  __int64 v110; // r12
  char *v111; // rdi
  unsigned int v112; // r12d
  unsigned int *v113; // rax
  __int64 v114; // rdx
  __int64 *v115; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // r8
  _QWORD *v118; // rax
  _QWORD *v119; // rax
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  char **exception; // rbp
  char **v123; // rbp
  const __m128i **v124; // [rsp+0h] [rbp-D8h]
  __int64 *v125; // [rsp+0h] [rbp-D8h]
  const __m128i **v126; // [rsp+8h] [rbp-D0h]
  unsigned int *v127; // [rsp+8h] [rbp-D0h]
  __int64 *v128; // [rsp+8h] [rbp-D0h]
  unsigned int v130; // [rsp+1Ch] [rbp-BCh]
  unsigned int v131; // [rsp+1Ch] [rbp-BCh]
  unsigned int v133; // [rsp+28h] [rbp-B0h]
  unsigned int v134; // [rsp+2Ch] [rbp-ACh]
  __int64 v135[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v136; // [rsp+50h] [rbp-88h] BYREF
  __int64 v137; // [rsp+58h] [rbp-80h] BYREF
  __int64 v138; // [rsp+60h] [rbp-78h]
  __int64 v139; // [rsp+68h] [rbp-70h] BYREF
  __int64 v140; // [rsp+70h] [rbp-68h]
  __int64 v141; // [rsp+78h] [rbp-60h] BYREF
  __int64 v142; // [rsp+80h] [rbp-58h]
  __int64 v143; // [rsp+88h] [rbp-50h] BYREF
  __m128i v144[4]; // [rsp+90h] [rbp-48h] BYREF

  v2 = (_QWORD *)a1[4];
  if ( v2 )
  {
    v3 = *((_DWORD *)v2 - 1);
    v134 = v3;
    v133 = v3;
    if ( v3 == *((_DWORD *)v2 - 2) )
    {
      v70 = (3 * v3 + 1) >> 1;
      v71 = 8 * v3 + 8;
      v72 = 8 * v70 + 8;
      if ( v71 >= v72 || *((_DWORD *)v2 - 1) >= v70 )
        goto LABEL_95;
      v73 = (unsigned int *)sub_186B300(v2 - 1, v72);
      v74 = v73[1];
      v2 = v73 + 2;
      *v73 = v70;
      a1[4] = v73 + 2;
      LODWORD(v73) = v74;
      v4 = (__int64 **)&v2[v74];
      v5 = (_DWORD)v73 + 1;
    }
    else
    {
      v4 = (__int64 **)&v2[v3];
      v5 = v3 + 1;
    }
  }
  else
  {
    v119 = (_QWORD *)sub_186B270(0x18u);
    v134 = 0;
    *v119 = 2;
    v2 = v119 + 1;
    v133 = 0;
    a1[4] = v119 + 1;
    v4 = (__int64 **)(v119 + 1);
    v5 = 1;
  }
  *v4 = a2;
  v6 = *a2;
  v7 = 0;
  *((_DWORD *)v2 - 1) = v5;
  v8 = *(_DWORD **)(sub_15D1F10(v6) + 24);
  if ( v8 && *v8 == 5 )
    v7 = v8[1] == 1;
  v9 = (_QWORD *)a1[40];
  if ( !v9 )
  {
    v121 = (_QWORD *)sub_186B270(0xAu);
    *v121 = 2;
    v9 = v121 + 1;
    a1[40] = v121 + 1;
    v13 = (bool *)(v121 + 1);
    v12 = 1;
    goto LABEL_10;
  }
  v10 = *((_DWORD *)v9 - 1);
  if ( v10 == *((_DWORD *)v9 - 2) )
  {
    v112 = (3 * v10 + 1) >> 1;
    if ( v10 + 8 < v112 + 8 && v10 < v112 )
    {
      v113 = (unsigned int *)sub_186B300(v9 - 1, v112 + 8);
      v114 = v113[1];
      v9 = v113 + 2;
      *v113 = v112;
      a1[40] = v113 + 2;
      LODWORD(v113) = v114;
      v13 = (bool *)v9 + v114;
      v12 = (_DWORD)v113 + 1;
      goto LABEL_10;
    }
LABEL_95:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(&v136, "Overflow encountered when expanding vector");
LABEL_94:
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, &v136);
    sub_233E40((__int64)&v136);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v11 = v10;
  v12 = v10 + 1;
  v13 = (bool *)v9 + v11;
LABEL_10:
  *v13 = v7;
  *((_DWORD *)v9 - 1) = v12;
  v136 = 0;
  v137 = 0;
  v14 = (_QWORD *)a1[49];
  v138 = 0;
  v139 = 1;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  v143 = 1;
  v144[0].m128i_i64[0] = 0;
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 - 1);
    if ( (_DWORD)v15 == *((_DWORD *)v14 - 2) )
    {
      v93 = (unsigned int)(3 * v15 + 1) >> 1;
      v94 = 72 * v93 + 8;
      if ( 72 * (int)v15 + 8 >= v94 || (unsigned int)v15 >= v93 )
      {
        v123 = (char **)__cxa_allocate_exception(0x28u);
        sub_91CD50(v135, "Overflow encountered when expanding vector");
        *v123 = (char *)off_1C63128;
        sub_2333C0(v123 + 1, v135);
        sub_233E40((__int64)v135);
        __cxa_throw(v123, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v95 = (unsigned int *)sub_186B270(v94);
      v14 = v95 + 2;
      v96 = a1[49];
      if ( v96 )
      {
        v97 = *(unsigned int *)(v96 - 4);
        v98 = v95 + 2;
        v95[1] = v97;
        v99 = (_DWORD *)(v96 + 72 * v97);
        for ( i = (_DWORD *)v96; v99 != i; *((_QWORD *)i - 1) = 0 )
        {
          v101 = *i;
          i += 18;
          v98 += 18;
          *(v98 - 18) = v101;
          v102 = *((_BYTE *)i - 60);
          *(v98 - 16) = *(i - 16);
          *((_BYTE *)v98 - 60) = v102 & 3 | *(_BYTE *)(v98 - 15) & 0xFC;
          v103 = *((_QWORD *)i - 7);
          *((_QWORD *)i - 7) = 0;
          *((_QWORD *)v98 - 7) = v103;
          v104 = *((_BYTE *)i - 44);
          *(v98 - 12) = *(i - 12);
          *((_BYTE *)v98 - 44) = v104 & 3 | *(_BYTE *)(v98 - 11) & 0xFC;
          v105 = *((_QWORD *)i - 5);
          *((_QWORD *)i - 5) = 0;
          *((_QWORD *)v98 - 5) = v105;
          v106 = *((_BYTE *)i - 28);
          *(v98 - 8) = *(i - 8);
          *((_BYTE *)v98 - 28) = v106 & 3 | *(_BYTE *)(v98 - 7) & 0xFC;
          v107 = *((_QWORD *)i - 3);
          *((_QWORD *)i - 3) = 0;
          *((_QWORD *)v98 - 3) = v107;
          v108 = *((_BYTE *)i - 12);
          *(v98 - 4) = *(i - 4);
          *((_BYTE *)v98 - 12) = v108 & 3 | *(_BYTE *)(v98 - 3) & 0xFC;
          *((_QWORD *)v98 - 1) = *((_QWORD *)i - 1);
        }
        v109 = *(unsigned int *)(v96 - 4);
        if ( (_DWORD)v109 )
        {
          v110 = v96 + 72 * v109;
          do
          {
            sub_25A130((char *)(v96 + 40));
            v111 = (char *)(v96 + 8);
            v96 += 72;
            sub_25A130(v111);
          }
          while ( v96 != v110 );
          v96 = a1[49];
        }
        sub_186B220((void *)(v96 - 8));
        v17 = &v14[9 * v95[1]];
      }
      else
      {
        v95[1] = 0;
        v17 = v95 + 2;
      }
      v16 = v136;
      *v95 = v93;
      a1[49] = v14;
    }
    else
    {
      v16 = 0;
      v17 = &v14[9 * v15];
    }
  }
  else
  {
    v120 = (_QWORD *)sub_186B270(0x98u);
    *v120 = 2;
    v14 = v120 + 1;
    v16 = v136;
    a1[49] = v120 + 1;
    v17 = v120 + 1;
  }
  *(_DWORD *)v17 = v16;
  *((_DWORD *)v17 + 2) = v137;
  *((_BYTE *)v17 + 12) = BYTE4(v137) & 3 | *((_BYTE *)v17 + 12) & 0xFC;
  v18 = v138;
  v138 = 0;
  v17[2] = v18;
  *((_DWORD *)v17 + 6) = v139;
  *((_BYTE *)v17 + 28) = BYTE4(v139) & 3 | *((_BYTE *)v17 + 28) & 0xFC;
  v19 = v140;
  v140 = 0;
  v17[4] = v19;
  *((_DWORD *)v17 + 10) = v141;
  *((_BYTE *)v17 + 44) = BYTE4(v141) & 3 | *((_BYTE *)v17 + 44) & 0xFC;
  v20 = v142;
  v142 = 0;
  v17[6] = v20;
  *((_DWORD *)v17 + 14) = v143;
  *((_BYTE *)v17 + 60) = BYTE4(v143) & 3 | *((_BYTE *)v17 + 60) & 0xFC;
  v17[8] = v144[0].m128i_i64[0];
  v144[0].m128i_i64[0] = 0;
  ++*((_DWORD *)v14 - 1);
  sub_25A130((char *)&v141);
  sub_25A130((char *)&v137);
  v21 = a1[39];
  if ( !v21 )
    goto LABEL_87;
  v22 = *(_DWORD *)(v21 - 4);
  v126 = (const __m128i **)(v21 + 8LL * v22);
  if ( v126 == (const __m128i **)v21 )
    goto LABEL_22;
  v23 = (const __m128i **)a1[39];
  do
  {
    v137 = 0;
    v136 = 0xFFFFFFFFLL;
    v139 = 1;
    v141 = 0;
    v143 = 1;
    v144[0] = 0;
    v31 = *v23;
    v138 = 0;
    v140 = 0;
    v142 = 0;
    if ( !v31 || (v32 = v31[-1].m128i_u32[3], v33 = -1, (_DWORD)v32 == v31[-1].m128i_i32[2]) )
    {
      sub_93CB40(v23);
      v31 = *v23;
      v33 = v136;
      v32 = (*v23)[-1].m128i_u32[3];
    }
    ++v23;
    v24 = (__m128i *)&v31[5 * v32];
    v24->m128i_i32[0] = v33;
    v24->m128i_i32[2] = v137;
    v24->m128i_i8[12] = BYTE4(v137) & 3 | v24->m128i_i8[12] & 0xFC;
    v25 = v138;
    v138 = 0;
    v24[1].m128i_i64[0] = v25;
    v24[1].m128i_i32[2] = v139;
    v24[1].m128i_i8[12] = BYTE4(v139) & 3 | v24[1].m128i_i8[12] & 0xFC;
    v26 = v140;
    v140 = 0;
    v24[2].m128i_i64[0] = v26;
    v24[2].m128i_i32[2] = v141;
    v24[2].m128i_i8[12] = BYTE4(v141) & 3 | v24[2].m128i_i8[12] & 0xFC;
    v27 = v142;
    v142 = 0;
    v24[3].m128i_i64[0] = v27;
    si128 = _mm_load_si128(v144);
    v144[0].m128i_i64[0] = 0;
    v24[3].m128i_i32[2] = v143;
    v24[3].m128i_i8[12] = BYTE4(v143) & 3 | v24[3].m128i_i8[12] & 0xFC;
    v24[4] = si128;
    v29 = qword_1C7F2C0;
    ++v31[-1].m128i_i32[3];
    sub_182CBA0(v29, &v141);
    sub_182CBA0(v29, &v143);
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v137);
    sub_182CBA0(v30, &v139);
  }
  while ( v126 != v23 );
  v21 = a1[39];
  if ( !v21 )
  {
LABEL_87:
    v118 = (_QWORD *)sub_186B270(0x18u);
    *v118 = 2;
    v21 = (unsigned __int64)(v118 + 1);
    a1[39] = v118 + 1;
    v35 = 1;
    v124 = (const __m128i **)v21;
    goto LABEL_24;
  }
  v22 = *(_DWORD *)(v21 - 4);
LABEL_22:
  if ( v22 != *(_DWORD *)(v21 - 8) )
  {
    v34 = v22;
    v35 = v22 + 1;
    v124 = (const __m128i **)(v21 + 8 * v34);
    goto LABEL_24;
  }
  v131 = (3 * v22 + 1) >> 1;
  v75 = 8 * v131 + 8;
  if ( 8 * v22 + 8 >= v75 || v22 >= (3 * v22 + 1) >> 1 )
  {
LABEL_93:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_91CD50(&v136, "Overflow encountered when expanding vector");
    goto LABEL_94;
  }
  v76 = sub_186B270(v75);
  v128 = (__int64 *)v76;
  v21 = v76 + 8;
  v77 = (__int64 *)a1[39];
  if ( v77 )
  {
    v78 = *((unsigned int *)v77 - 1);
    *(_DWORD *)(v76 + 4) = v78;
    v79 = &v77[v78];
    if ( v77 != v79 )
    {
      v80 = 8 * v78 - 8;
      if ( v80 <= 8 || v77 < v128 + 3 && v21 < (unsigned __int64)(v77 + 2) )
      {
        v115 = v77;
        v116 = v21;
        do
        {
          v117 = *v115;
          *v115++ = 0;
          v116 += 8LL;
          *(_QWORD *)(v116 - 8) = v117;
        }
        while ( v115 != v79 );
      }
      else
      {
        v81 = (v80 >> 3) + 1;
        v82 = 0;
        do
        {
          v83 = _mm_loadu_si128((const __m128i *)&v77[v82]);
          *(_OWORD *)&v77[v82] = 0;
          *(__m128i *)&v128[v82 + 1] = v83;
          v82 += 2LL;
        }
        while ( 2 * (v81 >> 1) != v82 );
        if ( (v81 & 1) != 0 )
        {
          v84 = v81 & 0xFFFFFFFFFFFFFFFELL;
          v85 = v77[v84];
          v77[v84] = 0;
          v128[v84 + 1] = v85;
        }
      }
    }
    v125 = &v77[v78];
    if ( (_DWORD)v78 )
    {
      do
      {
        v86 = *v77;
        if ( *v77 )
        {
          v87 = *(unsigned int *)(v86 - 4);
          if ( (_DWORD)v87 )
          {
            v88 = v86 + 80 * v87;
            do
            {
              v89 = *(_QWORD *)(v86 + 72);
              if ( v89 )
                sub_186B220((void *)(v89 - 8));
              v90 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v86 + 40);
              sub_182CBA0(v90, v86 + 56);
              v91 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v86 + 8);
              v92 = v86 + 24;
              v86 += 80;
              sub_182CBA0(v91, v92);
            }
            while ( v86 != v88 );
            v86 = *v77;
          }
          sub_186B220((void *)(v86 - 8));
        }
        ++v77;
      }
      while ( v125 != v77 );
      v77 = (__int64 *)a1[39];
    }
    sub_186B220(v77 - 1);
    v124 = (const __m128i **)(v21 + 8LL * *((unsigned int *)v128 + 1));
    v35 = *((_DWORD *)v128 + 1) + 1;
  }
  else
  {
    *(_DWORD *)(v76 + 4) = 0;
    v35 = 1;
    v124 = (const __m128i **)v21;
  }
  a1[39] = v21;
  *(_DWORD *)v128 = v131;
LABEL_24:
  *v124 = nullptr;
  *(_DWORD *)(v21 - 4) = v35;
  v130 = v133 + 1;
  if ( v133 != -1 )
  {
    v36 = (_QWORD *)sub_186B270(0xA8u);
    *v36 = 2;
    v37 = (__m128i *)(v36 + 1);
    *v124 = (const __m128i *)(v36 + 1);
    while ( 1 )
    {
      v38 = v37[-1].m128i_u32[2];
      v39 = v133 + 1;
      if ( v38 >= v130 )
        break;
      while ( 1 )
      {
        v40 = (3 * v38 + 1) >> 1;
        v41 = 80 * v40 + 8;
        if ( 80 * v38 + 8 >= (unsigned int)v41 || v38 >= v40 )
          goto LABEL_93;
        v42 = (unsigned int *)sub_186B270(v41);
        v127 = v42;
        v37 = (__m128i *)(v42 + 2);
        v43 = *v124;
        if ( !*v124 )
          break;
        v44 = v42;
        v45 = v43[-1].m128i_u32[3];
        v46 = v37;
        v47 = 5 * v45;
        v44[1] = v45;
        v48 = v43;
        v49 = &v43[v47];
        if ( v43 != v49 )
        {
          do
          {
            v50 = v48->m128i_i32[0];
            v51 = v46->m128i_i8[12];
            v48 += 5;
            v46 += 5;
            v46[-5].m128i_i32[0] = v50;
            v46[-5].m128i_i32[2] = v48[-5].m128i_i32[2];
            v46[-5].m128i_i8[12] = v51 & 0xFC | v48[-5].m128i_i8[12] & 3;
            v52 = v48[-4].m128i_i64[0];
            v48[-4].m128i_i64[0] = 0;
            v53 = v46[-4].m128i_i8[12];
            v46[-4].m128i_i64[0] = v52;
            v46[-4].m128i_i32[2] = v48[-4].m128i_i32[2];
            v46[-4].m128i_i8[12] = v53 & 0xFC | v48[-4].m128i_i8[12] & 3;
            v54 = v48[-3].m128i_i64[0];
            v48[-3].m128i_i64[0] = 0;
            v55 = v46[-3].m128i_i8[12];
            v46[-3].m128i_i64[0] = v54;
            v46[-3].m128i_i32[2] = v48[-3].m128i_i32[2];
            v46[-3].m128i_i8[12] = v55 & 0xFC | v48[-3].m128i_i8[12] & 3;
            v56 = v48[-2].m128i_i64[0];
            v48[-2].m128i_i64[0] = 0;
            v57 = v46[-2].m128i_i8[12];
            v46[-2].m128i_i64[0] = v56;
            v58 = _mm_loadu_si128(v48 - 1);
            v46[-2].m128i_i32[2] = v48[-2].m128i_i32[2];
            v46[-2].m128i_i8[12] = v57 & 0xFC | v48[-2].m128i_i8[12] & 3;
            v48[-1].m128i_i64[0] = 0;
            v46[-1] = v58;
            v48[-1].m128i_i64[1] = 0;
          }
          while ( v49 != v48 );
        }
        v59 = v43[-1].m128i_u32[3];
        if ( (_DWORD)v59 )
        {
          v60 = &v43[5 * v59];
          do
          {
            v61 = v43[4].m128i_i64[1];
            if ( v61 )
              sub_186B220((void *)(v61 - 8));
            v62 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v43[2].m128i_u64[1]);
            sub_182CBA0(v62, &v43[3].m128i_u64[1]);
            v63 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v43->m128i_u64[1]);
            v64 = &v43[1].m128i_i64[1];
            v43 += 5;
            sub_182CBA0(v63, v64);
          }
          while ( v60 != v43 );
          v43 = *v124;
        }
        sub_186B220(&v43[-1].m128i_u64[1]);
        v39 = v133 + 1;
        *v124 = v37;
        *v127 = v40;
        v38 = v37[-1].m128i_u32[2];
        if ( v38 >= v130 )
          goto LABEL_39;
      }
      v42[1] = 0;
      *v124 = v37;
      *v42 = v40;
    }
LABEL_39:
    v37[-1].m128i_i32[3] = v39;
    v21 = a1[39];
    v65 = &v37[5 * v39];
    do
    {
      v37->m128i_i8[12] &= 0xFCu;
      v37[1].m128i_i8[12] &= 0xFCu;
      v37[2].m128i_i8[12] &= 0xFCu;
      v37[3].m128i_i8[12] &= 0xFCu;
      v37 += 5;
      v37[-5].m128i_i32[0] = -1;
      v37[-5].m128i_i32[2] = 0;
      v37[-4].m128i_i64[0] = 0;
      v37[-4].m128i_i32[2] = 1;
      v37[-3].m128i_i64[0] = 0;
      v37[-3].m128i_i32[2] = 0;
      v37[-2].m128i_i64[0] = 0;
      v37[-2].m128i_i32[2] = 1;
      v37[-1] = 0;
    }
    while ( v65 != v37 );
  }
  v66 = qword_1C7F2C0;
  v67 = *(_QWORD *)(v21 + 8LL * v134) + 80LL * v134;
  *(_DWORD *)v67 = 0;
  sub_182CEF0(v66, v67 + 8);
  sub_182CBA0(v66, v67 + 24);
  *(_BYTE *)(v67 + 28) &= ~1u;
  v68 = qword_1C7F2C0;
  *(_DWORD *)(v67 + 24) = 1;
  sub_182CEF0(v68, v67 + 40);
  sub_182CBA0(v68, v67 + 56);
  *(_BYTE *)(v67 + 60) &= ~1u;
  *(_DWORD *)(v67 + 56) = 1;
  sub_B66EF0(a1[2], a2, a1, v133);
  return v133;
}

