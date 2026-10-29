_UNKNOWN **__fastcall sub_6450B0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 *a18,
        __int64 *a19,
        __int64 *a20,
        int a21,
        int a22,
        __int64 a23)
{
  unsigned __int64 v24; // xmm3_8
  __int64 v25; // rbp
  __int64 *v26; // r12
  __int64 v27; // rax
  void *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rsi
  bool v32; // zf
  __m128i v33; // xmm1
  __int64 v34; // rcx
  char v35; // al
  __m128i v36; // xmm1
  __m128 v37; // xmm2
  __m128i v38; // xmm1
  void **p_ptr; // rdi
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int16 v42; // dx
  __m128i v43; // xmm1
  char v44; // al
  __m128i v45; // xmm1
  __m128i v46; // xmm1
  __m128i v47; // xmm5
  __int64 v48; // rsi
  __m128i v49; // xmm0
  char v50; // al
  __m128i v51; // xmm0
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // r13
  __int64 v54; // r14
  __int64 v55; // rbx
  __int64 v56; // r12
  __int64 v57; // rax
  __m128i v58; // xmm0
  __int64 v59; // rax
  _BYTE *v60; // rdi
  size_t v61; // rbp
  _BYTE *v62; // r15
  __int64 v63; // rax
  char v64; // al
  _QWORD *v65; // rdx
  __int64 v66; // rcx
  unsigned __int64 v67; // rax
  _BYTE *v68; // rdi
  _BYTE *v69; // rax
  void *v70; // r13
  void **v71; // r14
  void **v72; // r12
  void **v73; // rdi
  void *v74; // r13
  void **v75; // r14
  void **v76; // r12
  void **v77; // rdi
  _BYTE *v78; // rdi
  void *v79; // r13
  void **v80; // r12
  void **v81; // rbp
  void **v82; // rdi
  void *v83; // r13
  void **v84; // r12
  void **v85; // rbp
  void **v86; // rdi
  int v88; // esi
  _DWORD *v89; // r9
  _DWORD *v90; // rdi
  __int64 v91; // r8
  int v92; // esi
  _DWORD *v93; // rdi
  _DWORD *v94; // rax
  __int64 v95; // rdx
  unsigned int v96; // eax
  unsigned __int64 v97; // rsi
  char *v98; // rdx
  char *v99; // rdi
  unsigned int v100; // eax
  unsigned int v101; // eax
  unsigned int v102; // edx
  __int64 v103; // r8
  __int64 v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rdi
  __int64 v107; // r8
  __int64 v109; // [rsp+4h] [rbp-290h]
  __int64 v110; // [rsp+1Ch] [rbp-278h]
  __int64 v111; // [rsp+24h] [rbp-270h]
  __int64 v112; // [rsp+2Ch] [rbp-268h]
  __int64 v113; // [rsp+34h] [rbp-260h]
  __m128i v114; // [rsp+3Ch] [rbp-258h] BYREF
  __int64 v115; // [rsp+4Ch] [rbp-248h]
  __int64 v116; // [rsp+54h] [rbp-240h]
  __int64 v117; // [rsp+5Ch] [rbp-238h]
  __int64 v118; // [rsp+64h] [rbp-230h]
  __int64 v119; // [rsp+6Ch] [rbp-228h]
  unsigned __int64 v120; // [rsp+74h] [rbp-220h]
  int v121; // [rsp+7Ch] [rbp-218h]
  int v122; // [rsp+80h] [rbp-214h]
  __int64 *v123; // [rsp+84h] [rbp-210h]
  _BYTE *v124; // [rsp+8Ch] [rbp-208h]
  _BYTE *v125; // [rsp+94h] [rbp-200h]
  __int64 *v126; // [rsp+9Ch] [rbp-1F8h]
  unsigned __int8 **v127; // [rsp+A4h] [rbp-1F0h]
  size_t v128; // [rsp+B4h] [rbp-1E0h]
  void *v129; // [rsp+BCh] [rbp-1D8h] BYREF
  void **v130; // [rsp+C4h] [rbp-1D0h]
  __int64 v131; // [rsp+CCh] [rbp-1C8h]
  void *v132; // [rsp+DCh] [rbp-1B8h] BYREF
  void **v133; // [rsp+E4h] [rbp-1B0h]
  __int64 v134; // [rsp+ECh] [rbp-1A8h]
  void *v135; // [rsp+FCh] [rbp-198h] BYREF
  void **v136; // [rsp+104h] [rbp-190h]
  __int64 v137; // [rsp+10Ch] [rbp-188h]
  void *v138; // [rsp+11Ch] [rbp-178h] BYREF
  void **v139; // [rsp+124h] [rbp-170h]
  __int64 v140; // [rsp+12Ch] [rbp-168h]
  void *v141; // [rsp+13Ch] [rbp-158h]
  __int64 v142; // [rsp+144h] [rbp-150h]
  _QWORD v143[2]; // [rsp+14Ch] [rbp-148h] BYREF
  void *v144; // [rsp+15Ch] [rbp-138h]
  __int64 v145; // [rsp+164h] [rbp-130h]
  _QWORD v146[2]; // [rsp+16Ch] [rbp-128h] BYREF
  void *v147; // [rsp+17Ch] [rbp-118h] BYREF
  __m128i si128; // [rsp+184h] [rbp-110h]
  _BYTE v149[32]; // [rsp+194h] [rbp-100h] BYREF
  __m128i v150; // [rsp+1B4h] [rbp-E0h] BYREF
  __m128i v151; // [rsp+1C4h] [rbp-D0h] BYREF
  __m128i v152; // [rsp+1D4h] [rbp-C0h] BYREF
  __int16 v153; // [rsp+1E4h] [rbp-B0h]
  char v154; // [rsp+1E6h] [rbp-AEh]
  void *ptr; // [rsp+1ECh] [rbp-A8h] BYREF
  __m128i v156; // [rsp+1F4h] [rbp-A0h]
  _BYTE v157[32]; // [rsp+204h] [rbp-90h] BYREF
  __m128i v158; // [rsp+224h] [rbp-70h] BYREF
  __m128i v159; // [rsp+234h] [rbp-60h] BYREF
  __m128i v160; // [rsp+244h] [rbp-50h] BYREF
  __int16 v161; // [rsp+254h] [rbp-40h]
  char v162; // [rsp+256h] [rbp-3Eh]

  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v116 = a3;
  v25 = a17;
  v121 = a21;
  v117 = a4;
  v26 = a18;
  v122 = a22;
  v27 = a23;
  v118 = a5;
  v28 = *(void **)a23;
  v29 = a23 + 16;
  v30 = *(_QWORD *)(a23 + 8);
  v119 = a6;
  v141 = v143;
  v120 = v24;
  if ( v28 == (void *)(a23 + 16) )
  {
    v88 = v30 + 1;
    v89 = v143;
    v90 = (_DWORD *)(a23 + 16);
    if ( (unsigned int)(v30 + 1) >= 8 )
    {
      LODWORD(v106) = 0;
      do
      {
        v107 = (unsigned int)v106;
        v106 = (unsigned int)(v106 + 8);
        *(_QWORD *)((char *)v143 + v107) = *(_QWORD *)(v29 + v107);
      }
      while ( (unsigned int)v106 < (v88 & 0xFFFFFFF8) );
      v89 = (_DWORD *)((char *)v143 + v106);
      v90 = (_DWORD *)(v29 + v106);
    }
    v91 = 0;
    if ( (v88 & 4) != 0 )
    {
      *v89 = *v90;
      v91 = 4;
    }
    if ( (v88 & 2) != 0 )
    {
      *(_WORD *)((char *)v89 + v91) = *(_WORD *)((char *)v90 + v91);
      v91 += 2;
    }
    if ( (v88 & 1) != 0 )
      *((_BYTE *)v89 + v91) = *((_BYTE *)v90 + v91);
  }
  else
  {
    v141 = v28;
    v143[0] = *(_QWORD *)(a23 + 16);
  }
  *(_QWORD *)v27 = v29;
  v31 = a20;
  *(_QWORD *)(v27 + 8) = 0;
  *(_BYTE *)(v27 + 16) = 0;
  v142 = v30;
  sub_644390((__int64)&v132, v31);
  sub_644390((__int64)&v129, a19);
  v32 = *(_QWORD *)(v25 + 8) == 0;
  v127 = (unsigned __int8 **)&v147;
  v125 = v149;
  v147 = v149;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v32 )
    sub_63DE60((__int64)v127, (unsigned __int8 **)v25);
  v33 = _mm_loadu_si128((const __m128i *)(v25 + 56));
  v34 = v142;
  v153 = *(_WORD *)(v25 + 104);
  v35 = *(_BYTE *)(v25 + 106);
  v150 = v33;
  v36 = _mm_loadu_si128((const __m128i *)(v25 + 72));
  v37 = _mm_loadh_ps((const double *)&a14);
  v154 = v35;
  v151 = v36;
  v38 = _mm_loadu_si128((const __m128i *)(v25 + 88));
  v144 = v146;
  v110 = a8;
  v152 = v38;
  v111 = a9;
  v114 = (__m128i)v37;
  v112 = a12;
  v115 = a15;
  v113 = a16;
  if ( v141 == v143 )
  {
    v92 = v142 + 1;
    v93 = v146;
    v94 = v143;
    if ( (unsigned int)(v142 + 1) >= 8 )
    {
      LODWORD(v104) = 0;
      do
      {
        v105 = (unsigned int)v104;
        v104 = (unsigned int)(v104 + 8);
        *(_QWORD *)((char *)v146 + v105) = *(_QWORD *)((char *)v143 + v105);
      }
      while ( (unsigned int)v104 < (v92 & 0xFFFFFFF8) );
      v93 = (_DWORD *)((char *)v146 + v104);
      v94 = (_DWORD *)((char *)v143 + v104);
    }
    v95 = 0;
    if ( (v92 & 4) != 0 )
    {
      *v93 = *v94;
      v95 = 4;
    }
    if ( (v92 & 2) != 0 )
    {
      *(_WORD *)((char *)v93 + v95) = *(_WORD *)((char *)v94 + v95);
      v95 += 2;
    }
    if ( (v92 & 1) != 0 )
      *((_BYTE *)v93 + v95) = *((_BYTE *)v94 + v95);
  }
  else
  {
    v144 = v141;
    v146[0] = v143[0];
  }
  v145 = v34;
  v123 = (__int64 *)&v138;
  v141 = v143;
  v142 = 0;
  LOBYTE(v143[0]) = 0;
  sub_644390((__int64)&v138, (__int64 *)&v132);
  p_ptr = &v135;
  v126 = (__int64 *)&v135;
  sub_644390((__int64)&v135, (__int64 *)&v129);
  v40 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v41 = si128.m128i_i64[0];
  v124 = v157;
  ptr = v157;
  v156 = v40;
  if ( si128.m128i_i64[0] )
  {
    p_ptr = &ptr;
    sub_63DE60((__int64)&ptr, v127);
    v41 = v156.m128i_i64[0];
    v40 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  }
  v42 = v153;
  v43 = _mm_loadu_si128(&v150);
  v44 = v154;
  v161 = v153;
  *(_QWORD *)a1 = &off_49F4B08;
  v158 = v43;
  v45 = _mm_loadu_si128(&v151);
  *(_QWORD *)(a1 + 8) = v116;
  v159 = v45;
  v46 = _mm_loadu_si128(&v152);
  *(_QWORD *)(a1 + 16) = v117;
  v162 = v44;
  *(_QWORD *)(a1 + 24) = v118;
  v160 = v46;
  *(_QWORD *)(a1 + 32) = v119;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 48) = v110;
  *(_QWORD *)(a1 + 56) = v111;
  *(_QWORD *)(a1 + 64) = a10;
  *(_QWORD *)(a1 + 72) = a11;
  *(_QWORD *)(a1 + 80) = v112;
  v47 = _mm_load_si128(&v114);
  v48 = v115;
  *(__m128i *)(a1 + 128) = v40;
  *(__m128i *)(a1 + 88) = v47;
  *(_QWORD *)(a1 + 104) = v48;
  *(_QWORD *)(a1 + 112) = v113;
  *(_QWORD *)(a1 + 120) = a1 + 144;
  if ( v41 )
  {
    p_ptr = (void **)(a1 + 120);
    sub_63DE60(a1 + 120, (unsigned __int8 **)&ptr);
    v42 = v161;
    v44 = v162;
  }
  v49 = _mm_loadu_si128(&v158);
  *(_BYTE *)(a1 + 226) = v44;
  v50 = *(_BYTE *)(a1 + 232);
  *(_WORD *)(a1 + 224) = v42;
  *(__m128i *)(a1 + 176) = v49;
  *(__m128i *)(a1 + 192) = _mm_loadu_si128(&v159);
  v51 = _mm_loadu_si128(&v160);
  *(_BYTE *)(a1 + 232) = v50 & 0xC0 | 0x11;
  *(__m128i *)(a1 + 208) = v51;
  v52 = v26[1] - *v26;
  v53 = v52;
  *(_OWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v52 )
  {
    if ( v52 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v54 = operator new(v52);
  }
  else
  {
    v54 = 0;
  }
  *(_QWORD *)(a1 + 256) = v54 + v53;
  *(__m128i *)(a1 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v54, (__m128i)(unsigned __int64)v54);
  if ( v26[1] != *v26 )
  {
    v55 = *v26;
    v109 = a1;
    v56 = v26[1];
    while ( 1 )
    {
      v60 = (_BYTE *)(v54 + 16);
      *(_QWORD *)v54 = v54 + 16;
      v61 = *(_QWORD *)(v55 + 8);
      v62 = *(_BYTE **)v55;
      v128 = v61;
      if ( v61 > 0xF )
        break;
      if ( v61 == 1 )
      {
        *(_BYTE *)(v54 + 16) = *v62;
        goto LABEL_18;
      }
      if ( v61 )
        goto LABEL_21;
LABEL_18:
      *(_QWORD *)(v54 + 8) = v61;
      v55 += 80;
      v54 += 80;
      v60[v61] = 0;
      v57 = *(_QWORD *)(v55 - 32);
      *(__m128i *)(v54 - 48) = _mm_loadu_si128((const __m128i *)(v55 - 48));
      v58 = _mm_loadu_si128((const __m128i *)(v55 - 24));
      *(_QWORD *)(v54 - 32) = v57;
      v59 = *(_QWORD *)(v55 - 8);
      *(__m128i *)(v54 - 24) = v58;
      *(_QWORD *)(v54 - 8) = v59;
      if ( v56 == v55 )
      {
        a1 = v109;
        *(_QWORD *)(v109 + 248) = v54;
        goto LABEL_24;
      }
    }
    v63 = std::string::_M_create();
    *(_QWORD *)v54 = v63;
    v60 = (_BYTE *)v63;
    *(_QWORD *)(v54 + 16) = v128;
LABEL_21:
    memcpy(v60, v62, v61);
    v61 = v128;
    v60 = *(_BYTE **)v54;
    goto LABEL_18;
  }
LABEL_24:
  sub_644390(a1 + 264, v126);
  sub_644390(a1 + 288, v123);
  v64 = v121;
  v65 = (_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_BYTE *)(a1 + 312) = v64;
  if ( v144 == v146 )
  {
    v66 = v145;
    v96 = v145 + 1;
    if ( (unsigned int)(v145 + 1) >= 8 )
    {
      *v65 = v146[0];
      *(_QWORD *)((char *)v65 + v96 - 8) = *(_QWORD *)((char *)&v146[-1] + v96);
      v97 = (a1 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v98 = (char *)v65 - v97;
      v99 = (char *)((char *)v146 - v98);
      v100 = ((_DWORD)v98 + v96) & 0xFFFFFFF8;
      if ( v100 >= 8 )
      {
        v101 = v100 & 0xFFFFFFF8;
        v102 = 0;
        do
        {
          v103 = v102;
          v102 += 8;
          *(_QWORD *)(v97 + v103) = *(_QWORD *)&v99[v103];
        }
        while ( v102 < v101 );
      }
    }
    else if ( (v96 & 4) != 0 )
    {
      *(_DWORD *)v65 = v146[0];
      *(_DWORD *)((char *)v65 + v96 - 4) = *(_DWORD *)((char *)&v145 + v96 + 4);
    }
    else if ( (_DWORD)v145 != -1 )
    {
      *(_BYTE *)v65 = v146[0];
      if ( (v96 & 2) != 0 )
        *(_WORD *)((char *)v65 + v96 - 2) = *(_WORD *)((char *)&v145 + v96 + 6);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 320) = v144;
    v66 = v145;
    *(_QWORD *)(a1 + 336) = v146[0];
  }
  v67 = v120;
  v68 = ptr;
  *(_QWORD *)(a1 + 328) = v66;
  v144 = v146;
  *(_QWORD *)(a1 + 352) = v67;
  v69 = v124;
  v145 = 0;
  LOBYTE(v146[0]) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  if ( v68 != v69 )
    free(v68);
  v70 = v135;
  v71 = v136;
  v72 = (void **)v135;
  if ( v136 != v135 )
  {
    do
    {
      v73 = (void **)v72[5];
      if ( v73 != v72 + 7 )
        operator delete(v73, (unsigned __int64)v72[7] + 1);
      if ( *v72 != v72 + 2 )
        operator delete(*v72, (unsigned __int64)v72[2] + 1);
      v72 += 10;
    }
    while ( v71 != v72 );
  }
  if ( v70 )
    operator delete(v70, v137 - (_QWORD)v70);
  v74 = v138;
  v75 = v139;
  v76 = (void **)v138;
  if ( v139 != v138 )
  {
    do
    {
      v77 = (void **)v76[5];
      if ( v77 != v76 + 7 )
        operator delete(v77, (unsigned __int64)v76[7] + 1);
      if ( *v76 != v76 + 2 )
        operator delete(*v76, (unsigned __int64)v76[2] + 1);
      v76 += 10;
    }
    while ( v75 != v76 );
  }
  if ( v74 )
    operator delete(v74, v140 - (_QWORD)v74);
  if ( v144 != v146 )
    operator delete(v144, v146[0] + 1LL);
  v78 = v147;
  *(_OWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 368) = a2;
  *(_QWORD *)a1 = &off_49F4BF0;
  *(_BYTE *)(a1 + 392) = v122;
  if ( v78 != v125 )
    free(v78);
  v79 = v129;
  v80 = v130;
  v81 = (void **)v129;
  if ( v130 != v129 )
  {
    do
    {
      v82 = (void **)v81[5];
      if ( v82 != v81 + 7 )
        operator delete(v82, (unsigned __int64)v81[7] + 1);
      if ( *v81 != v81 + 2 )
        operator delete(*v81, (unsigned __int64)v81[2] + 1);
      v81 += 10;
    }
    while ( v80 != v81 );
  }
  if ( v79 )
    operator delete(v79, v131 - (_QWORD)v79);
  v83 = v132;
  v84 = v133;
  v85 = (void **)v132;
  if ( v133 != v132 )
  {
    do
    {
      v86 = (void **)v85[5];
      if ( v86 != v85 + 7 )
        operator delete(v86, (unsigned __int64)v85[7] + 1);
      if ( *v85 != v85 + 2 )
        operator delete(*v85, (unsigned __int64)v85[2] + 1);
      v85 += 10;
    }
    while ( v84 != v85 );
  }
  if ( v83 )
    operator delete(v83, v134 - (_QWORD)v83);
  if ( v141 != v143 )
    operator delete(v141, v143[0] + 1LL);
  *(_QWORD *)a1 = &off_49F4C30;
  return &off_49F4C30;
}

