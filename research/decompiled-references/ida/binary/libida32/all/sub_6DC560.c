__int64 __fastcall sub_6DC560(__int64 a1, const char *a2, unsigned __int64 **a3)
{
  char *v3; // rbx
  unsigned __int64 *v4; // r8
  __int64 v6; // rdx
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // r15
  size_t v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rsi
  int v12; // eax
  __m128i v13; // xmm0
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbp
  void *v17; // rax
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  __m128i v21; // xmm0
  __m128i v22; // xmm0
  double v23; // rbp
  unsigned __int64 v24; // rbp
  __m128 v25; // xmm0
  size_t v26; // rbp
  void *v27; // rax
  __int64 v28; // rax
  void *v29; // rax
  const char *v30; // rsi
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __int64 v33; // rdx
  __int64 v34; // rsi
  __m128i v35; // xmm0
  size_t v36; // rdx
  void *v37; // rax
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __m128i v40; // xmm0
  unsigned __int64 v41; // rbp
  __m128i *v42; // rsi
  __m128i v43; // xmm0
  size_t v44; // rbp
  size_t v45; // rbp
  __m128i v46; // xmm0
  __int64 v47; // rdx
  __int64 v48; // rsi
  __m128i v49; // xmm0
  __int64 v50; // rbp
  void *v51; // rax
  __m128i v52; // xmm0
  __m128i v53; // xmm0
  unsigned __int64 v54; // rax
  __m128i v55; // xmm0
  const char *v56; // rsi
  __m128i v57; // xmm0
  size_t v58; // rbp
  size_t v59; // rbp
  __m128i v60; // xmm0
  __int64 v61; // rsi
  __m128i v62; // xmm0
  __int64 v63; // rax
  __int64 v64; // rbp
  void *v65; // rax
  __m128i v66; // xmm0
  __m128i v67; // xmm0
  unsigned __int64 v68; // rax
  __m128i v69; // xmm0
  void *v70; // rax
  __int64 v71; // rax
  void *v72; // rax
  void *v73; // rax
  void *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  void *v77; // rax
  unsigned __int64 *v79; // rax
  unsigned __int64 v80; // rbp
  int v81; // eax
  unsigned __int64 v82; // rbp
  __m128i *v83; // rsi
  __m128i v84; // xmm0
  size_t v85; // rbp
  size_t v86; // rbp
  __m128i v87; // xmm0
  __int64 v88; // rsi
  __m128i v89; // xmm0
  __int64 v90; // rax
  __int64 v91; // rbp
  void *v92; // rax
  __m128i v93; // xmm0
  __m128i v94; // xmm1
  unsigned __int64 v95; // rax
  __m128i v96; // xmm0
  const char *v97; // rsi
  __m128i v98; // xmm1
  size_t v99; // r14
  size_t v100; // r14
  __m128i v101; // xmm0
  __int64 v102; // rsi
  __m128i v103; // xmm0
  __int64 v104; // rax
  __int64 v105; // rax
  void *v106; // rdx
  __m128i v107; // xmm0
  __m128i v108; // xmm1
  __m128i v109; // xmm0
  void *v110; // rax
  void *v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  void *v114; // rax
  void *v115; // rax
  __int64 v116; // [rsp+0h] [rbp-178h]
  __int64 v117; // [rsp+0h] [rbp-178h]
  __int64 *v118; // [rsp+8h] [rbp-170h]
  size_t v119; // [rsp+10h] [rbp-168h]
  __int64 v120; // [rsp+10h] [rbp-168h]
  __int64 v121; // [rsp+10h] [rbp-168h]
  __int64 v122; // [rsp+28h] [rbp-150h] BYREF
  __m128i v123; // [rsp+30h] [rbp-148h] BYREF
  void *src; // [rsp+40h] [rbp-138h] BYREF
  size_t n[2]; // [rsp+48h] [rbp-130h]
  void *v126; // [rsp+58h] [rbp-120h]
  size_t v127[2]; // [rsp+60h] [rbp-118h]
  __int128 v128; // [rsp+70h] [rbp-108h] BYREF
  __m128i v129; // [rsp+88h] [rbp-F0h] BYREF
  unsigned __int64 v130; // [rsp+98h] [rbp-E0h]
  __int64 v131; // [rsp+A0h] [rbp-D8h]
  char v132; // [rsp+A8h] [rbp-D0h]
  __m128i v133; // [rsp+B0h] [rbp-C8h] BYREF
  void *v134; // [rsp+C0h] [rbp-B8h]
  __m128i v135; // [rsp+C8h] [rbp-B0h] BYREF
  void *ptr; // [rsp+D8h] [rbp-A0h]
  __m128i v137; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v138; // [rsp+F0h] [rbp-88h] BYREF
  __m128i v139; // [rsp+F8h] [rbp-80h] BYREF
  __m128i v140; // [rsp+108h] [rbp-70h] BYREF
  unsigned __int64 v141; // [rsp+118h] [rbp-60h]
  __int64 v142; // [rsp+120h] [rbp-58h]
  char v143; // [rsp+128h] [rbp-50h]
  unsigned __int64 v144; // [rsp+138h] [rbp-40h]

  v3 = (char *)a2;
  v4 = *a3;
  v144 = __readfsqword(0x28u);
  v6 = (_QWORD)a3[1] << 7;
  if ( (unsigned __int64 *)((char *)v4 + v6) != v4 )
  {
    v118 = (__int64 *)((char *)v4 + v6);
    v7 = v4;
    v8 = 0;
    while ( 1 )
    {
      v23 = *(double *)v7;
      if ( *v7 < v8 )
        return 0;
      if ( *v7 != v8 )
        break;
LABEL_21:
      v25 = _mm_loadh_ps((const double *)v7 + 1);
      v135 = 0;
      v134 = nullptr;
      v133 = (__m128i)v25;
      v26 = v7[3];
      if ( v26 )
      {
        v27 = (void *)qalloc_or_throw(v7[3], a2);
        v135.m128i_i64[1] = v26;
        v134 = v27;
        a2 = (const char *)v7[2];
        memcpy(v27, a2, v26);
        v135.m128i_i64[0] = v26;
      }
      ptr = nullptr;
      v137 = 0;
      v9 = v7[6];
      if ( v9 )
      {
        v29 = (void *)qalloc_or_throw(v7[6], a2);
        v137.m128i_i64[1] = v9;
        ptr = v29;
        memcpy(v29, (const void *)v7[5], v9);
        v137.m128i_i64[0] = v9;
      }
      v138 = 0;
      copy_tinfo_t(&v138);
      v10 = _mm_loadu_si128((const __m128i *)(v7 + 9));
      v11 = *(_QWORD *)v3;
      v141 = v7[13];
      v12 = *((_DWORD *)v7 + 28);
      v139 = v10;
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 11));
      LODWORD(v142) = v12;
      v14 = *((_DWORD *)v7 + 29);
      v140 = v13;
      HIDWORD(v142) = v14;
      v143 = *((_BYTE *)v7 + 120);
      v15 = *((_QWORD *)v3 + 1);
      if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v15 + 1) )
      {
        v28 = qvector_reserve(v3, v11, v15 + 1, 128);
        *(_QWORD *)v3 = v28;
        v11 = v28;
        v15 = *((_QWORD *)v3 + 1);
      }
      v16 = v11 + (v15 << 7);
      a2 = (const char *)&v138;
      *(__m128i *)v16 = _mm_load_si128(&v133);
      v17 = v134;
      v18 = _mm_loadu_si128(&v135);
      v134 = nullptr;
      *(_QWORD *)(v16 + 16) = v17;
      *(__m128i *)(v16 + 24) = v18;
      v19 = _mm_load_si128(&v137);
      v135 = 0;
      v137 = 0;
      *(_QWORD *)(v16 + 40) = ptr;
      ptr = nullptr;
      *(_QWORD *)(v16 + 64) = 0;
      *(__m128i *)(v16 + 48) = v19;
      copy_tinfo_t(v16 + 64);
      v20 = v141;
      *(__m128i *)(v16 + 72) = _mm_loadu_si128(&v139);
      v21 = _mm_loadu_si128(&v140);
      *(_QWORD *)(v16 + 104) = v20;
      *(__m128i *)(v16 + 88) = v21;
      *(_QWORD *)(v16 + 112) = v142;
      *(_BYTE *)(v16 + 120) = v143;
      ++*((_QWORD *)v3 + 1);
      clear_tinfo_t(&v138);
      if ( ptr )
      {
        v137.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v134 )
      {
        v135.m128i_i64[0] = 0;
        qfree(v134);
      }
      v22 = _mm_loadu_si128((const __m128i *)v7);
      v7 += 16;
      v8 = _mm_add_epi64(v22, _mm_srli_si128(v22, 8)).m128i_u64[0];
      if ( v118 == (__int64 *)v7 )
        goto LABEL_59;
    }
    v123 = 0;
    *(_OWORD *)n = 0;
    v24 = *(_QWORD *)&v23 - v8 - (-(int)v8 & 7);
    *(_OWORD *)v127 = 0;
    v128 = 0;
    src = nullptr;
    v116 = v24 & 7;
    v126 = nullptr;
    v129.m128i_i64[1] = 1;
    LODWORD(v130) = -1;
    v131 = 0;
    v132 = 0;
    if ( (-(int)v8 & 7) != 0 )
    {
      v30 = byte_9 + 5;
      v123.m128i_i64[0] = v8;
      v123.m128i_i64[1] = -(int)v8 & 7;
      v133.m128i_i8[0] = 1;
      *(__int16 *)((char *)v133.m128i_i16 + 1) = -(char)v8 & 7;
      create_tinfo(&v128, 14, 14, &v133);
      v31 = _mm_load_si128(&v123);
      v134 = nullptr;
      v133 = v31;
      v135 = 0;
      if ( n[0] )
      {
        v121 = n[0];
        v77 = (void *)qalloc_or_throw(n[0], &byte_9[5]);
        v30 = (const char *)src;
        v134 = v77;
        v135.m128i_i64[1] = v121;
        memcpy(v77, src, v121);
        v135.m128i_i64[0] = v121;
      }
      ptr = nullptr;
      v137 = 0;
      if ( v127[0] )
      {
        v120 = v127[0];
        ptr = (void *)qalloc_or_throw(v127[0], v30);
        v137.m128i_i64[1] = v120;
        memcpy(ptr, v126, v120);
        v137.m128i_i64[0] = v120;
      }
      v138 = 0;
      copy_tinfo_t(&v138);
      v32 = _mm_loadu_si128((const __m128i *)((char *)&v128 + 8));
      v33 = *((_QWORD *)v3 + 1);
      v34 = *(_QWORD *)v3;
      v141 = v130;
      v139 = v32;
      v35 = _mm_loadu_si128(&v129);
      v142 = v131;
      v140 = v35;
      v143 = v132;
      if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v33 + 1) )
      {
        v76 = qvector_reserve(v3, v34, v33 + 1, 128);
        v33 = *((_QWORD *)v3 + 1);
        *(_QWORD *)v3 = v76;
        v34 = v76;
      }
      v36 = v34 + (v33 << 7);
      a2 = (const char *)&v138;
      *(__m128i *)v36 = _mm_load_si128(&v133);
      v37 = v134;
      v38 = _mm_loadu_si128(&v135);
      v134 = nullptr;
      *(_QWORD *)(v36 + 16) = v37;
      *(__m128i *)(v36 + 24) = v38;
      v39 = _mm_load_si128(&v137);
      v135 = 0;
      v137 = 0;
      *(_QWORD *)(v36 + 40) = ptr;
      ptr = nullptr;
      *(_QWORD *)(v36 + 64) = 0;
      *(__m128i *)(v36 + 48) = v39;
      v119 = v36;
      copy_tinfo_t(v36 + 64);
      v40 = _mm_loadu_si128(&v139);
      *(_QWORD *)(v119 + 104) = v141;
      *(__m128i *)(v119 + 72) = v40;
      *(__m128i *)(v119 + 88) = _mm_loadu_si128(&v140);
      *(_QWORD *)(v119 + 112) = v142;
      *(_BYTE *)(v119 + 120) = v143;
      ++*((_QWORD *)v3 + 1);
      clear_tinfo_t(&v138);
      if ( ptr )
      {
        v137.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v134 )
      {
        v135.m128i_i64[0] = 0;
        qfree(v134);
      }
      v8 += v123.m128i_u64[1];
      if ( v24 <= 7 )
      {
LABEL_16:
        if ( (v24 & 7) == 0 )
        {
LABEL_17:
          clear_tinfo_t(&v128);
          if ( v126 )
          {
            v127[0] = 0;
            qfree(v126);
          }
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
          goto LABEL_21;
        }
LABEL_47:
        v56 = byte_9 + 5;
        v123.m128i_i64[0] = v8;
        n[0] = 0;
        v123.m128i_i64[1] = v116;
        v133.m128i_i8[0] = 1;
        *(__int16 *)((char *)v133.m128i_i16 + 1) = (unsigned __int8)v116;
        create_tinfo(&v128, 14, 14, &v133);
        v57 = _mm_load_si128(&v123);
        v58 = n[0];
        v134 = nullptr;
        v133 = v57;
        v135 = 0;
        if ( n[0] )
        {
          v74 = (void *)qalloc_or_throw(n[0], &byte_9[5]);
          v56 = (const char *)src;
          v135.m128i_i64[1] = v58;
          v134 = v74;
          memcpy(v74, src, v58);
          v135.m128i_i64[0] = v58;
        }
        v59 = v127[0];
        ptr = nullptr;
        v137 = 0;
        if ( v127[0] )
        {
          v73 = (void *)qalloc_or_throw(v127[0], v56);
          v137.m128i_i64[1] = v59;
          ptr = v73;
          memcpy(v73, v126, v59);
          v137.m128i_i64[0] = v59;
        }
        v138 = 0;
        copy_tinfo_t(&v138);
        v60 = _mm_loadu_si128((const __m128i *)((char *)&v128 + 8));
        v61 = *(_QWORD *)v3;
        v141 = v130;
        v139 = v60;
        v62 = _mm_loadu_si128(&v129);
        v142 = v131;
        v140 = v62;
        v143 = v132;
        v63 = *((_QWORD *)v3 + 1);
        if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v63 + 1) )
        {
          v75 = qvector_reserve(v3, v61, v63 + 1, 128);
          *(_QWORD *)v3 = v75;
          v61 = v75;
          v63 = *((_QWORD *)v3 + 1);
        }
        v64 = v61 + (v63 << 7);
        a2 = (const char *)&v138;
        *(__m128i *)v64 = _mm_load_si128(&v133);
        v65 = v134;
        v66 = _mm_loadu_si128(&v135);
        v134 = nullptr;
        *(_QWORD *)(v64 + 16) = v65;
        *(__m128i *)(v64 + 24) = v66;
        v67 = _mm_load_si128(&v137);
        v135 = 0;
        v137 = 0;
        *(_QWORD *)(v64 + 40) = ptr;
        ptr = nullptr;
        *(_QWORD *)(v64 + 64) = 0;
        *(__m128i *)(v64 + 48) = v67;
        copy_tinfo_t(v64 + 64);
        v68 = v141;
        *(__m128i *)(v64 + 72) = _mm_loadu_si128(&v139);
        v69 = _mm_loadu_si128(&v140);
        *(_QWORD *)(v64 + 104) = v68;
        *(__m128i *)(v64 + 88) = v69;
        *(_QWORD *)(v64 + 112) = v142;
        *(_BYTE *)(v64 + 120) = v143;
        ++*((_QWORD *)v3 + 1);
        clear_tinfo_t(&v138);
        if ( ptr )
        {
          v137.m128i_i64[0] = 0;
          qfree(ptr);
        }
        if ( v134 )
        {
          v135.m128i_i64[0] = 0;
          qfree(v134);
        }
        goto LABEL_17;
      }
    }
    else if ( v24 <= 7 )
    {
      goto LABEL_16;
    }
    v41 = v24 >> 3;
    sub_3573A0((char **)&src);
    v123.m128i_i64[0] = v8;
    v123.m128i_i64[1] = 8 * (int)v41;
    if ( (_DWORD)v41 == 1 )
    {
      v133.m128i_i64[0] = 50;
      v42 = &v133;
      copy_tinfo_t(&v128);
      clear_tinfo_t(&v133);
    }
    else
    {
      v122 = 50;
      v133.m128i_i32[2] = 0;
      v133.m128i_i32[3] = v41;
      v133.m128i_i64[0] = 0;
      copy_tinfo_t(&v133);
      v42 = (__m128i *)(byte_9 + 2);
      create_tinfo(&v128, 11, 11, &v133);
      clear_tinfo_t(&v133);
      clear_tinfo_t(&v122);
    }
    v43 = _mm_load_si128(&v123);
    v44 = n[0];
    v134 = nullptr;
    v135 = 0;
    v133 = v43;
    if ( n[0] )
    {
      v70 = (void *)qalloc_or_throw(n[0], v42->m128i_i8);
      v42 = (__m128i *)src;
      v135.m128i_i64[1] = v44;
      v134 = v70;
      memcpy(v70, src, v44);
      v135.m128i_i64[0] = v44;
    }
    v45 = v127[0];
    ptr = nullptr;
    v137 = 0;
    if ( v127[0] )
    {
      v72 = (void *)qalloc_or_throw(v127[0], v42->m128i_i8);
      v137.m128i_i64[1] = v45;
      ptr = v72;
      memcpy(v72, v126, v45);
      v137.m128i_i64[0] = v45;
    }
    v138 = 0;
    copy_tinfo_t(&v138);
    v46 = _mm_loadu_si128((const __m128i *)((char *)&v128 + 8));
    v47 = *((_QWORD *)v3 + 1);
    v48 = *(_QWORD *)v3;
    v141 = v130;
    v139 = v46;
    v49 = _mm_loadu_si128(&v129);
    v142 = v131;
    v140 = v49;
    v143 = v132;
    if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v47 + 1) )
    {
      v71 = qvector_reserve(v3, v48, v47 + 1, 128);
      v47 = *((_QWORD *)v3 + 1);
      *(_QWORD *)v3 = v71;
      v48 = v71;
    }
    v50 = v48 + (v47 << 7);
    a2 = (const char *)&v138;
    *(__m128i *)v50 = _mm_load_si128(&v133);
    v51 = v134;
    v52 = _mm_loadu_si128(&v135);
    v134 = nullptr;
    *(_QWORD *)(v50 + 16) = v51;
    *(__m128i *)(v50 + 24) = v52;
    v53 = _mm_load_si128(&v137);
    v135 = 0;
    v137 = 0;
    *(_QWORD *)(v50 + 40) = ptr;
    ptr = nullptr;
    *(_QWORD *)(v50 + 64) = 0;
    *(__m128i *)(v50 + 48) = v53;
    copy_tinfo_t(v50 + 64);
    v54 = v141;
    *(__m128i *)(v50 + 72) = _mm_loadu_si128(&v139);
    v55 = _mm_loadu_si128(&v140);
    *(_QWORD *)(v50 + 104) = v54;
    *(__m128i *)(v50 + 88) = v55;
    *(_QWORD *)(v50 + 112) = v142;
    *(_BYTE *)(v50 + 120) = v143;
    ++*((_QWORD *)v3 + 1);
    clear_tinfo_t(&v138);
    if ( ptr )
    {
      v137.m128i_i64[0] = 0;
      qfree(ptr);
    }
    if ( v134 )
    {
      v135.m128i_i64[0] = 0;
      qfree(v134);
    }
    v8 += v123.m128i_u64[1];
    if ( !v116 )
      goto LABEL_17;
    goto LABEL_47;
  }
  v8 = 0;
