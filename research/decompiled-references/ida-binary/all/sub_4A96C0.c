unsigned __int64 __fastcall sub_4A96C0(
        __int64 a1,
        int a2,
        __int64 a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v11; // rbx
  int v12; // eax
  __int64 *v14; // rsi
  double v15; // xmm4_8
  double v16; // xmm5_8
  int v17; // eax
  bool v18; // zf
  char v19; // r15
  unsigned __int64 *v20; // r12
  __int64 v21; // r13
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rsi
  unsigned __int64 *v25; // r12
  __int64 v26; // r13
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rsi
  QT::QHeaderView *v29; // r13
  QT::QWidget *v30; // r12
  __int64 v31; // rax
  QT::QWidget **v32; // r12
  QT::QWidget **v33; // r15
  _BOOL4 v34; // r15d
  __m128i v35; // xmm0
  double v36; // xmm4_8
  double v37; // xmm5_8
  QT::QTreeView *v38; // rdi
  QT::QObject *v39; // rax
  const QT::QMetaObject *v40; // r9
  QT::QObject *v41; // rax
  const QT::QMetaObject *v42; // r9
  __int64 (__fastcall *v43)(__int64, unsigned __int64); // rax
  __int64 v44; // rax
  __int64 v45; // r12
  QT::QPersistentModelIndex *v46; // rax
  QT::QPersistentModelIndex *v47; // r15
  int v48; // eax
  QT::QWidget *v49; // rsi
  QT::QWidget *v50; // rdi
  double v51; // xmm4_8
  double v52; // xmm5_8
  int v54; // eax
  void *v55; // r13
  __int64 v56; // rax
  QT::QHeaderView *v57; // rax
  int v58; // r12d
  int v59; // r15d
  int v60; // eax
  __int64 (__fastcall *v61)(__int64, unsigned __int64); // rax
  QT::QHeaderView *v62; // rax
  __m128i v63; // xmm0
  __int64 v64; // rax
  QT::QHeaderView *v65; // rax
  __m128i v66; // xmm0
  const char *v67; // rdi
  __m128i si128; // xmm0
  __int64 v69; // r15
  __int64 v70; // r12
  const char *v71; // rdx
  const char *v72; // rax
  __int64 v73; // rdi
  void *v74; // r12
  QT::QHeaderView *v75; // rax
  __m128i v76; // xmm0
  __m128i v77; // xmm0
  QT::QHeaderView *v78; // rax
  QT::QHeaderView **v79; // r12
  __m128i v80; // xmm0
  __m128i v81; // xmm0
  int v82; // eax
  __int64 v83; // r12
  __int64 v84; // rax
  __int64 v85; // rax
  _DWORD *v86; // rax
  __m128i v87; // rax
  const char *v88; // rsi
  unsigned __int64 v89; // rdi
  __int64 v90; // r15
  __m128i v91; // xmm0
  __m128i v92; // xmm1
  char *v93; // rax
  __m128i v94; // xmm0
  char *v95; // rax
  __int64 v96; // rax
  unsigned __int64 v97; // r15
  unsigned __int64 v98; // rsi
  QT::QHeaderView *v99; // rcx
  __int64 v100; // rdx
  QT::QHeaderView *v101; // rdi
  QT::QHeaderView *v102; // rdx
  __int64 v103; // rax
  int v104; // r12d
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 i; // rcx
  __int64 v108; // r15
  _QWORD *v109; // rsi
  __int64 *v110; // rdx
  void *j; // rcx
  char *v112; // r8
  size_t v113; // r9
  unsigned __int64 v114; // r12
  unsigned __int64 v115; // r12
  unsigned __int64 v116; // r12
  unsigned __int64 v117; // r12
  void *v118; // rdi
  __m128i v119; // xmm0
  _QWORD *v120; // rbx
  __int64 v121; // rdi
  char *v122; // rax
  unsigned __int64 v123; // r12
  void *v124; // rdi
  __m128i v125; // xmm0
  _QWORD *v126; // rbx
  __int64 v127; // rdi
  unsigned __int64 v128; // r12
  void *v129; // rcx
  __m128i v130; // xmm0
  unsigned __int64 v131; // r12
  __m128i v132; // xmm0
  int v133; // eax
  __int64 v134; // rax
  __int64 v135; // r13
  __int64 v136; // r8
  void *v137; // rdx
  QT::QHeaderView *v138; // rsi
  char *v139; // r13
  QT::QHeaderView *v140; // rdx
  __m128i v141; // xmm0
  __int64 v142; // rax
  __int64 (__fastcall *v143)(__int64, unsigned __int64); // rax
  QT::QHeaderView *v144; // rax
  __int64 v145; // r13
  __m128i *v146; // rax
  __m128i v147; // xmm0
  __int64 v148; // rsi
  __m128i *v149; // rax
  __m128i v150; // xmm0
  __int64 v151; // rsi
  __m128i *v152; // rax
  __m128i v153; // xmm0
  const char *v154; // rsi
  _BOOL8 (__fastcall *v155)(__int64); // rax
  void *v156; // rdi
  __int64 v157; // r12
  __int64 v158; // r15
  char *v159; // rdx
  char *v160; // rax
  __int64 v161; // rdi
  void *v162; // rdi
  __int64 v163; // r12
  __int64 v164; // r15
  char *v165; // rdx
  __int64 *v166; // rax
  __int64 v167; // rdi
  const char *v168; // rdi
  __int64 v169; // r12
  __int64 v170; // r15
  const char *v171; // rdx
  const char *v172; // rax
  __int64 v173; // rdi
  char *v174; // rdi
  __int64 v175; // r12
  __int64 v176; // r15
  char *v177; // rdx
  char *v178; // rax
  __int64 v179; // rdi
  QT::QTreeView *v180; // rdi
  __m128i *v181; // rax
  __m128i v182; // xmm0
  QT::QTreeView *v183; // rdi
  __int64 v184; // r13
  __m128i *v185; // rax
  QT::QHeaderView *v186; // rax
  __int64 v187; // rdx
  void *v188; // rdi
  void *v189; // rdi
  void *v190; // rdi
  __int64 v191; // r15
  QT::QHeaderView *v192; // r12
  __int64 v193; // rdx
  void *v194; // rdx
  __int64 v195; // rdi
  void *v196; // rax
  void *v197; // rdx
  __int64 v198; // r12
  QT::QHeaderView *v199; // r15
  __int64 v200; // rdx
  void *v201; // rdx
  __int64 v202; // rdi
  void *v203; // rax
  void *v204; // rdx
  char *v205; // rdi
  __int64 v206; // r12
  __int64 v207; // r15
  char *v208; // rdx
  char *v209; // rax
  __int64 v210; // rdi
  void *v211; // rax
  void *v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rdi
  void *v215; // rax
  _QWORD *v216; // r8
  size_t v217; // rdx
  __int64 v218; // rdx
  __int64 v219; // rdi
  void *v220; // rax
  _QWORD *v221; // r8
  size_t v222; // rdx
  size_t v223; // r15
  QT::QHeaderView **v224; // rax
  size_t v225; // r15
  void *v226; // rax
  void *v227; // [rsp+0h] [rbp-2E0h]
  size_t n[2]; // [rsp+10h] [rbp-2D0h] BYREF
  void *src[2]; // [rsp+20h] [rbp-2C0h] BYREF
  _QWORD *v230; // [rsp+30h] [rbp-2B0h]
  __m128i v231; // [rsp+38h] [rbp-2A8h] BYREF
  _QWORD *v232; // [rsp+48h] [rbp-298h]
  __int64 v233; // [rsp+50h] [rbp-290h]
  int v234; // [rsp+58h] [rbp-288h]
  int v235; // [rsp+5Ch] [rbp-284h]
  QT::QHeaderView *v236[2]; // [rsp+60h] [rbp-280h] BYREF
  _QWORD v237[2]; // [rsp+70h] [rbp-270h] BYREF
  _QWORD v238[2]; // [rsp+80h] [rbp-260h] BYREF
  _QWORD v239[2]; // [rsp+90h] [rbp-250h] BYREF
  _QWORD v240[2]; // [rsp+A0h] [rbp-240h] BYREF
  _QWORD v241[2]; // [rsp+B0h] [rbp-230h] BYREF
  _QWORD v242[2]; // [rsp+C0h] [rbp-220h] BYREF
  _QWORD v243[2]; // [rsp+D0h] [rbp-210h] BYREF
  __m128i v244; // [rsp+E0h] [rbp-200h] BYREF
  QT::QHeaderView *v245; // [rsp+F0h] [rbp-1F0h] BYREF
  __m128i v246; // [rsp+F8h] [rbp-1E8h] BYREF
  __int64 v247; // [rsp+110h] [rbp-1D0h] BYREF
  __int128 v248; // [rsp+118h] [rbp-1C8h]
  __int64 v249; // [rsp+128h] [rbp-1B8h]
  _QWORD v250[3]; // [rsp+130h] [rbp-1B0h] BYREF
  __int64 v251; // [rsp+148h] [rbp-198h]
  __int64 v252; // [rsp+150h] [rbp-190h]
  char *v253; // [rsp+170h] [rbp-170h] BYREF
  __m128i v254; // [rsp+178h] [rbp-168h]
  const char *v255; // [rsp+188h] [rbp-158h] BYREF
  __m128i v256; // [rsp+190h] [rbp-150h]
  void *v257; // [rsp+1A0h] [rbp-140h]
  __m128i v258; // [rsp+1A8h] [rbp-138h]
  QT::QHeaderView **v259; // [rsp+1B8h] [rbp-128h] BYREF
  __m128i v260; // [rsp+1C0h] [rbp-120h]
  int v261; // [rsp+1D0h] [rbp-110h]
  _BYTE ptr[24]; // [rsp+1E0h] [rbp-100h] BYREF
  __m128i v263; // [rsp+1F8h] [rbp-E8h] BYREF
  void *v264; // [rsp+208h] [rbp-D8h] BYREF
  unsigned __int64 v265; // [rsp+210h] [rbp-D0h]
  unsigned __int64 v266; // [rsp+218h] [rbp-C8h]
  __int64 v267; // [rsp+220h] [rbp-C0h]
  void *dest; // [rsp+228h] [rbp-B8h] BYREF
  unsigned __int64 v269; // [rsp+230h] [rbp-B0h]
  unsigned __int64 v270; // [rsp+238h] [rbp-A8h]
  char *v271; // [rsp+240h] [rbp-A0h]
  __m128i v272; // [rsp+248h] [rbp-98h]
  char *v273; // [rsp+258h] [rbp-88h]
  __m128i v274; // [rsp+260h] [rbp-80h]
  void *v275; // [rsp+270h] [rbp-70h]
  __m128i v276; // [rsp+278h] [rbp-68h]
  void *v277; // [rsp+288h] [rbp-58h]
  __m128i v278; // [rsp+290h] [rbp-50h]
  int v279; // [rsp+2A0h] [rbp-40h]
  unsigned __int64 v280; // [rsp+2A8h] [rbp-38h]

  v11 = a1;
  v235 = a2;
  v12 = *(_DWORD *)(a1 + 2376);
  v280 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 2008) |= 0x20u;
  v234 = v12;
  if ( v12 == 2 )
  {
    v14 = (__int64 *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
    v232 = v250;
    sub_49DEA0((__int64)v250, (QT::QHeaderView *)v14);
    v249 = -1;
    v248 = 0;
    if ( v235 == 2 )
    {
      *(_DWORD *)(a1 + 2376) = 2;
      v233 = 0;
      goto LABEL_49;
    }
  }
  else
  {
    v14 = (__int64 *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
    v232 = v250;
    sub_49DEA0((__int64)v250, (QT::QHeaderView *)v14);
    v249 = -1;
    v248 = 0;
    if ( v234 == v235 )
    {
      v17 = v235;
      v233 = 0;
      *(_DWORD *)(a1 + 2376) = v235;
      if ( !v17 )
        goto LABEL_4;
      goto LABEL_49;
    }
  }
  v14 = &v247;
  v247 = 0;
  sub_4A6DB0((__int64 *)a1, &v247, 3, 0.0, a5, a6, a7, v15, v16, a10, a11);
  v233 = v247;
  v54 = v235;
  *(_DWORD *)(a1 + 2376) = v235;
  if ( !v54 )
  {
LABEL_4:
    v18 = *(_QWORD *)(a1 + 2384) == 0;
    v245 = nullptr;
    v19 = 1;
    v246 = 0;
    v20 = (unsigned __int64 *)&v245;
    v253 = nullptr;
    v254 = 0;
    if ( v18 )
      goto LABEL_61;
    goto LABEL_5;
  }
LABEL_49:
  v55 = *(void **)(a1 + 2384);
  if ( v55 )
  {
    v56 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 2384));
    sub_48AD50(v56, v235 == 1);
    v18 = *(_QWORD *)(a1 + 2384) == 0;
    v245 = nullptr;
    v253 = nullptr;
    v246 = 0;
    v254 = 0;
    if ( v18 )
      goto LABEL_61;
    v19 = 1;
    v20 = (unsigned __int64 *)&v253;
LABEL_5:
    *(_QWORD *)ptr = QT::QSplitter::widget(*(QT::QSplitter **)(v11 + 2480), 0);
    v21 = *(_QWORD *)ptr;
    v22 = v20[1];
    v23 = v20[2];
    v24 = *v20;
    v236[0] = (QT::QHeaderView *)ptr;
    if ( v23 < v22 + 1 )
    {
      v85 = qvector_reserve(v20, v24, v22 + 1, 8);
      *v20 = v85;
      v24 = v85;
      v22 = v20[1];
    }
    *(_QWORD *)(v24 + 8 * v22) = v21;
    ++v20[1];
    v25 = (unsigned __int64 *)&v245;
    if ( *(_DWORD *)(v11 + 2376) != 2 )
      v25 = (unsigned __int64 *)&v253;
    *(_QWORD *)ptr = QT::QSplitter::widget(*(QT::QSplitter **)(v11 + 2480), 1);
    v26 = *(_QWORD *)ptr;
    v27 = v25[1];
    v28 = *v25;
    if ( v25[2] < v27 + 1 )
    {
      v84 = qvector_reserve(v25, v28, v27 + 1, 8);
      *v25 = v84;
      v28 = v84;
      v27 = v25[1];
    }
    *(_QWORD *)(v28 + 8 * v27) = v26;
    ++v25[1];
    v29 = (QT::QHeaderView *)((char *)v245 + 8 * v246.m128i_i64[0]);
    if ( v29 != v245 )
    {
      v236[0] = v245;
      do
      {
        v30 = *(QT::QWidget **)v236[0];
        v31 = QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)v236[0]);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 120LL))(v31);
        QT::QWidget::hide(v30);
        v236[0] = (QT::QHeaderView *)((char *)v236[0] + 8);
      }
      while ( v29 != v236[0] );
    }
    if ( !v19 )
      goto LABEL_15;
