__int64 __fastcall sub_361EC0(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbx
  const char *v10; // r13
  const char **v11; // r14
  const char *v12; // r15
  char *v13; // rax
  int v14; // eax
  __int64 v15; // r12
  unsigned int v16; // r15d
  __m128 v17; // xmm0
  char *v18; // rax
  char *v19; // r13
  const char *v20; // rsi
  int v21; // r14d
  int v22; // eax
  double v23; // xmm4_8
  double v24; // xmm5_8
  int v25; // r14d
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __m128 v31; // xmm4
  __m128 v32; // xmm5
  unsigned __int8 isChecked; // al
  unsigned __int8 v34; // al
  char v35; // r14
  char v36; // dl
  char v37; // al
  char v38; // r14
  char v39; // al
  char v40; // dl
  char v41; // al
  char v42; // r14
  char v43; // al
  char v44; // dl
  char v45; // al
  char v46; // r14
  char v47; // al
  char v48; // dl
  char v49; // al
  char v50; // r14
  char v51; // al
  char v52; // dl
  char v53; // al
  unsigned __int8 v54; // r14
  unsigned __int8 v55; // al
  double v56; // xmm4_8
  double v57; // xmm5_8
  const char *v58; // rsi
  size_t v59; // rax
  __int64 v60; // rdx
  double v61; // xmm4_8
  double v62; // xmm5_8
  const char *v63; // rsi
  double v64; // xmm4_8
  double v65; // xmm5_8
  double v66; // xmm4_8
  double v67; // xmm5_8
  __int64 v68; // rax
  __m128i si128; // xmm0
  __int64 v70; // rsi
  double v71; // xmm4_8
  double v72; // xmm5_8
  __int16 v73; // r12
  char v74; // r12
  char v75; // r13
  char v76; // dl
  char v77; // al
  char v78; // r13
  char v79; // al
  char v80; // dl
  char v81; // al
  char v82; // r13
  char v83; // al
  char v84; // dl
  char v85; // al
  unsigned __int8 v86; // r13
  unsigned __int8 v87; // al
  double v88; // xmm4_8
  double v89; // xmm5_8
  double v90; // xmm4_8
  double v91; // xmm5_8
  const char *v92; // rsi
  double v93; // xmm4_8
  double v94; // xmm5_8
  double v95; // xmm4_8
  double v96; // xmm5_8
  const char *v97; // rsi
  double v98; // xmm4_8
  double v99; // xmm5_8
  const char *v100; // rsi
  double v101; // xmm4_8
  double v102; // xmm5_8
  __int16 v103; // r12
  __int16 v104; // ax
  __int64 v105; // rsi
  double v106; // xmm4_8
  double v107; // xmm5_8
  const char *v108; // rsi
  double v109; // xmm4_8
  double v110; // xmm5_8
  const char *v111; // rsi
  double v112; // xmm4_8
  double v113; // xmm5_8
  const char *v114; // rsi
  double v115; // xmm4_8
  double v116; // xmm5_8
  unsigned __int8 v117; // al
  unsigned __int8 v118; // al
  unsigned __int8 v119; // al
  unsigned __int8 v120; // al
  unsigned __int8 v121; // al
  unsigned __int8 v122; // al
  char v123; // r13
  char v124; // r12
  char v125; // dl
  char v126; // al
  char v127; // r12
  char v128; // al
  char v129; // dl
  char v130; // al
  char v131; // r12
  char v132; // al
  char v133; // dl
  char v134; // al
  unsigned __int8 v135; // r12
  unsigned __int8 v136; // al
  char v137; // r12
  char v138; // r13
  char v139; // dl
  char v140; // al
  char v141; // r13
  char v142; // al
  char v143; // dl
  char v144; // al
  unsigned __int8 v145; // r13
  unsigned __int8 v146; // al
  __m128i v147; // xmm0
  __int64 v148; // rsi
  double v149; // xmm4_8
  double v150; // xmm5_8
  double v151; // xmm4_8
  double v152; // xmm5_8
  unsigned __int64 v153; // r13
  __int64 v154; // rdi
  __m128 v155; // xmm1
  __int64 v156; // rsi
  double v157; // xmm4_8
  double v158; // xmm5_8
  double v159; // xmm4_8
  double v160; // xmm5_8
  __m128 v161; // xmm2
  __int64 v162; // rsi
  double v163; // xmm4_8
  double v164; // xmm5_8
  __m128 v165; // xmm3
  __int64 v166; // rsi
  __int64 v167; // rsi
  double v168; // xmm5_8
  int v169; // eax
  QT::QSpinBox *v170; // rdi
  double v171; // xmm0_8
  unsigned __int8 v172; // al
  __int64 v173; // rsi
  double v174; // xmm4_8
  char v175; // al
  __m128 v176; // xmm6
  __int64 v177; // rsi
  double v178; // xmm4_8
  double v179; // xmm5_8
  double v180; // xmm4_8
  double v181; // xmm5_8
  __m128 v182; // xmm7
  __int64 v183; // rsi
  double v184; // xmm4_8
  double v185; // xmm5_8
  __m128 v186; // xmm1
  __int64 v187; // rsi
  unsigned __int8 v188; // al
  __int64 v189; // rdx
  __int64 v190; // r13
  __int64 v191; // rdx
  unsigned __int8 v192; // al
  double v193; // xmm4_8
  double v194; // xmm5_8
  unsigned __int64 v195; // r12
  __int64 v196; // rax
  double v197; // xmm4_8
  double v198; // xmm5_8
  __m128 v199; // xmm0
  char *v200; // r8
  size_t v201; // rax
  size_t v202; // r12
  __int64 v203; // rcx
  _BYTE *v204; // rdi
  __int64 v205; // r12
  _BYTE *v206; // rdx
  _BYTE *v207; // rax
  void *v208; // r8
  _BYTE *v209; // rsi
  double v210; // xmm4_8
  double v211; // xmm5_8
  char *v212; // r9
  size_t v213; // rax
  char *v214; // r9
  size_t v215; // r8
  double v216; // xmm4_8
  double v217; // xmm5_8
  unsigned __int8 v218; // al
  char *v219; // rdx
  double v220; // xmm4_8
  double v221; // xmm5_8
  const char *v222; // rax
  unsigned __int8 v223; // al
  unsigned __int8 v224; // al
  unsigned __int8 v225; // al
  unsigned __int8 v226; // al
  unsigned __int8 v227; // al
  unsigned __int8 v228; // al
  unsigned __int8 v229; // al
  unsigned __int8 v230; // r13
  __int64 *v231; // r14
  unsigned __int8 v232; // al
  __int64 v233; // rcx
  __int64 v234; // rdx
  __int64 v235; // rcx
  char *v236; // rdi
  char *v237; // r14
  char *v238; // r15
  char *v239; // r12
  __int64 v240; // rdi
  __int64 v241; // rdi
  __int64 v242; // r13
  __int64 i; // rbx
  QT::QRegularExpression *v244; // rdi
  unsigned __int8 v245; // al
  __int64 view_options; // rax
  unsigned int v247; // ebx
  int v249; // r13d
  int v250; // eax
  __int64 v251; // rsi
  void *v252; // rdi
  void *v253; // rdx
  void *v254; // rdi
  void *v255; // rdx
  char *v256; // rdi
  __int64 v257; // rax
  __int64 v258; // r12
  void *v259; // r8
  __int64 v260; // rax
  char v261; // [rsp+0h] [rbp-1F0h]
  size_t v262; // [rsp+0h] [rbp-1F0h]
  char *v263; // [rsp+8h] [rbp-1E8h]
  char *v264; // [rsp+8h] [rbp-1E8h]
  char *src; // [rsp+18h] [rbp-1D8h]
  char *srca; // [rsp+18h] [rbp-1D8h]
  void *srcc; // [rsp+18h] [rbp-1D8h]
  _BYTE *srcf; // [rsp+18h] [rbp-1D8h]
  void *srcd; // [rsp+18h] [rbp-1D8h]
  void *srce; // [rsp+18h] [rbp-1D8h]
  void *srcb; // [rsp+18h] [rbp-1D8h]
  void *srcg; // [rsp+18h] [rbp-1D8h]
  unsigned __int8 v273; // [rsp+27h] [rbp-1C9h]
  unsigned __int8 v274; // [rsp+28h] [rbp-1C8h]
  __int64 v275; // [rsp+30h] [rbp-1C0h]
  QT::QString *v276; // [rsp+50h] [rbp-1A0h]
  int n; // [rsp+58h] [rbp-198h]
  size_t nb; // [rsp+58h] [rbp-198h]
  unsigned __int8 na; // [rsp+58h] [rbp-198h]
  const void *nc; // [rsp+58h] [rbp-198h]
  const char *v281; // [rsp+68h] [rbp-188h] BYREF
  const char *v282; // [rsp+70h] [rbp-180h] BYREF
  const char *v283; // [rsp+78h] [rbp-178h] BYREF
  void *v284; // [rsp+80h] [rbp-170h] BYREF
  const char *v285; // [rsp+88h] [rbp-168h]
  __m128i v286; // [rsp+A0h] [rbp-150h] BYREF
  int v287; // [rsp+B0h] [rbp-140h]
  char *v288; // [rsp+C0h] [rbp-130h] BYREF
  __int128 v289; // [rsp+C8h] [rbp-128h]
  void *dest; // [rsp+E0h] [rbp-110h] BYREF
  __int128 v291; // [rsp+E8h] [rbp-108h]
  void *v292; // [rsp+100h] [rbp-F0h] BYREF
  __int128 v293; // [rsp+108h] [rbp-E8h]
  void *v294[2]; // [rsp+120h] [rbp-D0h] BYREF
  char v295; // [rsp+130h] [rbp-C0h]
  void *v296; // [rsp+140h] [rbp-B0h] BYREF
  char *v297; // [rsp+148h] [rbp-A8h]
  void *ptr; // [rsp+160h] [rbp-90h] BYREF
  __int128 v299; // [rsp+168h] [rbp-88h]
  __int16 v300; // [rsp+178h] [rbp-78h]
  char *v301[3]; // [rsp+180h] [rbp-70h] BYREF
  __int16 v302; // [rsp+198h] [rbp-58h]
  char s[24]; // [rsp+1A0h] [rbp-50h] BYREF
  unsigned __int64 v304; // [rsp+1B8h] [rbp-38h]

  v304 = __readfsqword(0x28u);
  v9 = a1;
  *(_BYTE *)(a1 + 68) = 1;
  QT::QComboBox::currentText((QT::QComboBox *)v301);
  QT::QString::toUtf8_helper((QT::QString *)&v284, (const QT::QString *)v301);
  if ( v301[0] && !_InterlockedSub((volatile signed __int32 *)v301[0], 1u) )
    free(v301[0]);
  v10 = v285;
  if ( !v285 )
    v10 = (const char *)&QT::QByteArray::_empty;
  v11 = *(const char ***)(**(_QWORD **)(a1 + 48) + 32LL);
  for ( n = 0; ; ++n )
  {
    v15 = n;
    if ( !n )
      break;
    v14 = strcmp(v11[n], v10);
    if ( !v14 )
      goto LABEL_13;
LABEL_10:
    ;
  }
  v12 = *v11;
  v13 = strchr(*v11, 58);
  if ( v13 )
    v12 = v13 + 1;
  v14 = strcmp(v12, v10);
  if ( v14 )
    goto LABEL_10;
LABEL_13:
  v16 = v14;
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v17 = 0;
  memset(v301, 0, sizeof(v301));
  nb = strlen(s);
  v18 = (char *)qvector_reserve(v301, 0, nb + 1, 1);
  v301[1] = (char *)(nb + 1);
  v301[0] = v18;
  memmove(v18, s, nb);
  v301[0][nb] = 0;
  v19 = v301[0];
  v20 = v301[0];
  if ( !v301[1] )
    v20 = &s1;
  v21 = strcasecmp(*(const char **)(*(_QWORD *)(**(_QWORD **)(a1 + 48) + 24LL) + 8 * v15), v20);
  if ( v19 )
  {
    v301[1] = nullptr;
    *(double *)v17.m128_u64 = qfree(v19, v20);
  }
  if ( !v21 )
  {
LABEL_23:
    v25 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 424LL));
    if ( (unsigned __int8)getinf(8) != v25 )
    {
      v26 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 424LL));
      *(double *)v17.m128_u64 = set_target_assembler(v26);
      v20 = *(const char **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 8LL);
      sub_169700(
        (int)"Target assembler: %s\n",
        (__int64)v20,
        v27,
        v28,
        v29,
        v30,
        v17,
        a3,
        a4,
        a5,
        v31,
        v32,
        a8,
        a9,
        v261);
    }
    sub_34F6D0(*(double *)v17.m128_u64, a1, (__int64)v20);
    isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 480LL));
    setinf_flag(2, 1, isChecked);
    v34 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 488LL));
    setinf_flag(44, 4, v34);
    show_auto(-1, 0);
    v35 = getinf(49);
    v36 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 840LL));
    v37 = v35;
    v38 = v35 & 0xFE;
    v39 = v37 | 1;
    if ( v36 )
      v38 = v39;
    v40 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1048LL));
    v41 = v38;
    v42 = v38 & 0xFD;
    v43 = v41 | 2;
    if ( v40 )
      v42 = v43;
    v44 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1064LL));
    v45 = v42;
    v46 = v42 & 0xFB;
    v47 = v45 | 4;
    if ( v44 )
      v46 = v47;
    v48 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 848LL));
    v49 = v46;
    v50 = v46 & 0xEF;
    v51 = v49 | 0x10;
    if ( v48 )
      v50 = v51;
    v52 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1056LL));
    v53 = v50;
    v54 = v50 & 0xDF;
    v55 = v53 | 0x20;
    if ( v52 )
      v54 = v55;
    setinf(49, v54);
    QT::QLineEdit::text((QT::QLineEdit *)&ptr);
    QT::QString::toUtf8_helper((QT::QString *)v301, (const QT::QString *)&ptr);
    v58 = v301[1];
    if ( !v301[1] )
    {
      if ( !&QT::QByteArray::_empty )
        goto LABEL_39;
      v58 = (const char *)&QT::QByteArray::_empty;
    }
    v59 = strlen(v58);
    v60 = 16;
    if ( v59 <= 0x10 )
      v60 = v59;
    setinf_buf(53, v58, v60);
