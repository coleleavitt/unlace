__int64 __fastcall sub_2FDB50(
        __int64 a1,
        const char **a2,
        __int64 *a3,
        __int16 a4,
        char **a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12)
{
  __int64 *idp_descs; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // r15
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rax
  __m128i si128; // xmm0
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  const char *v29; // rcx
  const char *v30; // rdx
  const char *v31; // rsi
  size_t v32; // r15
  __int64 v33; // r12
  __int64 v34; // rbx
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdx
  __int64 *v38; // rbx
  __int64 *v39; // rdi
  char *v40; // rbx
  unsigned int basic_file_type; // eax
  const char *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  signed __int64 v45; // r8
  __int64 v46; // r9
  __m128 v47; // xmm0
  __int64 v48; // rax
  void *v49; // r12
  _QWORD *v50; // rbx
  __int64 v51; // rdx
  _QWORD *i; // r15
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdi
  _QWORD *v56; // rbx
  __int64 v57; // r15
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  const char *v61; // rsi
  signed __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  unsigned __int64 v67; // r15
  const char *v68; // rax
  size_t v69; // rax
  const char *v70; // r12
  size_t v71; // rdx
  const char *p_src; // rsi
  double v73; // xmm4_8
  double v74; // xmm5_8
  unsigned int v75; // eax
  double v76; // xmm4_8
  double v77; // xmm5_8
  __int64 v78; // r12
  size_t v79; // rax
  size_t v80; // r15
  size_t v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  __m128 v86; // xmm4
  __m128 v87; // xmm5
  size_t v88; // rbx
  __int64 v89; // rbx
  const char *v90; // rsi
  const char *v91; // r15
  size_t v92; // rax
  double v93; // xmm4_8
  double v94; // xmm5_8
  void *v95; // r8
  const char *v96; // rdi
  int v97; // eax
  __int64 v98; // rdi
  char *v99; // rbx
  char *v100; // r14
  __int64 v101; // rdi
  __int64 v102; // rdi
  __int64 v103; // rdi
  __int64 v104; // [rsp-10h] [rbp-1D0h]
  char v105; // [rsp+0h] [rbp-1C0h]
  __int64 *v110; // [rsp+28h] [rbp-198h]
  char *s; // [rsp+30h] [rbp-190h]
  unsigned __int8 v112; // [rsp+3Ah] [rbp-186h]
  char v113; // [rsp+3Bh] [rbp-185h]
  __int16 v114[6]; // [rsp+3Ch] [rbp-184h] BYREF
  __int64 v115; // [rsp+48h] [rbp-178h] BYREF
  void *v116[2]; // [rsp+50h] [rbp-170h] BYREF
  __int64 v117; // [rsp+60h] [rbp-160h]
  __int64 v118; // [rsp+70h] [rbp-150h] BYREF
  __int128 v119; // [rsp+78h] [rbp-148h]
  void *src; // [rsp+90h] [rbp-130h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-128h]
  void *v122; // [rsp+A8h] [rbp-118h]
  size_t v123; // [rsp+B0h] [rbp-110h]
  void *v124; // [rsp+C0h] [rbp-100h]
  size_t v125; // [rsp+C8h] [rbp-F8h]
  void *v126; // [rsp+D8h] [rbp-E8h]
  size_t v127; // [rsp+E0h] [rbp-E0h]
  __m128i ptr[8]; // [rsp+F0h] [rbp-D0h] BYREF
  char v129[24]; // [rsp+170h] [rbp-50h] BYREF
  unsigned __int64 v130; // [rsp+188h] [rbp-38h]

  v114[0] = a4;
  v130 = __readfsqword(0x28u);
  v112 = a5 == nullptr || a3 == nullptr;
  if ( v112 )
    return 0;
  if ( !(_QWORD)xmmword_8CD518 )
  {
    idp_descs = (__int64 *)get_idp_descs();
    v14 = idp_descs[1];
    v15 = *idp_descs;
    v110 = idp_descs;
    s = (char *)*idp_descs;
    if ( 88 * v14 )
    {
      do
      {
        v16 = *((_QWORD *)s + 8);
        v17 = *((_QWORD *)s + 7);
        v18 = v17;
        if ( 56 * v16 )
        {
          do
          {
            if ( !*(_BYTE *)(v18 + 48) )
            {
              v29 = &s1;
              if ( *(_QWORD *)(v18 + 32) )
                v29 = *(const char **)(v18 + 24);
              v30 = &s1;
              if ( *(_QWORD *)(v18 + 8) )
                v30 = *(const char **)v18;
              v31 = &s1;
              if ( *((_QWORD *)s + 5) )
                v31 = *((const char **)s + 4);
              sub_2E4F70((__int64)&src, v31, v30, v29);
              v32 = n[0];
              a9 = 0;
              memset(ptr, 0, 24);
              if ( n[0] )
              {
                ptr[0].m128i_i64[0] = qalloc_or_throw(n[0]);
                ptr[1].m128i_i64[0] = v32;
                memcpy((void *)ptr[0].m128i_i64[0], src, v32);
                ptr[0].m128i_i64[1] = v32;
              }
              v19 = v123;
              ptr[1].m128i_i64[1] = 0;
              ptr[2] = 0;
              if ( v123 )
              {
                ptr[1].m128i_i64[1] = qalloc_or_throw(v123);
                ptr[2].m128i_i64[1] = v19;
                memcpy((void *)ptr[1].m128i_i64[1], v122, v19);
                ptr[2].m128i_i64[0] = v19;
              }
              v20 = v125;
              memset(&ptr[3], 0, 24);
              if ( v125 )
              {
                ptr[3].m128i_i64[0] = qalloc_or_throw(v125);
                ptr[4].m128i_i64[0] = v20;
                memcpy((void *)ptr[3].m128i_i64[0], v124, v20);
                ptr[3].m128i_i64[1] = v20;
              }
              v21 = v127;
              a12 = 0;
              ptr[4].m128i_i64[1] = 0;
              ptr[5] = 0;
              if ( v127 )
              {
                ptr[4].m128i_i64[1] = qalloc_or_throw(v127);
                ptr[5].m128i_i64[1] = v21;
                memcpy((void *)ptr[4].m128i_i64[1], v126, v21);
                ptr[5].m128i_i64[0] = v21;
              }
              v22 = xmmword_8CD518;
              v23 = qword_8CD510;
              if ( *((_QWORD *)&xmmword_8CD518 + 1) < (unsigned __int64)(xmmword_8CD518 + 1) )
              {
                qword_8CD510 = qvector_reserve(&qword_8CD510, qword_8CD510, xmmword_8CD518 + 1, 96);
                v23 = qword_8CD510;
                v22 = xmmword_8CD518;
              }
              v24 = 96 * v22 + v23;
              v25 = ptr[0].m128i_i64[0];
              *(__m128i *)(v24 + 8) = _mm_loadu_si128((const __m128i *)&ptr[0].m128i_u64[1]);
              *(_QWORD *)v24 = v25;
              si128 = _mm_load_si128(&ptr[2]);
              *(_QWORD *)&xmmword_8CD518 = xmmword_8CD518 + 1;
              *(_QWORD *)(v24 + 24) = ptr[1].m128i_i64[1];
              *(__m128i *)(v24 + 32) = si128;
              v27 = _mm_loadu_si128((const __m128i *)&ptr[3].m128i_u64[1]);
              *(_QWORD *)(v24 + 48) = ptr[3].m128i_i64[0];
              *(__m128i *)(v24 + 56) = v27;
              v28 = _mm_load_si128(&ptr[5]);
              *(_QWORD *)(v24 + 72) = ptr[4].m128i_i64[1];
              *(__m128i *)(v24 + 80) = v28;
              if ( v126 )
              {
                v127 = 0;
                *(double *)v28.m128i_i64 = qfree(v126, (const char *)v24);
              }
              if ( v124 )
              {
                v125 = 0;
                *(double *)v28.m128i_i64 = qfree(v124, (const char *)v24, *(double *)v28.m128i_i64);
              }
              if ( v122 )
              {
                v123 = 0;
                *(double *)v28.m128i_i64 = qfree(v122, (const char *)v24, *(double *)v28.m128i_i64);
              }
              if ( src )
              {
                n[0] = 0;
                qfree(src, (const char *)v24, *(double *)v28.m128i_i64);
              }
              v17 = *((_QWORD *)s + 7);
              v16 = *((_QWORD *)s + 8);
            }
            v18 += 56;
          }
          while ( v18 != v17 + 56 * v16 );
          v15 = *v110;
          v14 = v110[1];
        }
        s += 88;
      }
      while ( s != (char *)(v15 + 88 * v14) );
    }
    v33 = qword_8CD510;
    v34 = 96 * xmmword_8CD518;
    v35 = qword_8CD510 + 96 * xmmword_8CD518;
    if ( qword_8CD510 != v35 )
    {
      v36 = 0xAAAAAAAAAAAAAAABLL * (v34 >> 5);
      if ( v36 )
      {
        _BitScanReverse64(&v37, v36);
        sub_2FAA00(qword_8CD510, v35, 2LL * (int)v37);
        if ( v34 > 1536 )
        {
          v38 = (__int64 *)(v33 + 1536);
          sub_2F6AD0(v33, v33 + 1536);
          do
          {
            v39 = v38;
            v38 += 12;
            sub_2F6740(v39);
          }
          while ( (__int64 *)v35 != v38 );
          goto LABEL_42;
        }
      }
      else
      {
        sub_2FAA00(qword_8CD510, v35, -2);
      }
      sub_2F6AD0(v33, v35);
    }
  }
LABEL_42:
  v117 = 0;
  *(_OWORD *)v116 = 0;
  while ( 1 )
  {
    v113 = batch;
    if ( !batch )
      v113 = is_debugger_on();
    v40 = *a5;
    basic_file_type = get_basic_file_type(*a3);
    setinf(5, basic_file_type);
    v42 = v40;
    sub_2FC9F0(ptr, v40, v43, v44, v45, v46);
    v47 = (__m128)_mm_load_si128(ptr);
    v48 = ptr[1].m128i_i64[0];
    v49 = v116[0];
    v50 = v116[1];
    memset(ptr, 0, 24);
    v51 = v117;
    *(__m128 *)v116 = v47;
    v117 = v48;
    if ( v49 )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)v49, 1u) )
      {
        for ( i = &v50[12 * v51]; i != v50; v50 += 12 )
        {
          v53 = v50[7];
          if ( v53 )
          {
            v50[8] = 0;
            *(double *)v47.m128_u64 = qfree(v53, v42);
          }
          v54 = v50[4];
          if ( v54 )
          {
            v50[5] = 0;
            *(double *)v47.m128_u64 = qfree(v54, v42, *(double *)v47.m128_u64);
          }
          v55 = v50[1];
          if ( v55 )
          {
            v50[2] = 0;
            *(double *)v47.m128_u64 = qfree(v55, v42, *(double *)v47.m128_u64);
          }
        }
        free(v49);
      }
      if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
      {
        v56 = (_QWORD *)ptr[0].m128i_i64[1];
        v57 = ptr[0].m128i_i64[1] + 96 * ptr[1].m128i_i64[0];
        if ( ptr[0].m128i_i64[1] != v57 )
        {
          do
          {
            v58 = v56[7];
            if ( v58 )
            {
              v56[8] = 0;
              *(double *)v47.m128_u64 = qfree(v58, v42, v51);
            }
            v59 = v56[4];
            if ( v59 )
            {
              v56[5] = 0;
              *(double *)v47.m128_u64 = qfree(v59, v42, v51, *(double *)v47.m128_u64);
            }
            v60 = v56[1];
            if ( v60 )
            {
              v56[2] = 0;
              *(double *)v47.m128_u64 = qfree(v60, v42, v51, *(double *)v47.m128_u64);
            }
            v56 += 12;
          }
          while ( (_QWORD *)v57 != v56 );
        }
        free((void *)ptr[0].m128i_i64[0]);
      }
    }
    memset(ptr, 0, 0x60u);
    ptr[5].m128i_i32[0] = 2;
    ptr[2].m128i_i64[0] = qvector_reserve(&ptr[2], 0, 12, 1);
    ptr[2].m128i_i64[1] = 12;
    strcpy((char *)ptr[2].m128i_i64[0], "Binary file");
    v61 = (const char *)v117;
    sub_2FB690((__m128i *)v116, v117, (__int64)ptr, 0x66207972616E6942LL, v62, v63);
    if ( !v116[0] || *(int *)v116[0] > 1 )
    {
      v61 = nullptr;
      sub_2F8810((__m128i *)v116, 0, 0, 0, v64, v65);
    }
    if ( ptr[3].m128i_i64[1] )
    {
      ptr[4].m128i_i64[0] = 0;
      *(double *)v47.m128_u64 = qfree(ptr[3].m128i_i64[1], v61);
    }
    if ( ptr[2].m128i_i64[0] )
    {
      ptr[2].m128i_i64[1] = 0;
      *(double *)v47.m128_u64 = qfree(ptr[2].m128i_i64[0], v61, *(double *)v47.m128_u64);
    }
    if ( ptr[0].m128i_i64[1] )
    {
      ptr[1].m128i_i64[0] = 0;
      *(double *)v47.m128_u64 = qfree(ptr[0].m128i_i64[1], v61, *(double *)v47.m128_u64);
    }
    while ( 1 )
    {
      v115 = 0;
      v66 = (*(__int64 (__fastcall **)(_QWORD *, double))(*QT::QCoreApplication::self + 112LL))(
              QT::QCoreApplication::self,
              *(double *)v47.m128_u64);
      sub_2FD6B0((__int64)ptr, v66);
      v119 = 0;
      ptr[3].m128i_i16[4] = v114[0];
      ptr[3].m128i_i64[0] = 0;
      v118 = 0;
      v67 = xmmword_8CD7C8;
      sub_2F5AF0(&v118, (__int64 *)&qword_8CD7C0);
      v68 = a2[1];
      if ( v68 )
      {
        v69 = (size_t)(v68 - 1);
        v70 = *a2;
        v71 = v69 >> 63;
      }
      else
      {
        LOBYTE(v71) = 0;
        v69 = 0;
        v70 = &s1;
      }
      if ( !v70 || (_BYTE)v71 )
      {
        v69 = 0;
        if ( v70 )
          v69 = strlen(v70);
      }
      *(double *)v47.m128_u64 = QT::QString::fromUtf8(&src, v69, v70);
      p_src = (const char *)&src;
      sub_2F9960(
        (__int64)ptr,
        (const __m128i *)&src,
        (const __m128i *)v116,
        (__int64)&v118,
        *(double *)v47.m128_u64,
        (__m128)0LL,
        a8,
        a9,
        v73,
        v74,
        a12,
        (__m128)0LL);
      if ( src && !_InterlockedSub((volatile signed __int32 *)src, 1u) )
        free(src);
      if ( (unsigned __int64)v119 <= 1 && qword_8CD7C0 )
      {
        *(_QWORD *)&xmmword_8CD7C8 = 0;
        *(double *)v47.m128_u64 = qfree(qword_8CD7C0, (const char *)&src);
        qword_8CD7C0 = nullptr;
        *((_QWORD *)&xmmword_8CD7C8 + 1) = 0;
      }
      v113 |= v67 > 1;
      while ( 1 )
      {
        if ( !v113 && (unsigned int)sub_53AB40((QT::QWidget *)ptr) != 1 )
        {
          v98 = v118;
          goto LABEL_129;
        }
        sub_2F73D0((__int64)ptr);
        QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)&src);
        v75 = sub_2F8E30((__m128i *)v116, (int)src, &v115);
        setinf(5, v75);
        v78 = v115;
        if ( v115 )
        {
          if ( (*(_BYTE *)(v115 + 88) & 1) != 0 )
            break;
        }
        if ( !getinf_buf(1, v129, 16) )
          v129[0] = 0;
        a8 = 0;
        src = nullptr;
        *(_OWORD *)n = 0;
        v79 = strlen(v129);
        v80 = v79 + 1;
        v81 = v79;
        p_src = v129;
        src = (void *)qvector_reserve(&src, 0, v79 + 1, 1);
        n[0] = v80;
        memmove(src, v129, v81);
        *((_BYTE *)src + v81) = 0;
        v88 = n[0];
        if ( src )
        {
          n[0] = 0;
          *(double *)v47.m128_u64 = qfree(src, v129);
        }
        if ( v88 > 1 )
        {
          v89 = ptr[3].m128i_i64[0];
          v114[0] = ptr[3].m128i_i16[4];
          if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(ptr[4].m128i_i64[0] + 224)) )
            v114[0] |= 0x100u;
          if ( v118 )
          {
            *(_QWORD *)&v119 = 0;
            *(double *)v47.m128_u64 = qfree(v118, v129, *(double *)v47.m128_u64);
          }
          LoadFileDialog__::vfunc_3((QT::QDialog *)ptr, v129);
          if ( !batch )
            sub_303700(*(double *)v47.m128_u64);
          if ( *(_QWORD *)(a1 + 8) > 1u )
          {
            v90 = &s1;
            if ( a2[1] )
              v90 = *a2;
            setinf_buf(97, v90, 0);
          }
          if ( (unsigned __int16)getinf(5) == 7 )
            v91 = aCOs2;
          else
            v91 = aCWindows;
          v92 = 0;
          if ( v91 )
            v92 = strlen(v91);
          *(double *)v47.m128_u64 = QT::QString::fromUtf8(&src, v92, v91, *(double *)v47.m128_u64);
          QT::QString::toUtf8_helper((QT::QString *)ptr, (const QT::QString *)&src);
          v95 = (void *)ptr[0].m128i_i64[1];
          if ( !ptr[0].m128i_i64[1] )
            v95 = &QT::QByteArray::_empty;
          v96 = &s1;
          p_src = (const char *)*a3;
          if ( a2[1] )
            v96 = *a2;
          v112 = sub_2F56D0(
                   (__int64)v96,
                   (char)p_src,
                   v114[0],
                   v89,
                   (__int64)v95,
                   v78,
                   v47,
                   (__m128)0LL,
                   (__m128)0LL,
                   a9,
                   v93,
                   v94,
                   a12,
                   (__m128)0LL);
          if ( ptr[0].m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0].m128i_i64[0], 1u) )
            free((void *)ptr[0].m128i_i64[0]);
          if ( src && !_InterlockedSub((volatile signed __int32 *)src, 1u) )
            free(src);
          goto LABEL_132;
        }
        sub_169630(
          (int)"ICON ERROR\nAUTOHIDE NONE\nCannot continue without a valid processor",
          (__int64)v129,
          v82,
          v83,
          v84,
          v85,
          v47,
          (__m128)0LL,
          (__m128)0LL,
          a9,
          v86,
          v87,
          a12,
          (__m128)0LL,
          v105);
      }
      p_src = (const char *)a3;
      v97 = sub_2F5D60(
              a1,
              a3,
              (__int64)a2,
              (__int64)v114,
              (__int64 *)&qword_8CD7C0,
              v115,
              *(double *)v47.m128_u64,
              (__m128)0LL,
              a8,
              a9,
              v76,
              v77,
              a12,
              (__m128)0LL,
              a5);
      v98 = v118;
      if ( v97 >= 0 )
        break;
      if ( v118 )
      {
        *(_QWORD *)&v119 = 0;
        *(double *)v47.m128_u64 = qfree(v118, (const char *)a3, v104);
      }
      LoadFileDialog__::vfunc_3((QT::QDialog *)ptr, (const char *)a3);
    }
    if ( !v97 )
      break;
    if ( v118 )
    {
      *(_QWORD *)&v119 = 0;
      qfree(v118, (const char *)a3, v104);
    }
    LoadFileDialog__::vfunc_3((QT::QDialog *)ptr, (const char *)a3);
  }