LABEL_61:
    v61 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11 + 600LL);
    if ( v61 == sub_4A95A0 )
    {
      vault_files_dirtree_widget_t__::vfunc_24(v11 + 104);
      *(_DWORD *)(v11 + 2012) &= 0xFFFFFF87;
    }
    else
    {
      v61(v11, -1uLL);
    }
    goto LABEL_15;
  }
  v253 = nullptr;
  v255 = nullptr;
  v257 = nullptr;
  v259 = nullptr;
  v261 = 384;
  v254 = 0;
  v256 = 0;
  v258 = 0;
  v260 = 0;
  if ( a3 )
  {
    v231.m128i_i64[0] = 0;
    v62 = *(QT::QHeaderView **)(a3 + 104);
    v236[0] = v62;
    if ( v62 )
    {
      v231.m128i_i64[1] = (__int64)&v253;
      v231.m128i_i64[0] = qalloc_or_throw(24LL * (_QWORD)v62);
      v198 = v231.m128i_i64[0];
      v199 = nullptr;
      do
      {
        v200 = *(_QWORD *)(a3 + 96);
        a7 = 0;
        *(_QWORD *)v198 = 0;
        *(_OWORD *)(v198 + 8) = 0;
        v14 = (__int64 *)(v200 + 24LL * (_QWORD)v199);
        v201 = (void *)v14[1];
        if ( v201 )
        {
          v202 = v14[1];
          n[0] = (size_t)v14;
          v231.m128i_i64[1] = (__int64)&v253;
          src[0] = v201;
          v203 = (void *)qalloc_or_throw(v202);
          v204 = src[0];
          *(_QWORD *)v198 = v203;
          *(_QWORD *)(v198 + 16) = v204;
          v14 = (__int64 *)*v14;
          v231.m128i_i64[1] = (__int64)v204;
          memcpy(v203, v14, (size_t)v204);
          *(_QWORD *)(v198 + 8) = v231.m128i_i64[1];
        }
        v199 = (QT::QHeaderView *)((char *)v199 + 1);
        v198 += 24;
      }
      while ( v236[0] != v199 );
      v205 = v253;
      if ( v253 )
      {
        v206 = v254.m128i_i64[0];
        if ( v254.m128i_i64[0] )
        {
          v207 = 0;
          v208 = v253;
          do
          {
            v209 = &v208[24 * v207];
            v210 = *(_QWORD *)v209;
            if ( *(_QWORD *)v209 )
            {
              *((_QWORD *)v209 + 1) = 0;
              qfree(v210, (const char *)v14);
              v208 = v253;
            }
            ++v207;
          }
          while ( v206 != v207 );
          v205 = v208;
        }
        v254.m128i_i64[0] = 0;
        qfree(v205, (const char *)v14);
      }
    }
    v63 = _mm_loadl_epi64((const __m128i *)v236);
    v64 = v231.m128i_i64[0];
    v231.m128i_i64[0] = 0;
    v253 = (char *)v64;
    v65 = *(QT::QHeaderView **)(a3 + 128);
    v254 = _mm_unpacklo_epi64(v63, v63);
    v236[0] = v65;
    if ( v65 )
    {
      v231.m128i_i64[1] = (__int64)&v253;
      v231.m128i_i64[0] = qalloc_or_throw(24LL * (_QWORD)v65);
      v191 = v231.m128i_i64[0];
      v192 = nullptr;
      do
      {
        v193 = *(_QWORD *)(a3 + 120);
        *(_QWORD *)v191 = 0;
        *(_OWORD *)(v191 + 8) = 0;
        v14 = (__int64 *)(v193 + 24LL * (_QWORD)v192);
        v194 = (void *)v14[1];
        if ( v194 )
        {
          v195 = v14[1];
          n[0] = (size_t)v14;
          v231.m128i_i64[1] = (__int64)&v253;
          src[0] = v194;
          v196 = (void *)qalloc_or_throw(v195);
          v197 = src[0];
          *(_QWORD *)v191 = v196;
          *(_QWORD *)(v191 + 16) = v197;
          v14 = (__int64 *)*v14;
          v231.m128i_i64[1] = (__int64)v197;
          memcpy(v196, v14, (size_t)v197);
          *(_QWORD *)(v191 + 8) = v231.m128i_i64[1];
        }
        v192 = (QT::QHeaderView *)((char *)v192 + 1);
        v191 += 24;
      }
      while ( v236[0] != v192 );
    }
    v66 = _mm_loadl_epi64((const __m128i *)v236);
    v67 = v255;
    si128 = _mm_unpacklo_epi64(v66, v66);
    if ( v255 )
    {
      v69 = v256.m128i_i64[0];
      if ( v256.m128i_i64[0] )
      {
        v70 = 0;
        *(__m128i *)v236 = si128;
        v71 = v255;
        do
        {
          v72 = &v71[24 * v70];
          v73 = *(_QWORD *)v72;
          if ( *(_QWORD *)v72 )
          {
            *((_QWORD *)v72 + 1) = 0;
            qfree(v73, (const char *)v14);
            v71 = v255;
          }
          ++v70;
        }
        while ( v69 != v70 );
        si128 = _mm_load_si128((const __m128i *)v236);
        v67 = v71;
      }
      *(__m128i *)v236 = si128;
      v256.m128i_i64[0] = 0;
      qfree(v67, (const char *)v14);
      si128 = _mm_load_si128((const __m128i *)v236);
    }
    v256 = si128;
    v74 = nullptr;
    v255 = (const char *)v231.m128i_i64[0];
    v75 = *(QT::QHeaderView **)(a3 + 152);
    v236[0] = v75;
    if ( v75 )
    {
      v225 = 8LL * (_QWORD)v75;
      v231.m128i_i64[1] = (__int64)&v253;
      v226 = (void *)qalloc_or_throw(8LL * (_QWORD)v75);
      v14 = *(__int64 **)(a3 + 144);
      v74 = v226;
      memcpy(v226, v14, v225);
    }
    v76 = _mm_loadl_epi64((const __m128i *)v236);
    v77 = _mm_unpacklo_epi64(v76, v76);
    if ( v257 )
    {
      *(__m128i *)v236 = v77;
      v258.m128i_i64[0] = 0;
      qfree(v257, (const char *)v14);
      v77 = _mm_load_si128((const __m128i *)v236);
    }
    v78 = *(QT::QHeaderView **)(a3 + 176);
    v257 = v74;
    v79 = nullptr;
    v258 = v77;
    v236[0] = v78;
    if ( v78 )
    {
      v223 = 4LL * (_QWORD)v78;
      v231.m128i_i64[1] = (__int64)&v253;
      v224 = (QT::QHeaderView **)qalloc_or_throw(4LL * (_QWORD)v78);
      v14 = *(__int64 **)(a3 + 168);
      v79 = v224;
      memcpy(v224, v14, v223);
    }
    v80 = _mm_loadl_epi64((const __m128i *)v236);
    v81 = _mm_unpacklo_epi64(v80, v80);
    if ( v259 )
    {
      *(__m128i *)v236 = v81;
      v260.m128i_i64[0] = 0;
      qfree(v259, (const char *)v14);
      v81 = _mm_load_si128((const __m128i *)v236);
    }
    v82 = *(_DWORD *)(a3 + 192);
    v259 = v79;
    v260 = v81;
    v83 = v254.m128i_i64[0];
    v261 = v82;
  }
  else
  {
    v261 = 496;
    v83 = 0;
  }
  v236[0] = (QT::QHeaderView *)ptr;
  memset(ptr, 0, sizeof(ptr));
  v86 = (_DWORD *)qvector_reserve(ptr, 0, 8, 1);
  *(_QWORD *)ptr = v86;
  *(_QWORD *)&ptr[8] = 8;
  *v86 = 1684827974;
  *(_DWORD *)((char *)v86 + 3) = 1936876900;
  *(_BYTE *)(*(_QWORD *)ptr + 7LL) = 0;
  v87 = v254;
  v88 = v253;
  v89 = v254.m128i_i64[0] + 1;
  if ( ptr < v253 || v236[0] >= (QT::QHeaderView *)&v253[24 * v254.m128i_i64[1]] )
  {
    v231.m128i_i64[1] = (__int64)&v253;
    if ( v254.m128i_i64[1] < v89 )
    {
      v253 = (char *)qvector_reserve(&v253, v253, v254.m128i_i64[0] + 1, 24);
      v88 = v253;
      v87.m128i_i64[0] = v254.m128i_i64[0];
    }
    v94 = _mm_loadu_si128((const __m128i *)&ptr[8]);
    v95 = (char *)&v88[24 * v87.m128i_i64[0]];
    *(_QWORD *)v95 = *(_QWORD *)ptr;
    *(__m128i *)(v95 + 8) = v94;
    ++v254.m128i_i64[0];
  }
  else
  {
    a6 = 0;
    v90 = *(_QWORD *)ptr;
    v91 = _mm_loadl_epi64((const __m128i *)&ptr[8]);
    memset(ptr, 0, sizeof(ptr));
    v92 = _mm_loadl_epi64((const __m128i *)&ptr[16]);
    if ( v254.m128i_i64[1] < v89 )
    {
      src[0] = (void *)v92.m128i_i64[0];
      v231.m128i_i64[1] = (__int64)&v253;
      v231.m128i_i64[0] = v91.m128i_i64[0];
      v253 = (char *)qvector_reserve(&v253, v253, v254.m128i_i64[0] + 1, 24);
      v88 = v253;
      v92 = _mm_loadl_epi64((const __m128i *)src);
      v91 = _mm_loadl_epi64(&v231);
      v87.m128i_i64[0] = v254.m128i_i64[0];
    }
    else
    {
      v231.m128i_i64[1] = (__int64)&v253;
    }
    v93 = (char *)&v88[24 * v87.m128i_i64[0]];
    *(_QWORD *)v93 = v90;
    *(__m128i *)(v93 + 8) = _mm_unpacklo_epi64(v91, v92);
    ++v254.m128i_i64[0];
    if ( *(_QWORD *)ptr )
    {
      *(_QWORD *)&ptr[8] = 0;
      qfree(*(_QWORD *)ptr, v88, v87.m128i_i64[1]);
    }
  }
  v96 = v260.m128i_i64[0];
  v97 = v83 + 1;
  LODWORD(v245) = 0;
  v98 = (unsigned __int64)v259;
  if ( (unsigned __int64)(v83 + 1) < v260.m128i_i64[0] )
    goto LABEL_104;
  if ( v260.m128i_i64[0] >= v97 )
    goto LABEL_105;
  if ( &v245 < v259 || &v245 >= (QT::QHeaderView **)((char *)v259 + 4 * v260.m128i_i64[1]) )
  {
    if ( v260.m128i_i64[1] < v97 )
    {
      v259 = (QT::QHeaderView **)qvector_reserve(&v259, v259, v83 + 1, 4);
      v98 = (unsigned __int64)v259;
      v96 = v260.m128i_i64[0];
      if ( v260.m128i_i64[0] >= v97 )
        goto LABEL_104;
    }
    v99 = v236[0];
    do
    {
      v187 = v96;
      *(_DWORD *)(v98 + 4 * v96++) = 0;
      v98 = (unsigned __int64)v259;
    }
    while ( v83 != v187 );
  }
  else
  {
    if ( v260.m128i_i64[1] < v97 )
    {
      v259 = (QT::QHeaderView **)qvector_reserve(&v259, v259, v83 + 1, 4);
      v98 = (unsigned __int64)v259;
      v96 = v260.m128i_i64[0];
      if ( v260.m128i_i64[0] >= v97 )
        goto LABEL_104;
    }
    v99 = v236[0];
    do
    {
      v100 = v96;
      *(_DWORD *)(v98 + 4 * v96++) = 0;
      v98 = (unsigned __int64)v259;
    }
    while ( v83 != v100 );
  }
  v236[0] = v99;