LABEL_39:
    if ( v301[0] && !_InterlockedSub((volatile signed __int32 *)v301[0], 1u) )
      free(v301[0]);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1104LL),
                            nullptr,
                            *(double *)v17.m128_u64,
                            a3,
                            a4,
                            a5,
                            v56,
                            v57,
                            a8,
                            a9) )
    {
      v63 = v281;
      if ( (__int64)v281 > 15 )
        v63 = byte_9 + 6;
      if ( (__int64)v63 < 0 )
        v63 = nullptr;
      setinf(51, v63);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 1096LL),
                            nullptr,
                            *(double *)v17.m128_u64,
                            a3,
                            a4,
                            a5,
                            v61,
                            v62,
                            a8,
                            a9) )
      setinf(54, v281);
    else
      *(_BYTE *)(a1 + 68) = 0;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 872LL),
                            nullptr,
                            *(double *)v17.m128_u64,
                            a3,
                            a4,
                            a5,
                            v64,
                            v65,
                            a8,
                            a9) )
      setinf(50, (unsigned __int8)v281);
    else
      *(_BYTE *)(a1 + 68) = 0;
    v68 = *(_QWORD *)(a1 + 56);
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC390);
    v287 = 7;
    v70 = *(_QWORD *)(v68 + 920);
    v286 = si128;
    v283 = nullptr;
    if ( !(unsigned __int8)sub_357F80(
                             &v282,
                             v70,
                             (__int128 *)v286.m128i_i8,
                             *(double *)si128.m128i_i64,
                             a3,
                             a4,
                             a5,
                             v66,
                             v67,
                             a8,
                             a9) )
      goto LABEL_58;
    v73 = (__int16)v282;
    if ( v282 )
    {
      if ( !(unsigned __int8)sub_357F80(
                               &v283,
                               *(_QWORD *)(*(_QWORD *)(a1 + 56) + 936LL),
                               (__int128 *)v286.m128i_i8,
                               *(double *)si128.m128i_i64,
                               a3,
                               a4,
                               a5,
                               v71,
                               v72,
                               a8,
                               a9) )
      {
LABEL_58:
        *(_BYTE *)(a1 + 68) = 0;
        goto LABEL_59;
      }
      v73 = (__int16)v282;
    }
    v249 = (int)v283;
    v250 = QT::QComboBox::currentIndex(*(QT::QComboBox **)(*(_QWORD *)(a1 + 56) + 896LL));
    v251 = 0;
    if ( (unsigned __int64)v250 <= 9 )
    {
      LODWORD(v251) = (unsigned __int8)byte_5E84D0[v250];
      if ( (_BYTE)v251 == 0xFF )
        LODWORD(v251) = (v249 << 16) & 0xFF0000 | (unsigned __int16)(v73 << 8);
      v251 = (int)v251;
    }
    setinf(52, v251);
