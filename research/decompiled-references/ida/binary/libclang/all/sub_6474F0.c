void __fastcall sub_6474F0(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5,
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
        __int64 a21,
        __int64 a22,
        int a23)
{
  unsigned __int64 v25; // xmm2_8
  char *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r12
  void *v30; // r9
  __int64 v31; // rsi
  __int64 *v32; // r15
  __int64 v33; // rdi
  __int64 *v34; // r13
  __int64 *v35; // r8
  __int64 v36; // rdi
  __int64 v37; // r10
  __m128i si128; // xmm1
  __int16 v39; // si
  char v40; // al
  __m128i v41; // xmm0
  _QWORD *v42; // rcx
  __m128i v43; // xmm0
  _QWORD *v44; // rcx
  __m128 v45; // xmm0
  __int64 v46; // rdx
  __m128i v47; // xmm0
  char v48; // al
  __m128i v49; // xmm0
  unsigned __int64 v50; // r12
  __int64 v51; // rax
  __m128i *v52; // r14
  __int64 v53; // r13
  __int64 v54; // rcx
  __int64 v55; // r15
  __int64 v56; // rax
  __m128i v57; // xmm0
  __int64 v58; // rax
  _BYTE *m128i_i8; // rdi
  size_t v60; // rbx
  __int8 *v61; // rbp
  __int64 v62; // rax
  _QWORD *v63; // r10
  __int64 v64; // rdi
  _QWORD *v65; // r10
  char *v66; // rax
  _QWORD *v67; // rdx
  __int64 v68; // rcx
  unsigned __int64 v69; // rax
  _BYTE *v70; // rdi
  _BYTE *v71; // rax
  void *v72; // r14
  void **v73; // r13
  _QWORD *v74; // rbp
  void **v75; // r12
  void **v76; // rdi
  void *v77; // r14
  void **v78; // r13
  _QWORD *v79; // rbp
  void **v80; // r12
  void **v81; // rdi
  __int64 v82; // rbx
  __int64 *v83; // rsi
  _DWORD *v84; // rdx
  _DWORD *v85; // r9
  __int64 v86; // r11
  unsigned int v87; // eax
  unsigned __int64 v88; // rsi
  char *v89; // rdx
  char *v90; // r8
  unsigned int v91; // eax
  unsigned int v92; // eax
  unsigned int v93; // edx
  __int64 v94; // rdi
  __int64 v95; // r9
  __int64 v96; // r11
  _QWORD *v97; // [rsp+0h] [rbp-160h]
  _QWORD *v98; // [rsp+8h] [rbp-158h]
  __int64 v99; // [rsp+10h] [rbp-150h]
  unsigned __int64 v100; // [rsp+18h] [rbp-148h]
  __int64 v101; // [rsp+20h] [rbp-140h]
  int v102; // [rsp+2Ch] [rbp-134h]
  _BYTE *v103; // [rsp+30h] [rbp-130h]
  __int64 *v104; // [rsp+38h] [rbp-128h]
  __int64 *v105; // [rsp+40h] [rbp-120h]
  size_t v106; // [rsp+50h] [rbp-110h]
  void *v107; // [rsp+58h] [rbp-108h] BYREF
  void **v108; // [rsp+60h] [rbp-100h]
  __int64 v109; // [rsp+68h] [rbp-F8h]
  void *v110; // [rsp+78h] [rbp-E8h] BYREF
  void **v111; // [rsp+80h] [rbp-E0h]
  __int64 v112; // [rsp+88h] [rbp-D8h]
  void *v113; // [rsp+98h] [rbp-C8h]
  __int64 v114; // [rsp+A0h] [rbp-C0h]
  _QWORD v115[2]; // [rsp+A8h] [rbp-B8h] BYREF
  void *ptr; // [rsp+B8h] [rbp-A8h] BYREF
  __m128i v117; // [rsp+C0h] [rbp-A0h]
  _BYTE v118[32]; // [rsp+D0h] [rbp-90h] BYREF
  __m128i v119; // [rsp+F0h] [rbp-70h] BYREF
  __m128i v120; // [rsp+100h] [rbp-60h] BYREF
  __m128i v121; // [rsp+110h] [rbp-50h] BYREF
  __int16 v122; // [rsp+120h] [rbp-40h]
  char v123; // [rsp+122h] [rbp-3Eh]

  v25 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v97 = a4;
  v27 = (char *)v115;
  v98 = a5;
  v101 = a21;
  v28 = a22;
  v102 = a23;
  v29 = a17;
  v30 = *(void **)a22;
  v31 = a22 + 16;
  v113 = v115;
  v32 = a18;
  v33 = *(_QWORD *)(a22 + 8);
  v100 = v25;
  v34 = a19;
  v35 = a20;
  if ( v30 == (void *)(a22 + 16) )
  {
    v84 = v115;
    v85 = (_DWORD *)(a22 + 16);
    v99 = v33 + 1;
    if ( (unsigned int)(v33 + 1) >= 8 )
    {
      v99 = a22;
      LODWORD(v95) = 0;
      do
      {
        v96 = (unsigned int)v95;
        v95 = (unsigned int)(v95 + 8);
        *(_QWORD *)((char *)v115 + v96) = *(_QWORD *)(v31 + v96);
      }
      while ( (unsigned int)v95 < (((_DWORD)v33 + 1) & 0xFFFFFFF8) );
      v28 = v99;
      v84 = (_DWORD *)((char *)v115 + v95);
      v99 = v33 + 1;
      v85 = (_DWORD *)(v31 + v95);
    }
    v86 = 0;
    if ( (v99 & 4) != 0 )
    {
      *v84 = *v85;
      v86 = 4;
    }
    if ( (v99 & 2) != 0 )
    {
      *(_WORD *)((char *)v84 + v86) = *(_WORD *)((char *)v85 + v86);
      v86 += 2;
    }
    if ( (v99 & 1) != 0 )
      *((_BYTE *)v84 + v86) = *((_BYTE *)v85 + v86);
  }
  else
  {
    v113 = v30;
    v115[0] = *(_QWORD *)(a22 + 16);
  }
  *(_QWORD *)v28 = v31;
  *(_QWORD *)(v28 + 8) = 0;
  *(_BYTE *)(v28 + 16) = 0;
  v114 = v33;
  v99 = a1;
  v105 = (__int64 *)&v110;
  sub_644390((__int64)&v110, v35);
  v104 = (__int64 *)&v107;
  sub_644390((__int64)&v107, v34);
  v36 = *(_QWORD *)(v29 + 8);
  v37 = v99;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v103 = v118;
  ptr = v118;
  v117 = si128;
  if ( v36 )
  {
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)v29);
    v36 = v117.m128i_i64[0];
    v37 = v99;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  }
  v39 = *(_WORD *)(v29 + 104);
  v40 = *(_BYTE *)(v29 + 106);
  v119 = _mm_loadu_si128((const __m128i *)(v29 + 56));
  v41 = _mm_loadu_si128((const __m128i *)(v29 + 72));
  v42 = v97;
  v122 = v39;
  v120 = v41;
  v43 = _mm_loadu_si128((const __m128i *)(v29 + 88));
  *(_QWORD *)v37 = &off_49F4B08;
  v121 = v43;
  *(_QWORD *)(v37 + 40) = a7;
  *(_QWORD *)(v37 + 16) = v42;
  v44 = v98;
  v45 = _mm_loadh_ps((const double *)&a14);
  *(_QWORD *)(v37 + 48) = a8;
  v123 = v40;
  *(_QWORD *)(v37 + 56) = a9;
  *(_QWORD *)(v37 + 8) = a3;
  *(_QWORD *)(v37 + 64) = a10;
  *(_QWORD *)(v37 + 24) = v44;
  *(_QWORD *)(v37 + 72) = a11;
  *(_QWORD *)(v37 + 32) = a6;
  *(_QWORD *)(v37 + 80) = a12;
  *(__m128 *)(v37 + 88) = v45;
  v46 = a15;
  *(__m128i *)(v37 + 128) = si128;
  *(_QWORD *)(v37 + 104) = v46;
  *(_QWORD *)(v37 + 112) = a16;
  *(_QWORD *)(v37 + 120) = v37 + 144;
  if ( v36 )
  {
    v36 = v37 + 120;
    v97 = (_QWORD *)v37;
    sub_63DE60(v37 + 120, (unsigned __int8 **)&ptr);
    v39 = v122;
    v37 = (__int64)v97;
    v40 = v123;
  }
  v47 = _mm_loadu_si128(&v119);
  *(_BYTE *)(v37 + 226) = v40;
  v48 = *(_BYTE *)(v37 + 232);
  *(_WORD *)(v37 + 224) = v39;
  *(__m128i *)(v37 + 176) = v47;
  *(__m128i *)(v37 + 192) = _mm_loadu_si128(&v120);
  v49 = _mm_loadu_si128(&v121);
  *(_BYTE *)(v37 + 232) = v48 & 0xC0 | 0x11;
  *(__m128i *)(v37 + 208) = v49;
  v50 = v32[1] - *v32;
  *(_QWORD *)(v37 + 256) = 0;
  *(_OWORD *)(v37 + 240) = 0;
  if ( v50 )
  {
    if ( v50 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(v36);
    v97 = (_QWORD *)v37;
    v51 = operator new(v50);
    v37 = (__int64)v97;
    v52 = (__m128i *)v51;
  }
  else
  {
    v52 = nullptr;
  }
  *(_QWORD *)(v37 + 256) = (char *)v52 + v50;
  *(__m128i *)(v37 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, (__m128i)(unsigned __int64)v52);
  v53 = v32[1];
  v54 = *v32;
  if ( v53 != *v32 )
  {
    v97 = (_QWORD *)v37;
    v55 = v54;
    v98 = v115;
    while ( 1 )
    {
      m128i_i8 = v52[1].m128i_i8;
      v52->m128i_i64[0] = (__int64)v52[1].m128i_i64;
      v60 = *(_QWORD *)(v55 + 8);
      v61 = *(__int8 **)v55;
      v106 = v60;
      if ( v60 > 0xF )
        break;
      if ( v60 == 1 )
      {
        v52[1].m128i_i8[0] = *v61;
        goto LABEL_14;
      }
      if ( v60 )
        goto LABEL_17;
LABEL_14:
      v52->m128i_i64[1] = v60;
      v55 += 80;
      v52 += 5;
      m128i_i8[v60] = 0;
      v56 = *(_QWORD *)(v55 - 32);
      v52[-3] = _mm_loadu_si128((const __m128i *)(v55 - 48));
      v57 = _mm_loadu_si128((const __m128i *)(v55 - 24));
      v52[-2].m128i_i64[0] = v56;
      v58 = *(_QWORD *)(v55 - 8);
      *(__m128i *)((char *)v52 - 24) = v57;
      v52[-1].m128i_i64[1] = v58;
      if ( v53 == v55 )
      {
        v63 = v97;
        v27 = (char *)v98;
        v97[31] = v52;
        v64 = (__int64)(v63 + 33);
        goto LABEL_20;
      }
    }
    v62 = std::string::_M_create();
    v52->m128i_i64[0] = v62;
    m128i_i8 = (_BYTE *)v62;
    v52[1].m128i_i64[0] = v106;
LABEL_17:
    memcpy(m128i_i8, v61, v60);
    v60 = v106;
    m128i_i8 = (_BYTE *)v52->m128i_i64[0];
    goto LABEL_14;
  }
  v97 = (_QWORD *)v37;
  v64 = v37 + 264;
LABEL_20:
  sub_644390(v64, v104);
  sub_644390((__int64)(v97 + 36), v105);
  v65 = v97;
  *((_BYTE *)v97 + 312) = v102;
  v66 = (char *)v113;
  v67 = v65 + 42;
  v65[40] = v65 + 42;
  if ( v66 == v27 )
  {
    v68 = v114;
    v87 = v114 + 1;
    if ( (unsigned int)(v114 + 1) >= 8 )
    {
      *v67 = v115[0];
      *(_QWORD *)((char *)v67 + v87 - 8) = *(_QWORD *)&v27[v87 - 8];
      v88 = (unsigned __int64)(v65 + 43) & 0xFFFFFFFFFFFFFFF8LL;
      v89 = (char *)v67 - v88;
      v90 = (char *)(v27 - v89);
      v91 = ((_DWORD)v89 + v87) & 0xFFFFFFF8;
      if ( v91 >= 8 )
      {
        v92 = v91 & 0xFFFFFFF8;
        v93 = 0;
        do
        {
          v94 = v93;
          v93 += 8;
          *(_QWORD *)(v88 + v94) = *(_QWORD *)&v90[v94];
        }
        while ( v93 < v92 );
      }
    }
    else if ( (v87 & 4) != 0 )
    {
      *(_DWORD *)v67 = v115[0];
      *(_DWORD *)((char *)v67 + v87 - 4) = *(_DWORD *)&v27[v87 - 4];
    }
    else if ( (_DWORD)v114 != -1 )
    {
      *(_BYTE *)v67 = v115[0];
      if ( (v87 & 2) != 0 )
        *(_WORD *)((char *)v67 + v87 - 2) = *(_WORD *)&v27[v87 - 2];
    }
  }
  else
  {
    v65[40] = v66;
    v68 = v114;
    v65[42] = v115[0];
  }
  v69 = v100;
  v70 = ptr;
  v65[41] = v68;
  v113 = v27;
  v65[44] = v69;
  v71 = v103;
  v114 = 0;
  LOBYTE(v115[0]) = 0;
  v65[45] = 0;
  if ( v70 != v71 )
  {
    v97 = v65;
    free(v70);
    v65 = v97;
  }
  v72 = v107;
  v73 = v108;
  v74 = v65;
  v75 = (void **)v107;
  if ( v108 != v107 )
  {
    do
    {
      v76 = (void **)v75[5];
      if ( v76 != v75 + 7 )
        operator delete(v76, (unsigned __int64)v75[7] + 1);
      if ( *v75 != v75 + 2 )
        operator delete(*v75, (unsigned __int64)v75[2] + 1);
      v75 += 10;
    }
    while ( v73 != v75 );
    v65 = v74;
  }
  if ( v72 )
  {
    v97 = v65;
    operator delete(v72, v109 - (_QWORD)v72);
    v65 = v97;
  }
  v77 = v110;
  v78 = v111;
  v79 = v65;
  v80 = (void **)v110;
  if ( v111 != v110 )
  {
    do
    {
      v81 = (void **)v80[5];
      if ( v81 != v80 + 7 )
        operator delete(v81, (unsigned __int64)v80[7] + 1);
      if ( *v80 != v80 + 2 )
        operator delete(*v80, (unsigned __int64)v80[2] + 1);
      v80 += 10;
    }
    while ( v78 != v80 );
    v65 = v79;
  }
  if ( v77 )
  {
    v97 = v65;
    operator delete(v77, v112 - (_QWORD)v77);
    v65 = v97;
  }
  if ( v113 != v27 )
  {
    v97 = v65;
    operator delete(v113, v115[0] + 1LL);
    v65 = v97;
  }
  v82 = v101;
  v97 = v65;
  v83 = (__int64 *)v101;
  *v65 = &off_49F4C78;
  sub_646AF0(v65 + 46, v83);
  sub_644390((__int64)(v97 + 49), (__int64 *)(v82 + 24));
}

