__int64 __fastcall sub_505680(
        QT::QWidget *a1,
        const char *a2,
        unsigned int *a3,
        int *a4,
        double a5,
        __m128 a6,
        __m128 si128,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v12; // r12
  unsigned int v14; // edx
  _QWORD *v15; // rax
  __m128 v16; // xmm0
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 i; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  _QWORD *v30; // rax
  unsigned __int8 v31; // al
  __int64 v32; // rbx
  __int64 v33; // rax
  char *v34; // rax
  __int64 v35; // rsi
  char v36; // al
  __int64 v37; // r8
  unsigned __int64 v38; // r9
  double v39; // xmm4_8
  double v40; // xmm5_8
  char v41; // r14
  int v42; // eax
  __int64 v43; // r12
  int v44; // r13d
  __int64 v45; // r15
  __m128i v46; // xmm0
  int v47; // edx
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  int v50; // edx
  __int64 v51; // r14
  unsigned __int64 j; // rcx
  __int64 v53; // rbx
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rax
  QT::QHBoxLayout *v59; // r14
  __int64 (__fastcall *v60)(QT::QHBoxLayout *, _QWORD); // rbx
  int v61; // eax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // r8
  QT::QHBoxLayout *v66; // rbx
  double v67; // xmm4_8
  double v68; // xmm5_8
  _QWORD *v69; // r14
  QT::QPushButton *v70; // r8
  __int64 v71; // rax
  __int64 v72; // rsi
  int v73; // edx
  __int64 v74; // rax
  __int64 v75; // r9
  __m128 v76; // xmm4
  __m128 v77; // xmm5
  QT::QPushButton *v78; // rax
  void *v79; // rdi
  int v80; // eax
  __int64 v81; // rcx
  __int64 v82; // r8
  QT::QDialogButtonBox *v83; // r14
  __int64 v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __m128 v87; // xmm4
  __m128 v88; // xmm5
  __int32 v89; // esi
  int v90; // r14d
  int v91; // edx
  int v92; // eax
  __int64 v93; // rbx
  __int64 v94; // r12
  QT::QWidget *v95; // r14
  volatile signed __int32 *v96; // rax
  QT::QBoxLayout *v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rsi
  int *v103; // rbx
  void *v104; // r13
  __int64 v105; // r12
  int v106; // eax
  __int64 v107; // r9
  QT::QSplitter *v108; // r15
  int v109; // r8d
  int v110; // edx
  __int64 v111; // rax
  __int64 v112; // rbx
  int v113; // eax
  __int64 v114; // rax
  __int64 v115; // rdx
  QT::QWidget *v116; // rbx
  QT::QHBoxLayout *v117; // r13
  QT::QWidget *v118; // r12
  __int64 v119; // rax
  int v120; // eax
  __int64 v121; // rax
  __int64 v122; // rdx
  int v123; // eax
  bool v124; // cc
  __int64 v125; // rbx
  __int64 v126; // rbx
  __int64 v127; // r12
  volatile signed __int32 *v128; // rax
  int v129; // edx
  __int64 v130; // rax
  __int64 v131; // rax
  QT::QWidget *v132; // rbx
  __int64 v133; // rax
  __int64 v134; // rsi
  __int64 v135; // rax
  QT::QWidget *v136; // rbx
  int v137; // r15d
  __int64 k; // rax
  __int64 v139; // rsi
  double v140; // xmm4_8
  double v141; // xmm5_8
  bool v142; // zf
  QT::QWidget *v143; // r15
  __int64 v144; // rax
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // r8
  __int64 v148; // r9
  void *v149; // rbx
  char *v150; // r14
  char *v151; // r13
  __int64 v152; // rbx
  __int64 m; // r12
  volatile signed __int32 *v154; // rax
  __int64 v156; // [rsp-10h] [rbp-2A0h]
  __int64 v157; // [rsp-10h] [rbp-2A0h]
  __int64 v158; // [rsp-10h] [rbp-2A0h]
  __int64 v159; // [rsp-10h] [rbp-2A0h]
  unsigned __int64 v160; // [rsp-10h] [rbp-2A0h]
  __int64 v161; // [rsp-8h] [rbp-298h]
  __int64 *v162; // [rsp+0h] [rbp-290h]
  __int64 v163; // [rsp+8h] [rbp-288h]
  QT::QSplitter *v165; // [rsp+28h] [rbp-268h]
  QT::QTabWidget *v166; // [rsp+30h] [rbp-260h]
  unsigned __int8 v167; // [rsp+4Ah] [rbp-246h]
  char v168; // [rsp+4Bh] [rbp-245h]
  volatile signed __int32 *v169; // [rsp+50h] [rbp-240h]
  QT::QPushButton *v170; // [rsp+58h] [rbp-238h]
  void *v171; // [rsp+60h] [rbp-230h]
  __int64 v172; // [rsp+68h] [rbp-228h]
  unsigned __int8 v173; // [rsp+73h] [rbp-21Dh]
  unsigned int v174; // [rsp+74h] [rbp-21Ch]
  __int64 *v175; // [rsp+78h] [rbp-218h]
  __int64 v176; // [rsp+80h] [rbp-210h]
  QT::QLabel *v177; // [rsp+88h] [rbp-208h]
  unsigned __int32 v178; // [rsp+90h] [rbp-200h]
  char v179; // [rsp+97h] [rbp-1F9h]
  unsigned int v180; // [rsp+98h] [rbp-1F8h]
  unsigned __int8 v181; // [rsp+A0h] [rbp-1F0h]
  QT::QComboBox *v182; // [rsp+A0h] [rbp-1F0h]
  int v183; // [rsp+A0h] [rbp-1F0h]
  QT::QGridLayout *v184; // [rsp+A8h] [rbp-1E8h]
  QT::QSplitter *v185; // [rsp+B0h] [rbp-1E0h]
  QT::QSplitter *v186; // [rsp+B0h] [rbp-1E0h]
  QT::QWidget *v187; // [rsp+B8h] [rbp-1D8h]
  unsigned int v188; // [rsp+C8h] [rbp-1C8h] BYREF
  unsigned int v189; // [rsp+CCh] [rbp-1C4h] BYREF
  void *v190; // [rsp+D0h] [rbp-1C0h] BYREF
  char v191[8]; // [rsp+D8h] [rbp-1B8h] BYREF
  QT::QAbstractButton *v192; // [rsp+E0h] [rbp-1B0h] BYREF
  QT::QHBoxLayout *v193; // [rsp+E8h] [rbp-1A8h] BYREF
  __int128 v194; // [rsp+F0h] [rbp-1A0h] BYREF
  __int64 v195; // [rsp+100h] [rbp-190h]
  __int128 v196; // [rsp+110h] [rbp-180h] BYREF
  __int64 v197; // [rsp+120h] [rbp-170h]
  void *v198[2]; // [rsp+130h] [rbp-160h] BYREF
  __int64 v199; // [rsp+140h] [rbp-150h]
  void *v200[4]; // [rsp+150h] [rbp-140h] BYREF
  __int64 v201; // [rsp+170h] [rbp-120h] BYREF
  __int128 v202; // [rsp+178h] [rbp-118h]
  void *v203[2]; // [rsp+190h] [rbp-100h] BYREF
  __int64 v204; // [rsp+1A0h] [rbp-F0h]
  void *v205[2]; // [rsp+1D0h] [rbp-C0h] BYREF
  __int64 v206; // [rsp+1E0h] [rbp-B0h]
  int v207[4]; // [rsp+1F0h] [rbp-A0h] BYREF
  signed __int8 v208; // [rsp+200h] [rbp-90h]
  __m128i v209; // [rsp+204h] [rbp-8Ch]
  int v210; // [rsp+214h] [rbp-7Ch]
  __m128i v211; // [rsp+218h] [rbp-78h]
  void *ptr[2]; // [rsp+228h] [rbp-68h] BYREF
  __int64 v213; // [rsp+238h] [rbp-58h]
  char v214; // [rsp+240h] [rbp-50h]
  int v215; // [rsp+244h] [rbp-4Ch]
  int v216; // [rsp+248h] [rbp-48h]
  unsigned __int64 v217; // [rsp+258h] [rbp-38h]

  v12 = a2;
  v187 = a1;
  v217 = __readfsqword(0x28u);
  if ( *a2 == 10 )
  {
    do
      ++v12;
    while ( *v12 == 10 );
    v187 = a1;
  }
  sub_509A60(v12, 10);
  if ( strstr(v12, "%/") )
  {
    v14 = *a3;
    if ( *a3 > 0x2F )
    {
      v15 = *((_QWORD **)a3 + 1);
      *((_QWORD *)a3 + 1) = v15 + 1;
    }
    else
    {
      v15 = (_QWORD *)(*((_QWORD *)a3 + 2) + v14);
      *a3 = v14 + 8;
    }
    *((_QWORD *)v187 + 20) = *v15;
  }
  v16 = 0;
  v195 = 0;
  v197 = 0;
  v17 = *((_QWORD *)v187 + 4);
  v194 = 0;
  v199 = 0;
  v190 = nullptr;
  v196 = 0;
  *(_OWORD *)v198 = 0;
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v191, (const QT::QFont *)(v17 + 56));
  v18 = 0;
  if ( v12 )
    v18 = strlen(v12);
  *(double *)v16.m128_u64 = QT::QString::fromUtf8(v200, v18, v12);
  v162 = (__int64 *)&v190;
  v167 = sub_50E080(
           (_DWORD)v187,
           (unsigned int)v200,
           (unsigned int)v198,
           (unsigned int)&v196,
           (unsigned int)&v190,
           (_DWORD)a3,
           *a4);
  if ( !v167 )
  {
    v139 = (__int64)v12;
    sub_169630(
      (int)"form: error at %s",
      (__int64)v12,
      v19,
      v20,
      v21,
      v22,
      v16,
      a6,
      si128,
      a8,
      v23,
      v24,
      a11,
      a12,
      (char)&v190);
    v171 = nullptr;
    goto LABEL_242;
  }
  sub_503B20((__m128i *)v198, *(double *)v16.m128_u64, *(double *)a6.m128_u64, si128, v156, v19, v20, v21, v22);
  v184 = (QT::QGridLayout *)operator new(0x20u);
  QT::QGridLayout::QGridLayout(v184, nullptr);
  QT::QLayout::setContentsMargins(v184, 0, 0, 0, 0);
  v25 = *((_QWORD *)v187 + 5);
  v175 = (__int64 *)((char *)v187 + 40);
  if ( v25 )
  {
    v26 = *((_QWORD *)v187 + 6);
    if ( v26 )
    {
      for ( i = 0; i != v26; ++i )
      {
        v28 = v25 + 72 * i;
        v29 = *(_QWORD *)(v28 + 8);
        if ( v29 )
        {
          *(_QWORD *)(v28 + 16) = 0;
          qfree(v29, nullptr);
          v25 = *((_QWORD *)v187 + 5);
        }
      }
    }
    *((_QWORD *)v187 + 6) = 0;
    qfree(v25, nullptr);
    *((_QWORD *)v187 + 5) = 0;
    *((_QWORD *)v187 + 7) = 0;
  }
  v192 = nullptr;
  v30 = (_QWORD *)((char *)v187 + 184);
  *((_QWORD *)v187 + 51) = 0;
  v163 = (__int64)v187 + 184;
  while ( !*v30 )
  {
    if ( ++v30 == (_QWORD *)((char *)v187 + 216) )
    {
      v31 = 0;
      goto LABEL_22;
    }
  }
  v31 = v167;
