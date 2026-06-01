__int64 (__fastcall **__fastcall sub_644950(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _BYTE *a4,
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
        int a22))()
{
  unsigned __int64 v24; // xmm2_8
  __int64 v25; // rax
  char *v26; // rbx
  void *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // r12
  __int64 *v31; // rbp
  _BYTE *v32; // r13
  __m128i si128; // xmm1
  __int64 v34; // rsi
  void **p_ptr; // rdi
  __int16 v36; // cx
  char v37; // al
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128 v40; // xmm0
  _QWORD *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __m128i v44; // xmm0
  char v45; // al
  __m128i v46; // xmm0
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // r12
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rbx
  __int64 v53; // rbp
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  _BYTE *v57; // rdi
  size_t v58; // r13
  _BYTE *v59; // r14
  __int64 v60; // rax
  char v61; // al
  _QWORD *v62; // rdx
  __int64 v63; // rcx
  unsigned __int64 v64; // rax
  _BYTE *v65; // rdi
  void *v66; // r13
  void **v67; // r12
  void **v68; // rbp
  void **v69; // rdi
  void *v70; // r13
  void **v71; // r12
  void **v72; // rbp
  void **v73; // rdi
  unsigned int v74; // eax
  int v76; // edi
  _DWORD *v77; // r11
  _DWORD *v78; // r8
  __int64 v79; // r9
  unsigned int v80; // eax
  unsigned __int64 v81; // rsi
  char *v82; // rdx
  char *v83; // r8
  unsigned int v84; // eax
  unsigned int v85; // eax
  unsigned int v86; // edx
  __int64 v87; // rdi
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // [rsp+0h] [rbp-158h]
  _BYTE *v91; // [rsp+8h] [rbp-150h]
  _QWORD *v92; // [rsp+10h] [rbp-148h]
  unsigned __int64 v93; // [rsp+18h] [rbp-140h]
  unsigned int v94; // [rsp+20h] [rbp-138h]
  int v95; // [rsp+24h] [rbp-134h]
  __int64 *v96; // [rsp+28h] [rbp-130h]
  __int64 *v97; // [rsp+30h] [rbp-128h]
  void **v98; // [rsp+38h] [rbp-120h]
  size_t v99; // [rsp+48h] [rbp-110h]
  void *v100; // [rsp+50h] [rbp-108h] BYREF
  void **v101; // [rsp+58h] [rbp-100h]
  __int64 v102; // [rsp+60h] [rbp-F8h]
  void *v103; // [rsp+70h] [rbp-E8h] BYREF
  void **v104; // [rsp+78h] [rbp-E0h]
  __int64 v105; // [rsp+80h] [rbp-D8h]
  void *v106; // [rsp+90h] [rbp-C8h]
  __int64 v107; // [rsp+98h] [rbp-C0h]
  _QWORD v108[2]; // [rsp+A0h] [rbp-B8h] BYREF
  void *ptr; // [rsp+B0h] [rbp-A8h] BYREF
  __m128i v110; // [rsp+B8h] [rbp-A0h]
  _BYTE v111[32]; // [rsp+C8h] [rbp-90h] BYREF
  __m128i v112; // [rsp+E8h] [rbp-70h] BYREF
  __m128i v113; // [rsp+F8h] [rbp-60h] BYREF
  __m128i v114; // [rsp+108h] [rbp-50h] BYREF
  __int16 v115; // [rsp+118h] [rbp-40h]
  char v116; // [rsp+11Ah] [rbp-3Eh]

  v24 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v25 = a21;
  v26 = (char *)v108;
  v91 = a4;
  v94 = a2;
  v27 = *(void **)a21;
  v90 = a3;
  v95 = a22;
  v28 = a21 + 16;
  v29 = *(_QWORD *)(a21 + 8);
  v92 = a5;
  v30 = a17;
  v106 = v108;
  v31 = a18;
  v93 = v24;
  if ( v27 == (void *)(a21 + 16) )
  {
    v76 = v29 + 1;
    v77 = v108;
    v78 = (_DWORD *)(a21 + 16);
    if ( (unsigned int)(v29 + 1) >= 8 )
    {
      LODWORD(v88) = 0;
      do
      {
        v89 = (unsigned int)v88;
        v88 = (unsigned int)(v88 + 8);
        *(_QWORD *)((char *)v108 + v89) = *(_QWORD *)(v28 + v89);
      }
      while ( (unsigned int)v88 < (v76 & 0xFFFFFFF8) );
      v77 = (_DWORD *)((char *)v108 + v88);
      v78 = (_DWORD *)(v28 + v88);
    }
    v79 = 0;
    if ( (v76 & 4) != 0 )
    {
      *v77 = *v78;
      v79 = 4;
    }
    if ( (v76 & 2) != 0 )
    {
      *(_WORD *)((char *)v77 + v79) = *(_WORD *)((char *)v78 + v79);
      v79 += 2;
    }
    if ( (v76 & 1) != 0 )
      *((_BYTE *)v77 + v79) = *((_BYTE *)v78 + v79);
  }
  else
  {
    v106 = v27;
    v108[0] = *(_QWORD *)(a21 + 16);
  }
  *(_QWORD *)v25 = v28;
  v32 = v111;
  *(_QWORD *)(v25 + 8) = 0;
  *(_BYTE *)(v25 + 16) = 0;
  v107 = v29;
  v97 = (__int64 *)&v103;
  sub_644390((__int64)&v103, a20);
  v96 = (__int64 *)&v100;
  sub_644390((__int64)&v100, a19);
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  v34 = *(_QWORD *)(v30 + 8);
  ptr = v111;
  p_ptr = &ptr;
  v110 = si128;
  if ( v34 )
  {
    v98 = &ptr;
    sub_63DE60((__int64)&ptr, (unsigned __int8 **)v30);
    v34 = v110.m128i_i64[0];
    p_ptr = &ptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  }
  v36 = *(_WORD *)(v30 + 104);
  v37 = *(_BYTE *)(v30 + 106);
  v112 = _mm_loadu_si128((const __m128i *)(v30 + 56));
  v38 = _mm_loadu_si128((const __m128i *)(v30 + 72));
  v115 = v36;
  v113 = v38;
  v39 = _mm_loadu_si128((const __m128i *)(v30 + 88));
  *(_QWORD *)a1 = &off_49F4B08;
  v114 = v39;
  *(_QWORD *)(a1 + 8) = v90;
  v40 = _mm_loadh_ps((const double *)&a14);
  v116 = v37;
  *(_QWORD *)(a1 + 16) = v91;
  v41 = v92;
  *(_QWORD *)(a1 + 32) = a6;
  *(_QWORD *)(a1 + 24) = v41;
  *(_QWORD *)(a1 + 40) = a7;
  *(_QWORD *)(a1 + 48) = a8;
  *(_QWORD *)(a1 + 56) = a9;
  *(_QWORD *)(a1 + 64) = a10;
  *(_QWORD *)(a1 + 72) = a11;
  *(_QWORD *)(a1 + 80) = a12;
  v42 = a15;
  *(__m128 *)(a1 + 88) = v40;
  *(_QWORD *)(a1 + 104) = v42;
  v43 = a16;
  *(__m128i *)(a1 + 128) = si128;
  *(_QWORD *)(a1 + 112) = v43;
  *(_QWORD *)(a1 + 120) = a1 + 144;
  if ( v34 )
  {
    p_ptr = (void **)(a1 + 120);
    sub_63DE60(a1 + 120, (unsigned __int8 **)&ptr);
    v36 = v115;
    v37 = v116;
  }
  v44 = _mm_loadu_si128(&v112);
  *(_BYTE *)(a1 + 226) = v37;
  v45 = *(_BYTE *)(a1 + 232);
  *(_WORD *)(a1 + 224) = v36;
  *(__m128i *)(a1 + 176) = v44;
  *(__m128i *)(a1 + 192) = _mm_loadu_si128(&v113);
  v46 = _mm_loadu_si128(&v114);
  *(_BYTE *)(a1 + 232) = v45 & 0xC0 | 0x11;
  *(__m128i *)(a1 + 208) = v46;
  v47 = v31[1] - *v31;
  v48 = v47;
  *(_OWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v47 )
  {
    if ( v47 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886(p_ptr);
    v49 = operator new(v47);
  }
  else
  {
    v49 = 0;
  }
  *(_QWORD *)(a1 + 256) = v49 + v48;
  *(__m128i *)(a1 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
  v50 = v31[1];
  v51 = *v31;
  if ( v50 != *v31 )
  {
    v92 = v108;
    v52 = v51;
    v90 = a1;
    v53 = v50;
    v91 = v111;
    while ( 1 )
    {
      v57 = (_BYTE *)(v49 + 16);
      *(_QWORD *)v49 = v49 + 16;
      v58 = *(_QWORD *)(v52 + 8);
      v59 = *(_BYTE **)v52;
      v99 = v58;
      if ( v58 > 0xF )
        break;
      if ( v58 == 1 )
      {
        *(_BYTE *)(v49 + 16) = *v59;
        goto LABEL_14;
      }
      if ( v58 )
        goto LABEL_17;
LABEL_14:
      *(_QWORD *)(v49 + 8) = v58;
      v52 += 80;
      v49 += 80;
      v57[v58] = 0;
      v54 = *(_QWORD *)(v52 - 32);
      *(__m128i *)(v49 - 48) = _mm_loadu_si128((const __m128i *)(v52 - 48));
      v55 = _mm_loadu_si128((const __m128i *)(v52 - 24));
      *(_QWORD *)(v49 - 32) = v54;
      v56 = *(_QWORD *)(v52 - 8);
      *(__m128i *)(v49 - 24) = v55;
      *(_QWORD *)(v49 - 8) = v56;
      if ( v53 == v52 )
      {
        a1 = v90;
        v32 = v91;
        v26 = (char *)v92;
        *(_QWORD *)(v90 + 248) = v49;
        goto LABEL_20;
      }
    }
    v60 = std::string::_M_create();
    *(_QWORD *)v49 = v60;
    v57 = (_BYTE *)v60;
    *(_QWORD *)(v49 + 16) = v99;
LABEL_17:
    memcpy(v57, v59, v58);
    v58 = v99;
    v57 = *(_BYTE **)v49;
    goto LABEL_14;
  }
LABEL_20:
  sub_644390(a1 + 264, v96);
  sub_644390(a1 + 288, v97);
  v61 = v95;
  v62 = (_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_BYTE *)(a1 + 312) = v61;
  if ( v106 == v26 )
  {
    v63 = v107;
    v80 = v107 + 1;
    if ( (unsigned int)(v107 + 1) >= 8 )
    {
      *v62 = v108[0];
      *(_QWORD *)((char *)v62 + v80 - 8) = *(_QWORD *)&v26[v80 - 8];
      v81 = (a1 + 344) & 0xFFFFFFFFFFFFFFF8LL;
      v82 = (char *)v62 - v81;
      v83 = (char *)(v26 - v82);
      v84 = ((_DWORD)v82 + v80) & 0xFFFFFFF8;
      if ( v84 >= 8 )
      {
        v85 = v84 & 0xFFFFFFF8;
        v86 = 0;
        do
        {
          v87 = v86;
          v86 += 8;
          *(_QWORD *)(v81 + v87) = *(_QWORD *)&v83[v87];
        }
        while ( v86 < v85 );
      }
    }
    else if ( (v80 & 4) != 0 )
    {
      *(_DWORD *)v62 = v108[0];
      *(_DWORD *)((char *)v62 + v80 - 4) = *(_DWORD *)&v26[v80 - 4];
    }
    else if ( (_DWORD)v107 != -1 )
    {
      *(_BYTE *)v62 = v108[0];
      if ( (v80 & 2) != 0 )
        *(_WORD *)((char *)v62 + v80 - 2) = *(_WORD *)&v26[v80 - 2];
    }
  }
  else
  {
    *(_QWORD *)(a1 + 320) = v106;
    v63 = v107;
    *(_QWORD *)(a1 + 336) = v108[0];
  }
  v64 = v93;
  v65 = ptr;
  *(_QWORD *)(a1 + 328) = v63;
  v106 = v26;
  v107 = 0;
  LOBYTE(v108[0]) = 0;
  *(_QWORD *)(a1 + 352) = v64;
  *(_QWORD *)(a1 + 360) = 0;
  if ( v65 != v32 )
    free(v65);
  v66 = v100;
  v67 = v101;
  v68 = (void **)v100;
  if ( v101 != v100 )
  {
    do
    {
      v69 = (void **)v68[5];
      if ( v69 != v68 + 7 )
        operator delete(v69, (unsigned __int64)v68[7] + 1);
      if ( *v68 != v68 + 2 )
        operator delete(*v68, (unsigned __int64)v68[2] + 1);
      v68 += 10;
    }
    while ( v67 != v68 );
  }
  if ( v66 )
    operator delete(v66, v102 - (_QWORD)v66);
  v70 = v103;
  v71 = v104;
  v72 = (void **)v103;
  if ( v104 != v103 )
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
    operator delete(v70, v105 - (_QWORD)v70);
  if ( v106 != v26 )
    operator delete(v106, v108[0] + 1LL);
  v74 = v94;
  *(_OWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 368) = v74;
  *(_QWORD *)a1 = &off_4993108;
  return &off_4993108;
}

