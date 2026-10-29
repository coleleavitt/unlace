unsigned __int64 __fastcall sub_39FE00(QT::QWidget *this, __int64 a2, double a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  QT::QWidget *v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i *v13; // rsi
  __m128i v14; // xmm1
  __m128i v15; // xmm0
  __int64 v16; // rdi
  _DWORD *v17; // rax
  _DWORD *v18; // r14
  unsigned __int64 i; // r13
  __int64 v20; // r15
  __int64 bpt_kernel_interface; // rax
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // edi
  __int128 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rax
  __m128i *v28; // rsi
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r9
  char v32; // r11
  char v33; // al
  unsigned __int64 v34; // r15
  __int64 v35; // rbx
  unsigned __int64 v36; // r12
  unsigned __int64 v37; // rax
  int v38; // ecx
  int v39; // r12d
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // r8d
  bool v45; // cf
  int v46; // eax
  int v47; // r9d
  __int64 v48; // rdx
  __int64 v49; // rax
  unsigned __int64 not_tail; // r14
  __int64 v51; // r13
  __int64 v52; // r15
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // r14
  __int64 v58; // rax
  __int64 v59; // r12
  __m128 v60; // xmm0
  __int64 v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __m128d v67; // xmm0
  int *v68; // rcx
  unsigned __int64 v69; // rdx
  __int64 v70; // r9
  unsigned __int64 v71; // rax
  double v72; // xmm1_8
  __m128d v73; // xmm2
  double v74; // xmm7_8
  __int64 v75; // rdi
  unsigned int v76; // eax
  __int128 v77; // rax
  int v78; // r14d
  __int64 v79; // rax
  size_t v80; // rax
  const char *v81; // r13
  size_t v82; // rdx
  __int64 v83; // r13
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r15
  __int64 v91; // r13
  __int64 v92; // rax
  __m128i *v93; // [rsp-10h] [rbp-220h]
  __int64 *v94; // [rsp+0h] [rbp-210h]
  __int64 v95; // [rsp+8h] [rbp-208h]
  _DWORD *v96; // [rsp+8h] [rbp-208h]
  unsigned __int64 v97; // [rsp+10h] [rbp-200h]
  __m128i *v98; // [rsp+20h] [rbp-1F0h]
  double v99; // [rsp+28h] [rbp-1E8h]
  double v100; // [rsp+28h] [rbp-1E8h]
  __m128i *v101; // [rsp+40h] [rbp-1D0h]
  __int64 v102; // [rsp+50h] [rbp-1C0h]
  unsigned __int64 v103; // [rsp+50h] [rbp-1C0h]
  double v104; // [rsp+50h] [rbp-1C0h]
  double v105; // [rsp+50h] [rbp-1C0h]
  __int64 v106; // [rsp+58h] [rbp-1B8h]
  char v107; // [rsp+58h] [rbp-1B8h]
  __int64 j; // [rsp+58h] [rbp-1B8h]
  unsigned __int64 v109; // [rsp+58h] [rbp-1B8h]
  unsigned int v110; // [rsp+64h] [rbp-1ACh] BYREF
  char v111[8]; // [rsp+68h] [rbp-1A8h] BYREF
  __int64 v112; // [rsp+70h] [rbp-1A0h] BYREF
  __int128 v113; // [rsp+78h] [rbp-198h]
  __int64 v114; // [rsp+90h] [rbp-180h] BYREF
  unsigned __int64 v115; // [rsp+98h] [rbp-178h]
  unsigned __int64 v116; // [rsp+A0h] [rbp-170h]
  void *ptr[4]; // [rsp+B0h] [rbp-160h] BYREF
  _BYTE v118[32]; // [rsp+D0h] [rbp-140h] BYREF
  unsigned int v119[2]; // [rsp+F0h] [rbp-120h] BYREF
  __int128 v120; // [rsp+F8h] [rbp-118h]
  __int128 v121; // [rsp+108h] [rbp-108h]
  __int64 v122; // [rsp+118h] [rbp-F8h]
  char v123; // [rsp+120h] [rbp-F0h]
  __m128i v124; // [rsp+130h] [rbp-E0h] BYREF
  double v125; // [rsp+140h] [rbp-D0h]
  double v126; // [rsp+148h] [rbp-C8h]
  unsigned __int64 v127; // [rsp+160h] [rbp-B0h]
  _BYTE v128[14]; // [rsp+180h] [rbp-90h] BYREF
  _QWORD v129[2]; // [rsp+190h] [rbp-80h] BYREF
  __int128 v130; // [rsp+1A0h] [rbp-70h] BYREF
  __int128 v131; // [rsp+1B0h] [rbp-60h] BYREF
  __int128 v132; // [rsp+1C0h] [rbp-50h] BYREF
  unsigned __int64 v133; // [rsp+1D8h] [rbp-38h]

  v133 = __readfsqword(0x28u);
  v5 = *((_QWORD *)this + 4);
  if ( *(_DWORD *)(v5 + 28) + 1 - *(_DWORD *)(v5 + 20) <= 1 )
    return v133 - __readfsqword(0x28u);
  v6 = this;
  v7 = *((_QWORD *)this + 84);
  if ( !v7
    || (unsigned int)sub_1EB590(*((_QWORD *)this + 84), a2, v5, a5, a3) != 1
    || !*(_QWORD *)(v7 + 888)
    || *(_BYTE *)(*((_QWORD *)this + 84) + 969LL)
    || !(unsigned __int8)netnode_inited(a3) )
  {
    return v133 - __readfsqword(0x28u);
  }
  QT::QPainter::QPainter((QT::QPainter *)v111, (QT::QWidget *)((char *)this + 16));
  QT::QPainter::setFont((QT::QPainter *)v111, (const QT::QFont *)(*(_QWORD *)(*((_QWORD *)this + 84) + 32LL) + 56LL));
  *(_QWORD *)v119 = 0;
  v120 = 0;
  v122 = 0;
  v123 = 0;
  v121 = 0;
  sub_39B6B0(this, (__int64)v119, (__m128d)0LL);
  v9 = *((_QWORD *)this + 84);
  *(_DWORD *)v128 = 0;
  *(_QWORD *)&v128[4] = 0xFFFF;
  *(_WORD *)&v128[12] = 0;
  if ( v9 )
  {
    v10 = sub_1EC7E0(v9);
    *(_QWORD *)v128 = QT::QColor::fromRgba(
                        (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v10), 8),
                        (unsigned int)v119);
    *(_QWORD *)&v132 = *(_QWORD *)v128;
    *((_QWORD *)&v132 + 1) = v11;
    *(_QWORD *)&v128[6] = *(_QWORD *)((char *)&v132 + 6);
  }
  else
  {
    v86 = QT::QWidget::palette(v6);
    v87 = *(_QWORD *)QT::QPalette::brush(v86, 4, 10);
    v88 = *(_QWORD *)(v87 + 8);
    v89 = *(_QWORD *)(v87 + 14);
    *(_QWORD *)v128 = v88;
    *(_QWORD *)&v128[6] = v89;
  }
  QT::QBrush::QBrush(&v124, v128, 1);
  QT::QPainter::setBrush((QT::QPainter *)v111, (const QT::QBrush *)&v124);
  QT::QBrush::~QBrush((QT::QBrush *)&v124);
  sub_1C7B60((QT::QPen *)&v124, (QT::QPainter *)v111, (__int64)v128, 1);
  QT::QPen::~QPen((QT::QPen *)&v124);
  v12 = *((_QWORD *)v6 + 4);
  v13 = &v124;
  v15 = _mm_loadl_epi64((const __m128i *)(v12 + 28));
  v14 = _mm_loadl_epi64((const __m128i *)(v12 + 20));
  v124.m128i_i64[0] = 0;
  v15.m128i_i64[0] = _mm_sub_epi32(v15, v14).m128i_u64[0];
  v124.m128i_i64[1] = v15.m128i_i64[0];
  QT::QPainter::fillRect(v111, &v124, v128);
  v16 = (unsigned int)dword_8CC428;
  v17 = sub_234FE0(dword_8CC428);
  v18 = v17;
  if ( v17 && (v13 = *((__m128i **)v17 + 5)) != nullptr )
  {
    v16 = v13[2 * dword_8BA594].m128i_i64[1];
    v97 = sub_23DB80(v16, (__int64)v13, dword_8BA594, *(double *)v15.m128i_i64);
  }
  else
  {
    v97 = -1;
  }
  v101 = *((__m128i **)v6 + 87);
  if ( *((_QWORD *)v6 + 84) && v101 )
  {
    for ( i = 0; (__m128i *)i != v101; ++i )
    {
      if ( i >= (unsigned __int64)v120 )
        break;
      v20 = *((_QWORD *)v6 + 86) + 16 * i;
      if ( (*(_BYTE *)(v20 + 10) & 1) != 0 )
      {
        v106 = *(_QWORD *)v20;
        bpt_kernel_interface = get_bpt_kernel_interface(v16, v13);
        if ( (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(
               bpt_kernel_interface,
               v106) )
        {
          v22 = v106;
          v23 = sub_23BFA0(*((_QWORD *)v6 + 84), v106, 1, 0xFFFFFFFF, -1);
          v107 = 1;
          v24 = v23;
        }
        else
        {
          v22 = -2129403387;
          v107 = 0;
          v24 = sub_524F80((char *)v6 + 40, 2165563909LL, 0);
        }
        *(_QWORD *)&v25 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v24), 8), v22);
        v16 = (__int64)v6;
        v13 = (__m128i *)v111;
        v132 = v25;
        sub_39BE30((__int64)v6, (__int64)v111, v119, i, (const QT::QColor *)&v132, v107);
      }
      if ( *(_DWORD *)(v20 + 12) != -1 )
      {
        v13 = (__m128i *)v111;
        v16 = (__int64)v6;
        sub_39E5A0((__int64)v6, (__int64)v111, (double *)v119, i);
      }
    }
  }
  v110 = -1;
  *((_QWORD *)v6 + 98) = 0;
  *((_QWORD *)v6 + 222) = 0;
  memset(
    (void *)(((unsigned __int64)v6 + 792) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v6 - (((_DWORD)v6 + 792) & 0xFFFFFFF8) + 1784) >> 3));
  v26 = *((_QWORD *)v6 + 95);
  v27 = 72LL * *((_QWORD *)v6 + 96);
  v95 = v26 + v27;
  v28 = (__m128i *)&qword_8BA598;
  v29 = qword_8BA598;
  if ( qword_8BA598 != -1 )
  {
    if ( v26 != v95 )
    {
      v30 = *((_QWORD *)v6 + 95);
      do
      {
        v33 = sub_399540(v30, v97);
        if ( v33 && v29 == *(_QWORD *)(v31 + 48) )
        {
          v32 = v33;
        }
        else if ( (unsigned __int8)sub_399540(v31, v29) )
        {
          v32 |= *(_QWORD *)(v31 + 48) == v97;
        }
        v30 = v31 + 72;
      }
      while ( v30 != v95 );
      if ( v32 )
        goto LABEL_49;
    }
    sub_399440((__int64)&v124, v97, v29);
    v96 = v18;
    v94 = (__int64 *)v6;
    v34 = v127;
    v102 = *((_QWORD *)v6 + 95);
    v99 = v126;
    for ( j = 0x8E38E38E38E38E39LL * ((72LL * *((_QWORD *)v6 + 96)) >> 3); j > 0; j >>= 1 )
    {
      while ( 1 )
      {
        v35 = v102 + 72 * (j >> 1);
        v36 = *(_QWORD *)(*(_QWORD *)&v99 + 32LL);
        v37 = *(_QWORD *)(std::_Rb_tree_decrement(&v124.m128i_u64[1]) + 32);
        if ( v34 < v36 )
        {
          v39 = v37 - v34;
        }
        else
        {
          v38 = v34 - v36;
          if ( v37 >= v34 )
            v38 = v37 - v36;
          v39 = v38;
        }
        v40 = *(_QWORD *)(*(_QWORD *)(v35 + 24) + 32LL);
        v41 = std::_Rb_tree_decrement(v35 + 8);
        v42 = *(_QWORD *)(v35 + 48);
        v43 = *(_QWORD *)(v41 + 32);
        if ( v42 < v40 )
        {
          v46 = v43 - v42;
        }
        else
        {
          v44 = v43 - v40;
          v45 = v43 < v42;
          v46 = v42 - v40;
          if ( !v45 )
            v46 = v44;
        }
        if ( v46 > v39 )
          break;
        v102 = v35 + 72;
        j = j - 1 - (j >> 1);
        if ( j <= 0 )
          goto LABEL_47;
      }
    }
LABEL_47:
    v6 = (QT::QWidget *)v94;
    v28 = (__m128i *)v102;
    v18 = v96;
    v95 = sub_39C590(v94 + 95, v102, &v124);
    sub_398830(*(_QWORD **)&v125);
    v26 = v94[95];
    v27 = 72 * v94[96];
  }
  if ( v27 )
  {
    do
    {
LABEL_49:
      v28 = &v124;
      LOBYTE(v125) = 0;
      v15 = (__m128i)_mm_loadh_ps((const double *)(v26 + 24));
      v124 = v15;
      v47 = sub_39AF20((__int64)v6, v124.m128i_i64);
      if ( v47 >= 0 )
      {
        v28 = (__m128i *)v111;
        sub_39F810(v6, (QT::QPainter *)v111, (_QWORD *)v26, (__int64)v119, (__int64)v128, v47, v97, (int *)&v110);
      }
      v26 += 72;
    }
    while ( v26 != *((_QWORD *)v6 + 95) + 72LL * *((_QWORD *)v6 + 96) );
  }
  if ( *((_QWORD *)v6 + 84) && v18 )
  {
    v15.m128i_i64[0] = 0;
    v112 = 0;
    v113 = 0;
    if ( *(_DWORD *)(dbg + 64) )
    {
      v90 = *(int *)(dbg + 64);
      v28 = nullptr;
      v112 = qvector_reserve(&v112, 0, v90, 8);
      memset((void *)(v112 + 8 * v113), 0, 8 * (v90 - v113));
      *(_QWORD *)&v113 = v90;
      if ( *(int *)(dbg + 64) > 0 )
      {
        v91 = 0;
        do
        {
          v28 = (__m128i *)&qword_8CC390;
          if ( (unsigned __int8)sub_235DE0(qword_8CC390 + 56 * v91) )
          {
            v28 = *((__m128i **)v18 + 5);
            if ( v28 )
              v92 = sub_23DB80(v28[2 * v91].m128i_i64[1], (__int64)v28, (unsigned int)v91, 0.0);
            else
              v92 = -1;
            *(_QWORD *)(v112 + 8 * v91) = v92;
          }
          ++v91;
        }
        while ( *(_DWORD *)(dbg + 64) > (int)v91 );
      }
    }
    v114 = 0;
    v116 = 0;
    if ( v101 )
    {
      v48 = *((_QWORD *)v6 + 86);
      v98 = nullptr;
      while ( 1 )
      {
        v115 = 0;
        v49 = 16LL * (_QWORD)v98;
        v98 = (__m128i *)((char *)v98 + 1);
        v103 = *(_QWORD *)(v48 + v49);
        v28 = v101;
        if ( v98 >= v101 )
          break;
        not_tail = *(_QWORD *)(v48 + v49 + 16);
        if ( *(int *)(dbg + 64) > 0 )
        {
LABEL_59:
          v51 = 0;
          v52 = 0;
          do
          {
            if ( (unsigned __int8)sub_235DE0(v51 + qword_8CC390) )
            {
              v53 = *(_QWORD *)(v112 + 8 * v52);
              if ( v103 == v53 || v53 < not_tail && v103 < v53 && not_tail != -1 )
              {
                v54 = v115;
                v28 = (__m128i *)v114;
                if ( v116 < v115 + 1 )
                {
                  v114 = qvector_reserve(&v114, v114, v115 + 1, 4);
                  v28 = (__m128i *)v114;
                  v54 = v115;
                }
                v28->m128i_i32[v54] = v52;
                ++v115;
              }
            }
            ++v52;
            v51 += 56;
          }
          while ( *(_DWORD *)(dbg + 64) > (int)v52 );
LABEL_69:
          if ( v115 )
          {
            v65 = sub_524FA0((char *)v6 + 40, 2165563908LL, 0);
            v129[1] = v66;
            v129[0] = v65;
            v67 = 0;
            v67.m128d_f64[0] = (double)(int)sub_39F3B0(
                                              (__int64)v6,
                                              (QT::QPainter *)v111,
                                              (__int64)v119,
                                              0,
                                              v103,
                                              (__int64)v129,
                                              (__int64)v128,
                                              1u);
            if ( v115 )
            {
              v68 = (int *)v114;
              v69 = 0;
              do
              {
                v70 = *(_QWORD *)(qword_8CC390 + 56LL * *v68 + 8);
                v71 = v70 - 1;
                if ( v69 >= v70 - 1 )
                  v71 = v69;
                if ( v70 )
                  v69 = v71;
                ++v68;
              }
              while ( (int *)(v114 + 4 * v115) != v68 );
              if ( (v115 & 0x8000000000000000LL) != 0LL )
                v72 = (double)(int)(v115 & 1 | (v115 >> 1)) + (double)(int)(v115 & 1 | (v115 >> 1));
              else
                v72 = (double)(int)v115;
              if ( (v69 & 0x8000000000000000LL) != 0LL )
                v104 = (double)(int)(v69 & 1 | (v69 >> 1)) + (double)(int)(v69 & 1 | (v69 >> 1));
              else
                v104 = (double)(int)v69;
            }
            else
            {
              v104 = 0.0;
              v72 = 0.0;
            }
            v73.m128d_f64[0] = 0.0;
            v100 = v72 * *(double *)&v121;
            v67.m128d_f64[0] = v67.m128d_f64[0] - 0.5 * (v72 * *(double *)&v121);
            v109 = *(_QWORD *)&v67.m128d_f64[0]
                 & COERCE_UNSIGNED_INT64(COERCE_DOUBLE(*(_QWORD *)&_mm_cmpge_sd(v67, v73).m128d_f64[0]));
            sub_2855D0(*(_QWORD *)(*((_QWORD *)v6 + 84) + 888LL));
            v74 = v104 * *(double *)&v109;
            v105 = v104 * *(double *)&v109;
            if ( *(double *)&v109 > 0.0 )
              sub_39B5A0(
                (__int64)v6,
                (QT::QPainter *)v111,
                0,
                (int)(*(double *)&v109 - 1.0),
                (int)v74,
                (int)*(double *)&v109,
                (__int64)v128);
            QT::QBrush::QBrush(&v124, v129, 1);
            QT::QPainter::setBrush((QT::QPainter *)v111, (const QT::QBrush *)&v124);
            QT::QBrush::~QBrush((QT::QBrush *)&v124);
            sub_1C7B60((QT::QPen *)&v124, (QT::QPainter *)v111, (__int64)v129, 1);
            QT::QPen::~QPen((QT::QPen *)&v124);
            v28 = &v124;
            *(double *)v15.m128i_i64 = v100 - 1.0;
            v124.m128i_i64[0] = 0;
            v124.m128i_i64[1] = v109;
            v125 = v105;
            v126 = v100 - 1.0;
            QT::QPainter::drawRects(v111, &v124, 1);
            v75 = *((_QWORD *)v6 + 84);
            if ( v75 )
            {
              v76 = sub_1737D0(v75, 1u);
              *(_QWORD *)&v77 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v76), 8), 1u);
              v28 = (__m128i *)v111;
              v132 = v77;
              v131 = v77;
              v130 = v77;
              sub_1C7B60((QT::QPen *)&v124, (QT::QPainter *)v111, (__int64)&v130, 1);
              QT::QPen::~QPen((QT::QPen *)&v124);
              if ( v115 )
              {
                v78 = 0;
                v79 = 0;
                do
                {
                  v124.m128i_i64[0] = 0;
                  v125 = v105;
                  v126 = *(double *)&v121;
                  *(double *)&v124.m128i_i64[1] = (double)v78 * *(double *)&v121 + *(double *)&v109;
                  v83 = *(int *)(v114 + 4 * v79);
                  QT::QTextOption::QTextOption((QT::QTextOption *)v118);
                  v84 = qword_8CC390 + 56 * v83;
                  v85 = *(_QWORD *)(v84 + 8);
                  if ( v85 )
                  {
                    v80 = v85 - 1;
                    v81 = *(const char **)v84;
                    v82 = v80 >> 63;
                  }
                  else
                  {
                    LOBYTE(v82) = 0;
                    v80 = 0;
                    v81 = &s1;
                  }
                  if ( !v81 || (_BYTE)v82 )
                  {
                    v80 = 0;
                    if ( v81 )
                      v80 = strlen(v81);
                  }
                  *(double *)v15.m128i_i64 = QT::QString::fromUtf8(ptr, v80, v81);
                  v28 = &v124;
                  QT::QPainter::drawText(v111, &v124, ptr, v118, *(double *)v15.m128i_i64);
                  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                    free(ptr[0]);
                  ++v78;
                  QT::QTextOption::~QTextOption((QT::QTextOption *)v118);
                  v79 = v78;
                }
                while ( v78 < v115 );
              }
            }
          }
          if ( v98 == v101 )
          {
            if ( v114 )
            {
              v115 = 0;
              *(double *)v15.m128i_i64 = qfree(v114, v28->m128i_i8);
            }
            goto LABEL_74;
          }
          v48 = *((_QWORD *)v6 + 86);
        }
      }
      not_tail = next_not_tail(v103);
      if ( *(int *)(dbg + 64) <= 0 )
        goto LABEL_69;
      goto LABEL_59;
    }