LABEL_22:
  v201 = 0;
  v204 = 0;
  v202 = 0;
  *(_OWORD *)v203 = 0;
  if ( v199 <= 0 )
  {
    v171 = nullptr;
    v97 = *((QT::QBoxLayout **)v187 + 47);
    goto LABEL_269;
  }
  v171 = nullptr;
  v32 = 0;
  v174 = 0;
  v177 = nullptr;
  v166 = nullptr;
  v165 = nullptr;
  v168 = v31 ^ 1;
  v33 = 0;
  do
  {
    v34 = (char *)v198[1] + 24 * v33;
    v169 = *(volatile signed __int32 **)v34;
    v172 = *((_QWORD *)v34 + 1);
    v176 = *((_QWORD *)v34 + 2);
    if ( *(_QWORD *)v34 )
      _InterlockedAdd(*(volatile signed __int32 **)v34, 1u);
    v35 = v174;
    v36 = sub_4FABB0((__int64)v198, v174);
    v193 = nullptr;
    v188 = -1;
    v41 = v36;
    v189 = 0;
    v173 = v168 & (v199 - 1 == v32);
    if ( (_DWORD)v176 )
    {
      if ( (_DWORD)v176 == 1 )
      {
        v42 = *(unsigned __int8 *)(v172 + 16);
        if ( (_BYTE)v42 == 45 )
        {
          if ( v166 )
            sub_16B930((__int64)"Cannot support both vertical splitter & tabs in the same form");
          if ( !v165 )
          {
            v165 = (QT::QSplitter *)operator new(0x28u);
            QT::QSplitter::QSplitter(v165, 2, 0);
            v136 = (QT::QWidget *)operator new(0x28u);
            QT::QWidget::QWidget(v136, v165, 0);
            QT::QWidget::setLayout(v136, v184);
            QT::QSplitter::addWidget(v165, v136);
          }
          v132 = (QT::QWidget *)operator new(0x28u);
          QT::QWidget::QWidget(v132, v165, 0);
          v184 = (QT::QGridLayout *)operator new(0x20u);
          QT::QGridLayout::QGridLayout(v184, nullptr);
          QT::QLayout::setContentsMargins(v184, 0, 0, 0, 0);
          QT::QWidget::setLayout(v132, v184);
          v35 = (__int64)v132;
          QT::QSplitter::addWidget(v165, v132);
        }
        else
        {
          if ( (_BYTE)v42 != 61 )
            goto LABEL_30;
          if ( v165 )
            sub_16B930((__int64)"Cannot support both vertical splitter & tabs in the same form");
          if ( v166 )
          {
            v114 = *((_QWORD *)v187 + 5);
            v115 = v114 + 72LL * *((_QWORD *)v187 + 6);
            if ( v114 != v115 )
            {
              while ( *(QT::QTabWidget **)v114 != v166 )
              {
                v114 += 72;
                if ( v115 == v114 )
                  goto LABEL_186;
              }
              if ( v114 )
                *(_DWORD *)(v114 + 56) = *(_DWORD *)(v172 + 32);
            }
          }
          else
          {
            v166 = (QT::QTabWidget *)operator new(0x28u);
            QT::QTabWidget::QTabWidget(v166, nullptr);
            v133 = *((_QWORD *)v187 + 6);
            v134 = *((_QWORD *)v187 + 5);
            if ( *((_QWORD *)v187 + 7) < (unsigned __int64)(v133 + 1) )
            {
              v134 = qvector_reserve(v175, v134, v133 + 1, 72);
              *((_QWORD *)v187 + 5) = v134;
              v133 = *((_QWORD *)v187 + 6);
            }
            v135 = v134 + 72 * v133;
            *(_QWORD *)(v135 + 56) = 0xFFFFFFFFLL;
            *(_QWORD *)(v135 + 48) = 0;
            *(_OWORD *)v135 = 0;
            *(_QWORD *)(v135 + 64) = 0;
            *(_OWORD *)(v135 + 16) = 0;
            *(_OWORD *)(v135 + 32) = 0;
            ++*((_QWORD *)v187 + 6);
            *(_BYTE *)(v135 + 52) = 61;
            *(_QWORD *)v135 = v166;
            *(_DWORD *)(v135 + 56) = *(_DWORD *)(v172 + 32);
          }
LABEL_186:
          v116 = (QT::QWidget *)operator new(0x28u);
          QT::QWidget::QWidget(v116, v166, 0);
          v117 = (QT::QHBoxLayout *)operator new(0x20u);
          QT::QHBoxLayout::QHBoxLayout(v117);
          v118 = (QT::QWidget *)operator new(0x28u);
          QT::QWidget::QWidget(v118, v116, 0);
          QT::QWidget::setLayout(v118, v184);
          QT::QBoxLayout::addWidget(v117, v118, 0, 0);
          QT::QWidget::setLayout(v116, v117);
          QT::QTabWidget::addTab(v166, v116, (const QT::QString *)(v172 + 56));
          v184 = (QT::QGridLayout *)operator new(0x20u);
          QT::QGridLayout::QGridLayout(v184, nullptr);
          v35 = 0;
          QT::QLayout::setContentsMargins(v184, 0, 0, 0, 0);
        }
      }
      else if ( (int)v176 <= 0 )
      {
        goto LABEL_137;
      }
      v42 = *(unsigned __int8 *)(v172 + 16);
LABEL_30:
      v43 = 0;
      v44 = 0;
      v179 = v41 ^ 1;
      v45 = v172;
      v181 = 0;
      v178 = 0;
      v180 = -1;
      v185 = nullptr;
      while ( 1 )
      {
        v46 = _mm_loadu_si128((const __m128i *)v45);
        v47 = *(_DWORD *)(v45 + 36);
        v208 = v42;
        v48 = _mm_loadu_si128((const __m128i *)(v45 + 40));
        *(__m128i *)v207 = v46;
        v49 = _mm_loadu_si128((const __m128i *)(v45 + 20));
        v210 = v47;
        v209 = v49;
        v211 = v48;
        a6 = (__m128)_mm_loadu_si128((const __m128i *)(v45 + 56));
        v213 = *(_QWORD *)(v45 + 72);
        *(__m128 *)ptr = a6;
        if ( a6.m128_u64[0] )
        {
          _InterlockedAdd((volatile signed __int32 *)a6.m128_u64[0], 1u);
          v50 = v209.m128i_i32[1];
          v42 = (unsigned __int8)v208;
        }
        else
        {
          v49 = _mm_shuffle_epi32(v49, 85);
          v50 = _mm_cvtsi128_si32(v49);
        }
        v51 = 1;
        v214 = *(_BYTE *)(v45 + 80);
        v215 = *(_DWORD *)(v45 + 84);
        j = *(unsigned int *)(v45 + 88);
        v216 = *(_DWORD *)(v45 + 88);
        if ( v44 > 0 && v179 && v50 > v44 && (_BYTE)v42 != 42 && v181 )
        {
          if ( !(_BYTE)v42 )
          {
            v44 = v209.m128i_i32[2] + v50;
LABEL_106:
            v35 = (__int64)ptr;
            v177 = sub_4FBAA0((__int64)v187, (__int64)v207);
            QT::QString::operator=(v203, ptr);
            if ( !v213 && v208 != 32 )
              goto LABEL_108;
            if ( (_DWORD)v176 - 1 == (_DWORD)v43 )
            {
              if ( v190 )
              {
                v121 = *((_QWORD *)v190 + 6);
                v122 = v121;
              }
              else
              {
                v122 = 0;
                LODWORD(v121) = 0;
              }
              v35 = v209.m128i_i32[1];
              v123 = v121 - v209.m128i_i32[1];
              v124 = v122 - v209.m128i_i32[1] <= 1;
              v54 = 1;
              if ( v124 )
                v123 = 1;
              v209.m128i_i32[2] = v123;
              if ( v216 != 2 )
                goto LABEL_132;
            }
            else if ( v216 != 2 )
            {
LABEL_132:
              v57 = (__int64)v177;
              if ( v208 != 32 )
              {
LABEL_108:
                v57 = (__int64)v177;
                v181 = v167;
                goto LABEL_72;
              }
LABEL_133:
              *((_BYTE *)v177 + 40) = v211.m128i_i8[8];
              v35 = (__int64)v207;
              sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[0], (__int64)v177, 0, 0, 0);
              v181 = v167;
              goto LABEL_72;
            }
            v35 = (__int64)&v193;
            sub_4FA760((__int64)v187, &v193, (__int64)v207, (int *)&v188, &v189, (__int64)v177);
            if ( v208 != 32 )
            {
              v57 = 0;
              v181 = v167;
              goto LABEL_58;
            }
            v57 = 0;
            goto LABEL_133;
          }
          v35 = (unsigned int)(v42 - 67);
          if ( (unsigned __int8)(v42 - 67) > 0x2Fu )
          {
            if ( (_DWORD)j == 2 )
            {
              v44 = v209.m128i_i32[2] + v50;
              if ( (char)v42 > 89 )
              {
LABEL_112:
                v54 = (unsigned __int8)(v42 - 98);
                switch ( (char)v42 )
                {
                  case 'b':
                    v57 = (__int64)sub_4FB880(v187, (const QT::QString *)v203, v210 != 0, (__int64 *)v211.m128i_i64[0]);
                    v86 = sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[1], v57, (__int64)v177, v211.m128i_i64[0], 0);
                    v35 = v57;
                    sub_5003D0(
                      (__int64 *)v187,
                      (QT::QAbstractButton **)v57,
                      v208,
                      (unsigned __int16 *)v211.m128i_i64[1],
                      v86,
                      v161,
                      *(double *)v49.m128i_i64,
                      a6,
                      si128,
                      a8,
                      v87,
                      v88,
                      a11,
                      a12);
                    if ( v177 )
                    {
                      v35 = v57;
                      sub_498170((__int64)v177, v57);
                    }
LABEL_91:
                    v181 = 0;
                    goto LABEL_72;
                  case 'c':
                  case 'r':
                    goto LABEL_92;
                  case 'f':
LABEL_74:
                    v66 = (QT::QHBoxLayout *)operator new(0x20u);
                    QT::QHBoxLayout::QHBoxLayout(v66);
                    v182 = sub_4FB410(
                             v187,
                             (const QT::QString *)v203,
                             (__int64)v207,
                             *(double *)v49.m128i_i64,
                             a6,
                             si128,
                             a8,
                             v67,
                             v68,
                             a11,
                             a12);
                    v69 = (_QWORD *)sub_4F9E00(
                                      v175,
                                      (__int64)v207,
                                      v211.m128i_i64[0],
                                      (__int64)v182,
                                      (__int64)v177,
                                      0,
                                      0);
                    QT::QBoxLayout::addWidget(v66, v182, 0, 0);
                    if ( v177 )
                    {
                      sub_498170((__int64)v177, (__int64)v182);
                      v170 = sub_504160((__int64)v187, (const QT::QString *)v203);
                      QT::QBoxLayout::addWidget(v66, v170, 0, 0);
                      v70 = v170;
                      v205[0] = v170;
                      v71 = v69[2];
                      v72 = v69[1];
                      if ( v69[3] < (unsigned __int64)(v71 + 1) )
                      {
                        v119 = qvector_reserve(v69 + 1, v72, v71 + 1, 8);
                        v69[1] = v119;
                        v72 = v119;
                        v70 = v170;
                        v71 = v69[2];
                      }
                      *(_QWORD *)(v72 + 8 * v71) = v70;
                      ++v69[2];
                    }
                    if ( v214 )
                      v192 = v182;
                    v35 = (__int64)v66;
                    QT::QGridLayout::addLayout(v184, v66, v209.m128i_u32[0], v209.m128i_u32[1], 1, v209.m128i_u32[2], 0);
                    v54 = v161;
                    goto LABEL_81;
                  case 'h':
                    goto LABEL_106;
                  case 'i':
                  case 'l':
                  case 'm':
                  case 'n':
                  case 'o':
                  case 'q':
                  case 's':
                  case 'u':
                  case 'y':
                    goto LABEL_68;
                  case 'k':
                    v57 = (__int64)sub_503EF0((__int64)v187, (const QT::QString *)ptr, *(double *)v49.m128i_i64, a6);
                    goto LABEL_118;
                  case 'p':
                    v57 = (__int64)sub_4FB220(
                                     (__int64)v187,
                                     (const QT::QString *)v203,
                                     (__int64)v207,
                                     *(double *)v49.m128i_i64,
                                     a6,
                                     si128,
                                     a8,
                                     v39,
                                     v40,
                                     a11,
                                     a12);
                    QT::QLineEdit::setEchoMode(v57, *(double *)v49.m128i_i64);
                    v64 = (__int64)v177;
                    if ( !v177 )
                      goto LABEL_70;
                    goto LABEL_69;
                  case 't':
                    v57 = (__int64)sub_5044E0((__int64)v187, (__int64)ptr, v211.m128i_i64[0]);
                    sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[0], v57, 0, 0, 0);
                    j = v160;
                    v35 = v161;
LABEL_114:
                    v181 = 0;
                    v51 = 0;
                    goto LABEL_72;
                  case '|':
                    goto LABEL_81;
                  default:
                    goto LABEL_47;
                }
              }
LABEL_43:
              v54 = (unsigned __int8)v42;
              switch ( (char)v42 )
              {
                case 0:
                case 32:
                  goto LABEL_106;
                case 36:
                case 65:
                case 68:
                  goto LABEL_68;
                case 42:
                  v181 = 0;
                  *((_QWORD *)v187 + 15) = v211.m128i_i64[0];
                  v57 = 0;
                  goto LABEL_58;
                case 45:
                case 61:
                  goto LABEL_81;
                case 66:
                  v78 = sub_503DF0((__int64)v187, (const QT::QString *)ptr, *(double *)v49.m128i_i64, a6);
                  v79 = ptr[1];
                  v57 = (__int64)v78;
                  if ( !ptr[1] )
                    v79 = &QT::QString::_empty;
                  if ( !(unsigned int)QT::QString::compare_helper(v79, v213, "...", 3, 1) )
                  {
                    QT::QString::fromUtf8(v205, 3, "...");
                    v80 = sub_4F9CA0((QT::QString *)v205, 1);
                    QT::QWidget::setFixedWidth((QT::QWidget *)v57, v80 + 25);
                    if ( v205[0] )
                    {
                      if ( !_InterlockedSub((volatile signed __int32 *)v205[0], 1u) )
                        free(v205[0]);
                    }
                  }
                  sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[0], v57, 0, 0, 0);
                  v82 = v159;
                  v83 = *((QT::QDialogButtonBox **)v187 + 51);
                  v84 = v161;
                  if ( !v173 )
                    goto LABEL_162;
                  if ( v83 )
                    goto LABEL_102;
                  if ( v176 <= 0 )
                    goto LABEL_161;
                  LODWORD(v81) = v173;
                  v129 = 0;
                  v130 = 0;
                  do
                  {
                    v131 = 96 * v130;
                    LOBYTE(v131) = *(_BYTE *)(v172 + v131 + 16) == 66;
                    ++v129;
                    v81 = (unsigned int)v131 & (unsigned int)v81;
                    v130 = v129;
                  }
                  while ( v129 < v176 );
                  if ( (_BYTE)v81 )
                  {
LABEL_161:
                    v83 = (QT::QDialogButtonBox *)operator new(0x28u);
                    QT::QDialogButtonBox::QDialogButtonBox(v83, nullptr);
                    *((_QWORD *)v187 + 51) = v83;
LABEL_162:
                    if ( v83 )
                    {
LABEL_102:
                      QT::QDialogButtonBox::addButton(v83, v57, 3);
                      v205[0] = (void *)v57;
                      v35 = *((_QWORD *)v187 + 8);
                      j = *((_QWORD *)v187 + 10);
                      v85 = *((_QWORD *)v187 + 9);
                      v37 = v85 + 1;
                      if ( j < v85 + 1 )
                      {
                        v35 = qvector_reserve((char *)v187 + 64, v35, v85 + 1, 8);
                        *((_QWORD *)v187 + 8) = v35;
                        v85 = *((_QWORD *)v187 + 9);
                      }
                      *(_QWORD *)(v35 + 8 * v85) = v57;
                      v57 = 0;
                      v181 = 0;
                      ++*((_QWORD *)v187 + 9);
                      goto LABEL_58;
                    }
                  }
                  else
                  {
                    v173 = 0;
                  }
                  if ( v216 != 1 )
                  {
                    v35 = v174;
                    if ( (unsigned __int8)sub_4FA7F0((__int64)v198, v174, v43) && v207[2] > 0 )
                    {
                      v35 = (__int64)&v201;
                      sub_4F89C0((__int64)v207, &v201);
                    }
                    goto LABEL_114;
                  }
                  v183 = v207[2];
                  QT::QString::fromUtf8(v205, 1, "X", v81, v82, v84, v162, v163);
                  v120 = sub_4F9CA0((QT::QString *)v205, v183);
                  QT::QWidget::setFixedWidth((QT::QWidget *)v57, v120 + 10);
                  if ( v205[0] && !_InterlockedSub((volatile signed __int32 *)v205[0], 1u) )
                    free(v205[0]);
                  v35 = (__int64)&v193;
                  sub_4FA760((__int64)v187, &v193, (__int64)v207, (int *)&v188, &v189, v57);
                  v181 = 0;
                  v57 = 0;
                  break;
                case 67:
                  goto LABEL_92;
                case 69:
                  v73 = 0;
                  if ( v216 != 3 )
                    v73 = v207[2];
                  v57 = (__int64)sub_4FBC50(
                                   *(double *)v49.m128i_i64,
                                   (__int64)v187,
                                   (const QT::QString *)ptr,
                                   v73,
                                   v211.m128i_i64[0],
                                   v209.m128i_i32[3]);
                  if ( v210 == 1 )
                  {
                    if ( (*(_BYTE *)(*((_QWORD *)v187 + 4) + 18LL) & 3) != 0 )
                    {
                      v111 = sub_50FA70(v57);
                      QT::QWidget::setMinimumSize(
                        (QT::QWidget *)v57,
                        *(_DWORD *)(v111 + 2504),
                        *(_DWORD *)(v111 + 2508));
                    }
                    else
                    {
                      QT::QWidget::setSizePolicy(v57, sub_550000);
                    }
                  }
                  if ( v176 <= 1 || v216 == 3 )
                  {
                    v51 = 0;
                  }
                  else if ( v207[2] > 0 )
                  {
                    sub_4F89C0((__int64)v207, &v201);
                  }
                  v74 = sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[1], v57, 0, 0, 0);
                  v35 = v57;
                  *(_DWORD *)(v74 + 48) = 0;
                  sub_5003D0(
                    (__int64 *)v187,
                    (QT::QAbstractButton **)v57,
                    v208,
                    (unsigned __int16 *)v211.m128i_i64[1],
                    v74,
                    v75,
                    *(double *)v49.m128i_i64,
                    a6,
                    si128,
                    a8,
                    v76,
                    v77,
                    a11,
                    a12);
                  goto LABEL_91;
                case 70:
                  goto LABEL_74;
                default:
                  goto LABEL_47;
              }
              goto LABEL_58;
            }
          }
          else
          {
            v53 = 0x800100008001LL;
            if ( _bittest64(&v53, v35) || (_DWORD)j == 2 )
              goto LABEL_41;
          }
          v112 = operator new(0x28u);
          v113 = QT::QFontMetrics::height((QT::QFontMetrics *)v191);
          si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
          *(_DWORD *)(v112 + 8) = 0;
          *(_DWORD *)(v112 + 16) = v113;
          v35 = v112;
          *(_DWORD *)(v112 + 12) = 1;
          *(_QWORD *)v112 = (char *)&`vtable for'QT::QSpacerItem + 16;
          *(_DWORD *)(v112 + 20) = 0x100000;
          *(__m128 *)(v112 + 24) = si128;
          QT::QGridLayout::addItem(v184, v112, v174, (unsigned int)v44, 1, (unsigned int)(v209.m128i_i32[1] - v44), 1);
          v50 = v209.m128i_i32[1];
          for ( j = v202; v44 < v209.m128i_i32[1]; *(_QWORD *)&v202 = v202 + 1 )
          {
            v35 = v201;
            if ( *((_QWORD *)&v202 + 1) < j + 1 )
            {
              v201 = qvector_reserve(&v201, v201, j + 1, 4);
              j = v202;
              v35 = v201;
            }
            *(_DWORD *)(v35 + 4 * j) = v44++;
            v50 = v209.m128i_i32[1];
            j = v202 + 1;
          }
          LOBYTE(v42) = v208;
        }
LABEL_41:
        v44 = v209.m128i_i32[2] + v50;
        if ( (char)v42 > 89 )
          goto LABEL_112;
        if ( (char)v42 <= 71 )
          goto LABEL_43;
        if ( ((1LL << ((unsigned __int8)v42 - 72)) & 0x318F3) != 0 )
        {
LABEL_68:
          v64 = (__int64)v177;
          v57 = (__int64)sub_4FB410(
                           v187,
                           (const QT::QString *)v203,
                           (__int64)v207,
                           *(double *)v49.m128i_i64,
                           a6,
                           si128,
                           a8,
                           v39,
                           v40,
                           a11,
                           a12);
          if ( v177 )
LABEL_69:
            sub_498170(v64, v57);
LABEL_70:
          v158 = v207[3];
          v65 = (__int64)v177;
          goto LABEL_71;
        }
        if ( (_BYTE)v42 != 82 )
        {
          if ( (_BYTE)v42 != 75 )
          {
LABEL_47:
            v55 = sub_508440((unsigned int)(char)v42);
            if ( !v55
              || (v56 = (*(__int64 (__fastcall **)(__int64, QT::QWidget *, int *))(*(_QWORD *)v55 + 16LL))(
                          v55,
                          v187,
                          v207),
                  (v57 = v56) == 0) )
            {
              sub_16B930((__int64)"Unhandled form field type: '%c'", (unsigned int)v208);
            }
            sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[0], v56, 0, 0, 0);
            v181 = 0;
            v51 = 0;
LABEL_50:
            if ( v214 )
              v192 = (QT::QAbstractButton *)v57;
            if ( v216 == 3 )
            {
              if ( !v185 )
              {
                v185 = (QT::QSplitter *)operator new(0x28u);
                QT::QSplitter::QSplitter(v185, nullptr);
              }
              v89 = v180;
              if ( v180 == -1 )
                v89 = v209.m128i_i32[1];
              v180 = v89;
              v178 = v209.m128i_i32[2] + v209.m128i_i32[1] - v89;
              QT::QSplitter::addWidget(v185, (QT::QWidget *)v57);
              v90 = v207[2];
              v35 = (unsigned int)QT::QSplitter::count(v185) - 1;
              QT::QSplitter::setStretchFactor(v185, v35, v90);
            }
            else
            {
              if ( v185 )
              {
                QT::QGridLayout::addWidget(v184, v185, v209.m128i_u32[0], v180, 1, v178, v51);
                v180 = -1;
              }
              QT::QGridLayout::addWidget(v184, v57, v209.m128i_u32[0], v209.m128i_u32[1], 1, v209.m128i_u32[2], v51);
              v38 = v161;
              v205[0] = (void *)v57;
              v35 = *((_QWORD *)v187 + 8);
              j = *((_QWORD *)v187 + 10);
              v58 = *((_QWORD *)v187 + 9);
              v37 = v58 + 1;
              if ( j < v58 + 1 )
              {
                v35 = qvector_reserve((char *)v187 + 64, v35, v58 + 1, 8);
                *((_QWORD *)v187 + 8) = v35;
                v58 = *((_QWORD *)v187 + 9);
              }
              *(_QWORD *)(v35 + 8 * v58) = v57;
              v185 = nullptr;
              ++*((_QWORD *)v187 + 9);
            }
            goto LABEL_58;
          }
          v91 = v207[3];
          if ( v207[3] < 0 )
            v207[3] = 0;
          v57 = (__int64)sub_504020((__int64)v187, (unsigned int *)v211.m128i_i64[0], v91 >= 0);
          if ( v177 )
            sub_498170((__int64)v177, v57);
LABEL_118:
          v65 = 0;
          v158 = 0;
LABEL_71:
          v35 = (__int64)v207;
          sub_4F9E00(v175, (__int64)v207, v211.m128i_i64[0], v57, v65, 0, v158);
          v54 = v161;
          v181 = 0;
LABEL_72:
          if ( !v57 )
            goto LABEL_58;
          goto LABEL_50;
        }
LABEL_92:
        v35 = v209.m128i_u32[0];
        *(_QWORD *)&v194 = v171;
        v57 = sub_502DE0((int **)&v196, v209.m128i_i32[0], v207[1], (__int64)&v194, v37, v38);
        v171 = (void *)v194;
        if ( v57 )
        {
          v35 = (__int64)sub_4FF2B0(v187, v57, &v192);
          QT::QGridLayout::addWidget(
            v184,
            v35,
            *(unsigned int *)(v57 + 44),
            *(unsigned int *)(v57 + 48),
            *(unsigned int *)(v57 + 120),
            *(unsigned int *)(v57 + 52),
            0);
          v54 = v161;
LABEL_81:
          v181 = 0;
          v57 = 0;
        }
        else
        {
          v181 = 0;
        }
LABEL_58:
        v59 = v193;
        if ( v193
          && (*(int (__fastcall **)(QT::QHBoxLayout *, __int64, __int64, unsigned __int64, __int64, unsigned __int64))(*(_QWORD *)v193 + 200LL))(
               v193,
               v35,
               v54,
               j,
               v37,
               v38) > 0
          && (v176 - 1 == v43 || v57) )
        {
          v60 = *(__int64 (__fastcall **)(QT::QHBoxLayout *, _QWORD))(*(_QWORD *)v59 + 168LL);
          v61 = (*(__int64 (__fastcall **)(QT::QHBoxLayout *))(*(_QWORD *)v59 + 200LL))(v59);
          v62 = v60(v59, (unsigned int)(v61 - 1));
          v63 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 104LL))(v62);
          QT::QWidget::setSizePolicy(v63, 0x40000);
          QT::QGridLayout::addLayout(v184, v59, v209.m128i_u32[0], v188, 1, v189, 1);
          v35 = v157;
          v193 = nullptr;
        }
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        ++v43;
        v45 += 96;
        if ( (int)v176 <= (int)v43 )
        {
          if ( v185 )
          {
            v92 = QT::QGridLayout::rowCount(v184);
            QT::QGridLayout::addWidget(v184, v185, (unsigned int)(v92 - 1), v180, 1, v178, 0);
          }
LABEL_137:
          if ( v169 && !_InterlockedSub(v169, 1u) )
          {
            v93 = v172 + 96 * v176;
            if ( v172 != v93 )
            {
              v94 = v172;
              v95 = v187;
              do
              {
                v96 = *(volatile signed __int32 **)(v94 + 56);
                if ( v96 && !_InterlockedSub(v96, 1u) )
                  free(*(void **)(v94 + 56));
                v94 += 96;
              }
              while ( v93 != v94 );
              goto LABEL_145;
            }
            goto LABEL_146;
          }
          goto LABEL_147;
        }
        v42 = *(unsigned __int8 *)(v45 + 16);
      }
    }
    v125 = operator new(0x28u);
    *(_DWORD *)(v125 + 16) = QT::QFontMetrics::height((QT::QFontMetrics *)v191);
    *(_DWORD *)(v125 + 8) = 0;
    a8 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC310);
    *(_DWORD *)(v125 + 12) = 1;
    *(_QWORD *)v125 = (char *)&`vtable for'QT::QSpacerItem + 16;
    *(_DWORD *)(v125 + 20) = (_DWORD)&stru_110000;
    *(__m128 *)(v125 + 24) = a8;
    QT::QGridLayout::addItem(v184, v125, v174, 0, 1, 1, 1);
    if ( v169 && !_InterlockedSub(v169, 1u) )
    {
      v126 = v172 + 96 * v176;
      if ( v172 != v126 )
      {
        v127 = v172;
        v95 = v187;
        do
        {
          v128 = *(volatile signed __int32 **)(v127 + 56);
          if ( v128 && !_InterlockedSub(v128, 1u) )
            free(*(void **)(v127 + 56));
          v127 += 96;
        }
        while ( v126 != v127 );
LABEL_145:
        v187 = v95;
      }
LABEL_146:
      free((void *)v169);
    }
