__int64 (__fastcall **__fastcall sub_511520(__int64 a1, __int64 a2, _QWORD *a3, char a4))()
{
  char **v4; // rbp
  char **exception; // rbp
  char **v6; // rbp
  char **v7; // rbp
  char **v8; // rbp
  _QWORD *v10; // r12
  _QWORD *v13; // rax
  unsigned int v14; // r13d
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  size_t v18; // rdx
  int v19; // eax
  void *v20; // r13
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  void *v24; // r13
  int v25; // eax
  __m128i v26; // xmm0
  _QWORD *v27; // rax
  __int64 v28; // rax
  void *v29; // rbp
  const __m128i **v30; // rax
  void *v31; // rbp
  __m128i v32; // xmm0
  const __m128i *v33; // r15
  __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // r13d
  size_t v38; // rdi
  unsigned int *v39; // r8
  const __m128i *v40; // r14
  __int64 v41; // rax
  __m128i *v42; // rdx
  __int64 v43; // r9
  const __m128i *v44; // rax
  const __m128i *v45; // r9
  __int64 v46; // rcx
  __int8 v47; // si
  __int64 v48; // rcx
  __int8 v49; // si
  __int64 v50; // rcx
  __int8 v51; // si
  __int64 v52; // rcx
  __m128i v53; // xmm0
  __int64 v54; // rcx
  __int64 v55; // rax
  const __m128i *v56; // rbp
  void *v57; // r12
  void *v58; // r12
  const __m128i *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  const __m128i *v62; // rsi
  __m128i *v63; // rax
  __int64 v64; // rdi
  __int16 v65; // cx
  __m128i si128; // xmm0
  int v67; // edx
  char v68; // r8
  __int64 v69; // rdx
  char v70; // r8
  __int64 v71; // rdx
  char v72; // r8
  __int64 v73; // rdx
  char v74; // r8
  __int64 v75; // rdx
  void *v76; // rbp
  void *v77; // rbp
  _QWORD *v78; // rax
  unsigned int v79; // ebp
  _QWORD *v80; // r13
  _QWORD *v81; // rdx
  unsigned int v82; // r14d
  unsigned int *v83; // rax
  _QWORD *v84; // rdx
  __int64 v85; // rax
  unsigned int *v86; // rax
  _QWORD *v87; // rdx
  __int64 v88; // rax
  unsigned int *v89; // rax
  _QWORD *v90; // r14
  _QWORD *v91; // r13
  _QWORD *v92; // rdx
  unsigned int v93; // eax
  __int64 v94; // rcx
  int v95; // eax
  _QWORD *v96; // rcx
  void *v97; // rbp
  void *v98; // rbx
  unsigned int v100; // r15d
  size_t v101; // rsi
  unsigned int *v102; // rax
  __int64 v103; // rcx
  unsigned int v104; // r15d
  size_t v105; // rsi
  unsigned int *v106; // rax
  unsigned int v107; // r15d
  size_t v108; // rsi
  unsigned int *v109; // rax
  unsigned int v110; // r15d
  size_t v111; // rsi
  unsigned int *v112; // rax
  _QWORD *v113; // rax
  _QWORD *v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  const __m128i *v117; // r13
  __int64 v118; // rdx
  __int64 v119; // rax
  const __m128i *v120; // rbp
  void *v121; // r14
  void *v122; // r14
  const __m128i *v123; // rsi
  _QWORD *v124; // rax
  unsigned int v125; // [rsp+0h] [rbp-198h]
  const __m128i **v126; // [rsp+0h] [rbp-198h]
  unsigned int *v127; // [rsp+8h] [rbp-190h]
  unsigned int *v128; // [rsp+8h] [rbp-190h]
  _QWORD *v129; // [rsp+10h] [rbp-188h]
  unsigned int v131; // [rsp+30h] [rbp-168h]
  unsigned int v132; // [rsp+34h] [rbp-164h]
  __int64 v133[4]; // [rsp+60h] [rbp-138h] BYREF
  __int64 v134; // [rsp+80h] [rbp-118h] BYREF
  int v135; // [rsp+88h] [rbp-110h]
  int v136; // [rsp+90h] [rbp-108h] BYREF
  char v137; // [rsp+94h] [rbp-104h]
  int v138; // [rsp+A0h] [rbp-F8h] BYREF
  char v139; // [rsp+A4h] [rbp-F4h]
  int v140; // [rsp+B0h] [rbp-E8h]
  int v141; // [rsp+B8h] [rbp-E0h] BYREF
  char v142; // [rsp+BCh] [rbp-DCh]
  int v143; // [rsp+C8h] [rbp-D0h] BYREF
  char v144; // [rsp+CCh] [rbp-CCh]
  __int16 v145; // [rsp+D8h] [rbp-C0h]
  __m128i v146; // [rsp+E0h] [rbp-B8h] BYREF
  __int64 v147; // [rsp+F0h] [rbp-A8h] BYREF
  int v148; // [rsp+F8h] [rbp-A0h]
  __int64 v149; // [rsp+100h] [rbp-98h] BYREF
  __int64 v150; // [rsp+108h] [rbp-90h]
  __int64 v151; // [rsp+110h] [rbp-88h] BYREF
  __int64 v152; // [rsp+118h] [rbp-80h]
  int v153; // [rsp+120h] [rbp-78h]
  __int64 v154; // [rsp+128h] [rbp-70h] BYREF
  __int64 v155; // [rsp+130h] [rbp-68h]
  __int64 v156; // [rsp+138h] [rbp-60h] BYREF
  __int64 v157; // [rsp+140h] [rbp-58h]
  __int16 v158; // [rsp+148h] [rbp-50h]
  __m128i v159[4]; // [rsp+150h] [rbp-48h] BYREF

  v10 = (_QWORD *)a1;
  sub_B28750(&v134);
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = qword_1C665B0;
  v13 = (_QWORD *)*a3;
  *(_QWORD *)(a1 + 16) = 0;
  if ( v13 )
  {
    v14 = *((_DWORD *)v13 - 1);
    v15 = *((unsigned int *)v13 - 2);
    v125 = v15;
    v16 = (_QWORD *)sub_186B270(8 * v15 + 8);
    v17 = (_QWORD *)*a3;
    *(_QWORD *)(a1 + 16) = v16 + 1;
    *v16 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v125), _mm_cvtsi32_si128(v14)).m128i_u64[0];
    if ( v17 )
    {
      v18 = 8LL * *((unsigned int *)v17 - 1);
      if ( v18 <= 8 )
      {
        if ( v18 == 8 )
          v16[1] = *v17;
      }
      else
      {
        memmove(v16 + 1, v17, v18);
      }
    }
  }
  v19 = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 24) = v19;
  v20 = qword_1C7F2C0;
  *(_QWORD *)a1 = qword_1C66E88;
  v21 = v134;
  *(_QWORD *)(a1 + 64) = 1;
  *(_QWORD *)(a1 + 32) = v21;
  LODWORD(v21) = v135;
  *(_QWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 40) = v21;
  if ( (v137 & 1) != 0 )
    sub_182C690(v20, a1 + 48, &v136);
  else
    *(_DWORD *)(a1 + 48) = v136;
  if ( (v139 & 1) != 0 )
  {
    sub_182C690(v20, a1 + 64, &v138);
  }
  else
  {
    v22 = v138;
    *(_BYTE *)(a1 + 68) &= ~1u;
    *(_DWORD *)(a1 + 64) = v22;
  }
  v23 = v140;
  v24 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 80) = v23;
  *(_QWORD *)(a1 + 104) = 1;
  *(_QWORD *)(a1 + 112) = 0;
  if ( (v142 & 1) != 0 )
    sub_182C690(v24, a1 + 88, &v141);
  else
    *(_DWORD *)(a1 + 88) = v141;
  if ( (v144 & 1) != 0 )
  {
    sub_182C690(v24, a1 + 104, &v143);
  }
  else
  {
    v25 = v143;
    *(_BYTE *)(a1 + 108) &= ~1u;
    *(_DWORD *)(a1 + 104) = v25;
  }
  v26 = _mm_load_si128(&v146);
  *(_WORD *)(a1 + 120) = v145;
  *(__m128i *)(a1 + 128) = v26;
  v27 = (_QWORD *)sub_186B270(8u);
  *v27 = 0;
  *(_QWORD *)(a1 + 144) = v27;
  *(_BYTE *)(a1 + 152) = a4;
  *(_OWORD *)(a1 + 160) = 0;
  sub_180C0A0(a1 + 176);
  v28 = sub_186B270(0x38u);
  *(_QWORD *)(v28 + 48) = v28;
  v29 = qword_1C7F2C0;
  *(_QWORD *)(v28 + 32) = 0;
  *(__m128i *)v28 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 160), (__m128i)(unsigned __int64)(a1 + 160));
  *(_QWORD *)(v28 + 40) = off_1C4F498;
  *(_QWORD *)(a1 + 216) = v28;
  *(_OWORD *)(v28 + 16) = 0;
  v30 = *(const __m128i ***)(a1 + 144);
  v149 = 0;
  v126 = v30;
  v150 = 0;
  v147 = v134;
  v151 = 1;
  v148 = v135;
  v152 = 0;
  if ( (v137 & 1) != 0 )
    sub_182C690(v29, &v149, &v136);
  else
    LODWORD(v149) = v136;
  if ( (v139 & 1) != 0 )
  {
    sub_182C690(v29, &v151, &v138);
  }
  else
  {
    BYTE4(v151) &= ~1u;
    LODWORD(v151) = v138;
  }
  v31 = qword_1C7F2C0;
  v154 = 0;
  v155 = 0;
  v153 = v140;
  v156 = 1;
  v157 = 0;
  if ( (v142 & 1) != 0 )
    sub_182C690(qword_1C7F2C0, &v154, &v141);
  else
    LODWORD(v154) = v141;
  if ( (v144 & 1) != 0 )
  {
    sub_182C690(v31, &v156, &v143);
  }
  else
  {
    BYTE4(v156) &= ~1u;
    LODWORD(v156) = v143;
  }
  v32 = _mm_load_si128(&v146);
  v158 = v145;
  v33 = *v126;
  v159[0] = v32;
  if ( !*a3 )
  {
    if ( !v33 )
      goto LABEL_38;
    v131 = 0;
    v117 = v33;
    v118 = 0;
    v132 = v33[-1].m128i_u32[3];
    goto LABEL_81;
  }
  v34 = *(unsigned int *)(*a3 - 4LL);
  v131 = *(_DWORD *)(*a3 - 4LL);
  if ( !v33 )
  {
    if ( !(_DWORD)v34 )
      goto LABEL_38;
    v132 = 0;
    v124 = (_QWORD *)sub_186B270(0xE8u);
    *v124 = 2;
    v33 = (const __m128i *)(v124 + 1);
    *v126 = (const __m128i *)(v124 + 1);
    goto LABEL_24;
  }
  v132 = v33[-1].m128i_u32[3];
  if ( v132 >= (unsigned int)v34 )
  {
    v118 = 112 * v34;
    v117 = &v33[7 * v34];
LABEL_81:
    v119 = 112LL * v132;
    v120 = &v33[(unsigned __int64)v119 / 0x10];
    if ( v119 != v118 )
    {
      do
      {
        v121 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v117[3].m128i_u64[1]);
        sub_182CBA0(v121, &v117[4].m128i_u64[1]);
        v122 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v117[1]);
        v123 = v117 + 2;
        v117 += 7;
        sub_182CBA0(v122, v123);
      }
      while ( v120 != v117 );
      v33 = *v126;
    }
    v33[-1].m128i_i32[3] = v131;
    goto LABEL_38;
  }
