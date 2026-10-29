__m128 **__fastcall sub_12F1EE0(
        __m128 **a1,
        __int64 a2,
        __int32 a3,
        void *a4,
        size_t a5,
        __m128i *a6,
        __int64 a7,
        __m256i *a8,
        __int64 *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // r15
  signed __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rbx
  unsigned __int64 v19; // r12
  __int64 v20; // rbx
  _QWORD *v21; // rsi
  __int64 v22; // rdi
  _QWORD *v23; // r12
  void **v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rbx
  __int64 v27; // rbp
  _QWORD *v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rbx
  void **v31; // r12
  void **v32; // r13
  __m256i *v33; // rbx
  unsigned int *v34; // r13
  unsigned int v35; // eax
  _BYTE *v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __m128i v40; // xmm2
  __int64 v41; // rax
  __m128i v42; // xmm3
  void **v43; // r15
  __int64 v44; // rax
  void **v45; // r14
  unsigned int v46; // eax
  __m128i *v47; // r12
  __int64 v48; // r12
  _QWORD *v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdx
  __int64 v52; // rax
  __m128i *v53; // rbp
  volatile signed __int32 *v54; // rdi
  __m128 *v55; // rbp
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // r14
  __int64 v59; // r12
  __int64 v60; // rax
  __int64 v61; // r13
  __int64 v62; // r12
  __int64 v63; // r15
  _DWORD *v64; // r12
  bool v65; // zf
  __int32 v66; // edx
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // rdi
  __int64 v70; // r8
  __int32 v71; // esi
  __int64 v72; // rdx
  __int64 v73; // rbx
  __int64 *v74; // rbp
  __int64 v75; // rax
  size_t v76; // r14
  size_t *v77; // r12
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  size_t *v80; // r15
  size_t **v81; // r13
  unsigned __int64 v82; // rax
  _DWORD *v83; // r13
  __int64 v84; // r13
  _QWORD *v85; // rax
  void *v86; // rdi
  __int32 v87; // ecx
  __int32 v88; // eax
  __int32 v89; // edx
  __int64 v90; // r13
  __int64 v91; // r12
  __int64 v92; // rax
  _QWORD *v93; // rdi
  void (__fastcall ***v94)(__m256i *, _QWORD, unsigned __int64); // rsi
  __int64 v95; // rax
  unsigned __int64 v96; // rdi
  __int64 v97; // rax
  volatile signed __int32 *v98; // rdi
  __int64 v99; // rbp
  void **v100; // r14
  void **v101; // r13
  void **v102; // r12
  void **v103; // r14
  void **v104; // r13
  void **v105; // r12
  void **v106; // r12
  void **v107; // rbp
  void **v108; // r12
  void **v109; // rbp
  __m128i *v111; // r15
  int *v112; // rdi
  unsigned int v113; // r14d
  __int64 v114; // rax
  void **v115; // r12
  __int64 v116; // rdx
  unsigned __int64 v117; // rax
  __int64 v118; // r14
  __int64 v119; // rdx
  void **v120; // r13
  unsigned __int64 v121; // rax
  __int64 v122; // r13
  unsigned __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __m128i *v126; // r12
  __m128i *v127; // rax
  __int64 *v128; // rdi
  _BYTE *v129; // rsi
  int v130; // r12d
  __int64 v131; // r13
  __int64 v132; // rdx
  volatile signed __int32 *v133; // rcx
  unsigned __int64 v134; // rsi
  __m128i *v135; // rcx
  unsigned __int64 v136; // r12
  unsigned __int64 v137; // rdx
  __m128i v138; // xmm6
  __int64 v139; // rsi
  __int64 v140; // [rsp+8h] [rbp-190h] BYREF
  __m128 **v141; // [rsp+10h] [rbp-188h]
  unsigned __int64 v142; // [rsp+18h] [rbp-180h]
  __int64 v143; // [rsp+20h] [rbp-178h]
  __int64 *v144; // [rsp+28h] [rbp-170h]
  _QWORD *v145; // [rsp+30h] [rbp-168h]
  __int64 v146; // [rsp+38h] [rbp-160h]
  __m256i *v147; // [rsp+40h] [rbp-158h]
  __int64 v148; // [rsp+48h] [rbp-150h]
  __int32 v149; // [rsp+54h] [rbp-144h]
  __int64 v150; // [rsp+58h] [rbp-140h]
  void *s2; // [rsp+60h] [rbp-138h] BYREF
  size_t n; // [rsp+68h] [rbp-130h]
  void *v153; // [rsp+70h] [rbp-128h] BYREF
  volatile signed __int32 *v154; // [rsp+78h] [rbp-120h]
  __m128i v155; // [rsp+80h] [rbp-118h] BYREF
  __m256i v156; // [rsp+90h] [rbp-108h] BYREF
  __m128i v157; // [rsp+B0h] [rbp-E8h] BYREF
  void *v158[2]; // [rsp+C0h] [rbp-D8h] BYREF
  __int64 v159; // [rsp+D0h] [rbp-C8h]
  __int32 v160; // [rsp+D8h] [rbp-C0h]
  __int8 v161; // [rsp+DCh] [rbp-BCh]
  void *v162; // [rsp+E8h] [rbp-B0h]
  void **v163; // [rsp+F0h] [rbp-A8h]
  __int64 i; // [rsp+F8h] [rbp-A0h]
  void *v165; // [rsp+100h] [rbp-98h]
  void **v166; // [rsp+108h] [rbp-90h]
  __int64 j; // [rsp+110h] [rbp-88h]
  void *v168; // [rsp+118h] [rbp-80h]
  __int64 v169; // [rsp+120h] [rbp-78h]
  char v170; // [rsp+128h] [rbp-70h]
  void *v171; // [rsp+138h] [rbp-60h]
  __int64 v172; // [rsp+140h] [rbp-58h]
  char v173; // [rsp+148h] [rbp-50h]

  v12 = *(_QWORD *)(a2 + 16);
  v141 = a1;
  v149 = a3;
  v146 = a7;
  n = a5;
  v147 = a8;
  v140 = a2;
  v144 = a9;
  s2 = a4;
  v148 = a10;
  v13 = operator new(0xE0u);
  *(_QWORD *)(v13 + 8) = 0x100000001LL;
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)v13 = off_2C42D08;
  *(_QWORD *)(v13 + 24) = 0;
  *(_QWORD *)(v13 + 32) = 0;
  *(_QWORD *)(v13 + 40) = 0;
  *(_QWORD *)(v13 + 48) = 0;
  *(_QWORD *)(v13 + 56) = 0;
  *(_QWORD *)(v13 + 64) = 0;
  *(_QWORD *)(v13 + 72) = 0;
  *(_QWORD *)(v13 + 80) = 0;
  *(_QWORD *)(v13 + 88) = 0;
  *(_QWORD *)(v13 + 96) = 0;
  *(_QWORD *)(v13 + 104) = 0;
  *(_QWORD *)(v13 + 112) = 0;
  *(_QWORD *)(v13 + 120) = 0;
  *(_QWORD *)(v13 + 128) = 0;
  *(_QWORD *)(v13 + 136) = 0;
  *(_QWORD *)(v13 + 144) = 0;
  *(_QWORD *)(v13 + 152) = 0;
  *(_QWORD *)(v13 + 160) = 0;
  *(_QWORD *)(v13 + 168) = 0;
  *(_QWORD *)(v13 + 176) = 0;
  *(_QWORD *)(v13 + 184) = 0;
  *(_QWORD *)(v13 + 192) = 0;
  *(_QWORD *)(v13 + 200) = 0;
  *(_QWORD *)(v13 + 208) = 0;
  *(_QWORD *)(v13 + 216) = 0;
  v145 = (_QWORD *)(v13 + 16);
  sub_1356A60(v13 + 16, v12);
  v143 = *(_QWORD *)(v13 + 80);
  sub_1301630(v13 + 16);
  v14 = *(_QWORD *)v143;
  v15 = *(_QWORD *)(v13 + 64);
  v142 = *(_QWORD *)(v143 + 8);
  v16 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v142 - v14) >> 3);
  if ( v16 >> 2 > 0 )
  {
    v17 = v14 + 160 * (v16 >> 2);
    while ( !(unsigned __int8)sub_12E8F10(v15, v14) )
    {
      v18 = v14;
      v14 += 40;
      if ( (unsigned __int8)sub_12E8F10(v15, v14) )
        break;
      v14 = v18 + 80;
      if ( (unsigned __int8)sub_12E8F10(v15, v18 + 80) )
        break;
      v14 = v18 + 120;
      if ( (unsigned __int8)sub_12E8F10(v15, v18 + 120) )
        break;
      v14 = v18 + 160;
      if ( v17 == v18 + 160 )
      {
        v16 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v142 - v14) >> 3);
        goto LABEL_191;
      }
    }
    goto LABEL_8;
  }