LABEL_74:
    if ( v112 )
    {
      *(_QWORD *)&v113 = 0;
      *(double *)v15.m128i_i64 = qfree(v112, v28->m128i_i8);
    }
  }
  if ( qword_8BA598 != -1 )
  {
    if ( v110 == -1
      || (*(_QWORD *)&v131 = sub_524FA0((char *)v6 + 40, 2165563907LL, 0),
          *((_QWORD *)&v131 + 1) = v55,
          sub_39F4A0(
            v6,
            (QT::QPainter *)v111,
            (__int64)v119,
            v110,
            v97,
            qword_8BA598,
            1,
            (__int64)&v131,
            (__int64)v128,
            1u),
          sub_39F3B0(
            (__int64)v6,
            (QT::QPainter *)v111,
            (__int64)v119,
            v110,
            qword_8BA598,
            (__int64)&v131,
            (__int64)v128,
            1u),
          v28 = v93,
          qword_8BA598 != -1) )
    {
      if ( v95 != *((_QWORD *)v6 + 95) + 72LL * *((_QWORD *)v6 + 96) )
      {
        sub_398830(*(_QWORD **)(v95 + 16));
        v56 = *((_QWORD *)v6 + 96);
        if ( (__int64)(0x8E38E38E38E38E39LL * ((*((_QWORD *)v6 + 95) + 72 * v56 - v95) >> 3) - 2) >= 0 )
        {
          v57 = 0x8E38E38E38E38E39LL * ((*((_QWORD *)v6 + 95) + 72 * v56 - v95) >> 3) - 2;
          v58 = v95 + 8;
          do
          {
            v64 = *(_QWORD *)(v58 + 80);
            if ( v64 )
            {
              v59 = v58 + 72;
              v60 = _mm_loadh_ps((const double *)(v58 + 88));
              *(_DWORD *)v58 = *(_DWORD *)(v58 + 72);
              v61 = *(_QWORD *)(v58 + 96);
              *(__m128 *)(v58 + 8) = v60;
              *(_QWORD *)(v58 + 24) = v61;
              *(_QWORD *)(v64 + 8) = v58;
              v62 = *(_QWORD *)(v58 + 104);
              *(_QWORD *)(v58 + 80) = 0;
              *(_QWORD *)(v58 + 32) = v62;
              *(_QWORD *)(v58 + 88) = v58 + 72;
              *(_QWORD *)(v58 + 96) = v58 + 72;
              *(_QWORD *)(v58 + 104) = 0;
            }
            else
            {
              *(_DWORD *)v58 = 0;
              v59 = v58 + 72;
              *(_QWORD *)(v58 + 8) = 0;
              *(_QWORD *)(v58 + 16) = v58;
              *(_QWORD *)(v58 + 24) = v58;
              *(_QWORD *)(v58 + 32) = 0;
            }
            v15 = _mm_loadu_si128((const __m128i *)(v58 + 112));
            v63 = *(_QWORD **)(v58 + 80);
            *(_QWORD *)(v58 + 56) = *(_QWORD *)(v58 + 128);
            *(__m128i *)(v58 + 40) = v15;
            sub_398830(v63);
            v58 = v59;
            v28 = (__m128i *)(v57 - 1);
            v57 = (unsigned __int64)v28;
          }
          while ( v28 != (__m128i *)-1LL );
          v56 = *((_QWORD *)v6 + 96);
        }
        *((_QWORD *)v6 + 96) = v56 - 1;
      }
    }
  }
  if ( *(_QWORD *)v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(*(_QWORD *)v119, v28->m128i_i8, *(double *)v15.m128i_i64);
  }
  QT::QPainter::~QPainter((QT::QPainter *)v111);
  return v133 - __readfsqword(0x28u);
}