LABEL_24:
  while ( 1 )
  {
    v35 = v33[-1].m128i_u32[2];
    v36 = v131;
    if ( v35 >= v131 )
      break;
    while ( 1 )
    {
      v37 = (3 * v35 + 1) >> 1;
      v38 = 112 * v37 + 8;
      if ( 112 * v35 + 8 >= (unsigned int)v38 || v35 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v133, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v133);
        sub_233E40((__int64)v133);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B270(v38);
      v33 = (const __m128i *)(v39 + 2);
      v40 = *v126;
      if ( !*v126 )
        break;
      v41 = v40[-1].m128i_u32[3];
      v42 = (__m128i *)(v39 + 2);
      v39[1] = v41;
      v43 = 7 * v41;
      v44 = v40;
      v45 = &v40[v43];
      if ( v40 != v45 )
      {
        do
        {
          v46 = v44->m128i_i64[0];
          v47 = v42[1].m128i_i8[4];
          v44 += 7;
          v42 += 7;
          v42[-7].m128i_i64[0] = v46;
          v42[-7].m128i_i32[2] = v44[-7].m128i_i32[2];
          v42[-6].m128i_i32[0] = v44[-6].m128i_i32[0];
          v42[-6].m128i_i8[4] = v47 & 0xFC | v44[-6].m128i_i8[4] & 3;
          v48 = v44[-6].m128i_i64[1];
          v44[-6].m128i_i64[1] = 0;
          v49 = v42[-5].m128i_i8[4];
          v42[-6].m128i_i64[1] = v48;
          v42[-5].m128i_i32[0] = v44[-5].m128i_i32[0];
          v42[-5].m128i_i8[4] = v49 & 0xFC | v44[-5].m128i_i8[4] & 3;
          v50 = v44[-5].m128i_i64[1];
          v44[-5].m128i_i64[1] = 0;
          v51 = v42[-4].m128i_i8[12];
          v42[-5].m128i_i64[1] = v50;
          v42[-4].m128i_i32[0] = v44[-4].m128i_i32[0];
          v42[-4].m128i_i32[2] = v44[-4].m128i_i32[2];
          v42[-4].m128i_i8[12] = v51 & 0xFC | v44[-4].m128i_i8[12] & 3;
          v52 = v44[-3].m128i_i64[0];
          v44[-3].m128i_i64[0] = 0;
          v42[-3].m128i_i64[0] = v52;
          v42[-3].m128i_i32[2] = v44[-3].m128i_i32[2];
          v53 = _mm_loadu_si128(v44 - 1);
          v42[-3].m128i_i8[12] = v42[-3].m128i_i8[12] & 0xFC | v44[-3].m128i_i8[12] & 3;
          v54 = v44[-2].m128i_i64[0];
          v44[-2].m128i_i64[0] = 0;
          v42[-2].m128i_i64[0] = v54;
          LOWORD(v54) = v44[-2].m128i_i16[4];
          v42[-1] = v53;
          v42[-2].m128i_i16[4] = v54;
        }
        while ( v45 != v44 );
      }
      v55 = v40[-1].m128i_u32[3];
      if ( (_DWORD)v55 )
      {
        v127 = v39;
        v129 = v10;
        v56 = &v40[7 * v55];
        do
        {
          v57 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v40[3].m128i_u64[1]);
          sub_182CBA0(v57, &v40[4].m128i_u64[1]);
          v58 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, &v40[1]);
          v59 = v40 + 2;
          v40 += 7;
          sub_182CBA0(v58, v59);
        }
        while ( v40 != v56 );
        v39 = v127;
        v10 = v129;
        v40 = *v126;
      }
      v128 = v39;
      sub_186B220(&v40[-1].m128i_u64[1]);
      v36 = v131;
      *v126 = v33;
      *v128 = v37;
      v35 = v33[-1].m128i_u32[2];
      if ( v35 >= v131 )
        goto LABEL_35;
    }
    v39[1] = 0;
    *v126 = v33;
    *v39 = v37;
  }