LABEL_191:
  if ( v16 == 2 )
  {
LABEL_206:
    if ( !(unsigned __int8)sub_12E8F10(v15, v14) )
    {
      v14 += 40;
LABEL_194:
      if ( !(unsigned __int8)sub_12E8F10(v15, v14) )
        goto LABEL_25;
      goto LABEL_8;
    }
    goto LABEL_8;
  }
  if ( v16 != 3 )
  {
    if ( v16 != 1 )
      goto LABEL_25;
    goto LABEL_194;
  }
  if ( !(unsigned __int8)sub_12E8F10(v15, v14) )
  {
    v14 += 40;
    goto LABEL_206;
  }
LABEL_8:
  v19 = v142;
  if ( v142 != v14 )
  {
    v20 = v14 + 40;
    if ( v142 == v14 + 40 )
      goto LABEL_15;
    do
    {
      while ( (unsigned __int8)sub_12E8F10(v15, v20) )
      {
        v20 += 40;
        if ( v19 == v20 )
          goto LABEL_14;
      }
      v21 = (_QWORD *)v20;
      v22 = v14;
      v20 += 40;
      v14 += 40;
      sub_A0AAD0(v22, v21);
      *(_BYTE *)(v14 - 8) = *(_BYTE *)(v20 - 8);
    }
    while ( v19 != v20 );
LABEL_14:
    if ( v142 != v14 )
    {
LABEL_15:
      v23 = (_QWORD *)v142;
      v24 = *(void ***)(v143 + 8);
      v25 = (__int64)v24 - v142;
      if ( (void **)v142 != v24 && v25 > 0 )
      {
        v150 = v13;
        v26 = 0xCCCCCCCCCCCCCCCDLL * (v25 >> 3);
        v27 = v14;
        do
        {
          v28 = v23;
          v29 = v27;
          v23 += 5;
          v27 += 40;
          sub_A0AAD0(v29, v28);
          *(_BYTE *)(v27 - 8) = *((_BYTE *)v23 - 8);
          --v26;
        }
        while ( v26 );
        v13 = v150;
        v24 = *(void ***)(v143 + 8);
        v25 = (__int64)v24 - v142;
      }
      v30 = v14 + v25;
      if ( (void **)(v14 + v25) != v24 )
      {
        v31 = (void **)(v14 + v25);
        v32 = v24;
        do
        {
          while ( *v31 != v31 + 2 )
          {
            operator delete(*v31);
            v31 += 5;
            if ( v32 == v31 )
            {
              *(_QWORD *)(v143 + 8) = v30;
              goto LABEL_25;
            }
          }
          v31 += 5;
        }
        while ( v32 != v31 );
        *(_QWORD *)(v143 + 8) = v30;
      }
    }
  }
