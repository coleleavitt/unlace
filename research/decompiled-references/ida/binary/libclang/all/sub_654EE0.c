__int64 __fastcall sub_654EE0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        __int64 *a9,
        __int64 *a10,
        __int64 *a11,
        char *a12,
        char *a13)
{
  void *v15; // r12
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rcx
  unsigned __int64 v20; // rax
  bool v21; // zf
  unsigned __int64 v22; // rcx
  __int16 v23; // ax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  __m128i v32; // xmm0
  __int64 v33; // rsi
  __m128i v34; // xmm0
  void **p_ptr; // rdi
  unsigned __int64 v36; // rcx
  __m128i v37; // xmm0
  __m128i v38; // xmm5
  __m128i v39; // xmm0
  __int64 v40; // rax
  __int64 v41; // rax
  __m128i v42; // xmm6
  __m128i v43; // xmm0
  char v44; // al
  __m128i v45; // xmm0
  char v46; // al
  unsigned __int64 v47; // rbp
  __int64 v48; // rax
  __m128i *v49; // r12
  __int64 v50; // rbp
  __int64 v51; // r14
  __int64 v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  _BYTE *m128i_i8; // rdi
  size_t v56; // rbx
  __int8 *v57; // r13
  __int64 v58; // rax
  unsigned __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  _BYTE *v64; // rdi
  _QWORD *v65; // rcx
  __int64 v66; // rcx
  void (__fastcall ***v67)(_QWORD); // rdi
  __int64 v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rdi
  int v71; // edi
  _DWORD *v72; // r8
  _DWORD *v73; // rax
  __int64 v74; // rdx
  int v75; // edi
  _DWORD *v76; // r8
  _DWORD *v77; // rax
  __int64 v78; // rdx
  unsigned int v79; // esi
  unsigned __int64 v80; // rdi
  char *v81; // rdx
  char *v82; // r8
  unsigned int v83; // eax
  unsigned int v84; // edx
  __int64 v85; // rsi
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v91; // [rsp+0h] [rbp-3A8h]
  __int64 v92; // [rsp+8h] [rbp-3A0h]
  __int64 v93; // [rsp+8h] [rbp-3A0h]
  __int64 v94; // [rsp+8h] [rbp-3A0h]
  __int64 v96; // [rsp+18h] [rbp-390h]
  unsigned __int64 v97; // [rsp+18h] [rbp-390h]
  unsigned __int64 v98; // [rsp+18h] [rbp-390h]
  unsigned __int64 v99; // [rsp+18h] [rbp-390h]
  __int64 v100; // [rsp+18h] [rbp-390h]
  _QWORD *v101; // [rsp+18h] [rbp-390h]
  _QWORD *v102; // [rsp+18h] [rbp-390h]
  _QWORD *v103; // [rsp+18h] [rbp-390h]
  unsigned __int64 v104; // [rsp+18h] [rbp-390h]
  unsigned __int64 v105; // [rsp+30h] [rbp-378h]
  unsigned __int64 v106; // [rsp+30h] [rbp-378h]
  __int64 v107; // [rsp+50h] [rbp-358h]
  unsigned __int64 v108; // [rsp+50h] [rbp-358h]
  __int64 v109; // [rsp+58h] [rbp-350h]
  __int64 v110; // [rsp+60h] [rbp-348h]
  __int64 v111; // [rsp+68h] [rbp-340h]
  __int64 v112; // [rsp+70h] [rbp-338h]
  __int64 v113; // [rsp+78h] [rbp-330h]
  __m128 v114; // [rsp+80h] [rbp-328h] BYREF
  __int64 v115; // [rsp+90h] [rbp-318h]
  __int64 v116; // [rsp+98h] [rbp-310h]
  __int64 v117; // [rsp+A0h] [rbp-308h]
  unsigned __int64 v118; // [rsp+A8h] [rbp-300h]
  char v119; // [rsp+B6h] [rbp-2F2h]
  char v120; // [rsp+B7h] [rbp-2F1h]
  _BYTE *v121; // [rsp+B8h] [rbp-2F0h]
  _BYTE *v122; // [rsp+C0h] [rbp-2E8h]
  _BYTE *v123; // [rsp+C8h] [rbp-2E0h]
  size_t v124; // [rsp+D8h] [rbp-2D0h]
  __int64 v125; // [rsp+E0h] [rbp-2C8h] BYREF
  char v126; // [rsp+F0h] [rbp-2B8h]
  __int64 v127[4]; // [rsp+100h] [rbp-2A8h] BYREF
  __int64 v128[4]; // [rsp+120h] [rbp-288h] BYREF
  __int64 v129[4]; // [rsp+140h] [rbp-268h] BYREF
  __int64 v130[4]; // [rsp+160h] [rbp-248h] BYREF
  __int64 v131[4]; // [rsp+180h] [rbp-228h] BYREF
  __int64 v132[4]; // [rsp+1A0h] [rbp-208h] BYREF
  void *v133; // [rsp+1C0h] [rbp-1E8h]
  __int64 v134; // [rsp+1C8h] [rbp-1E0h]
  _QWORD v135[2]; // [rsp+1D0h] [rbp-1D8h] BYREF
  void *v136; // [rsp+1E0h] [rbp-1C8h]
  __int64 v137; // [rsp+1E8h] [rbp-1C0h]
  _QWORD v138[2]; // [rsp+1F0h] [rbp-1B8h] BYREF
  void *v139; // [rsp+200h] [rbp-1A8h]
  __int64 v140; // [rsp+208h] [rbp-1A0h]
  _QWORD v141[2]; // [rsp+210h] [rbp-198h] BYREF
  void *v142; // [rsp+220h] [rbp-188h] BYREF
  __m128i si128; // [rsp+228h] [rbp-180h]
  _BYTE v144[32]; // [rsp+238h] [rbp-170h] BYREF
  __m128i v145; // [rsp+258h] [rbp-150h] BYREF
  __m128i v146; // [rsp+268h] [rbp-140h] BYREF
  __m128i v147; // [rsp+278h] [rbp-130h] BYREF
  __int16 v148; // [rsp+288h] [rbp-120h]
  char v149; // [rsp+28Ah] [rbp-11Eh]
  void *v150; // [rsp+290h] [rbp-118h] BYREF
  __m128i v151; // [rsp+298h] [rbp-110h]
  _BYTE v152[32]; // [rsp+2A8h] [rbp-100h] BYREF
  __m128i v153; // [rsp+2C8h] [rbp-E0h] BYREF
  __m128i v154; // [rsp+2D8h] [rbp-D0h] BYREF
  __m128i v155; // [rsp+2E8h] [rbp-C0h] BYREF
  __int16 v156; // [rsp+2F8h] [rbp-B0h]
  char v157; // [rsp+2FAh] [rbp-AEh]
  void *ptr; // [rsp+300h] [rbp-A8h] BYREF
  __m128i v159; // [rsp+308h] [rbp-A0h] BYREF
  _BYTE v160[32]; // [rsp+318h] [rbp-90h] BYREF
  __m128i v161; // [rsp+338h] [rbp-70h] BYREF
  __m128i v162; // [rsp+348h] [rbp-60h] BYREF
  __m128i v163; // [rsp+358h] [rbp-50h] BYREF
  __int16 v164; // [rsp+368h] [rbp-40h]
  char v165; // [rsp+36Ah] [rbp-3Eh]

  ptr = (void *)sub_FC8E80(a1, a2, a3);
  v15 = ptr;
  v17 = v16;
  v159 = (__m128i)v16;
  sub_64F120((__int64)&v125, a1 + 160, (__m128i *)&ptr, &v159.m128i_i64[1]);
  v92 = v125;
  if ( v159.m128i_i64[1] )
    (**(void (__fastcall ***)(__int64))v159.m128i_i64[1])(v159.m128i_i64[1]);
  if ( !v126 )
  {
    v18 = *(_QWORD *)(v92 + 16);
    if ( *(_DWORD *)(v18 + 356) != 3 )
      return 0;
    return v18;
  }
  v20 = sub_63DDF0(a1, 400, 4);
  strcpy((char *)v135, "public");
  v105 = v20;
  v133 = v135;
  v134 = 6;
  v119 = *a13;
  v120 = *a12;
  sub_644390((__int64)v128, a11);
  sub_644390((__int64)v127, a10);
  v21 = *(_QWORD *)(a8 + 8) == 0;
  v22 = v105;
  v122 = v144;
  v142 = v144;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( !v21 )
  {
    sub_63DE60((__int64)&v142, (unsigned __int8 **)a8);
    v22 = v105;
  }
  v106 = v22;
  v23 = *(_WORD *)(a8 + 104);
  v145 = _mm_loadu_si128((const __m128i *)(a8 + 56));
  v24 = _mm_loadu_si128((const __m128i *)(a8 + 72));
  v148 = v23;
  LOBYTE(v23) = *(_BYTE *)(a8 + 106);
  v146 = v24;
  v25 = _mm_loadu_si128((const __m128i *)(a8 + 88));
  v149 = v23;
  v147 = v25;
  v26 = sub_FC8E80(a1, a4, a5);
  v136 = v138;
  v116 = v26;
  v27 = *a6;
  v117 = v28;
  v110 = v27;
  v29 = v134;
  v111 = a6[1];
  v113 = a6[2];
  v107 = a6[3];
  v112 = a6[4];
  v115 = a6[5];
  v30 = *(_QWORD *)(a7 + 8);
  v114 = _mm_loadh_ps((const double *)a7);
  v109 = v30;
  v96 = *(_QWORD *)(a7 + 16);
  if ( v133 == v135 )
  {
    v75 = v134 + 1;
    v76 = v138;
    v77 = v135;
    if ( (unsigned int)(v134 + 1) >= 8 )
    {
      LODWORD(v88) = 0;
      do
      {
        v89 = (unsigned int)v88;
        v88 = (unsigned int)(v88 + 8);
        *(_QWORD *)((char *)v138 + v89) = *(_QWORD *)((char *)v135 + v89);
      }
      while ( (unsigned int)v88 < (v75 & 0xFFFFFFF8) );
      v76 = (_DWORD *)((char *)v138 + v88);
      v77 = (_DWORD *)((char *)v135 + v88);
    }
    v78 = 0;
    if ( (v75 & 4) != 0 )
    {
      *v76 = *v77;
      v78 = 4;
    }
    if ( (v75 & 2) != 0 )
    {
      *(_WORD *)((char *)v76 + v78) = *(_WORD *)((char *)v77 + v78);
      v78 += 2;
    }
    if ( (v75 & 1) != 0 )
      *((_BYTE *)v76 + v78) = *((_BYTE *)v77 + v78);
  }
  else
  {
    v136 = v133;
    v138[0] = v135[0];
  }
  v137 = v29;
  v133 = v135;
  v134 = 0;
  LOBYTE(v135[0]) = 0;
  sub_644390((__int64)v130, v128);
  sub_644390((__int64)v129, v127);
  v31 = v106;
  v121 = v152;
  v150 = v152;
  v151 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( si128.m128i_i64[0] )
  {
    sub_63DE60((__int64)&v150, (unsigned __int8 **)&v142);
    v31 = v106;
  }
  v32 = _mm_loadu_si128(&v145);
  v139 = v141;
  v33 = v137;
  v156 = v148;
  v153 = v32;
  v34 = _mm_loadu_si128(&v146);
  v157 = v149;
  v154 = v34;
  v155 = _mm_loadu_si128(&v147);
  if ( v136 == v138 )
  {
    v71 = v137 + 1;
    v72 = v141;
    v73 = v138;
    if ( (unsigned int)(v137 + 1) >= 8 )
    {
      LODWORD(v86) = 0;
      do
      {
        v87 = (unsigned int)v86;
        v86 = (unsigned int)(v86 + 8);
        *(_QWORD *)((char *)v141 + v87) = *(_QWORD *)((char *)v138 + v87);
      }
      while ( (unsigned int)v86 < (v71 & 0xFFFFFFF8) );
      v72 = (_DWORD *)((char *)v141 + v86);
      v73 = (_DWORD *)((char *)v138 + v86);
    }
    v74 = 0;
    if ( (v71 & 4) != 0 )
    {
      *v72 = *v73;
      v74 = 4;
    }
    if ( (v71 & 2) != 0 )
    {
      *(_WORD *)((char *)v72 + v74) = *(_WORD *)((char *)v73 + v74);
      v74 += 2;
    }
    if ( (v71 & 1) != 0 )
      *((_BYTE *)v72 + v74) = *((_BYTE *)v73 + v74);
  }
  else
  {
    v139 = v136;
    v141[0] = v138[0];
  }
  v140 = v33;
  v118 = v31;
  v136 = v138;
  v137 = 0;
  LOBYTE(v138[0]) = 0;
  sub_644390((__int64)v132, v130);
  p_ptr = (void **)v131;
  sub_644390((__int64)v131, v129);
  v123 = v160;
  v36 = v118;
  ptr = v160;
  v159 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  if ( v151.m128i_i64[0] )
  {
    p_ptr = &ptr;
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)&v150);
    v36 = v118;
  }
  v37 = _mm_loadu_si128(&v153);
  v38 = _mm_load_si128((const __m128i *)&v114);
  v164 = v156;
  v161 = v37;
  v39 = _mm_loadu_si128(&v154);
  v165 = v157;
  v162 = v39;
  v163 = _mm_loadu_si128(&v155);
  *(_QWORD *)v36 = &off_49F4B08;
  v40 = v116;
  *(_QWORD *)(v36 + 8) = v15;
  *(_QWORD *)(v36 + 24) = v40;
  v41 = v117;
  *(_QWORD *)(v36 + 16) = v17;
  *(_QWORD *)(v36 + 32) = v41;
  *(__m128i *)(v36 + 88) = v38;
  *(_QWORD *)(v36 + 40) = v110;
  *(_QWORD *)(v36 + 48) = v111;
  *(_QWORD *)(v36 + 56) = v113;
  *(_QWORD *)(v36 + 64) = v107;
  *(_QWORD *)(v36 + 72) = v112;
  *(_QWORD *)(v36 + 80) = v115;
  v42 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)(v36 + 104) = v109;
  *(__m128i *)(v36 + 128) = v42;
  *(_QWORD *)(v36 + 112) = v96;
  *(_QWORD *)(v36 + 120) = v36 + 144;
  if ( v159.m128i_i64[0] )
  {
    p_ptr = (void **)(v36 + 120);
    v104 = v36;
    sub_63DE60(v36 + 120, (unsigned __int8 **)&ptr);
    v36 = v104;
  }
  v43 = _mm_loadu_si128(&v161);
  *(_WORD *)(v36 + 224) = v164;
  v44 = v165;
  *(__m128i *)(v36 + 176) = v43;
  v45 = _mm_loadu_si128(&v162);
  *(_BYTE *)(v36 + 226) = v44;
  v46 = *(_BYTE *)(v36 + 232);
  *(__m128i *)(v36 + 192) = v45;
  *(__m128i *)(v36 + 208) = _mm_loadu_si128(&v163);
  *(_BYTE *)(v36 + 232) = v46 & 0xC0 | 0x11;
  v47 = a9[1] - *a9;
  *(_OWORD *)(v36 + 240) = 0;
  *(_QWORD *)(v36 + 256) = 0;
  if ( v47 )
  {
    if ( v47 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v97 = v36;
    v48 = operator new(v47);
    v36 = v97;
    v49 = (__m128i *)v48;
  }
  else
  {
    v49 = nullptr;
  }
  *(_QWORD *)(v36 + 256) = (char *)v49 + v47;
  *(__m128i *)(v36 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
  v50 = a9[1];
  if ( v50 != *a9 )
  {
    v108 = v36;
    v51 = *a9;
    while ( 1 )
    {
      m128i_i8 = v49[1].m128i_i8;
      v49->m128i_i64[0] = (__int64)v49[1].m128i_i64;
      v56 = *(_QWORD *)(v51 + 8);
      v57 = *(__int8 **)v51;
      v124 = v56;
      if ( v56 > 0xF )
        break;
      if ( v56 == 1 )
      {
        v49[1].m128i_i8[0] = *v57;
        goto LABEL_26;
      }
      if ( v56 )
        goto LABEL_29;
LABEL_26:
      v49->m128i_i64[1] = v56;
      v51 += 80;
      v49 += 5;
      m128i_i8[v56] = 0;
      v52 = *(_QWORD *)(v51 - 32);
      v49[-3] = _mm_loadu_si128((const __m128i *)(v51 - 48));
      v53 = _mm_loadu_si128((const __m128i *)(v51 - 24));
      v49[-2].m128i_i64[0] = v52;
      v54 = *(_QWORD *)(v51 - 8);
      *(__m128i *)((char *)v49 - 24) = v53;
      v49[-1].m128i_i64[1] = v54;
      if ( v50 == v51 )
      {
        v36 = v108;
        *(_QWORD *)(v108 + 248) = v49;
        goto LABEL_33;
      }
    }
    v58 = std::string::_M_create();
    v49->m128i_i64[0] = v58;
    m128i_i8 = (_BYTE *)v58;
    v49[1].m128i_i64[0] = v124;
LABEL_29:
    memcpy(m128i_i8, v57, v56);
    v56 = v124;
    m128i_i8 = (_BYTE *)v49->m128i_i64[0];
    goto LABEL_26;
  }
LABEL_33:
  v98 = v36;
  sub_644390(v36 + 264, v131);
  sub_644390(v98 + 288, v132);
  v59 = v98;
  *(_BYTE *)(v98 + 312) = v120;
  v60 = v139;
  v61 = (_QWORD *)(v98 + 336);
  *(_QWORD *)(v98 + 320) = v98 + 336;
  if ( v60 == v141 )
  {
    v62 = v140;
    v79 = v140 + 1;
    if ( (unsigned int)(v140 + 1) >= 8 )
    {
      *v61 = v141[0];
      *(_QWORD *)((char *)v61 + v79 - 8) = *(_QWORD *)((char *)&v141[-1] + v79);
      v80 = (v98 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v81 = (char *)v61 - v80;
      v82 = (char *)((char *)v141 - v81);
      if ( ((v79 + (_DWORD)v81) & 0xFFFFFFF8) >= 8 )
      {
        v83 = (v79 + (_DWORD)v81) & 0xFFFFFFF8;
        v84 = 0;
        do
        {
          v85 = v84;
          v84 += 8;
          *(_QWORD *)(v80 + v85) = *(_QWORD *)&v82[v85];
        }
        while ( v84 < v83 );
      }
      v62 = v140;
    }
    else if ( (v79 & 4) != 0 )
    {
      *(_DWORD *)v61 = v141[0];
      *(_DWORD *)((char *)v61 + v79 - 4) = *(_DWORD *)((char *)&v140 + v79 + 4);
      v62 = v140;
    }
    else if ( (_DWORD)v140 != -1 )
    {
      *(_BYTE *)v61 = v141[0];
      v62 = v140;
      if ( (v79 & 2) != 0 )
      {
        *(_WORD *)((char *)v61 + v79 - 2) = *(_WORD *)((char *)&v140 + v79 + 6);
        v62 = v140;
      }
    }
  }
  else
  {
    *(_QWORD *)(v98 + 320) = v60;
    *(_QWORD *)(v98 + 336) = v141[0];
    v62 = v140;
  }
  *(_QWORD *)(v98 + 328) = v62;
  *(_QWORD *)(v98 + 360) = 0;
  *(_QWORD *)(v98 + 352) = 0x300000003LL;
  v139 = v141;
  v140 = 0;
  LOBYTE(v141[0]) = 0;
  if ( ptr != v123 )
  {
    free(ptr);
    v59 = v98;
  }
  v99 = v59;
  sub_6441A0(v131);
  sub_6441A0(v132);
  v63 = v99;
  if ( v139 != v141 )
  {
    operator delete(v139, v141[0] + 1LL);
    v63 = v99;
  }
  *(_DWORD *)(v63 + 368) = 3;
  *(_OWORD *)(v63 + 376) = 0;
  *(_QWORD *)v63 = &off_49F4BF0;
  v64 = v150;
  *(_BYTE *)(v63 + 392) = v119;
  if ( v64 != v121 )
  {
    v100 = v63;
    free(v64);
    v63 = v100;
  }
  v101 = (_QWORD *)v63;
  sub_6441A0(v129);
  sub_6441A0(v130);
  v65 = v101;
  if ( v136 != v138 )
  {
    operator delete(v136, v138[0] + 1LL);
    v65 = v101;
  }
  *v65 = &off_4993040;
  if ( v142 != v122 )
  {
    v102 = v65;
    free(v142);
    v65 = v102;
  }
  v103 = v65;
  sub_6441A0(v127);
  sub_6441A0(v128);
  v66 = (__int64)v103;
  if ( v133 != v135 )
  {
    operator delete(v133, v135[0] + 1LL);
    v66 = (__int64)v103;
  }
  v67 = *(void (__fastcall ****)(_QWORD))(v92 + 16);
  *(_QWORD *)(v92 + 16) = v66;
  if ( v67 )
  {
    v93 = v66;
    (**v67)(v67);
    v66 = v93;
  }
  v68 = *(_QWORD *)(v66 + 88);
  if ( v68 && (unsigned int)(*(_DWORD *)(v68 + 356) - 2) <= 0x13 && (v94 = v66, v69 = sub_FC8C50(), v66 = v94, v69) )
  {
    sub_FC8D50(v69, v94);
    return v94;
  }
  else
  {
    v70 = a1;
    v91 = v66;
    sub_64B900(v70 + 184, v66);
    return v91;
  }
}