LABEL_104:
  v260.m128i_i64[0] = v83 + 1;
LABEL_105:
  v101 = v236[0];
  *(_DWORD *)(v98 + 4 * v83) = 0;
  memset(ptr, 0, sizeof(ptr));
  *(_QWORD *)ptr = qvector_reserve(v101, 0, 1, 1);
  v102 = v236[0];
  *(_QWORD *)&ptr[8] = 1;
  **(_BYTE **)ptr = 0;
  sub_274880(&v255, (const char *)(v83 + 1), (unsigned __int64)v102);
  if ( *(_QWORD *)ptr )
  {
    *(_QWORD *)&ptr[8] = 0;
    qfree(*(_QWORD *)ptr, (const char *)(v83 + 1));
  }
  v18 = v235 == 1;
  *(_QWORD *)&v255[24 * v83 + 8] = 0;
  if ( v18 )
    v261 |= 1u;
  v103 = *(_QWORD *)(v11 + 2392);
  v104 = -1;
  v105 = *(_QWORD *)(v103 + 56);
  if ( v105 )
  {
    v106 = *(int *)(v103 + 48);
    if ( (int)v106 > 0 )
    {
      for ( i = 0; i != v106; ++i )
      {
        if ( (*(_BYTE *)(v105 + 4 * i + 2) & 0x40) != 0 )
        {
          v104 = i;
          goto LABEL_115;
        }
      }
      v104 = -1;
    }
  }