LABEL_25:
  v33 = &v156;
  sub_9EE8A0(*(_QWORD *)(v13 + 16) + 456LL, **(_QWORD **)(v140 + 16) + 456LL);
  v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
  sub_12E9400(&v156, s2, (__int64)s2 + n);
  sub_A0AAD0(*(_QWORD *)(v13 + 16) + 488LL, &v156);
  if ( (unsigned __int64 *)v156.m256i_i64[0] != &v156.m256i_u64[2] )
    operator delete((void *)v156.m256i_i64[0]);
  v34 = *(unsigned int **)(v13 + 176);
  v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
  if ( v144 )
  {
    sub_12E9400(&v156, v144, (__int64)v144 + v148);
  }
  else
  {
    v156.m256i_i64[1] = 0;
    v156.m256i_i8[16] = 0;
  }
  sub_A0AAD0((__int64)(v34 + 18), &v156);
  if ( (unsigned __int64 *)v156.m256i_i64[0] != &v156.m256i_u64[2] )
    operator delete((void *)v156.m256i_i64[0]);
  v35 = *v34;
  v36 = (_BYTE *)v146;
  v142 = (unsigned __int64)&v156.m256i_u64[2];
  v37 = (__int64)v147->m256i_i64 + v146;
  *v34 = v35 & 0xFFEF7FFE | 0x100000;
  v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
  sub_12E9400(&v156, v36, v37);
  sub_A0AAD0((__int64)(v34 + 10), &v156);
  if ( v156.m256i_i64[0] != v142 )
    operator delete((void *)v156.m256i_i64[0]);
  *(_BYTE *)(v15 + 626) |= 1u;
  v38 = a6->m128i_i64[0];
  v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
  if ( &a6[1] == (__m128i *)v38 )
  {
    *(__m128i *)&v156.m256i_u64[2] = _mm_loadu_si128(a6 + 1);
  }
  else
  {
    v156.m256i_i64[0] = v38;
    v156.m256i_i64[2] = a6[1].m128i_i64[0];
  }
  v39 = a6->m128i_i64[1];
  v40 = _mm_loadu_si128(a6 + 2);
  a6->m128i_i64[0] = (__int64)a6[1].m128i_i64;
  v41 = a6[4].m128i_i64[0];
  a6[1].m128i_i8[0] = 0;
  v42 = _mm_loadu_si128(a6 + 3);
  a6->m128i_i64[1] = 0;
  v159 = v41;
  LODWORD(v41) = a6[4].m128i_i32[2];
  v157 = v40;
  v160 = v41;
  LOBYTE(v41) = a6[4].m128i_i8[12];
  *(__m128i *)v158 = v42;
  v43 = *((void ***)v34 + 3);
  v161 = v41;
  v44 = v34[8];
  v156.m256i_i64[1] = v39;
  v45 = &v43[10 * v44];
  while ( v43 != v45 )
  {
    while ( 1 )
    {
      v45 -= 10;
      if ( *v45 == v45 + 2 )
        break;
      operator delete(*v45);
      if ( v43 == v45 )
        goto LABEL_39;
    }
  }
