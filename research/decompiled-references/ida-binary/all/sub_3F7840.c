unsigned __int64 __fastcall sub_3F7840(QT::QWidget *a1)
{
  QT::QWidget *v1; // r12
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  double v5; // xmm0_8
  const char *v6; // rbx
  const char *v7; // rsi
  _BYTE *v8; // rbp
  const char *v9; // rbx
  size_t v10; // rax
  const char *v11; // rsi
  double v12; // xmm0_8
  void *v13; // r8
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  void *v16; // r13
  void *v17; // r15
  __int64 v18; // rax
  __int64 v19; // rbx
  void *v20; // rdx
  unsigned __int64 v21; // rbp
  __m128i si128; // xmm0
  _QWORD *v23; // rbx
  void *v24; // r8
  __int64 v25; // rbp
  char v26; // al
  unsigned __int64 v27; // rax
  _QWORD *v28; // r10
  _QWORD *v29; // r8
  __int64 v30; // r10
  __int64 v31; // rbp
  __int64 v32; // r9
  _QWORD *v33; // r13
  void *v34; // r8
  unsigned __int64 v35; // r14
  __int64 v36; // r15
  __int64 v37; // rbp
  _QWORD *v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r11
  void **v42; // rbx
  void **v43; // rbp
  volatile signed __int32 *v44; // rax
  _QWORD *v46; // r10
  _QWORD *v47; // r9
  void *v48; // r10
  __int64 v49; // rcx
  QT::QWidget *v50; // r11
  __int64 v51; // r8
  _QWORD *v52; // r15
  QT::QWidget *v53; // rbp
  __int64 v54; // r13
  _QWORD *v55; // rbx
  unsigned __int64 v56; // rax
  __int64 v57; // r11
  __int64 v58; // r9
  __int64 v59; // rcx
  unsigned __int64 v60; // rdx
  void *v61; // rsi
  void *v62; // rax
  void *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rcx
  __int64 v69; // rbp
  char *v70; // rax
  size_t v71; // rbp
  void *v72; // rax
  _QWORD *v73; // rbp
  unsigned __int64 v74; // rbx
  _QWORD *v75; // r13
  char *v76; // rbp
  _QWORD *v77; // r15
  unsigned __int64 v78; // rdx
  char *v79; // rax
  const void *v80; // r8
  void *v81; // rdi
  __m128i v82; // xmm0
  void *v83; // rdx
  unsigned __int64 v84; // rax
  __m128i v85; // xmm0
  __m128i v86; // xmm0
  void *v87; // rdx
  unsigned __int64 v88; // rax
  _QWORD *v89; // rdx
  unsigned __int64 v90; // rbx
  unsigned __int64 v91; // rax
  __int64 v92; // [rsp+0h] [rbp-258h]
  void *v93; // [rsp+0h] [rbp-258h]
  __int64 v94; // [rsp+0h] [rbp-258h]
  void *v95; // [rsp+0h] [rbp-258h]
  void *v96; // [rsp+0h] [rbp-258h]
  void *v97; // [rsp+0h] [rbp-258h]
  void *v98; // [rsp+10h] [rbp-248h]
  QT::QWidget *v99; // [rsp+10h] [rbp-248h]
  void *v100; // [rsp+10h] [rbp-248h]
  _QWORD *v101; // [rsp+10h] [rbp-248h]
  void *v102; // [rsp+10h] [rbp-248h]
  void *v103; // [rsp+10h] [rbp-248h]
  __int64 v104; // [rsp+18h] [rbp-240h]
  __int64 v105; // [rsp+18h] [rbp-240h]
  __m128i v106; // [rsp+20h] [rbp-238h] BYREF
  _QWORD *v107; // [rsp+38h] [rbp-220h]
  QT::QWidget *v108; // [rsp+40h] [rbp-218h]
  __int64 v109; // [rsp+48h] [rbp-210h]
  _QWORD *v110; // [rsp+50h] [rbp-208h]
  __int64 v111; // [rsp+58h] [rbp-200h]
  unsigned __int64 v112; // [rsp+60h] [rbp-1F8h]
  QT::QString *v113; // [rsp+68h] [rbp-1F0h]
  unsigned __int64 p_dest; // [rsp+70h] [rbp-1E8h]
  QT::QWidget *v115; // [rsp+78h] [rbp-1E0h]
  __int64 v116; // [rsp+80h] [rbp-1D8h]
  __int64 v117; // [rsp+88h] [rbp-1D0h]
  void *v118; // [rsp+90h] [rbp-1C8h]
  __int64 v119; // [rsp+98h] [rbp-1C0h]
  QT::QWidget *v120; // [rsp+A0h] [rbp-1B8h]
  __int64 v121; // [rsp+A8h] [rbp-1B0h]
  unsigned __int64 v122; // [rsp+B0h] [rbp-1A8h]
  __int64 v123; // [rsp+B8h] [rbp-1A0h]
  void **v124; // [rsp+C0h] [rbp-198h]
  char *v125; // [rsp+C8h] [rbp-190h]
  void **v126; // [rsp+D0h] [rbp-188h]
  unsigned __int64 v127; // [rsp+D8h] [rbp-180h]
  __int64 v128; // [rsp+E0h] [rbp-178h]
  __int64 v129; // [rsp+E8h] [rbp-170h]
  __int64 v130; // [rsp+F0h] [rbp-168h]
  void *v131; // [rsp+F8h] [rbp-160h]
  void *v132; // [rsp+100h] [rbp-158h]
  __int64 v133; // [rsp+108h] [rbp-150h]
  __int64 v134; // [rsp+110h] [rbp-148h]
  __int64 v135; // [rsp+118h] [rbp-140h]
  QT::QWidget *v136; // [rsp+120h] [rbp-138h]
  __int64 v137; // [rsp+128h] [rbp-130h]
  __int64 v138; // [rsp+130h] [rbp-128h]
  __int64 v139; // [rsp+138h] [rbp-120h]
  void *v140[2]; // [rsp+140h] [rbp-118h] BYREF
  __int64 v141; // [rsp+150h] [rbp-108h]
  void *v142[2]; // [rsp+160h] [rbp-F8h] BYREF
  __int64 v143; // [rsp+170h] [rbp-E8h]
  void *ptr[2]; // [rsp+180h] [rbp-D8h] BYREF
  __int64 v145; // [rsp+190h] [rbp-C8h]
  void *dest; // [rsp+1A0h] [rbp-B8h] BYREF
  __m128i v147; // [rsp+1A8h] [rbp-B0h]
  void *src[4]; // [rsp+1C0h] [rbp-98h] BYREF
  void *s; // [rsp+1E0h] [rbp-78h] BYREF
  void *v150[2]; // [rsp+1E8h] [rbp-70h] BYREF
  unsigned __int64 v151; // [rsp+1F8h] [rbp-60h]
  int v152; // [rsp+200h] [rbp-58h] BYREF
  unsigned __int64 v153; // [rsp+208h] [rbp-50h]
  __int64 v154; // [rsp+210h] [rbp-48h] BYREF
  unsigned __int64 v155; // [rsp+218h] [rbp-40h]

  v115 = a1;
  v155 = __readfsqword(0x28u);
  v113 = (QT::QString *)ptr;
  v5 = QT::QString::fromUtf8(ptr, 9, "xrefs: %1");
  v6 = *((const char **)a1 + 35);
  if ( v6 == (const char *)-1LL )
  {
    v12 = QT::QString::fromUtf8(&s, 3, byte_5C0981, v5);
  }
  else
  {
    v147 = 0;
    p_dest = (unsigned __int64)&dest;
    dest = nullptr;
    get_ea_name(&dest, v6, 37, 0);
    v7 = &s1;
    memset(src, 0, 24);
    if ( v147.m128i_i64[0] )
      v7 = (const char *)dest;
    demangle_name(src, v7, 0, 2);
    v8 = src[1];
    if ( src[1] > (char *)&dword_0 + 1 )
    {
      v80 = src[0];
      v81 = dest;
      if ( (void *)v147.m128i_i64[1] < src[1] )
      {
        v97 = src[0];
        dest = (void *)qvector_reserve(p_dest, dest, src[1], 1);
        v80 = v97;
        v81 = dest;
      }
      v147.m128i_i64[0] = (__int64)v8;
      memmove(v81, v80, (size_t)(v8 - 1));
      v8[(_QWORD)dest - 1] = 0;
    }
    if ( v147.m128i_i64[0] > 1uLL )
      goto LABEL_6;
    *(_OWORD *)v150 = 0;
    s = nullptr;
    get_ea_name(&s, v6, 21, 0);
    v82 = _mm_loadu_si128((const __m128i *)v150);
    v83 = s;
    *(_OWORD *)v150 = 0;
    s = nullptr;
    v84 = v82.m128i_i64[0];
    if ( dest )
    {
      v95 = v83;
      v106 = v82;
      v102 = (void *)v82.m128i_i64[0];
      v147.m128i_i64[0] = 0;
      qfree(dest, v6);
      v85 = _mm_load_si128(&v106);
      v84 = (unsigned __int64)v102;
      dest = v95;
      v147 = v85;
      if ( s )
      {
        v150[0] = nullptr;
        qfree(s, v6);
        v84 = v147.m128i_i64[0];
      }
    }
    else
    {
      dest = v83;
      v147 = v82;
    }
    if ( v84 > 1 )
      goto LABEL_6;
    *(_OWORD *)v150 = 0;
    s = nullptr;
    get_ea_name(&s, v6, 0, 0);
    v86 = _mm_loadu_si128((const __m128i *)v150);
    v87 = s;
    *(_OWORD *)v150 = 0;
    s = nullptr;
    v88 = v86.m128i_i64[0];
    if ( dest )
    {
      v96 = v87;
      v106 = v86;
      v103 = (void *)v86.m128i_i64[0];
      v147.m128i_i64[0] = 0;
      qfree(dest, v6);
      v86 = _mm_load_si128(&v106);
      v88 = (unsigned __int64)v103;
      dest = v96;
      v147 = v86;
      if ( s )
      {
        v150[0] = nullptr;
        *(double *)v86.m128i_i64 = qfree(s, v6);
        v88 = v147.m128i_i64[0];
      }
    }
    else
    {
      dest = v87;
      v147 = v86;
    }
    if ( v88 > 1 || (sub_169A50((__int64 *)p_dest, (__int64)"%a", *(double *)v86.m128i_i64), v147.m128i_i64[0]) )
    {
LABEL_6:
      v9 = (const char *)dest;
      if ( dest && *(_BYTE *)dest )
        v10 = strlen((const char *)dest + 1) + 1;
      else
        v10 = 0;
    }
    else
    {
      v9 = &s1;
      v10 = 0;
    }
    v11 = (const char *)v10;
    v12 = QT::QString::fromUtf8(&s, v10, v9);
    if ( src[0] )
    {
      src[1] = nullptr;
      v12 = qfree(src[0], v11, v12);
    }
    if ( dest )
    {
      v147.m128i_i64[0] = 0;
      v12 = qfree(dest, v11, v12);
    }
  }
  v126 = v140;
  QT::QString::arg(v140, v113, &s, 0, 32, v12);
  if ( s && !_InterlockedSub((volatile signed __int32 *)s, 1u) )
    free(s);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v150[0] = &dword_0 + 1;
  v125 = (char *)&v154;
  s = &v154;
  v150[1] = nullptr;
  v92 = qword_8D14A0;
  v151 = 0;
  v152 = 1065353216;
  v153 = 0;
  v154 = 0;
  v107 = (_QWORD *)(qword_8D14A0 + 8 * xmmword_8D14A8);
  v120 = (QT::QWidget *)src;
  if ( v107 == (_QWORD *)qword_8D14A0 )
  {
    v143 = 0;
    *(_OWORD *)v142 = 0;
LABEL_111:
    QT::QString::operator=(v142, v126);
    goto LABEL_65;
  }
  do
  {
    while ( 1 )
    {
      if ( !*(_QWORD *)v92 || *(_QWORD *)(*(_QWORD *)v92 + 280LL) != *((_QWORD *)v115 + 35) )
        goto LABEL_21;
      QT::QWidget::windowTitle(v120);
      v13 = src[2];
      v112 = (unsigned __int64)src[1];
      if ( !v151 )
      {
        v14 = v150[1];
        if ( v150[1] )
        {
          v104 = v2;
          v15 = v128;
          v16 = src[2];
          v106.m128i_i64[1] = v4;
          v17 = src[1];
          v18 = v130;
          v106.m128i_i64[0] = v3;
          do
          {
            v19 = v14[2];
            v20 = v17;
            if ( (void *)v14[3] == v16 )
            {
              v18 = QT::QtPrivate::equalStrings(v16, v17, v16, v14[2]);
              if ( (_BYTE)v18 )
              {
                v128 = v15;
                v129 = v19;
                v2 = v104;
                v130 = v18;
                v3 = v106.m128i_i64[0];
                v131 = v20;
                v4 = v106.m128i_i64[1];
                goto LABEL_31;
              }
            }
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
          v128 = v15;
          v13 = v16;
          v129 = v19;
          v2 = v104;
          v130 = v18;
          v3 = v106.m128i_i64[0];
          v131 = v20;
          v4 = v106.m128i_i64[1];
        }
        v127 = QT::qHash(v13, v112, 0);
        v122 = v127 % (unsigned __int64)v150[0];
LABEL_88:
        v59 = operator new(0x20u);
        *(_QWORD *)v59 = 0;
        v60 = v151;
        v101 = (_QWORD *)v59;
        v61 = v150[0];
        *(void **)(v59 + 8) = src[0];
        v62 = src[1];
        *(_OWORD *)src = 0;
        *(_QWORD *)(v59 + 16) = v62;
        v63 = src[2];
        src[2] = nullptr;
        *(_QWORD *)(v59 + 24) = v63;
        v112 = v153;
        if ( (unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(
                                (std::__detail::_Prime_rehash_policy *)&v152,
                                (unsigned __int64)v61,
                                v60,
                                1u) )
        {
          v106.m128i_i64[0] = v64;
          if ( v64 == 1 )
          {
            v154 = 0;
            v68 = v125;
          }
          else
          {
            if ( (unsigned __int64)v106.m128i_i64[0] >> 60 )
            {
              if ( (unsigned __int64)v106.m128i_i64[0] >> 61 )
                sub_162118(&v152, v61, v64, v65, v66, v67);
              std::__throw_bad_alloc();
            }
            v71 = 8 * v106.m128i_i64[0];
            v72 = (void *)operator new(8 * v106.m128i_i64[0]);
            v68 = (char *)memset(v72, 0, v71);
          }
          v73 = v150[1];
          v150[1] = nullptr;
          if ( v73 )
          {
            v109 = v2;
            v74 = v106.m128i_i64[0];
            v75 = v73;
            v76 = v68;
            v110 = (_QWORD *)v3;
            v112 = 0;
            v108 = v1;
            v111 = v4;
            do
            {
              while ( 1 )
              {
                v77 = v75;
                v75 = (_QWORD *)*v75;
                v78 = QT::qHash(v77[3], v77[2], 0) % v74;
                v79 = &v76[8 * v78];
                if ( !*(_QWORD *)v79 )
                  break;
                *v77 = **(_QWORD **)v79;
                **(_QWORD **)v79 = v77;
                if ( !v75 )
                  goto LABEL_107;
              }
              *v77 = v150[1];
              v150[1] = v77;
              *(_QWORD *)v79 = &v150[1];
              if ( *v77 )
                *(_QWORD *)&v76[8 * v112] = v77;
              v112 = v78;
            }
            while ( v75 );
LABEL_107:
            v1 = v108;
            v2 = v109;
            v68 = v76;
            v3 = (__int64)v110;
            v4 = v111;
          }
          if ( s != v125 )
          {
            v112 = (unsigned __int64)v68;
            operator delete(s, 8 * (__int64)v150[0]);
            v68 = (char *)v112;
          }
          s = v68;
          v150[0] = (void *)v106.m128i_i64[0];
          v122 = v127 % v106.m128i_i64[0];
        }
        else
        {
          v68 = (char *)s;
        }
        v69 = 8 * v122;
        v70 = &v68[8 * v122];
        if ( *(_QWORD *)v70 )
        {
          *v101 = **(_QWORD **)v70;
          **(_QWORD **)v70 = v101;
        }
        else
        {
          v89 = v150[1];
          v106.m128i_i64[0] = (__int64)v68;
          *v101 = v150[1];
          v150[1] = v101;
          if ( v89 )
          {
            v90 = (unsigned __int64)v150[0];
            v91 = QT::qHash(v89[3], v89[2], 0);
            *(_QWORD *)(v106.m128i_i64[0] + 8 * (v91 % v90)) = v101;
            v70 = (char *)s + v69;
          }
          *(_QWORD *)v70 = &v150[1];
        }
        ++v151;
        goto LABEL_31;
      }
      v99 = (QT::QWidget *)src[2];
      v127 = QT::qHash(src[2], v112, 0);
      v46 = *((_QWORD **)s + v127 % (unsigned __int64)v150[0]);
      p_dest = v127 % (unsigned __int64)v150[0];
      v122 = v127 % (unsigned __int64)v150[0];
      if ( !v46 )
        goto LABEL_88;
      v47 = (_QWORD *)*v46;
      v110 = v46;
      v108 = v99;
      v48 = v132;
      v49 = v47[2];
      v50 = (QT::QWidget *)v47[3];
      v137 = v2;
      v139 = v4;
      v51 = v134;
      v52 = v47;
      v124 = (void **)v150[0];
      v53 = v50;
      v54 = v49;
      v136 = v1;
      v138 = v3;
      while ( 1 )
      {
        v58 = v112;
        v57 = v54;
        if ( v53 == v108 )
        {
          if ( (unsigned __int8)QT::QtPrivate::equalStrings(v53, v112, v53, v54) )
            break;
        }
        v55 = (_QWORD *)*v52;
        if ( !*v52
          || (v54 = v55[2],
              v53 = (QT::QWidget *)v55[3],
              v106.m128i_i64[0] = v51,
              v106.m128i_i64[1] = v58,
              v100 = v48,
              v105 = v57,
              v56 = QT::qHash(v53, v54, 0),
              v110 = v52,
              v48 = v100,
              v57 = v105,
              v58 = v106.m128i_i64[1],
              v51 = v106.m128i_i64[0],
              v56 % (unsigned __int64)v124 != p_dest) )
        {
          v132 = v48;
          v1 = v136;
          v133 = v57;
          v2 = v137;
          v134 = v51;
          v3 = v138;
          v135 = v58;
          v4 = v139;
          goto LABEL_88;
        }
        v52 = v55;
      }
      v132 = v48;
      v133 = v57;
      v1 = v136;
      v134 = v51;
      v2 = v137;
      v135 = v58;
      v3 = v138;
      v4 = v139;
      if ( !v110 || !*v110 )
        goto LABEL_88;
LABEL_31:
      if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
        break;
LABEL_21:
      v92 += 8;
      if ( v107 == (_QWORD *)v92 )
        goto LABEL_34;
    }
    free(src[0]);
    v92 += 8;
  }
  while ( v107 != (_QWORD *)v92 );
LABEL_34:
  v143 = 0;
  p_dest = (unsigned __int64)&dest;
  LODWORD(v110) = 2;
  v124 = v142;
  *(_OWORD *)v142 = 0;
  if ( v151 <= 1 )
    goto LABEL_111;
  while ( 2 )
  {
    v21 = p_dest;
    QT::QString::fromUtf8(p_dest, 3, "-%1");
    QT::QString::arg(src, v21, (int)v110, 0, 10, 32);
    si128 = _mm_load_si128((const __m128i *)v140);
    v145 = v141;
    *(__m128i *)ptr = si128;
    if ( si128.m128i_i64[0] )
      _InterlockedAdd((volatile signed __int32 *)si128.m128i_i64[0], 1u);
    QT::QString::append(v113, (const QT::QString *)src);
    if ( src[0] && !_InterlockedSub((volatile signed __int32 *)src[0], 1u) )
      free(src[0]);
    if ( dest && !_InterlockedSub((volatile signed __int32 *)dest, 1u) )
      free(dest);
    if ( !v151 )
    {
      v23 = v150[1];
      if ( !v150[1] )
        break;
      v24 = ptr[1];
      v25 = v145;
      while ( 1 )
      {
        v2 = v23[2];
        if ( v23[3] == v25 )
        {
          v93 = v24;
          v26 = QT::QtPrivate::equalStrings(v25, v24, v25, v23[2]);
          v24 = v93;
          if ( v26 )
            goto LABEL_49;
        }
        v23 = (_QWORD *)*v23;
        if ( !v23 )
          goto LABEL_62;
      }
    }
    v112 = (unsigned __int64)ptr[1];
    v106.m128i_i64[0] = v145;
    v27 = QT::qHash(v145, ptr[1], 0);
    v28 = *((_QWORD **)s + v27 % (unsigned __int64)v150[0]);
    if ( v28 )
    {
      v29 = (_QWORD *)*v28;
      v107 = *((_QWORD **)s + v27 % (unsigned __int64)v150[0]);
      v121 = v2;
      v30 = v116;
      v31 = v29[3];
      v32 = v29[2];
      v33 = v29;
      v108 = (QT::QWidget *)v150[0];
      v122 = v3;
      v34 = v118;
      v35 = v27 % (unsigned __int64)v150[0];
      v123 = v4;
      v36 = v31;
      v37 = v32;
      v120 = v1;
      while ( v106.m128i_i64[0] != v36
           || !(unsigned __int8)QT::QtPrivate::equalStrings(v106.m128i_i64[0], v112, v106.m128i_i64[0], v37) )
      {
        v38 = (_QWORD *)*v33;
        v98 = v34;
        v94 = v30;
        if ( !*v33 )
          goto LABEL_62;
        v37 = v38[2];
        v36 = v38[3];
        v39 = QT::qHash(v36, v37, 0);
        v107 = v33;
        if ( v35 != v39 % (unsigned __int64)v108 )
          goto LABEL_62;
        v30 = v94;
        v34 = v98;
        v33 = v38;
      }
      v116 = v30;
      v117 = v41;
      v1 = v120;
      v118 = v34;
      v2 = v121;
      v119 = v40;
      v3 = v122;
      v4 = v123;
      if ( v107 )
      {
        if ( *v107 )
        {
LABEL_49:
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          LODWORD(v110) = (_DWORD)v110 + 1;
          continue;
        }
      }
    }
    break;
  }
LABEL_62:
  QT::QString::operator=(v142, v113);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
LABEL_65:
  QT::QWidget::setWindowTitle(v115, (const QT::QString *)v142);
  if ( v142[0] && !_InterlockedSub((volatile signed __int32 *)v142[0], 1u) )
    free(v142[0]);
  v42 = (void **)v150[1];
  if ( v150[1] )
  {
    do
    {
      v43 = v42;
      v42 = (void **)*v42;
      v44 = (volatile signed __int32 *)v43[1];
      if ( v44 && !_InterlockedSub(v44, 1u) )
        free(v43[1]);
      operator delete(v43, 0x20u);
    }
    while ( v42 );
  }
  memset(s, 0, 8 * (__int64)v150[0]);
  v151 = 0;
  v150[1] = nullptr;
  if ( s != v125 )
    operator delete(s, 8 * (__int64)v150[0]);
  if ( v140[0] && !_InterlockedSub((volatile signed __int32 *)v140[0], 1u) )
    free(v140[0]);
  return v155 - __readfsqword(0x28u);
}