LABEL_115:
  v108 = operator new(0x140u);
  sub_498CC0(v108, v11, v231.m128i_i64[1], v104);
  v109 = *(_QWORD **)(v11 + 2392);
  *(_QWORD *)(v108 + 16) = v11 + 104;
  v231.m128i_i64[0] = v11 + 104;
  sub_4A3550((__int64 *)v236[0], (__int64)v109, nullptr, 0);
  if ( a3 )
  {
    v114 = *(_QWORD *)(a3 + 24);
    *(__m128i *)ptr = _mm_loadu_si128((const __m128i *)a3);
    if ( v114 && (v113 = v114 - 1, v114 != 1) )
    {
      v190 = *(void **)&ptr[16];
      src[0] = *(void **)(a3 + 16);
      if ( v263.m128i_i64[1] < v114 )
      {
        n[0] = v114 - 1;
        *(_QWORD *)&ptr[16] = qvector_reserve(&ptr[16], *(_QWORD *)&ptr[16], v114, 1);
        v113 = v114 - 1;
        v190 = *(void **)&ptr[16];
      }
      v109 = src[0];
      v263.m128i_i64[0] = v114;
      memmove(v190, src[0], v113);
      *(_BYTE *)(*(_QWORD *)&ptr[16] + v114 - 1) = 0;
    }
    else
    {
      v263.m128i_i64[0] = 0;
    }
    v115 = *(_QWORD *)(a3 + 48);
    if ( v115 && (v113 = v115 - 1, v115 != 1) )
    {
      v189 = v264;
      src[0] = *(void **)(a3 + 40);
      if ( v266 < v115 )
      {
        n[0] = v115 - 1;
        v264 = (void *)qvector_reserve(&v264, v264, v115, 1);
        v113 = v115 - 1;
        v189 = v264;
      }
      v109 = src[0];
      v265 = v115;
      memmove(v189, src[0], v113);
      *((char *)v264 + v115 - 1) = 0;
    }
    else
    {
      v265 = 0;
    }
    v116 = *(_QWORD *)(a3 + 80);
    v267 = *(_QWORD *)(a3 + 64);
    if ( v116 && (v113 = v116 - 1, v116 != 1) )
    {
      v188 = dest;
      src[0] = *(void **)(a3 + 72);
      if ( v270 < v116 )
      {
        n[0] = v116 - 1;
        dest = (void *)qvector_reserve(&dest, dest, v116, 1);
        v113 = v116 - 1;
        v188 = dest;
      }
      v109 = src[0];
      v269 = v116;
      memmove(v188, src[0], v113);
      *((char *)dest + v116 - 1) = 0;
    }
    else
    {
      v269 = 0;
    }
    src[0] = nullptr;
    v117 = *(_QWORD *)(a3 + 104);
    if ( v117 )
    {
      src[0] = (void *)qalloc_or_throw(24 * v117);
      v112 = (char *)src[0];
      for ( j = nullptr; j != (void *)v117; j = (char *)j + 1 )
      {
        v213 = *(_QWORD *)(a3 + 96);
        *(_QWORD *)v112 = 0;
        *(_OWORD *)(v112 + 8) = 0;
        v109 = (_QWORD *)(v213 + 24LL * (_QWORD)j);
        v110 = (__int64 *)v109[1];
        if ( v110 )
        {
          v214 = v109[1];
          v230 = v112;
          v227 = j;
          n[0] = (size_t)v110;
          v215 = (void *)qalloc_or_throw(v214);
          v216 = v230;
          v217 = n[0];
          v230[2] = n[0];
          *v216 = v215;
          v109 = (_QWORD *)*v109;
          memcpy(v215, v109, v217);
          v110 = (__int64 *)n[0];
          v112 = (char *)v230;
          j = v227;
          v230[1] = n[0];
        }
        v112 += 24;
      }
    }
    v118 = v271;
    v119 = _mm_unpacklo_epi64((__m128i)v117, (__m128i)v117);
    if ( v271 )
    {
      v109 = (_QWORD *)v272.m128i_i64[0];
      if ( v272.m128i_i64[0] )
      {
        v230 = (_QWORD *)v11;
        j = v271;
        v120 = nullptr;
        *(__m128i *)n = v119;
        do
        {
          v110 = (__int64 *)((char *)j + 24 * (_QWORD)v120);
          v121 = *v110;
          if ( *v110 )
          {
            v110[1] = 0;
            qfree(v121, (const char *)v109, v110, j, v112, v113);
            j = v271;
          }
          v120 = (_QWORD *)((char *)v120 + 1);
        }
        while ( v109 != v120 );
        v119 = _mm_load_si128((const __m128i *)n);
        v11 = (__int64)v230;
        v118 = j;
      }
      *(__m128i *)n = v119;
      v272.m128i_i64[0] = 0;
      qfree(v118, (const char *)v109, v110, j, v112, v113, v227);
      v119 = _mm_load_si128((const __m128i *)n);
    }
    v122 = (char *)src[0];
    v123 = *(_QWORD *)(a3 + 128);
    src[0] = nullptr;
    v272 = v119;
    v271 = v122;
    if ( v123 )
    {
      src[0] = (void *)qalloc_or_throw(24 * v123);
      v112 = (char *)src[0];
      for ( j = nullptr; j != (void *)v123; j = (char *)j + 1 )
      {
        v218 = *(_QWORD *)(a3 + 120);
        a10 = 0;
        *(_QWORD *)v112 = 0;
        *(_OWORD *)(v112 + 8) = 0;
        v109 = (_QWORD *)(v218 + 24LL * (_QWORD)j);
        v110 = (__int64 *)v109[1];
        if ( v110 )
        {
          v219 = v109[1];
          v227 = j;
          v230 = v112;
          n[0] = (size_t)v110;
          v220 = (void *)qalloc_or_throw(v219);
          v221 = v230;
          v222 = n[0];
          v230[2] = n[0];
          *v221 = v220;
          v109 = (_QWORD *)*v109;
          memcpy(v220, v109, v222);
          v110 = (__int64 *)n[0];
          v112 = (char *)v230;
          j = v227;
          v230[1] = n[0];
        }
        v112 += 24;
      }
    }
    v124 = v273;
    v125 = _mm_unpacklo_epi64((__m128i)v123, (__m128i)v123);
    if ( v273 )
    {
      v109 = (_QWORD *)v274.m128i_i64[0];
      if ( v274.m128i_i64[0] )
      {
        v230 = (_QWORD *)v11;
        j = v273;
        v126 = nullptr;
        *(__m128i *)n = v125;
        do
        {
          v110 = (__int64 *)((char *)j + 24 * (_QWORD)v126);
          v127 = *v110;
          if ( *v110 )
          {
            v110[1] = 0;
            qfree(v127, (const char *)v109, v110, j, v112, v113);
            j = v273;
          }
          v126 = (_QWORD *)((char *)v126 + 1);
        }
        while ( v109 != v126 );
        v125 = _mm_load_si128((const __m128i *)n);
        v11 = (__int64)v230;
        v124 = j;
      }
      *(__m128i *)n = v125;
      v274.m128i_i64[0] = 0;
      qfree(v124, (const char *)v109, v110, j, v112, v113, v227);
      v125 = _mm_load_si128((const __m128i *)n);
    }
    v128 = *(_QWORD *)(a3 + 152);
    v274 = v125;
    v129 = nullptr;
    v273 = (char *)src[0];
    if ( v128 )
    {
      src[0] = (void *)(8 * v128);
      v212 = (void *)qalloc_or_throw(8 * v128);
      v109 = *(_QWORD **)(a3 + 144);
      v129 = memcpy(v212, v109, (size_t)src[0]);
    }
    v130 = _mm_unpacklo_epi64((__m128i)v128, (__m128i)v128);
    if ( v275 )
    {
      n[0] = (size_t)v129;
      *(__m128i *)src = v130;
      v276.m128i_i64[0] = 0;
      qfree(v275, (const char *)v109, v110, v129, v112, v113);
      v129 = (void *)n[0];
      v130 = _mm_load_si128((const __m128i *)src);
    }
    v131 = *(_QWORD *)(a3 + 176);
    v275 = v129;
    v276 = v130;
    if ( v131 )
    {
      src[0] = (void *)(4 * v131);
      v211 = (void *)qalloc_or_throw(4 * v131);
      v109 = *(_QWORD **)(a3 + 168);
      v55 = v211;
      memcpy(v211, v109, (size_t)src[0]);
    }
    v132 = _mm_unpacklo_epi64((__m128i)v131, (__m128i)v131);
    if ( v277 )
    {
      *(__m128i *)src = v132;
      v278.m128i_i64[0] = 0;
      qfree(v277, (const char *)v109, v110, v129, v112, v113);
      v132 = _mm_load_si128((const __m128i *)src);
    }
    v133 = *(_DWORD *)(a3 + 192);
    v277 = v55;
    v278 = v132;
    v279 = v133;
  }
  v134 = *(_QWORD *)v11;
  v245 = nullptr;
  v246 = 0;
  (*(void (__fastcall **)(__int64, QT::QHeaderView **))(v134 + 536))(v11, &v245);
  v135 = v246.m128i_i64[0];
  if ( v246.m128i_i64[0] )
  {
    v136 = v246.m128i_i64[0] + 4;
    v137 = (void *)(v246.m128i_i64[0] + 5);
    v135 = v246.m128i_i64[0] - 1;
  }
  else
  {
    v137 = &byte_6;
    v136 = 5;
  }
  v138 = v245;
  if ( v246.m128i_i64[1] < (unsigned __int64)v137 )
  {
    n[0] = v136;
    src[0] = v137;
    v245 = (QT::QHeaderView *)qvector_reserve(&v245, v245, v137, 1);
    v136 = n[0];
    v138 = v245;
    v137 = src[0];
  }
  v246.m128i_i64[0] = (__int64)v137;
  *((_BYTE *)v138 + v136) = 0;
  v139 = (char *)v245 + v135;
  *(_DWORD *)v139 = 1701999674;
  v139[4] = 101;
  v140 = v245;
  v141 = _mm_loadu_si128(&v263);
  v245 = *(QT::QHeaderView **)&ptr[16];
  a5 = (__m128)_mm_loadu_si128(&v246);
  *(_QWORD *)&ptr[16] = v140;
  v246 = v141;
  v263 = (__m128i)a5;
  v142 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  *(_QWORD *)(v11 + 2384) = (*(__int64 (__fastcall **)(__int64, __int64, QT::QHeaderView *))(*(_QWORD *)v142 + 32LL))(
                              v142,
                              v11,
                              v236[0]);
  v143 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11 + 600LL);
  if ( v143 == sub_4A95A0 )
  {
    vault_files_dirtree_widget_t__::vfunc_24(v231.m128i_i64[0]);
    *(_DWORD *)(v11 + 2012) &= 0xFFFFFF87;
  }
  else
  {
    v143(v11, -1uLL);
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v11 + 2384) + 456LL))(*(_QWORD *)(v11 + 2384), v108);
  QT::QWidget::setStyle(*(QT::QWidget **)(v11 + 2384), (QT::QStyle *)&qword_8D1E10);
  v144 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(v11 + 2384));
  QT::QHeaderView::setStretchLastSection(v144, 1);
  v244.m128i_i64[1] = 0;
  v145 = *(_QWORD *)(v11 + 2384);
  v244.m128i_i64[0] = (__int64)sub_4A9020;
  v241[1] = 0;
  v241[0] = sub_546850;
  v146 = (__m128i *)operator new(0x20u);
  v146->m128i_i32[0] = 1;
  v147 = _mm_load_si128(&v244);
  v146->m128i_i64[1] = (__int64)sub_49C100;
  v146[1] = v147;
  QT::QObject::connectImpl(v243, v145, v241, v11, &v244, v146, 0, 0, &off_895EA0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v243);
  v148 = *(_QWORD *)(v11 + 2384);
  v244.m128i_i64[0] = (__int64)sub_4A7790;
  v244.m128i_i64[1] = 0;
  v231.m128i_i64[0] = v148;
  v242[0] = sub_546800;
  v242[1] = 0;
  v149 = (__m128i *)operator new(0x20u);
  v149->m128i_i32[0] = 1;
  v150 = _mm_load_si128(&v244);
  v149->m128i_i64[1] = (__int64)sub_49C180;
  v149[1] = v150;
  QT::QObject::connectImpl(v243, v231.m128i_i64[0], v242, v11, &v244, v149, 0, 0, &off_895EA0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v243);
  v151 = *(_QWORD *)(v11 + 2384);
  v244.m128i_i64[0] = (__int64)sub_4A8890;
  v244.m128i_i64[1] = 0;
  v231.m128i_i64[0] = v151;
  v243[0] = &QT::QAbstractItemView::doubleClicked;
  v243[1] = 0;
  v152 = (__m128i *)operator new(0x20u);
  v152->m128i_i32[0] = 1;
  v153 = _mm_load_si128(&v244);
  v152->m128i_i64[1] = (__int64)sub_49C200;
  v152[1] = v153;
  QT::QObject::connectImpl(
    v242,
    v231.m128i_i64[0],
    v243,
    v11,
    &v244,
    v152,
    0,
    0,
    &QT::QAbstractItemView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v242);
  QT::QSplitter::insertWidget(*(QT::QSplitter **)(v11 + 2480), 0, *(QT::QWidget **)(v11 + 2384));
  v154 = (const char *)v11;
  QT::QObject::installEventFilter(*(QT::QObject **)(v11 + 2384), (QT::QObject *)v11);
  v155 = *(_BOOL8 (__fastcall **)(__int64))(*(_QWORD *)v11 + 448LL);
  if ( v155 == sub_49AD80 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 2392) + 15LL) & 0x20) != 0 )
      goto LABEL_160;
  }
  else if ( !v155(v11) )
  {
    goto LABEL_160;
  }
  v186 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(v11 + 2384));
  v154 = (_BYTE *)(&dword_0 + 1);
  QT::QHeaderView::setSectionsClickable(v186, 1);