LABEL_39:
  v46 = v34[9];
  v34[8] = 0;
  if ( v46 )
  {
    v47 = *((__m128i **)v34 + 3);
    v144 = (__int64 *)&v153;
  }
  else
  {
    v144 = (__int64 *)&v153;
    v111 = (__m128i *)sub_2237400(v34 + 6, v34 + 10, 1, 80, &v153);
    sub_12E5990((__int64)(v34 + 6), v111);
    v112 = *((int **)v34 + 3);
    v113 = (unsigned int)v153;
    if ( v34 + 10 != (unsigned int *)v112 )
      free(v112);
    v114 = v34[8];
    *((_QWORD *)v34 + 3) = v111;
    v34[9] = v113;
    v47 = &v111[5 * v114];
  }
  v47->m128i_i64[0] = (__int64)v47[1].m128i_i64;
  sub_12E94C0(v47, v156.m256i_i64[0], v156.m256i_i64[0] + v156.m256i_i64[1]);
  v47[2] = _mm_load_si128(&v157);
  v47[3] = _mm_load_si128((const __m128i *)v158);
  v47[4].m128i_i64[0] = v159;
  v47[4].m128i_i32[2] = v160;
  v47[4].m128i_i8[12] = v161;
  ++v34[8];
  if ( (unsigned __int64 *)v156.m256i_i64[0] != &v156.m256i_u64[2] )
    operator delete((void *)v156.m256i_i64[0]);
  v48 = *(_QWORD *)(v13 + 48);
  *(_BYTE *)(v143 + 312) = 1;
  v49 = (_QWORD *)v140;
  *(_BYTE *)(v48 + 2) &= ~0x10u;
  v50 = v49[10];
  v51 = v49[24];
  v52 = v49[25];
  if ( v52 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v52 + 8), 1u);
    else
      ++*(_DWORD *)(v52 + 8);
  }
  v154 = (volatile signed __int32 *)v13;
  v156.m256i_i64[0] = v51;
  v153 = v145;
  v156.m256i_i64[1] = v52;
  v53 = (__m128i *)operator new(0x178u);
  sub_12E9950(v53, v144, &v156, v50);
  v54 = (volatile signed __int32 *)v156.m256i_i64[1];
  *v141 = (__m128 *)v53;
  if ( v54 )
    sub_4343A0(v54);
  if ( v154 )
    sub_4343A0(v154);
  v55 = *v141;
  v145 = (_QWORD *)(*v141)[1].m128_u64[0];
  if ( *(_BYTE *)(a11 + 32) )
  {
    v56 = *(_QWORD *)a11;
    v156.m256i_i64[0] = v56;
    if ( !v56 )
      goto LABEL_53;
    goto LABEL_52;
  }
  v82 = *(_QWORD *)(v140 + 64);
  if ( (*((_BYTE *)v34 + 3) & 8) == 0 )
  {
    v56 = *(_QWORD *)(v82 + 8);
    v156.m256i_i64[0] = v56;
    if ( !v56 )
    {
LABEL_53:
      sub_12E9EF0(v55, v156.m256i_i64);
      if ( v156.m256i_i64[0] )
        sub_12E0400((volatile signed __int32 *)(v156.m256i_i64[0] + 8));
      goto LABEL_55;
    }
LABEL_52:
    _InterlockedAdd((volatile signed __int32 *)(v56 + 8), 1u);
    goto LABEL_53;
  }
  if ( v82 )
    ++*(_DWORD *)v82;
  v83 = (_DWORD *)v55[4].m128_u64[0];
  v55[4].m128_u64[0] = v82;
  if ( !v83 )
    goto LABEL_94;
  v65 = (*v83)-- == 1;
  if ( !v65 )
    goto LABEL_94;
  sub_FD6C20((__int64)v83);
  operator delete(v83, 0x328u);