LABEL_147:
    v33 = (int)++v174;
    v32 = (int)v174;
  }
  while ( (int)v174 < v199 );
  v97 = *((QT::QBoxLayout **)v187 + 47);
  if ( v165 )
  {
    QT::QBoxLayout::addWidget(v97, v165, 0, 0);
    goto LABEL_150;
  }
  if ( v166 )
  {
    QT::QBoxLayout::addWidget(v97, v166, 0, 0);
    goto LABEL_150;
  }
LABEL_269:
  QT::QBoxLayout::addLayout(v97, v184, 0);
LABEL_150:
  v102 = *((_QWORD *)v187 + 51);
  if ( v102 )
    QT::QBoxLayout::addWidget(*((_QWORD *)v187 + 47), v102, 132, 0);
  v206 = 0;
  *(_OWORD *)v205 = 0;
  sub_4FF9A0(v162, (int **)v205, v98, v99, v100, v101);
  v103 = (int *)v205[0];
  v104 = v205[1];
  v105 = v206;
  v106 = QT::QGridLayout::columnCount(v184);
  if ( v106 > 0 )
  {
    v108 = nullptr;
    v186 = (QT::QSplitter *)v106;
    do
    {
      v109 = (int)v108;
      if ( v105 > (__int64)v108 )
      {
        if ( !v103 || *v103 > 1 )
        {
          v205[0] = v103;
          v205[1] = v104;
          v206 = v105;
          sub_187120((__int64)v205, 0, 0, 0, (unsigned int)v108, v107);
          v109 = (int)v108;
          v103 = (int *)v205[0];
          v104 = v205[1];
          v105 = v206;
        }
        v110 = *((_DWORD *)v104 + (_QWORD)v108);
      }
      else
      {
        v110 = 0;
      }
      QT::QGridLayout::setColumnStretch(v184, v109, v110);
      v108 = (QT::QSplitter *)((char *)v108 + 1);
    }
    while ( v186 != v108 );
  }
  v137 = 0;
  for ( k = 0; v137 < (unsigned __int64)v202; k = v137 )
  {
    QT::QGridLayout::setColumnStretch(v184, *(_DWORD *)(v201 + 4 * k), 0);
    ++v137;
  }
  v139 = *((_QWORD *)v187 + 47);
  QT::QWidget::setLayout(v187, (QT::QLayout *)v139);
  v167 = sub_4FD5C0((__int64)v187, (__m128)0LL, a6, si128, a8, v140, v141, a11, a12);
  if ( v167 )
  {
    sub_4F8E60(*((_QWORD **)v187 + 30));
    v142 = *((_QWORD *)v187 + 20) == 0;
    *((_QWORD *)v187 + 30) = 0;
    *((_QWORD *)v187 + 31) = (char *)v187 + 232;
    *((_QWORD *)v187 + 32) = (char *)v187 + 232;
    *((_QWORD *)v187 + 33) = 0;
    if ( !v142 )
      sub_505180((__int64)v187);
    sub_504700((__int64)v187, v163, a4[1], 0.0, a6);
    v139 = (__int64)a4;
    sub_4FC200((__int64)v187, a4, v192);
    v143 = *((QT::QWidget **)v187 + 46);
    if ( v143 )
    {
      v144 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v187 + 112LL))(v187);
      v139 = (unsigned int)v144;
      QT::QWidget::setMinimumSize(v143, v144, SHIDWORD(v144));
    }
  }
  if ( v103 && !_InterlockedSub(v103, 1u) )
    free(v103);
  if ( v203[0] && !_InterlockedSub((volatile signed __int32 *)v203[0], 1u) )
    free(v203[0]);
  if ( v201 )
  {
    *(_QWORD *)&v202 = 0;
    qfree(v201, (const char *)v139);
  }