LABEL_160:
  if ( v245 )
  {
    v246.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v245, v154);
  }
  if ( v277 )
  {
    v278.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v277, v154, *(double *)v153.m128i_i64);
  }
  if ( v275 )
  {
    v276.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v275, v154, *(double *)v153.m128i_i64);
  }
  v156 = v273;
  if ( v273 )
  {
    v157 = v274.m128i_i64[0];
    if ( v274.m128i_i64[0] )
    {
      v158 = 0;
      v159 = v273;
      do
      {
        v160 = &v159[24 * v158];
        v161 = *(_QWORD *)v160;
        if ( *(_QWORD *)v160 )
        {
          *((_QWORD *)v160 + 1) = 0;
          *(double *)v153.m128i_i64 = qfree(v161, v154, *(double *)v153.m128i_i64);
          v159 = v273;
        }
        ++v158;
      }
      while ( v157 != v158 );
      v156 = v159;
    }
    v274.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v156, v154, *(double *)v153.m128i_i64);
  }
  v162 = v271;
  if ( v271 )
  {
    v163 = v272.m128i_i64[0];
    if ( v272.m128i_i64[0] )
    {
      v164 = 0;
      v165 = v271;
      do
      {
        v166 = (__int64 *)&v165[24 * v164];
        v167 = *v166;
        if ( *v166 )
        {
          v166[1] = 0;
          *(double *)v153.m128i_i64 = qfree(v167, v154, *(double *)v153.m128i_i64);
          v165 = v271;
        }
        ++v164;
      }
      while ( v163 != v164 );
      v162 = v165;
    }
    v272.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v162, v154, *(double *)v153.m128i_i64);
  }
  if ( dest )
  {
    v269 = 0;
    *(double *)v153.m128i_i64 = qfree(dest, v154, *(double *)v153.m128i_i64);
  }
  if ( v264 )
  {
    v265 = 0;
    *(double *)v153.m128i_i64 = qfree(v264, v154, *(double *)v153.m128i_i64);
  }
  if ( *(_QWORD *)&ptr[16] )
  {
    v263.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(*(_QWORD *)&ptr[16], v154, *(double *)v153.m128i_i64);
  }
  if ( v259 )
  {
    v260.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v259, v154, *(double *)v153.m128i_i64);
  }
  if ( v257 )
  {
    v258.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v257, v154, *(double *)v153.m128i_i64);
  }
  v168 = v255;
  if ( v255 )
  {
    v169 = v256.m128i_i64[0];
    if ( v256.m128i_i64[0] )
    {
      v170 = 0;
      v171 = v255;
      do
      {
        v172 = &v171[24 * v170];
        v173 = *(_QWORD *)v172;
        if ( *(_QWORD *)v172 )
        {
          *((_QWORD *)v172 + 1) = 0;
          *(double *)v153.m128i_i64 = qfree(v173, v154, *(double *)v153.m128i_i64);
          v171 = v255;
        }
        ++v170;
      }
      while ( v169 != v170 );
      v168 = v171;
    }
    v256.m128i_i64[0] = 0;
    *(double *)v153.m128i_i64 = qfree(v168, v154, *(double *)v153.m128i_i64);
  }
  v174 = v253;
  if ( v253 )
  {
    v175 = v254.m128i_i64[0];
    if ( v254.m128i_i64[0] )
    {
      v176 = 0;
      v177 = v253;
      do
      {
        v178 = &v177[24 * v176];
        v179 = *(_QWORD *)v178;
        if ( *(_QWORD *)v178 )
        {
          *((_QWORD *)v178 + 1) = 0;
          *(double *)v153.m128i_i64 = qfree(v179, v154, *(double *)v153.m128i_i64);
          v177 = v253;
        }
        ++v176;
      }
      while ( v175 != v176 );
      v174 = v177;
    }
    v254.m128i_i64[0] = 0;
    qfree(v174, v154, *(double *)v153.m128i_i64);
  }
  v19 = 0;
  v18 = *(_QWORD *)(v11 + 2384) == 0;
  v245 = nullptr;
  v20 = (unsigned __int64 *)v231.m128i_i64[1];
  v246 = 0;
  v253 = nullptr;
  v254 = 0;
  if ( !v18 )
    goto LABEL_5;