LABEL_55:
  if ( *(_BYTE *)(a11 + 32) )
  {
    sub_12EAB30((__int64)v55, *(_QWORD *)(v55[4].m128_u64[0] + 8), *(_QWORD *)(a11 + 8), 0);
    goto LABEL_57;
  }
LABEL_94:
  v84 = *(_QWORD *)(*(_QWORD *)(v140 + 32) + 48LL);
  v85 = (_QWORD *)operator new(0x18u);
  v85[1] = 0;
  v85[2] = v84;
  *v85 = off_2B4D848;
  sub_12EAB30((__int64)v55, *(_QWORD *)(v55[4].m128_u64[0] + 8), (__int64)v85, 1u);
LABEL_57:
  v57 = *(_QWORD *)(v48 + 248);
  v58 = *(_QWORD *)(v48 + 240);
  v59 = (v57 - v58) >> 7;
  v60 = (v57 - v58) >> 5;
  if ( v59 > 0 )
  {
    v142 = v58 + (v59 << 7);
    while ( *(_QWORD *)(v58 + 8) != n || n && memcmp(*(const void **)v58, s2, n) )
    {
      if ( n == *(_QWORD *)(v58 + 40) && (!n || !memcmp(*(const void **)(v58 + 32), s2, n)) )
      {
        v58 += 32;
        goto LABEL_72;
      }
      if ( n == *(_QWORD *)(v58 + 72) && (!n || !memcmp(*(const void **)(v58 + 64), s2, n)) )
      {
        v58 += 64;
        goto LABEL_72;
      }
      if ( n == *(_QWORD *)(v58 + 104) && (!n || !memcmp(*(const void **)(v58 + 96), s2, n)) )
      {
        v58 += 96;
        goto LABEL_72;
      }
      v58 += 128;
      if ( v142 == v58 )
      {
        v60 = (v57 - v58) >> 5;
        goto LABEL_186;
      }
    }
    goto LABEL_72;
  }
LABEL_186:
  if ( v60 != 2 )
  {
    if ( v60 != 3 )
    {
      if ( v60 != 1 )
      {
LABEL_189:
        v61 = v55[2].m128_i64[0];
        goto LABEL_74;
      }
      goto LABEL_202;
    }
    if ( sub_12E88F0((__int64)&s2, v58) )
      goto LABEL_72;
    v58 += 32;
  }
  if ( sub_12E88F0((__int64)&s2, v58) )
    goto LABEL_72;
  v58 += 32;
LABEL_202:
  if ( !sub_12E88F0((__int64)&s2, v58) )
    goto LABEL_189;
LABEL_72:
  v61 = v55[2].m128_i64[0];
  if ( v57 != v58 )
    *(_BYTE *)(*(_QWORD *)(v61 + 152) + 24LL) &= ~0x10u;
LABEL_74:
  v62 = v55[4].m128_i64[0];
  v63 = operator new(0x300u);
  sub_1020DB0(v63, v61, v62, 0);
  v64 = (_DWORD *)v55[4].m128_u64[1];
  ++*(_DWORD *)v63;
  v55[4].m128_u64[1] = v63;
  if ( v64 )
  {
    v65 = (*v64)-- == 1;
    if ( v65 )
    {
      sub_101EB00((__int64)v64);
      operator delete(v64, 0x300u);
      v63 = v55[4].m128_i64[1];
    }
  }
  if ( *(_BYTE *)(a11 + 32) )
    goto LABEL_78;
  v115 = *(void ***)(v63 + 656);
  v116 = *(_QWORD *)(v140 + 72);
  v117 = *(unsigned int *)(v116 + 664);
  v118 = *(_QWORD *)(v116 + 656);
  v119 = *(unsigned int *)(v63 + 664);
  v142 = v117;
  v143 = v63 + 656;
  v120 = &v115[6 * v119];
  while ( v115 != v120 )
  {
    while ( 1 )
    {
      v120 -= 6;
      if ( *v120 == v120 + 2 )
        break;
      operator delete(*v120);
      if ( v115 == v120 )
        goto LABEL_167;
    }
  }