LABEL_35:
  v33[-1].m128i_i32[3] = v36;
  v60 = 112LL * v36;
  v61 = 112LL * v132;
  v62 = &v33[(unsigned __int64)v60 / 0x10];
  v63 = (__m128i *)&v33[(unsigned __int64)v61 / 0x10];
  if ( v61 != v60 )
  {
    v64 = v147;
    v65 = v158;
    si128 = _mm_load_si128(v159);
    do
    {
      v67 = v148;
      v68 = v63[1].m128i_i8[4];
      v63->m128i_i64[0] = v64;
      v63 += 7;
      v63[-7].m128i_i32[2] = v67;
      v63[-6].m128i_i32[0] = v149;
      v63[-6].m128i_i8[4] = v68 & 0xFC | BYTE4(v149) & 3;
      v69 = v150;
      v150 = 0;
      v70 = v63[-5].m128i_i8[4];
      v63[-6].m128i_i64[1] = v69;
      v63[-5].m128i_i32[0] = v151;
      v63[-5].m128i_i8[4] = v70 & 0xFC | BYTE4(v151) & 3;
      v71 = v152;
      v152 = 0;
      v72 = v63[-4].m128i_i8[12];
      v63[-5].m128i_i64[1] = v71;
      v63[-4].m128i_i32[0] = v153;
      v63[-4].m128i_i32[2] = v154;
      v63[-4].m128i_i8[12] = v72 & 0xFC | BYTE4(v154) & 3;
      v73 = v155;
      v155 = 0;
      v74 = v63[-3].m128i_i8[12];
      v63[-3].m128i_i64[0] = v73;
      v63[-3].m128i_i32[2] = v156;
      v63[-3].m128i_i8[12] = v74 & 0xFC | BYTE4(v156) & 3;
      v75 = v157;
      v157 = 0;
      v63[-2].m128i_i64[0] = v75;
      v63[-2].m128i_i16[4] = v65;
      v63[-1] = si128;
    }
    while ( v62 != v63 );
  }