LABEL_15:
  v32 = (QT::QWidget **)v253;
  v33 = (QT::QWidget **)&v253[8 * v254.m128i_i64[0]];
  if ( v33 != (QT::QWidget **)v253 )
  {
    do
      QT::QWidget::show(*v32++);
    while ( v33 != v32 );
  }
  v34 = *(_DWORD *)(v11 + 2376) == 1;
  QT::QAbstractItemView::setDragEnabled(*(QT::QAbstractItemView **)(v11 + 2472), *(_DWORD *)(v11 + 2376) == 1);
  QT::QAbstractItemView::setDragDropMode(*(_QWORD *)(v11 + 2472), v34);
  v35.m128i_i64[0] = 0;
  memset(ptr, 0, sizeof(ptr));
  v236[0] = (QT::QHeaderView *)ptr;
  sub_4A9020(v11, (__int64 *)ptr, 0.0, a5, a6, a7, v36, v37, a10, a11);
  v38 = *(QT::QTreeView **)(v11 + 2384);
  if ( v38 )
  {
    v39 = (QT::QObject *)QT::QTreeView::header(v38);
    v237[1] = 0;
    v237[0] = &QT::QHeaderView::sectionClicked;
    v238[0] = sub_49BDA0;
    v238[1] = 0;
    QT::QObject::disconnectImpl(
      v39,
      (const QT::QObject *)v237,
      (void **)v11,
      (const QT::QObject *)v238,
      &QT::QHeaderView::staticMetaObject,
      v40);
    v41 = (QT::QObject *)QT::QTreeView::header(*(QT::QTreeView **)(v11 + 2384));
    v239[1] = 0;
    v239[0] = &QT::QHeaderView::sectionResized;
    v240[0] = sub_49E920;
    v240[1] = 0;
    QT::QObject::disconnectImpl(
      v41,
      (const QT::QObject *)v239,
      (void **)v11,
      (const QT::QObject *)v240,
      &QT::QHeaderView::staticMetaObject,
      v42);
    if ( *(_DWORD *)(v11 + 2376) == 2 )
    {
      v180 = *(QT::QTreeView **)(v11 + 2384);
      *(_QWORD *)ptr = sub_49BDA0;
      *(_QWORD *)&ptr[8] = 0;
      v231.m128i_i64[1] = QT::QTreeView::header(v180);
      v244 = (__m128i)(unsigned __int64)&QT::QHeaderView::sectionClicked;
      v181 = (__m128i *)operator new(0x20u);
      v181->m128i_i32[0] = 1;
      v182 = _mm_load_si128((const __m128i *)ptr);
      v181->m128i_i64[1] = (__int64)sub_49C280;
      v181[1] = v182;
      QT::QObject::connectImpl(
        v243,
        v231.m128i_i64[1],
        &v244,
        v11,
        v236[0],
        v181,
        0,
        0,
        &QT::QHeaderView::staticMetaObject);
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v243);
      v183 = *(QT::QTreeView **)(v11 + 2384);
      v244 = (__m128i)(unsigned __int64)sub_49E920;
      v184 = QT::QTreeView::header(v183);
      *(_QWORD *)&ptr[8] = 0;
      *(_QWORD *)ptr = &QT::QHeaderView::sectionResized;
      v185 = (__m128i *)operator new(0x20u);
      v185->m128i_i32[0] = 1;
      v35 = _mm_load_si128(&v244);
      v185->m128i_i64[1] = (__int64)sub_49B2F0;
      v185[1] = v35;
      QT::QObject::connectImpl(v243, v184, v236[0], v11, &v244, v185, 0, 0, &QT::QHeaderView::staticMetaObject);
      QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v243);
    }
    if ( v235 )
    {
      v43 = *(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v11 + 600LL);
      if ( v43 == sub_4A95A0 )
      {
        vault_files_dirtree_widget_t__::vfunc_24(v11 + 104);
        *(_DWORD *)(v11 + 2012) &= 0xFFFFFF87;
      }
      else
      {
        v43(v11, -1uLL);
      }
      v44 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(v11 + 2384));
      v35.m128i_i64[0] = 0;
      memset(ptr, 0, sizeof(ptr));
      QT::QAbstractItemModel::layoutChanged(v44, v236[0], 0);
      if ( *(_QWORD *)ptr )
      {
        if ( !_InterlockedSub(*(volatile signed __int32 **)ptr, 1u) )
        {
          v45 = *(_QWORD *)&ptr[8] + 8LL * *(_QWORD *)&ptr[16];
          v46 = *(QT::QPersistentModelIndex **)&ptr[8];
          if ( *(_QWORD *)&ptr[8] != v45 )
          {
            do
            {
              v47 = v46;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v46);
              v46 = (QT::QPersistentModelIndex *)((char *)v47 + 8);
            }
            while ( (QT::QPersistentModelIndex *)v45 != (QT::QPersistentModelIndex *)((char *)v47 + 8) );
          }
          free(*(void **)ptr);
        }
      }
    }
  }
  sub_49E380(v11, *(unsigned int *)(v11 + 2376), (__int64)v232, 7, *(double *)v35.m128i_i64);
  v48 = *(_DWORD *)(v11 + 2376);
  if ( a3 )
  {
    if ( v48 )
    {
      if ( v48 != 2 )
      {
        if ( v234 == v235 )
        {
          *(_DWORD *)(v11 + 2008) &= ~0x20u;
          v49 = *(QT::QWidget **)(v11 + 2472);
          goto LABEL_36;
        }
        goto LABEL_32;
      }
      v57 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(v11 + 2384));
    }
    else
    {
      v57 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(v11 + 2472));
    }
    v236[0] = v57;
    if ( v57 )
    {
      v58 = QT::QHeaderView::count(v236[0]);
      v59 = 0;
      if ( v58 > 0 )
      {
        do
        {
          v60 = sub_48AB50(a3 + 96, v59, *(_QWORD *)(v11 + 2384));
          QT::QHeaderView::resizeSection(v236[0], v59++, v60);
        }
        while ( v58 != v59 );
      }
    }
    v48 = *(_DWORD *)(v11 + 2376);
  }
  if ( v234 != v235 )
  {
    if ( v48 == 2 )
    {
      v49 = *(QT::QWidget **)(v11 + 2384);
      v50 = v49;
      if ( v49 )
        goto LABEL_33;
      goto LABEL_60;
    }
LABEL_32:
    v49 = *(QT::QWidget **)(v11 + 2472);
    v50 = v49;
    if ( v49 )
    {
LABEL_33:
      QT::QWidget::setFocus(v50, 7);
      v247 = v233;
      sub_4A8920(v11, (unsigned __int64 *)&v247, 7, *(double *)v35.m128i_i64, a5, a6, a7, v51, v52, a10, a11);
      v48 = *(_DWORD *)(v11 + 2376);
      goto LABEL_34;
    }
LABEL_60:
    *(_DWORD *)(v11 + 2008) &= ~0x20u;
    goto LABEL_36;
  }
LABEL_34:
  *(_DWORD *)(v11 + 2008) &= ~0x20u;
  if ( v48 == 2 )
    v49 = *(QT::QWidget **)(v11 + 2384);
  else
    v49 = *(QT::QWidget **)(v11 + 2472);
LABEL_36:
  QT::QWidget::setFocusProxy((QT::QWidget *)v11, v49);
  if ( v253 )
  {
    v254.m128i_i64[0] = 0;
    *(double *)v35.m128i_i64 = qfree(v253, (const char *)v49);
  }
  if ( v245 )
  {
    v246.m128i_i64[0] = 0;
    *(double *)v35.m128i_i64 = qfree(v245, (const char *)v49, *(double *)v35.m128i_i64);
  }
  if ( v233 )
    *(double *)v35.m128i_i64 = qfree(v233, (const char *)v49, *(double *)v35.m128i_i64);
  if ( v251 )
  {
    v252 = 0;
    *(double *)v35.m128i_i64 = qfree(v251, (const char *)v49, *(double *)v35.m128i_i64);
  }
  if ( v250[0] )
  {
    v250[1] = 0;
    qfree(v250[0], (const char *)v49, *(double *)v35.m128i_i64);
  }
  return v280 - __readfsqword(0x28u);
}