LABEL_167:
  v121 = v142;
  *(_DWORD *)(v63 + 664) = 0;
  v122 = v118 + 48 * v121;
  v123 = *(unsigned int *)(v63 + 668);
  v142 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(48 * v121) >> 4);
  if ( v142 > v123 )
  {
    sub_12EE8B0(v143, 0xAAAAAAAAAAAAAAABLL * ((__int64)(48 * v121) >> 4));
    v125 = *(unsigned int *)(v63 + 664);
    v124 = 48 * v125;
  }
  else
  {
    v124 = 0;
    LODWORD(v125) = 0;
  }
  v126 = (__m128i *)(*(_QWORD *)(v63 + 656) + v124);
  if ( v118 != v122 )
  {
    do
    {
      v127 = v126 + 1;
      v128 = (__int64 *)v126;
      v118 += 48;
      v126 += 3;
      v126[-3].m128i_i64[0] = (__int64)v127;
      sub_12E94C0(v128, *(_BYTE **)(v118 - 48), *(_QWORD *)(v118 - 48) + *(_QWORD *)(v118 - 40));
      v126[-1] = _mm_loadu_si128((const __m128i *)(v118 - 16));
    }
    while ( v122 != v118 );
    LODWORD(v125) = *(_DWORD *)(v63 + 664);
  }
  v129 = s2;
  v130 = v125 + v142;
  v131 = *(_QWORD *)(v140 + 72);
  v132 = (unsigned int)(v125 + v142);
  *(_DWORD *)(v63 + 664) = v130;
  if ( !v129 )
  {
    v155.m128i_i8[0] = 0;
    v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
    v133 = nullptr;
    goto LABEL_197;
  }
  v153 = v144 + 2;
  sub_12E9400(v144, v129, (__int64)&v129[n]);
  v132 = *(unsigned int *)(v63 + 664);
  v133 = v154;
  v156.m256i_i64[0] = (__int64)&v156.m256i_i64[2];
  if ( v153 == v144 + 2 )
  {
LABEL_197:
    *(__m128i *)&v156.m256i_u64[2] = _mm_load_si128(&v155);
    goto LABEL_175;
  }
  v156.m256i_i64[0] = (__int64)v153;
  v156.m256i_i64[2] = v155.m128i_i64[0];
LABEL_175:
  v156.m256i_i64[1] = (__int64)v133;
  v134 = v132 + 1;
  v155.m128i_i8[0] = 0;
  v157.m128i_i64[1] = v131;
  v153 = v144 + 2;
  v135 = (__m128i *)&v156;
  v157.m128i_i32[0] = v149;
  v136 = *(_QWORD *)(v63 + 656);
  v154 = nullptr;
  v137 = v136 + 48 * v132;
  if ( v134 > *(unsigned int *)(v63 + 668) )
  {
    if ( v136 > (unsigned __int64)&v156 || v137 <= (unsigned __int64)&v156 )
    {
      sub_12EE8B0(v143, v134);
      v135 = (__m128i *)&v156;
      v137 = *(_QWORD *)(v63 + 656) + 48LL * *(unsigned int *)(v63 + 664);
    }
    else
    {
      sub_12EE8B0(v143, v134);
      v139 = *(_QWORD *)(v63 + 656);
      v135 = (__m128i *)&v156.m256i_i8[v139 - v136];
      v137 = v139 + 48LL * *(unsigned int *)(v63 + 664);
    }
  }
  *(_QWORD *)v137 = v137 + 16;
  if ( (__m128i *)v135->m128i_i64[0] == &v135[1] )
  {
    *(__m128i *)(v137 + 16) = _mm_loadu_si128(v135 + 1);
  }
  else
  {
    *(_QWORD *)v137 = v135->m128i_i64[0];
    *(_QWORD *)(v137 + 16) = v135[1].m128i_i64[0];
  }
  *(_QWORD *)(v137 + 8) = v135->m128i_i64[1];
  v138 = _mm_loadu_si128(v135 + 2);
  v135->m128i_i64[0] = (__int64)v135[1].m128i_i64;
  v135->m128i_i64[1] = 0;
  v135[1].m128i_i8[0] = 0;
  *(__m128i *)(v137 + 32) = v138;
  ++*(_DWORD *)(v63 + 664);
  if ( (unsigned __int64 *)v156.m256i_i64[0] != &v156.m256i_u64[2] )
    operator delete((void *)v156.m256i_i64[0]);
  if ( v153 != v144 + 2 )
    operator delete(v153);