LABEL_38:
  v76 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v154);
  sub_182CBA0(v76, &v156);
  v77 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v149);
  sub_182CBA0(v77, &v151);
  v78 = (_QWORD *)*a3;
  if ( *a3 )
  {
    v79 = 0;
    while ( 1 )
    {
      if ( v79 >= *((_DWORD *)v78 - 1) )
        goto LABEL_53;
      v80 = (_QWORD *)v10[27];
      v81 = (_QWORD *)v80[2];
      if ( !v81 )
        break;
      v82 = *((_DWORD *)v81 - 1);
      v83 = (unsigned int *)v81 + v82;
      if ( v82 != *((_DWORD *)v81 - 2) )
        goto LABEL_43;
      v110 = (3 * v82 + 1) >> 1;
      v111 = 4 * v110 + 8;
      if ( 4 * v82 + 8 >= (unsigned int)v111 || v82 >= v110 )
      {
        v8 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v147, "Overflow encountered when expanding vector");
        *v8 = (char *)off_1C63128;
        sub_2333C0(v8 + 1, &v147);
        sub_233E40((__int64)&v147);
        __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v112 = (unsigned int *)sub_186B300(v81 - 1, v111);
      v80[2] = v112 + 2;
      *v112 = v110;
      v112[v112[1]++ + 2] = v82;
      v84 = (_QWORD *)v80[3];
      if ( v84 )
      {
LABEL_44:
        v85 = *((unsigned int *)v84 - 1);
        if ( (_DWORD)v85 == *((_DWORD *)v84 - 2) )
        {
          v107 = (unsigned int)(3 * v85 + 1) >> 1;
          v108 = 4 * v107 + 8;
          if ( 4 * (int)v85 + 8 >= (unsigned int)v108 || (unsigned int)v85 >= v107 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v147, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, &v147);
            sub_233E40((__int64)&v147);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v109 = (unsigned int *)sub_186B300(v84 - 1, v108);
          v84 = v109 + 2;
          v80[3] = v109 + 2;
          *v109 = v107;
          v86 = &v109[v109[1] + 2];
        }
        else
        {
          v86 = (unsigned int *)v84 + v85;
        }
        goto LABEL_46;
      }
LABEL_67:
      v113 = (_QWORD *)sub_186B270(0x10u);
      v84 = v113 + 1;
      *v113 = 2;
      v80[3] = v113 + 1;
      v86 = (unsigned int *)(v113 + 1);
LABEL_46:
      *v86 = 1;
      ++*((_DWORD *)v84 - 1);
      v87 = (_QWORD *)v80[4];
      if ( v87 )
      {
        v88 = *((unsigned int *)v87 - 1);
        if ( (_DWORD)v88 == *((_DWORD *)v87 - 2) )
        {
          v104 = (unsigned int)(3 * v88 + 1) >> 1;
          v105 = 4 * v104 + 8;
          if ( 4 * (int)v88 + 8 >= (unsigned int)v105 || (unsigned int)v88 >= v104 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v147, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, &v147);
            sub_233E40((__int64)&v147);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v106 = (unsigned int *)sub_186B300(v87 - 1, v105);
          v87 = v106 + 2;
          v80[4] = v106 + 2;
          *v106 = v104;
          v89 = &v106[v106[1] + 2];
        }
        else
        {
          v89 = (unsigned int *)v87 + v88;
        }
      }
      else
      {
        v116 = (_QWORD *)sub_186B270(0x10u);
        v87 = v116 + 1;
        *v116 = 2;
        v80[4] = v116 + 1;
        v89 = (unsigned int *)(v116 + 1);
      }
      *v89 = v82;
      v90 = (_QWORD *)v80[1];
      v91 = v80 + 5;
      ++*((_DWORD *)v87 - 1);
      v92 = (_QWORD *)*v90;
      if ( *v90 )
      {
        v93 = *((_DWORD *)v92 - 1);
        if ( v93 == *((_DWORD *)v92 - 2) )
        {
          v100 = (3 * v93 + 1) >> 1;
          v101 = 8 * v100 + 8;
          if ( 8 * v93 + 8 >= (unsigned int)v101 || v93 >= v100 )
          {
            v4 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(&v147, "Overflow encountered when expanding vector");
            *v4 = (char *)off_1C63128;
            sub_2333C0(v4 + 1, &v147);
            sub_233E40((__int64)&v147);
            __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v102 = (unsigned int *)sub_186B300(v92 - 1, v101);
          v103 = v102[1];
          v92 = v102 + 2;
          *v90 = v102 + 2;
          *v102 = v100;
          LODWORD(v102) = v103;
          v96 = &v92[v103];
          v95 = (_DWORD)v102 + 1;
        }
        else
        {
          v94 = v93;
          v95 = v93 + 1;
          v96 = &v92[v94];
        }
      }
      else
      {
        v115 = (_QWORD *)sub_186B270(0x18u);
        v92 = v115 + 1;
        *v115 = 2;
        v95 = 1;
        *v90 = v92;
        v96 = v92;
      }
      *v96 = v91;
      ++v79;
      *((_DWORD *)v92 - 1) = v95;
      v78 = (_QWORD *)*a3;
      if ( !*a3 )
        goto LABEL_53;
    }
    v114 = (_QWORD *)sub_186B270(0x10u);
    v81 = v114 + 1;
    *v114 = 2;
    v82 = 0;
    v80[2] = v114 + 1;
    v83 = (unsigned int *)(v114 + 1);
LABEL_43:
    *v83 = v82;
    ++*((_DWORD *)v81 - 1);
    v84 = (_QWORD *)v80[3];
    if ( v84 )
      goto LABEL_44;
    goto LABEL_67;
  }
LABEL_53:
  v97 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v141);
  sub_182CBA0(v97, &v143);
  v98 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v136);
  sub_182CBA0(v98, &v138);
  *v10 = &off_1C66F80;
  return &off_1C66F80;
}