LABEL_59:
    v74 = getinf(33);
    v75 = v74 & 0xF7;
    if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 600LL)) )
      v75 = v74 | 8;
    v76 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 608LL));
    v77 = v75;
    v78 = v75 & 0xFD;
    v79 = v77 | 2;
    if ( v76 )
      v78 = v79;
    v80 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 616LL));
    v81 = v78;
    v82 = v78 & 0xFB;
    v83 = v81 | 4;
    if ( v80 )
      v82 = v83;
    v84 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 624LL));
    v85 = v82;
    v86 = v82 & 0xFE;
    v87 = v85 | 1;
    if ( v84 )
      v86 = v87;
    setinf(33, v86);
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 720LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v88,
                            v89,
                            a8,
                            a9) )
    {
      v92 = v281;
      if ( (__int64)v281 > 1023 )
        v92 = (_BYTE *)(elf_gnu_hash_bucket + 167);
      if ( (__int64)v92 < 32 )
        v92 = (const char *)&qword_20;
      setinf(43, v92);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 712LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v90,
                            v91,
                            a8,
                            a9) )
      setinf(25, v281);
    else
      *(_BYTE *)(a1 + 68) = 0;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 760LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v93,
                            v94,
                            a8,
                            a9) )
    {
      v97 = v281;
      if ( (__int64)v281 > 255 )
        v97 = (_BYTE *)(off_F8 + 7);
      if ( (__int64)v97 < 0 )
        v97 = nullptr;
      setinf(30, v97);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 768LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v95,
                            v96,
                            a8,
                            a9) )
    {
      v100 = v281;
      if ( (__int64)v281 > 255 )
        v100 = (_BYTE *)(off_F8 + 7);
      if ( (__int64)v100 < 0 )
        v100 = nullptr;
      setinf(31, v100);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 288LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v98,
                            v99,
                            a8,
                            a9) )
    {
      v103 = (__int16)v281;
      v104 = -(__int16)v281;
      if ( (__int16)v281 > 0 )
        v104 = (__int16)v281;
      v105 = 0;
      if ( v104 >= 0 )
      {
        v105 = (unsigned __int16)v104;
        if ( v104 >= 17 )
          v105 = 16;
      }
      setinf(47, v105);
      setinf_flag(48, 8, (unsigned int)v103 >> 31);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 312LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v101,
                            v102,
                            a8,
                            a9) )
    {
      v108 = v281;
      if ( (__int64)v281 > 255 )
        v108 = (_BYTE *)(off_F8 + 7);
      if ( (__int64)v108 < 0 )
        v108 = nullptr;
      setinf(40, v108);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 328LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v106,
                            v107,
                            a8,
                            a9) )
    {
      v111 = v281;
      if ( (__int64)v281 > 255 )
        v111 = (_BYTE *)(off_F8 + 7);
      if ( (__int64)v111 < 0 )
        v111 = nullptr;
      setinf(41, v111);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 344LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v109,
                            v110,
                            a8,
                            a9) )
    {
      v114 = v281;
      if ( (__int64)v281 > 1023 )
        v114 = (_BYTE *)(elf_gnu_hash_bucket + 167);
      if ( (__int64)v114 < 32 )
        v114 = (const char *)&qword_20;
      setinf(42, v114);
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 168LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v112,
                            v113,
                            a8,
                            a9) )
      setinf(23, v281);
    else
      *(_BYTE *)(a1 + 68) = 0;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 184LL),
                            nullptr,
                            *(double *)si128.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v115,
                            v116,
                            a8,
                            a9) )
      setinf(24, v281);
    else
      *(_BYTE *)(a1 + 68) = 0;
    v117 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 232LL));
    setinf_flag(44, 32, v117);
    v118 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 80LL));
    setinf_flag(44, 64, v118);
    v119 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 104LL));
    setinf_flag(44, 16, v119);
    v120 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 136LL));
    setinf_flag(44, 1024, v120);
    v121 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 112LL));
    setinf_flag(46, 1, v121);
    v122 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 120LL));
    setinf_flag(46, 4, v122);
    v123 = getinf(45);
    v124 = v123 & 0xFB;
    if ( !(unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 248LL)) )
      v124 = v123 | 4;
    v125 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 256LL));
    v126 = v124;
    v127 = v124 & 0xFE;
    v128 = v126 | 1;
    if ( v125 )
      v127 = v128;
    v129 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 264LL));
    v130 = v127;
    v131 = v127 & 0xFD;
    v132 = v130 | 2;
    if ( v129 )
      v131 = v132;
    v133 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 128LL));
    v134 = v131;
    v135 = v131 & 0xF7;
    v136 = v134 | 8;
    if ( v133 )
      v135 = v136;
    setinf(45, v135);
    v137 = getinf(48);
    v138 = v137 & 0xFE;
    if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 72LL)) )
      v138 = v137 | 1;
    v139 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 64LL));
    v140 = v138;
    v141 = v138 & 0xFD;
    v142 = v140 | 2;
    if ( v139 )
      v141 = v142;
    v143 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 240LL));
    v144 = v141;
    v145 = v141 & 0xFB;
    v146 = v144 | 4;
    if ( v143 )
      v145 = v146;
    setinf(48, v145);
    v147 = _mm_load_si128((const __m128i *)&xmmword_5DD100);
    v148 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 360LL);
    LODWORD(v301[2]) = 3;
    *(__m128i *)v301 = v147;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v148,
                            (__int128 *)v301,
                            *(double *)v147.m128i_i64,
                            a3,
                            a4,
                            a5,
                            v149,
                            v150,
                            a8,
                            a9) )
    {
      reg_int_op("TabulationSpaces", 1, (unsigned int)v281, 0);
      unk_8BA540 = (_DWORD)v281;
    }
    else
    {
      *(_BYTE *)(a1 + 68) = 0;
    }
    byte_8BCE19[0] = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1224LL));
    reg_int_op("AutoHighlight", 1, byte_8BCE19[0], 0);
    if ( !byte_8BCE19[0] && (_QWORD)xmmword_8CB528 )
    {
      v153 = 0;
      do
      {
        v154 = *(_QWORD *)(qword_8CB520 + 8 * v153);
        if ( v154 )
          sub_1E8C00((_QWORD *)(v154 + 576), (_BYTE *)&dword_0 + 1);
        ++v153;
      }
      while ( v153 < (unsigned __int64)xmmword_8CB528 );
    }
    v155 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    v156 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1296LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v155;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v156,
                            (__int128 *)v301,
                            *(double *)v147.m128i_i64,
                            v155,
                            a4,
                            a5,
                            v151,
                            v152,
                            a8,
                            a9) )
    {
      reg_int_op("AutoScroll", 1, (unsigned int)v281, 0);
      word_8BCE1C = (int)v281;
    }
    else
    {
      *(_BYTE *)(v9 + 68) = 0;
    }
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1312LL),
                            nullptr,
                            *(double *)v147.m128i_i64,
                            v155,
                            a4,
                            a5,
                            v157,
                            v158,
                            a8,
                            a9) )
      sub_3035B0((int)v281);
    else
      *(_BYTE *)(v9 + 68) = 0;
    v161 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    v162 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1184LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v161;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v162,
                            (__int128 *)v301,
                            *(double *)v147.m128i_i64,
                            v155,
                            v161,
                            a5,
                            v159,
                            v160,
                            a8,
                            a9) )
    {
      reg_int_op("HintLines", 1, (unsigned int)v281, 0);
      dword_8BA8F4 = (int)v281;
    }
    else
    {
      *(_BYTE *)(v9 + 68) = 0;
    }
    v165 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    v166 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1200LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v165;
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v166,
                            (__int128 *)v301,
                            *(double *)v147.m128i_i64,
                            v155,
                            v161,
                            v165,
                            v163,
                            v164,
                            a8,
                            a9) )
    {
      reg_int_op("HintDelay", 1, (unsigned int)v281, 0);
      dword_8BA8F0 = (int)v281;
    }
    else
    {
      *(_BYTE *)(v9 + 68) = 0;
    }
    byte_8BA8ED = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1208LL));
    reg_int_op("HintWheel", 1, (unsigned __int8)byte_8BA8ED, 0);
    byte_8BA8EC = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1216LL)) ^ 1;
    reg_int_op("HintIfDebuggerActive", 1, (unsigned __int8)byte_8BA8EC, 0);
    v167 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1280LL);
    LODWORD(v301[2]) = 3;
    *(__m128i *)v301 = _mm_load_si128((const __m128i *)&xmmword_5DD110);
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v167,
                            (__int128 *)v301,
                            *(double *)v147.m128i_i64,
                            v155,
                            v161,
                            v165,
                            *(double *)v301,
                            v168,
                            a8,
                            a9) )
    {
      reg_int_op("NavigationStackLines", 1, (unsigned int)v281, 0);
      dword_8BA8E8 = (int)v281;
    }
    else
    {
      *(_BYTE *)(v9 + 68) = 0;
    }
    v169 = QT::QSpinBox::value(*(QT::QSpinBox **)(*(_QWORD *)(v9 + 56) + 1328LL));
    v170 = *(QT::QSpinBox **)(*(_QWORD *)(v9 + 56) + 1344LL);
    *(double *)&qword_8CB470 = (double)v169;
    v171 = (double)(int)QT::QSpinBox::value(v170);
    unk_8CB468 = v171;
    reg_int_op("LinePaddingTop", 1, (unsigned int)(int)*(double *)&qword_8CB470, 0);
    reg_int_op("LinePaddingBottom", 1, (unsigned int)(int)unk_8CB468, 0);
    byte_8CCA9E = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1408LL));
    byte_8CCA9D = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1416LL));
    byte_8CCA9C = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1424LL));
    byte_8CCA9B = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1432LL));
    byte_8CCA9A = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1440LL));
    byte_8CCA99 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1448LL));
    byte_8CCA98 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1456LL));
    v172 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1400LL));
    reg_int_op("UseGraphView", 1, v172, 0);
    reg_int_op("AnimateGraph", 1, (unsigned __int8)byte_8CCA9E, 0);
    reg_int_op("DrawGraphShadows", 1, (unsigned __int8)byte_8CCA9D, 0);
    reg_int_op("AutoFitWindow", 1, (unsigned __int8)byte_8CCA9C, 0);
    reg_int_op("FitMax100", 1, (unsigned __int8)byte_8CCA9B, 0);
    reg_int_op("AutoRelayout", 1, (unsigned __int8)byte_8CCA9A, 0);
    reg_int_op("TruncateNodes", 1, (unsigned __int8)byte_8CCA99, 0);
    reg_int_op("LockGraph", 1, (unsigned __int8)byte_8CCA98, 0);
    v173 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1472LL);
    LODWORD(v301[2]) = 3;
    *(__m128i *)v301 = _mm_load_si128((const __m128i *)&xmmword_5DD110);
    if ( (unsigned __int8)sub_357F80(
                            &v281,
                            v173,
                            (__int128 *)v301,
                            v171,
                            v155,
                            v161,
                            v165,
                            v174,
                            *(double *)v301,
                            a8,
                            a9) )
    {
      reg_int_op("MaxGraphNodes", 1, (unsigned int)v281, 0);
      dword_8CCA94 = (int)v281;
    }
    else
    {
      *(_BYTE *)(v9 + 68) = 0;
    }
    byte_8CF0E0 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1504LL));
    byte_8CF0DF = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1512LL));
    byte_8CF0DE = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1520LL));
    byte_8CF0DD = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1528LL));
    v175 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1536LL));
    v176 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    byte_8CF0DC = v175;
    v177 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1544LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v176;
    if ( (unsigned __int8)sub_357F80(&v281, v177, (__int128 *)v301, v171, v155, v161, v165, v178, v179, v176, a9) )
      dword_8CF0D8 = (int)v281;
    else
      *(_BYTE *)(v9 + 68) = 0;
    v182 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    v183 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1552LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v182;
    if ( (unsigned __int8)sub_357F80(&v281, v183, (__int128 *)v301, v171, v155, v161, v165, v180, v181, v176, v182) )
      dword_8CF0D4 = (int)v281;
    else
      *(_BYTE *)(v9 + 68) = 0;
    v186 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DD110);
    v187 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1560LL);
    LODWORD(v301[2]) = 3;
    *(__m128 *)v301 = v186;
    if ( (unsigned __int8)sub_357F80(&v281, v187, (__int128 *)v301, v171, v186, v161, v165, v184, v185, v176, v182) )
      dword_8CF0D0 = (int)v281;
    else
      *(_BYTE *)(v9 + 68) = 0;
    sub_374430();
    v188 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1784LL));
    reg_int_op("AutoUseLumina", 1, v188, 0);
    v190 = *(_QWORD *)(get_current_config("AutoUseLumina", 1, v189) + 632);
    v275 = *(_QWORD *)(get_current_config("AutoUseLumina", 1, v191) + 640);
    v274 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1656LL));
    v192 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1696LL));
    v195 = *(_QWORD *)(v190 + 72);
    v273 = v192;
    v288 = nullptr;
    v289 = 0;
    if ( v195 > 1 )
    {
      if ( &v288 != (char **)(v190 + 64) )
      {
        nc = *(const void **)(v190 + 64);
        v288 = (char *)qvector_reserve(&v288, 0, v195, 1);
        *(_QWORD *)&v289 = v195;
        memmove(v288, nc, v195 - 1);
        v288[v195 - 1] = 0;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64, char **, _QWORD))(*(_QWORD *)v190 + 32LL))(v190, &v288, 0);
    }
    v196 = *(_QWORD *)(v9 + 56);
    v300 = 0;
    v302 = 0;
    ptr = nullptr;
    memset(v301, 0, sizeof(v301));
    v299 = 0;
    sub_361990(
      v9,
      (__int64 *)&ptr,
      0.0,
      v186,
      v161,
      v165,
      v193,
      v194,
      v176,
      v182,
      *(_QWORD *)(v196 + 1632),
      *(_QWORD *)(v196 + 1648));
    sub_361990(
      v9,
      (__int64 *)v301,
      0.0,
      v186,
      v161,
      v165,
      v197,
      v198,
      v176,
      v182,
      *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1672LL),
      *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1688LL));
    v199 = 0;
    dest = nullptr;
    v291 = 0;
    v292 = nullptr;
    v293 = 0;
    QT::QLineEdit::text((QT::QLineEdit *)v294);
    QT::QString::toUtf8_helper((QT::QString *)&v296, (const QT::QString *)v294);
    v200 = v297;
    if ( !v297 )
    {
      if ( !&QT::QByteArray::_empty )
        goto LABEL_160;
      v200 = (char *)&QT::QByteArray::_empty;
    }
    src = v200;
    v201 = strlen(v200);
    v200 = src;
    v202 = v201;
    if ( v201 )
    {
      v252 = dest;
      v253 = (void *)(v201 + 1);
      if ( *((_QWORD *)&v291 + 1) < v201 + 1 )
      {
        v263 = src;
        srcd = (void *)(v201 + 1);
        dest = (void *)qvector_reserve(&dest, dest, v253, 1);
        v200 = v263;
        v252 = dest;
        v253 = srcd;
      }
      *(_QWORD *)&v291 = v253;
      memmove(v252, v200, v202);
      *((_BYTE *)dest + v202) = 0;
LABEL_161:
      if ( v296 && !_InterlockedSub((volatile signed __int32 *)v296, 1u) )
        free(v296);
      if ( v294[0] && !_InterlockedSub((volatile signed __int32 *)v294[0], 1u) )
        free(v294[0]);
      v203 = v291;
      if ( (unsigned __int64)v291 <= 1 )
        goto LABEL_183;
      v204 = dest;
      v205 = v291 - 1;
      v206 = (char *)dest + v291 - 1;
      v207 = v206;
      if ( dest < v206 )
      {
        while ( *(v207 - 1) == 32 )
        {
          if ( dest == --v207 )
          {
            if ( !dest )
              goto LABEL_179;
            goto LABEL_297;
          }
        }
        v205 = v207 - (_BYTE *)dest;
        if ( v207 != dest )
          goto LABEL_173;
        if ( dest )
        {
LABEL_297:
          *(_QWORD *)&v291 = 0;
          *(double *)v199.m128_u64 = qfree(dest, (const char *)v294, v206, v203, v200);
          dest = nullptr;
          *((_QWORD *)&v291 + 1) = 0;
          goto LABEL_177;
        }
      }
      else
      {
LABEL_173:
        v208 = (void *)(v205 + 1);
        if ( (unsigned __int64)v291 < v205 + 1 )
        {
          if ( *((_QWORD *)&v291 + 1) < (unsigned __int64)v208 )
          {
            dest = (void *)qvector_reserve(&dest, dest, v205 + 1, 1);
            v203 = v291;
            v204 = dest;
            v208 = (void *)(v205 + 1);
          }
          srcc = v208;
          memset(&v204[v203], 0, (size_t)v208 - v203);
          *(_QWORD *)&v291 = srcc;
          v207 = (char *)dest + v205;
        }
        else if ( (_QWORD)v291 != v205 + 1 )
        {
          *(_QWORD *)&v291 = v205 + 1;
        }
        *v207 = 0;
LABEL_177:
        if ( (unsigned __int64)v291 <= 1 || (v204 = dest, v206 = (char *)dest + v291 - 1, dest >= v206) )
        {
LABEL_183:
          QT::QLineEdit::text((QT::QLineEdit *)v294);
          QT::QString::toUtf8_helper((QT::QString *)&v296, (const QT::QString *)v294);
          v212 = v297;
          if ( !v297 )
          {
            if ( !&QT::QByteArray::_empty )
              goto LABEL_185;
            v212 = (char *)&QT::QByteArray::_empty;
          }
          srca = v212;
          v213 = strlen(v212);
          v214 = srca;
          v215 = v213;
          if ( v213 )
          {
            v254 = v292;
            v255 = (void *)(v213 + 1);
            if ( *((_QWORD *)&v293 + 1) < v213 + 1 )
            {
              v262 = v213;
              v264 = srca;
              srce = (void *)(v213 + 1);
              v292 = (void *)qvector_reserve(&v292, v292, v255, 1);
              v215 = v262;
              v254 = v292;
              v214 = v264;
              v255 = srce;
            }
            *(_QWORD *)&v293 = v255;
            srcf = (_BYTE *)v215;
            memmove(v254, v214, v215);
            srcf[(_QWORD)v292] = 0;
            goto LABEL_186;
          }
LABEL_185:
          *(_QWORD *)&v293 = 0;
LABEL_186:
          if ( v296 && !_InterlockedSub((volatile signed __int32 *)v296, 1u) )
            free(v296);
          if ( v294[0] && !_InterlockedSub((volatile signed __int32 *)v294[0], 1u) )
            free(v294[0]);
          if ( !(unsigned __int8)sub_34F730(
                                   v199,
                                   v186,
                                   v161,
                                   v165,
                                   v210,
                                   v211,
                                   v176,
                                   v182,
                                   v9,
                                   v190,
                                   v274,
                                   (__int64)&ptr,
                                   (__int64 *)&dest,
                                   (__int64 *)&v292,
                                   (__int64)&v288) )
            *(_BYTE *)(v9 + 68) = 0;
          if ( !(unsigned __int8)sub_34F730(
                                   v199,
                                   v186,
                                   v161,
                                   v165,
                                   v216,
                                   v217,
                                   v176,
                                   v182,
                                   v9,
                                   v275,
                                   v273,
                                   (__int64)v301,
                                   (__int64 *)&dest,
                                   (__int64 *)&v292,
                                   (__int64)&v288) )
            *(_BYTE *)(v9 + 68) = 0;
          unk_8BCE18 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1248LL));
          byte_8BA8E5 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1232LL));
          if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1904LL)) )
          {
            dword_8BA8E0 = -1;
          }
          else if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56)
                                                                                            + 1912LL)) )
          {
            dword_8BA8E0 = 0;
          }
          else if ( (unsigned __int8)QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56)
                                                                                            + 1896LL)) )
          {
            dword_8BA8E0 = 1;
          }
          reg_int_op("LazyJumps", 1, unk_8BCE18, 0);
          reg_int_op("AutoUndefine", 1, (unsigned int)dword_8BA8E0, 0);
          reg_int_op("HideUnhideJumps", 1, (unsigned __int8)byte_8BA8E5, 0);
          v218 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1240LL));
          reg_int_op("ShowEcfringe", 1, v218, 0);
          QT::QLineEdit::text((QT::QLineEdit *)v294);
          QT::QString::toUtf8_helper((QT::QString *)&v296, (const QT::QString *)v294);
          v219 = v297;
          if ( !v297 )
            v219 = (char *)&QT::QByteArray::_empty;
          reg_str_set("Editor", 0, v219);
          if ( v296 && !_InterlockedSub((volatile signed __int32 *)v296, 1u) )
            free(v296);
          if ( v294[0] && !_InterlockedSub((volatile signed __int32 *)v294[0], 1u) )
            free(v294[0]);
          if ( (unsigned __int8)sub_357F80(
                                  &v281,
                                  *(_QWORD *)(*(_QWORD *)(v9 + 56) + 1872LL),
                                  nullptr,
                                  *(double *)v199.m128_u64,
                                  v186,
                                  v161,
                                  v165,
                                  v220,
                                  v221,
                                  v176,
                                  v182) )
          {
            v222 = v281;
            if ( (__int64)v281 < 0 )
            {
              v222 = nullptr;
            }
            else
            {
              v16 = (unsigned int)v281;
              if ( (__int64)v281 > 10000 )
              {
                v222 = (_BYTE *)&stru_2710;
                v16 = 10000;
              }
            }
            v281 = v222;
            reg_int_op("BandRefreshRate", 1, v16, 0);
            sub_340E80(*((_QWORD *)qword_8CF010 + 87), (int)v281);
          }
          else
          {
            *(_BYTE *)(v9 + 68) = 0;
          }
          v223 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1920LL));
          nullsub_146(v223);
          v224 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1928LL));
          reg_int_op("FormsAutoappend", 1, v224, 0);
          v225 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1936LL));
          reg_int_op("SetTypeRenames", 1, v225, 0);
          v226 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1992LL));
          reg_int_op("TypesAutoappend", 1, v226, 0);
          v227 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 2000LL));
          reg_int_op("TypesAutoappendCaseSens", 1, v227, 0);
          v228 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 2008LL));
          reg_int_op("TypesAutoappendCurlyBr", 1, v228, 0);
          v229 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 2016LL));
          reg_int_op("TypesAutoappendHints", 1, v229, 0);
          v230 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(v9 + 56) + 1256LL));
          if ( *(_BYTE *)(v9 + 69) != v230 )
          {
            v231 = qword_8CAC18;
            if ( !qword_8CAC18 )
            {
              v257 = operator new(0x18u);
              v199.m128_u64[0] = 0;
              *(_QWORD *)v257 = 0;
              v231 = (__int64 *)v257;
              qword_8CAC18 = (_QWORD *)v257;
              *(_OWORD *)(v257 + 8) = 0;
            }
            if ( v230 )
            {
              v232 = sub_2686F0();
              v294[0] = nullptr;
              v294[1] = nullptr;
              v295 = 0;
              sub_268600((__int64)v294, (const char *)v232, 0, v233, *(double *)v199.m128_u64);
              sub_26A8A0((__int64 *)&v296, (__int64)v294, v234, v235);
              sub_196C20(v231, &v296);
              v236 = (char *)v296;
              if ( v296 )
              {
                if ( v297 )
                {
                  na = v230;
                  v237 = nullptr;
                  v238 = v297;
                  v276 = (QT::QString *)v9;
                  do
                  {
                    v239 = &v236[48 * (_QWORD)v237];
                    v240 = *((_QWORD *)v239 + 3);
                    if ( v240 )
                    {
                      *((_QWORD *)v239 + 4) = 0;
                      *(double *)v199.m128_u64 = qfree(v240, (const char *)&v296);
                    }
                    v241 = *(_QWORD *)v239;
                    if ( *(_QWORD *)v239 )
                    {
                      v242 = *((_QWORD *)v239 + 1);
                      if ( v242 )
                      {
                        for ( i = 0; i != v242; ++i )
                        {
                          v244 = (QT::QRegularExpression *)(v241 + 8 * i);
                          QT::QRegularExpression::~QRegularExpression(v244);
                          v241 = *(_QWORD *)v239;
                        }
                      }
                      *((_QWORD *)v239 + 1) = 0;
                      *(double *)v199.m128_u64 = qfree(v241, (const char *)&v296, *(double *)v199.m128_u64);
                    }
                    ++v237;
                    v236 = (char *)v296;
                  }
                  while ( v238 != v237 );
                  v230 = na;
                  v9 = (__int64)v276;
                }
                v297 = nullptr;
                *(double *)v199.m128_u64 = qfree(v236, (const char *)&v296);
              }
              jvalue_t_clear(v294);
            }
            else
            {
              sub_196C30(v231);
            }
          }
          reg_int_op("EnableHistorySharing", 1, v230, 0);
          v245 = getinf_flag(2, 128);
          view_options = get_view_options(v245);
          dto_copy_from_inf(view_options);
          v247 = *(unsigned __int8 *)(v9 + 68);
          if ( v292 )
          {
            *(_QWORD *)&v293 = 0;
            *(double *)v199.m128_u64 = qfree(v292, (const char *)&qword_80);
          }
          if ( dest )
          {
            *(_QWORD *)&v291 = 0;
            *(double *)v199.m128_u64 = qfree(dest, (const char *)&qword_80, *(double *)v199.m128_u64);
          }
          if ( v301[0] )
          {
            v301[1] = nullptr;
            *(double *)v199.m128_u64 = qfree(v301[0], (const char *)&qword_80, *(double *)v199.m128_u64);
          }
          if ( ptr )
          {
            *(_QWORD *)&v299 = 0;
            *(double *)v199.m128_u64 = qfree(ptr, (const char *)&qword_80, *(double *)v199.m128_u64);
          }
          if ( v288 )
          {
            *(_QWORD *)&v289 = 0;
            qfree(v288, (const char *)&qword_80, *(double *)v199.m128_u64);
          }
          goto LABEL_239;
        }
      }