LABEL_78:
  v156.m256i_i64[0] = 0;
  v66 = *(_DWORD *)(v140 + 244);
  *(__m128i *)&v156.m256i_u64[1] = _mm_load_si128((const __m128i *)&xmmword_23A8DB0);
  if ( !v66 )
  {
    v71 = 0;
    LODWORD(v70) = 0;
    v75 = 0;
    goto LABEL_99;
  }
  sub_2244BF0(&v156, *(unsigned int *)(v140 + 240));
  v68 = v156.m256i_i64[0];
  v69 = *(_QWORD *)(v140 + 232);
  v70 = *(unsigned int *)(v140 + 244);
  v71 = *(_DWORD *)(v140 + 248);
  v142 = v156.m256i_i64[0];
  v66 = v156.m256i_i32[2];
  v143 = v69;
  *(__int64 *)((char *)&v156.m256i_i64[1] + 4) = __PAIR64__(v71, v70);
  if ( !v156.m256i_i32[2] )
  {
    v75 = v156.m256i_i64[0];
    goto LABEL_99;
  }
  v146 = (__int64)v55;
  v72 = v69;
  v147 = &v156;
  v73 = 8LL * v156.m256i_u32[2] + 8;
  v144 = (__int64 *)(8LL * (unsigned int)(v156.m256i_i32[2] - 1));
  v74 = nullptr;
  v75 = v156.m256i_i64[0];
  while ( 1 )
  {
    v80 = *(size_t **)((char *)v74 + v72);
    v81 = (size_t **)((char *)v74 + v75);
    if ( v80 != (size_t *)-8LL )
    {
      if ( v80 )
        break;
    }
    *v81 = v80;
    v73 += 4;
    if ( v144 == v74 )
      goto LABEL_88;
LABEL_85:
    v68 = v140;
    ++v74;
    v72 = *(_QWORD *)(v140 + 232);
  }
  v76 = *v80;
  v77 = (size_t *)sub_22300B0(*v80 + 9, 8, v72, v68, v70, v67);
  if ( v76 )
    memcpy(v77 + 1, v80 + 1, v76);
  v78 = v143;
  v79 = v142;
  *((_BYTE *)v77 + v76 + 8) = 0;
  *v77 = v76;
  LODWORD(v78) = *(_DWORD *)(v78 + v73);
  *v81 = v77;
  *(_DWORD *)(v79 + v73) = v78;
  v75 = v156.m256i_i64[0];
  v73 += 4;
  if ( v144 != v74 )
    goto LABEL_85;
LABEL_88:
  v55 = (__m128 *)v146;
  v33 = v147;
  v66 = v156.m256i_i32[2];
  LODWORD(v70) = v156.m256i_i32[3];
  v71 = v156.m256i_i32[4];
LABEL_99:
  v86 = (void *)v55[14].m128_u64[1];
  v87 = v55[15].m128_i32[0];
  v55[14].m128_u64[1] = v75;
  v156.m256i_i64[0] = (__int64)v86;
  v55[15].m128_i32[0] = v66;
  v156.m256i_i32[2] = v87;
  v88 = v55[15].m128_i32[1];
  v55[15].m128_i32[1] = v70;
  v156.m256i_i32[3] = v88;
  v89 = v55[15].m128_i32[2];
  v55[15].m128_i32[2] = v71;
  v156.m256i_i32[4] = v89;
  if ( v88 && v87 )
  {
    v90 = 0;
    v91 = 8LL * (unsigned int)(v87 - 1) + 8;
    v92 = (__int64)v86;
    do
    {
      v93 = *(_QWORD **)(v92 + v90);
      if ( v93 && v93 != (_QWORD *)-8LL )
      {
        operator delete(v93, *v93 + 9LL, 8);
        v92 = v156.m256i_i64[0];
      }
      v90 += 8;
    }
    while ( v91 != v90 );
    v86 = (void *)v92;
  }
  free(v86);
  v94 = *(void (__fastcall ****)(__m256i *, _QWORD, unsigned __int64))(v140 + 88);
  if ( v94 )
  {
    (**v94)(v33, v94, v55[4].m128_u64[0]);
    v95 = v156.m256i_i64[0];
    v156.m256i_i64[0] = 0;
    v96 = v55[5].m128_u64[1];
    v55[5].m128_u64[1] = v95;
    if ( v96 )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v96 + 24LL))(v96);
      if ( v156.m256i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v156.m256i_i64[0] + 24LL))(v156.m256i_i64[0]);
    }
  }
  if ( *(_BYTE *)(a11 + 32) )
  {
    v97 = *(_QWORD *)(a11 + 24);
    if ( v97 )
    {
      if ( &_pthread_key_create )
        goto LABEL_114;
LABEL_158:
      ++*(_DWORD *)(v97 + 8);
    }
  }
  else
  {
    v97 = *(_QWORD *)(v140 + 184);
    if ( v97 )
    {
      if ( !&_pthread_key_create )
        goto LABEL_158;
LABEL_114:
      _InterlockedAdd((volatile signed __int32 *)(v97 + 8), 1u);
    }
  }
  v98 = (volatile signed __int32 *)v55[11].m128_u64[1];
  v140 = v97;
  v55[11] = _mm_loadh_ps((const double *)&v140);
  if ( v98 )
    sub_4343A0(v98);
  v157.m128i_i8[8] = 0;
  v156.m256i_i64[3] = (__int64)&v33[1].m256i_i64[1];
  v158[1] = &v33[2].m256i_u64[1];
  v168 = &v33[4].m256i_u64[3];
  v171 = &v33[5].m256i_u64[3];
  *(__int64 *)((char *)v156.m256i_i64 + 4) = 1;
  *(__int64 *)((char *)&v156.m256i_i64[1] + 4) = 0;
  LOBYTE(v160) = 0;
  v170 = 0;
  v173 = 0;
  v99 = v145[22];
  v156.m256i_i8[0] &= 0xC0u;
  v157.m128i_i64[0] = 0;
  v159 = 0;
  v162 = nullptr;
  v163 = nullptr;
  i = 0;
  v165 = nullptr;
  v166 = nullptr;
  j = 0;
  v169 = 0;
  v172 = 0;
  *(_BYTE *)v99 &= 0xC0u;
  *(_QWORD *)(v99 + 4) = 1;
  *(_QWORD *)(v99 + 12) = 0;
  sub_A0AAD0(v99 + 24, &v33->m256i_i64[3]);
  sub_A0AAD0(v99 + 56, &v33[1].m256i_i64[3]);
  v100 = *(void ***)(v99 + 88);
  *(_QWORD *)(v99 + 104) = 0;
  v101 = *(void ***)(v99 + 96);
  *(_OWORD *)(v99 + 88) = 0;
  v102 = v100;
  *(_QWORD *)(v99 + 88) = v162;
  v162 = nullptr;
  *(_QWORD *)(v99 + 96) = v163;
  v163 = nullptr;
  *(_QWORD *)(v99 + 104) = i;
  for ( i = 0; v101 != v102; v102 += 4 )
  {
    while ( *v102 != v102 + 2 )
    {
      operator delete(*v102);
      v102 += 4;
      if ( v102 == v101 )
        goto LABEL_120;
    }
  }