LABEL_129:
  if ( v98 )
  {
    *(_QWORD *)&v119 = 0;
    *(double *)v47.m128_u64 = qfree(v98, p_src);
  }
  LoadFileDialog__::vfunc_3((QT::QDialog *)ptr, p_src);
LABEL_132:
  if ( v116[0] && !_InterlockedSub((volatile signed __int32 *)v116[0], 1u) )
  {
    v99 = (char *)v116[1];
    v100 = (char *)v116[1] + 96 * v117;
    if ( v116[1] != v100 )
    {
      do
      {
        v101 = *((_QWORD *)v99 + 7);
        if ( v101 )
        {
          *((_QWORD *)v99 + 8) = 0;
          *(double *)v47.m128_u64 = qfree(v101, p_src);
        }
        v102 = *((_QWORD *)v99 + 4);
        if ( v102 )
        {
          *((_QWORD *)v99 + 5) = 0;
          *(double *)v47.m128_u64 = qfree(v102, p_src, *(double *)v47.m128_u64);
        }
        v103 = *((_QWORD *)v99 + 1);
        if ( v103 )
        {
          *((_QWORD *)v99 + 2) = 0;
          *(double *)v47.m128_u64 = qfree(v103, p_src, *(double *)v47.m128_u64);
        }
        v99 += 96;
      }
      while ( v100 != v99 );
    }
    free(v116[0]);
  }
  return v112;
}
