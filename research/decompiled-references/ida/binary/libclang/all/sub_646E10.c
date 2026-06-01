void __fastcall sub_646E10(
        __int64 a1,
        unsigned int a2,
        __int64 *a3,
        char *a4,
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
        char a18,
        __int64 *a19,
        __int64 *a20,
        __int64 *a21,
        __int64 *a22,
        int a23)
{
  char *v24; // rbx
  __int64 v25; // r12
  char v26; // r14
  __int64 *v27; // r13
  __int64 *v28; // rbp
  __m128i si128; // xmm1
  __int64 v30; // rcx
  void **p_ptr; // rdi
  __int16 v32; // dx
  char v33; // al
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __m128 v36; // xmm0
  __int64 v37; // rsi
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  unsigned __int64 v40; // r12
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // r8
  __int64 v44; // r13
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rax
  _BYTE *v48; // rdi
  size_t v49; // rbx
  _BYTE *v50; // rbp
  __int64 v51; // rax
  char v52; // al
  _QWORD *v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  _BYTE *v56; // rdi
  _BYTE *v57; // rax
  void *v58; // r14
  void **v59; // r13
  void **v60; // r12
  void **v61; // rdi
  void *v62; // r14
  void **v63; // r13
  void **v64; // r12
  void **v65; // rdi
  unsigned int v66; // eax
  unsigned __int64 v67; // rsi
  char *v68; // rdx
  char *v69; // r8
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // edx
  __int64 v73; // rdi
  __int64 *v74; // [rsp+0h] [rbp-168h]
  __int64 *v75; // [rsp+8h] [rbp-160h]
  char *v76; // [rsp+10h] [rbp-158h]
  __int64 v77; // [rsp+18h] [rbp-150h]
  __int64 v78; // [rsp+20h] [rbp-148h]
  unsigned __int64 v79; // [rsp+28h] [rbp-140h]
  int v80; // [rsp+34h] [rbp-134h]
  _BYTE *v81; // [rsp+38h] [rbp-130h]
  __int64 *v82; // [rsp+40h] [rbp-128h]
  __int64 *v83; // [rsp+48h] [rbp-120h]
  size_t v84; // [rsp+58h] [rbp-110h] BYREF
  void *v85; // [rsp+60h] [rbp-108h] BYREF
  void **v86; // [rsp+68h] [rbp-100h]
  __int64 v87; // [rsp+70h] [rbp-F8h]
  void *v88; // [rsp+80h] [rbp-E8h] BYREF
  void **v89; // [rsp+88h] [rbp-E0h]
  __int64 v90; // [rsp+90h] [rbp-D8h]
  void *v91; // [rsp+A0h] [rbp-C8h]
  __int64 v92; // [rsp+A8h] [rbp-C0h]
  char v93[16]; // [rsp+B0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+C0h] [rbp-A8h] BYREF
  __m128i v95; // [rsp+C8h] [rbp-A0h]
  _BYTE v96[32]; // [rsp+D8h] [rbp-90h] BYREF
  __m128i v97; // [rsp+F8h] [rbp-70h] BYREF
  __m128i v98; // [rsp+108h] [rbp-60h] BYREF
  __m128i v99; // [rsp+118h] [rbp-50h] BYREF
  __int16 v100; // [rsp+128h] [rbp-40h]
  char v101; // [rsp+12Ah] [rbp-3Eh]

  v76 = a4;
  v24 = v93;
  v75 = a3;
  v74 = a20;
  v25 = a17;
  v26 = a18;
  v80 = a23;
  v27 = a19;
  v77 = a5;
  v28 = a22;
  v78 = a6;
  v79 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v91 = v93;
  strcpy(v93, "public");
  v92 = 6;
  v83 = (__int64 *)&v88;
  sub_644390((__int64)&v88, a21);
  v82 = (__int64 *)&v85;
  sub_644390((__int64)&v85, v74);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v30 = *(_QWORD *)(v25 + 8);
  v81 = v96;
  p_ptr = &ptr;
  ptr = v96;
  v95 = si128;
  if ( v30 )
  {
    v74 = (__int64 *)&ptr;
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)v25);
    v30 = v95.m128i_i64[0];
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  }
  v32 = *(_WORD *)(v25 + 104);
  v33 = *(_BYTE *)(v25 + 106);
  v97 = _mm_loadu_si128((const __m128i *)(v25 + 56));
  v34 = _mm_loadu_si128((const __m128i *)(v25 + 72));
  v100 = v32;
  v98 = v34;
  v35 = _mm_loadu_si128((const __m128i *)(v25 + 88));
  *(_QWORD *)a1 = &off_49F4B08;
  v99 = v35;
  *(_QWORD *)(a1 + 8) = v75;
  v36 = _mm_loadh_ps((const double *)&a14);
  v101 = v33;
  *(_QWORD *)(a1 + 16) = v76;
  *(_QWORD *)(a1 + 24) = v77;
  *(_QWORD *)(a1 + 32) = v78;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 48) = a8;
  *(_QWORD *)(a1 + 56) = a9;
  *(_QWORD *)(a1 + 64) = a10;
  *(_QWORD *)(a1 + 72) = a11;
  *(__m128 *)(a1 + 88) = v36;
  *(_QWORD *)(a1 + 80) = a12;
  v37 = a15;
  *(__m128i *)(a1 + 128) = si128;
  *(_QWORD *)(a1 + 104) = v37;
  *(_QWORD *)(a1 + 112) = a16;
  *(_QWORD *)(a1 + 120) = a1 + 144;
  if ( v30 )
  {
    p_ptr = (void **)(a1 + 120);
    sub_63DE60(a1 + 120, (unsigned __int8 **)&ptr);
    v32 = v100;
    v33 = v101;
  }
  v38 = _mm_loadu_si128(&v97);
  *(_WORD *)(a1 + 224) = v32;
  *(_BYTE *)(a1 + 226) = v33;
  *(__m128i *)(a1 + 176) = v38;
  v39 = _mm_loadu_si128(&v98);
  *(_BYTE *)(a1 + 232) = v26;
  *(__m128i *)(a1 + 192) = v39;
  *(__m128i *)(a1 + 208) = _mm_loadu_si128(&v99);
  v40 = v27[1] - *v27;
  *(_QWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  if ( v40 )
  {
    if ( v40 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v41 = operator new(v40);
  }
  else
  {
    v41 = 0;
  }
  *(_QWORD *)(a1 + 256) = v41 + v40;
  *(__m128i *)(a1 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v41, (__m128i)(unsigned __int64)v41);
  v42 = v27[1];
  v43 = *v27;
  if ( v42 != *v27 )
  {
    v75 = v28;
    v44 = v43;
    v74 = (__int64 *)&v84;
    v76 = v93;
    while ( 1 )
    {
      v48 = (_BYTE *)(v41 + 16);
      *(_QWORD *)v41 = v41 + 16;
      v49 = *(_QWORD *)(v44 + 8);
      v50 = *(_BYTE **)v44;
      v84 = v49;
      if ( v49 > 0xF )
        break;
      if ( v49 == 1 )
      {
        *(_BYTE *)(v41 + 16) = *v50;
        goto LABEL_12;
      }
      if ( v49 )
        goto LABEL_15;
LABEL_12:
      *(_QWORD *)(v41 + 8) = v49;
      v44 += 80;
      v41 += 80;
      v48[v49] = 0;
      v45 = *(_QWORD *)(v44 - 32);
      *(__m128i *)(v41 - 48) = _mm_loadu_si128((const __m128i *)(v44 - 48));
      v46 = _mm_loadu_si128((const __m128i *)(v44 - 24));
      *(_QWORD *)(v41 - 32) = v45;
      v47 = *(_QWORD *)(v44 - 8);
      *(__m128i *)(v41 - 24) = v46;
      *(_QWORD *)(v41 - 8) = v47;
      if ( v42 == v44 )
      {
        *(_QWORD *)(a1 + 248) = v41;
        v28 = v75;
        v24 = v76;
        goto LABEL_18;
      }
    }
    v51 = std::string::_M_create();
    *(_QWORD *)v41 = v51;
    v48 = (_BYTE *)v51;
    *(_QWORD *)(v41 + 16) = v84;
LABEL_15:
    memcpy(v48, v50, v49);
    v49 = v84;
    v48 = *(_BYTE **)v41;
    goto LABEL_12;
  }
LABEL_18:
  sub_644390(a1 + 264, v82);
  sub_644390(a1 + 288, v83);
  v52 = v80;
  v53 = (_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_BYTE *)(a1 + 312) = v52;
  if ( v91 == v24 )
  {
    v54 = v92;
    v66 = v92 + 1;
    if ( (unsigned int)(v92 + 1) >= 8 )
    {
      *v53 = *(_QWORD *)v93;
      *(_QWORD *)((char *)v53 + v66 - 8) = *(_QWORD *)&v24[v66 - 8];
      v67 = (a1 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v68 = (char *)v53 - v67;
      v69 = (char *)(v24 - v68);
      v70 = ((_DWORD)v68 + v66) & 0xFFFFFFF8;
      if ( v70 >= 8 )
      {
        v71 = v70 & 0xFFFFFFF8;
        v72 = 0;
        do
        {
          v73 = v72;
          v72 += 8;
          *(_QWORD *)(v67 + v73) = *(_QWORD *)&v69[v73];
        }
        while ( v72 < v71 );
      }
    }
    else if ( (v66 & 4) != 0 )
    {
      *(_DWORD *)v53 = *(_DWORD *)v93;
      *(_DWORD *)((char *)v53 + v66 - 4) = *(_DWORD *)&v24[v66 - 4];
    }
    else if ( (_DWORD)v92 != -1 )
    {
      *(_BYTE *)v53 = v93[0];
      if ( (v66 & 2) != 0 )
        *(_WORD *)((char *)v53 + v66 - 2) = *(_WORD *)&v24[v66 - 2];
    }
  }
  else
  {
    *(_QWORD *)(a1 + 320) = v91;
    v54 = v92;
    *(_QWORD *)(a1 + 336) = *(_QWORD *)v93;
  }
  v55 = v79;
  v56 = ptr;
  *(_QWORD *)(a1 + 328) = v54;
  v91 = v24;
  *(_QWORD *)(a1 + 352) = v55;
  v57 = v81;
  v92 = 0;
  v93[0] = 0;
  *(_QWORD *)(a1 + 360) = 0;
  if ( v56 != v57 )
    free(v56);
  v58 = v85;
  v59 = v86;
  v60 = (void **)v85;
  if ( v86 != v85 )
  {
    do
    {
      v61 = (void **)v60[5];
      if ( v61 != v60 + 7 )
        operator delete(v61, (unsigned __int64)v60[7] + 1);
      if ( *v60 != v60 + 2 )
        operator delete(*v60, (unsigned __int64)v60[2] + 1);
      v60 += 10;
    }
    while ( v59 != v60 );
  }
  if ( v58 )
    operator delete(v58, v87 - (_QWORD)v58);
  v62 = v88;
  v63 = v89;
  v64 = (void **)v88;
  if ( v89 != v88 )
  {
    do
    {
      v65 = (void **)v64[5];
      if ( v65 != v64 + 7 )
        operator delete(v65, (unsigned __int64)v64[7] + 1);
      if ( *v64 != v64 + 2 )
        operator delete(*v64, (unsigned __int64)v64[2] + 1);
      v64 += 10;
    }
    while ( v63 != v64 );
  }
  if ( v62 )
    operator delete(v62, v90 - (_QWORD)v62);
  if ( v91 != v24 )
    operator delete(v91, *(_QWORD *)v93 + 1LL);
  *(_QWORD *)a1 = &off_4992FC8;
  sub_646AF0((_QWORD *)(a1 + 368), v28);
  sub_644390(a1 + 392, v28 + 3);
}