LABEL_179:
      v209 = v204;
      while ( *v209 == 32 )
      {
        if ( v206 == ++v209 )
        {
          *v204 = *v206;
          v256 = (char *)dest;
          goto LABEL_299;
        }
      }
      if ( v204 >= v209 )
        goto LABEL_183;
      v258 = v206 - v209;
      srcb = (void *)(v206 - v209 + 1);
      memmove(v204, v209, (size_t)srcb);
      v209 = dest;
      v259 = srcb;
      v256 = (char *)dest;
      if ( v258 )
      {
        v260 = v291;
        if ( (unsigned __int64)v291 < (unsigned __int64)srcb )
        {
          if ( *((_QWORD *)&v291 + 1) < (unsigned __int64)srcb )
          {
            dest = (void *)qvector_reserve(&dest, dest, srcb, 1);
            v256 = (char *)dest;
            v259 = srcb;
            v260 = v291;
          }
          srcg = v259;
          memset(&v256[v260], 0, (size_t)v259 - v260);
          v209 = dest;
          *(_QWORD *)&v291 = srcg;
        }
        else if ( srcb != (void *)v291 )
        {
          *(_QWORD *)&v291 = srcb;
        }
        v209[v258] = 0;
        goto LABEL_183;
      }
LABEL_299:
      if ( v256 )
      {
        *(_QWORD *)&v291 = 0;
        *(double *)v199.m128_u64 = qfree(v256, v209);
        dest = nullptr;
        *((_QWORD *)&v291 + 1) = 0;
      }
      goto LABEL_183;
    }
LABEL_160:
    *(_QWORD *)&v291 = 0;
    goto LABEL_161;
  }
  v20 = "The processor has been changed.\nDo you want to switch to the new processor?";
  v22 = sub_1698A0(1, (int)"The processor has been changed.\nDo you want to switch to the new processor?");
  if ( v22 != -1 )
  {
    if ( v22 == 1 )
      sub_3563D0(a1, v17, a3, a4, a5, v23, v24, a8, a9);
    goto LABEL_23;
  }
  v247 = 0;
LABEL_239:
  if ( v284 && !_InterlockedSub((volatile signed __int32 *)v284, 1u) )
    free(v284);
  return v247;
}