LABEL_242:
  if ( v200[0] && !_InterlockedSub((volatile signed __int32 *)v200[0], 1u) )
    free(v200[0]);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v191);
  if ( v190 )
  {
    if ( !_InterlockedSub((volatile signed __int32 *)v190, 1u) )
    {
      v149 = v190;
      if ( v190 )
      {
        sub_4F8C90(*((_QWORD **)v190 + 3));
        v139 = 56;
        operator delete(v149, 0x38u);
      }
    }
  }
  if ( v198[0] && !_InterlockedSub((volatile signed __int32 *)v198[0], 1u) )
  {
    v150 = (char *)v198[1];
    v151 = (char *)v198[1] + 24 * v199;
    if ( v198[1] != v151 )
    {
      do
      {
        if ( *(_QWORD *)v150 && !_InterlockedSub(*(volatile signed __int32 **)v150, 1u) )
        {
          v152 = *((_QWORD *)v150 + 1);
          for ( m = v152 + 96LL * *((_QWORD *)v150 + 2); m != v152; v152 += 96 )
          {
            v154 = *(volatile signed __int32 **)(v152 + 56);
            if ( v154 && !_InterlockedSub(v154, 1u) )
              free(*(void **)(v152 + 56));
          }
          free(*(void **)v150);
        }
        v150 += 24;
      }
      while ( v151 != v150 );
    }
    free(v198[0]);
  }
  sub_502CB0((__int64)&v196, v139, v145, v146, v147, v148);
  if ( v171 && !_InterlockedSub((volatile signed __int32 *)v171, 1u) )
    free(v171);
  return v167;
}