LABEL_120:
  if ( v100 )
    operator delete(v100);
  v103 = *(void ***)(v99 + 112);
  v104 = *(void ***)(v99 + 120);
  *(_QWORD *)(v99 + 128) = 0;
  *(_OWORD *)(v99 + 112) = 0;
  v105 = v103;
  *(_QWORD *)(v99 + 112) = v165;
  v165 = nullptr;
  *(_QWORD *)(v99 + 120) = v166;
  v166 = nullptr;
  *(_QWORD *)(v99 + 128) = j;
  for ( j = 0; v104 != v105; v105 += 5 )
  {
    while ( *v105 != v105 + 2 )
    {
      operator delete(*v105);
      v105 += 5;
      if ( v105 == v104 )
        goto LABEL_125;
    }
  }
LABEL_125:
  if ( v103 )
    operator delete(v103);
  sub_A0AAD0(v99 + 136, &v33[4].m256i_i64[1]);
  sub_A0AAD0(v99 + 168, &v33[5].m256i_i64[1]);
  if ( v171 != &v33[5].m256i_u64[3] )
    operator delete(v171);
  if ( v168 != &v33[4].m256i_u64[3] )
    operator delete(v168);
  v106 = v166;
  v107 = (void **)v165;
  if ( v166 != v165 )
  {
    do
    {
      while ( *v107 != v107 + 2 )
      {
        operator delete(*v107);
        v107 += 5;
        if ( v107 == v106 )
          goto LABEL_134;
      }
      v107 += 5;
    }
    while ( v106 != v107 );
LABEL_134:
    v107 = (void **)v165;
  }
  if ( v107 )
    operator delete(v107);
  v108 = v163;
  v109 = (void **)v162;
  if ( v163 != v162 )
  {
    do
    {
      while ( *v109 != v109 + 2 )
      {
        operator delete(*v109);
        v109 += 4;
        if ( v109 == v108 )
          goto LABEL_140;
      }
      v109 += 4;
    }
    while ( v108 != v109 );
LABEL_140:
    v109 = (void **)v162;
  }
  if ( v109 )
    operator delete(v109);
  if ( v158[1] != &v33[2].m256i_u64[1] )
    operator delete(v158[1]);
  if ( (unsigned __int64 *)v156.m256i_i64[3] != &v33[1].m256i_u64[1] )
    operator delete((void *)v156.m256i_i64[3]);
  return v141;
}