LABEL_59:
  v79 = a3[3];
  if ( v8 < 8 * (__int64)v79 )
  {
    src = nullptr;
    v123 = 0;
    *(_OWORD *)n = 0;
    v126 = nullptr;
    v80 = 8LL * (_QWORD)v79 - v8 - (-(int)v8 & 7);
    v129.m128i_i64[1] = 1;
    LODWORD(v130) = -1;
    v131 = 0;
    v132 = 0;
    *(_OWORD *)v127 = 0;
    v128 = 0;
    if ( (-(int)v8 & 7) != 0 )
    {
      v97 = byte_9 + 5;
      v123.m128i_i64[0] = v8;
      v123.m128i_i64[1] = -(int)v8 & 7;
      v133.m128i_i8[0] = 1;
      *(__int16 *)((char *)v133.m128i_i16 + 1) = -(char)v8 & 7;
      create_tinfo(&v128, 14, 14, &v133);
      v98 = _mm_load_si128(&v123);
      v99 = n[0];
      v134 = nullptr;
      v133 = v98;
      v135 = 0;
      if ( n[0] )
      {
        v115 = (void *)qalloc_or_throw(n[0], &byte_9[5]);
        v97 = (const char *)src;
        v135.m128i_i64[1] = v99;
        v134 = v115;
        memcpy(v115, src, v99);
        v135.m128i_i64[0] = v99;
      }
      v100 = v127[0];
      ptr = nullptr;
      v137 = 0;
      if ( v127[0] )
      {
        v114 = (void *)qalloc_or_throw(v127[0], v97);
        v137.m128i_i64[1] = v100;
        ptr = v114;
        memcpy(v114, v126, v100);
        v137.m128i_i64[0] = v100;
      }
      v138 = 0;
      copy_tinfo_t(&v138);
      v101 = _mm_loadu_si128((const __m128i *)((char *)&v128 + 8));
      v102 = *(_QWORD *)v3;
      v141 = v130;
      v139 = v101;
      v103 = _mm_loadu_si128(&v129);
      v142 = v131;
      v140 = v103;
      v143 = v132;
      v104 = *((_QWORD *)v3 + 1);
      if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v104 + 1) )
      {
        v112 = qvector_reserve(v3, v102, v104 + 1, 128);
        *(_QWORD *)v3 = v112;
        v102 = v112;
        v104 = *((_QWORD *)v3 + 1);
      }
      v105 = v102 + (v104 << 7);
      *(__m128i *)v105 = _mm_load_si128(&v133);
      v106 = v134;
      v107 = _mm_loadu_si128(&v135);
      v134 = nullptr;
      *(__m128i *)(v105 + 24) = v107;
      *(_QWORD *)(v105 + 16) = v106;
      v108 = _mm_load_si128(&v137);
      v135 = 0;
      v137 = 0;
      *(_QWORD *)(v105 + 40) = ptr;
      ptr = nullptr;
      *(_QWORD *)(v105 + 64) = 0;
      *(__m128i *)(v105 + 48) = v108;
      v117 = v105;
      copy_tinfo_t(v105 + 64);
      v109 = _mm_loadu_si128(&v139);
      *(_QWORD *)(v117 + 104) = v141;
      *(__m128i *)(v117 + 72) = v109;
      *(__m128i *)(v117 + 88) = _mm_loadu_si128(&v140);
      *(_QWORD *)(v117 + 112) = v142;
      *(_BYTE *)(v117 + 120) = v143;
      ++*((_QWORD *)v3 + 1);
      clear_tinfo_t(&v138);
      if ( ptr )
      {
        v137.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v134 )
      {
        v135.m128i_i64[0] = 0;
        qfree(v134);
      }
      v8 += v123.m128i_u64[1];
    }
    if ( v80 > 7 )
    {
      v82 = v80 >> 3;
      sub_3573A0((char **)&src);
      v123.m128i_i64[0] = v8;
      v123.m128i_i64[1] = 8 * (int)v82;
      if ( (_DWORD)v82 == 1 )
      {
        v133.m128i_i64[0] = 50;
        v83 = &v133;
        copy_tinfo_t(&v128);
        clear_tinfo_t(&v133);
      }
      else
      {
        v122 = 50;
        v133.m128i_i32[2] = 0;
        v133.m128i_i32[3] = v82;
        v133.m128i_i64[0] = 0;
        copy_tinfo_t(&v133);
        v83 = (__m128i *)(byte_9 + 2);
        create_tinfo(&v128, 11, 11, &v133);
        clear_tinfo_t(&v133);
        clear_tinfo_t(&v122);
      }
      v84 = _mm_load_si128(&v123);
      v85 = n[0];
      v134 = nullptr;
      v133 = v84;
      v135 = 0;
      if ( n[0] )
      {
        v111 = (void *)qalloc_or_throw(n[0], v83->m128i_i8);
        v83 = (__m128i *)src;
        v135.m128i_i64[1] = v85;
        v134 = v111;
        memcpy(v111, src, v85);
        v135.m128i_i64[0] = v85;
      }
      v86 = v127[0];
      ptr = nullptr;
      v137 = 0;
      if ( v127[0] )
      {
        v110 = (void *)qalloc_or_throw(v127[0], v83->m128i_i8);
        v137.m128i_i64[1] = v86;
        ptr = v110;
        memcpy(v110, v126, v86);
        v137.m128i_i64[0] = v86;
      }
      v138 = 0;
      copy_tinfo_t(&v138);
      v87 = _mm_loadu_si128((const __m128i *)((char *)&v128 + 8));
      v88 = *(_QWORD *)v3;
      v141 = v130;
      v139 = v87;
      v89 = _mm_loadu_si128(&v129);
      v142 = v131;
      v140 = v89;
      v143 = v132;
      v90 = *((_QWORD *)v3 + 1);
      if ( *((_QWORD *)v3 + 2) < (unsigned __int64)(v90 + 1) )
      {
        v113 = qvector_reserve(v3, v88, v90 + 1, 128);
        *(_QWORD *)v3 = v113;
        v88 = v113;
        v90 = *((_QWORD *)v3 + 1);
      }
      v91 = v88 + (v90 << 7);
      *(__m128i *)v91 = _mm_load_si128(&v133);
      v92 = v134;
      v93 = _mm_loadu_si128(&v135);
      v134 = nullptr;
      *(__m128i *)(v91 + 24) = v93;
      *(_QWORD *)(v91 + 16) = v92;
      v94 = _mm_load_si128(&v137);
      v135 = 0;
      v137 = 0;
      *(_QWORD *)(v91 + 40) = ptr;
      ptr = nullptr;
      *(_QWORD *)(v91 + 64) = 0;
      *(__m128i *)(v91 + 48) = v94;
      copy_tinfo_t(v91 + 64);
      v95 = v141;
      *(__m128i *)(v91 + 72) = _mm_loadu_si128(&v139);
      v96 = _mm_loadu_si128(&v140);
      *(_QWORD *)(v91 + 104) = v95;
      *(__m128i *)(v91 + 88) = v96;
      *(_QWORD *)(v91 + 112) = v142;
      *(_BYTE *)(v91 + 120) = v143;
      ++*((_QWORD *)v3 + 1);
      clear_tinfo_t(&v138);
      if ( ptr )
      {
        v137.m128i_i64[0] = 0;
        qfree(ptr);
      }
      if ( v134 )
      {
        v135.m128i_i64[0] = 0;
        qfree(v134);
      }
    }
    clear_tinfo_t(&v128);
    if ( v126 )
    {
      v127[0] = 0;
      qfree(v126);
    }
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    v79 = a3[3];
  }
  *((_QWORD *)v3 + 3) = v79;
  v81 = *((_DWORD *)a3 + 11);
  *((_DWORD *)v3 + 10) = 1;
  *((_DWORD *)v3 + 11) = v81 | 0x40;
  return 1;
}

