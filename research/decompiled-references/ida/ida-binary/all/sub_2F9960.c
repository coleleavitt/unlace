unsigned __int64 __fastcall sub_2F9960(
        __int64 a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __m128i *v15; // r13
  void *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  QT::QLabel *v21; // rbx
  __int64 v22; // rax
  void *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  void *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // ebp
  size_t v33; // rax
  const char *v34; // r12
  size_t v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  double v38; // xmm0_8
  int *v39; // rax
  __int64 v40; // rbx
  _BYTE *v41; // rbx
  double v42; // xmm0_8
  const char *v43; // rbx
  size_t v44; // rax
  double v45; // xmm0_8
  __int64 v46; // rax
  void *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rax
  void *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  QT::QListWidget *v54; // rbx
  int v55; // eax
  int *v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rax
  unsigned __int64 v60; // rax
  const char *v61; // rdx
  __int64 v62; // rax
  char v63; // al
  bool v64; // zf
  int v65; // eax
  __int64 *v66; // r12
  __m128 v67; // xmm0
  size_t v68; // rbp
  const char *v69; // rsi
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rbp
  __int64 v73; // r8
  __int64 v74; // r9
  __m128 v75; // xmm4
  __m128 v76; // xmm5
  int v77; // eax
  const char **v78; // r12
  int v79; // ebp
  bool v80; // dl
  int v81; // r14d
  int v82; // eax
  int v83; // r14d
  double v84; // xmm0_8
  size_t v85; // rax
  double v86; // xmm0_8
  double v87; // xmm0_8
  QT::QLineEdit *v88; // r14
  size_t v89; // rax
  QT::QAbstractButton *v90; // rbx
  char v91; // al
  QT::QAbstractButton *v92; // rbx
  char v93; // al
  int v94; // r14d
  QT::QAbstractButton *v95; // rbx
  bool v96; // al
  QT::QAbstractButton *v97; // rbx
  bool v98; // al
  char v99; // si
  size_t v101; // rax
  char v102; // r14
  const __m128i *v103; // rax
  __m128i v104; // xmm0
  __int64 v105; // rdx
  void *v106; // rdi
  volatile signed __int32 *v107; // rax
  volatile signed __int32 *v108; // rax
  int v109; // eax
  _QWORD *i; // r12
  __int64 v111; // rdi
  __int64 v112; // rdi
  __int64 v113; // rdi
  const char *v114; // rsi
  const char *v115; // rdi
  char v116; // [rsp+0h] [rbp-188h]
  int v117; // [rsp+14h] [rbp-174h]
  QT::QLineEdit *v118; // [rsp+18h] [rbp-170h]
  QT::QLineEdit *v119; // [rsp+18h] [rbp-170h]
  const char *v121; // [rsp+38h] [rbp-150h]
  char v122; // [rsp+38h] [rbp-150h]
  void *v123[2]; // [rsp+40h] [rbp-148h] BYREF
  __int64 v124; // [rsp+50h] [rbp-138h]
  void *v125[4]; // [rsp+60h] [rbp-128h] BYREF
  void *v126[4]; // [rsp+80h] [rbp-108h] BYREF
  void *v127[4]; // [rsp+A0h] [rbp-E8h] BYREF
  void *v128; // [rsp+C0h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-C0h]
  __int64 v130; // [rsp+D0h] [rbp-B8h]
  void *v131[4]; // [rsp+E0h] [rbp-A8h] BYREF
  void *ptr; // [rsp+100h] [rbp-88h] BYREF
  __int128 v133; // [rsp+108h] [rbp-80h]
  char s[40]; // [rsp+120h] [rbp-68h] BYREF
  unsigned __int64 v135; // [rsp+148h] [rbp-40h]

  v13 = _mm_loadu_si128(a3);
  v14 = a3[1].m128i_i64[0];
  v135 = __readfsqword(0x28u);
  v15 = (__m128i *)(a1 + 88);
  if ( v13.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v13.m128i_i64[0], 1u);
  v16 = *(void **)(a1 + 88);
  v17 = *(_QWORD **)(a1 + 96);
  *(__m128i *)(a1 + 88) = v13;
  v18 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 104) = v14;
  if ( v16 && !_InterlockedSub((volatile signed __int32 *)v16, 1u) )
  {
    for ( i = &v17[12 * v18]; i != v17; v17 += 12 )
    {
      v111 = v17[7];
      if ( v111 )
      {
        v17[8] = 0;
        *(double *)v13.m128i_i64 = qfree(v111, a2->m128i_i8);
      }
      v112 = v17[4];
      if ( v112 )
      {
        v17[5] = 0;
        *(double *)v13.m128i_i64 = qfree(v112, a2->m128i_i8, *(double *)v13.m128i_i64);
      }
      v113 = v17[1];
      if ( v113 )
      {
        v17[2] = 0;
        *(double *)v13.m128i_i64 = qfree(v113, a2->m128i_i8, *(double *)v13.m128i_i64);
      }
    }
    free(v16);
  }
  v19 = _mm_loadu_si128(a2);
  v20 = a2[1].m128i_i64[0];
  v124 = v20;
  *(__m128i *)v123 = v19;
  if ( v19.m128i_i64[0] )
  {
    _InterlockedAdd((volatile signed __int32 *)v19.m128i_i64[0], 1u);
    v20 = v124;
  }
  if ( v20 > 80 )
  {
    QT::QString::mid(&ptr, v123, v20 - 80, -1);
    QT::QString::fromUtf8(v131, 3, "...");
    v103 = (const __m128i *)QT::QString::append((QT::QString *)v131, (const QT::QString *)&ptr);
    a6 = 0;
    v104 = _mm_loadu_si128(v103);
    v105 = v103[1].m128i_i64[0];
    v103[1].m128i_i64[0] = 0;
    *v103 = 0;
    v106 = v123[0];
    v124 = v105;
    *(__m128i *)v123 = v104;
    if ( v106 && !_InterlockedSub((volatile signed __int32 *)v106, 1u) )
    {
      free(v106);
      v107 = (volatile signed __int32 *)v131[0];
      if ( !v131[0] )
        goto LABEL_111;
    }
    else
    {
      v107 = (volatile signed __int32 *)v131[0];
      if ( !v131[0] )
        goto LABEL_111;
    }
    if ( !_InterlockedSub(v107, 1u) )
    {
      free(v131[0]);
      v108 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        goto LABEL_8;
LABEL_112:
      if ( !_InterlockedSub(v108, 1u) )
        free(ptr);
      goto LABEL_8;
    }
LABEL_111:
    v108 = (volatile signed __int32 *)ptr;
    if ( !ptr )
      goto LABEL_8;
    goto LABEL_112;
  }
LABEL_8:
  v21 = *(QT::QLabel **)(*(_QWORD *)(a1 + 64) + 8LL);
  QT::QMetaObject::tr((QT::QMetaObject *)v131, off_88AD40, " &as", 0);
  QT::QMetaObject::tr((QT::QMetaObject *)v127, off_88AD40, "Load file ", 0);
  v22 = QT::QString::append((QT::QString *)v127, (const QT::QString *)v123);
  v23 = *(void **)v22;
  *(_QWORD *)v22 = 0;
  v128 = v23;
  v24 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)(v22 + 8) = 0;
  v129 = v24;
  v25 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = 0;
  v130 = v25;
  v26 = QT::QString::append((QT::QString *)&v128, (const QT::QString *)v131);
  v27 = *(void **)v26;
  *(_QWORD *)v26 = 0;
  ptr = v27;
  v28 = *(_QWORD *)(v26 + 8);
  *(_QWORD *)(v26 + 8) = 0;
  *(_QWORD *)&v133 = v28;
  v29 = *(_QWORD *)(v26 + 16);
  *(_QWORD *)(v26 + 16) = 0;
  *((_QWORD *)&v133 + 1) = v29;
  QT::QLabel::setText(v21, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  if ( v128 && !_InterlockedSub((volatile signed __int32 *)v128, 1u) )
    free(v128);
  if ( v127[0] && !_InterlockedSub((volatile signed __int32 *)v127[0], 1u) )
    free(v127[0]);
  if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
    free(v131[0]);
  if ( *(__int64 *)(a1 + 104) > 0 )
  {
    v117 = -1;
    v32 = 0;
    while ( 1 )
    {
      v56 = *(int **)(a1 + 88);
      if ( !v56 || *v56 > 1 )
        sub_2F8810(v15, 0, 0, 0, v30, v31);
      v57 = 96LL * v32;
      v58 = v57 + *(_QWORD *)(a1 + 96);
      v59 = *(_QWORD *)(v58 + 40);
      if ( v59 )
      {
        v33 = v59 - 1;
        v34 = *(const char **)(v58 + 32);
        v35 = v33 >> 63;
        if ( !v34 )
          goto LABEL_56;
      }
      else
      {
        v34 = &s1;
        LOBYTE(v35) = 0;
        v33 = 0;
        if ( !&s1 )
        {
LABEL_56:
          v33 = 0;
          if ( v34 )
            v33 = strlen(v34);
          goto LABEL_24;
        }
      }
      if ( (_BYTE)v35 )
        goto LABEL_56;
LABEL_24:
      v38 = QT::QString::fromUtf8(v125, v33, v34);
      if ( v117 == -1 )
      {
        v60 = *(_QWORD *)(a4 + 8);
        if ( v60 > 1 )
        {
          v61 = *(const char **)a4;
          v62 = v60 - 1;
          if ( *(_QWORD *)a4 && v62 >= 0 || (v62 = 0, !v61) )
          {
            v38 = QT::QString::fromUtf8(&ptr, v62, v61, v38);
          }
          else
          {
            v121 = *(const char **)a4;
            v101 = strlen(*(const char **)a4);
            v38 = QT::QString::fromUtf8(&ptr, v101, v121, v38);
          }
          v63 = QT::QString::startsWith(v125, &ptr, 0, v38);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          {
            v122 = v63;
            free(ptr);
            v109 = -1;
            if ( v122 )
              v109 = v32;
            v117 = v109;
          }
          else
          {
            v64 = v63 == 0;
            v65 = -1;
            if ( !v64 )
              v65 = v32;
            v117 = v65;
          }
        }
      }
      v39 = *(int **)(a1 + 88);
      if ( !v39 || *v39 > 1 )
        sub_2F8810(v15, 0, 0, 0, v36, v37);
      v40 = *(_QWORD *)(a1 + 96) + v57;
      if ( *(_QWORD *)(v40 + 16) )
      {
        v41 = *(_BYTE **)(v40 + 8);
        if ( *v41 )
        {
          v42 = QT::QString::fromUtf8(v131, 1, "]", v38);
          v43 = (const char *)qbasename(v41);
          v44 = 0;
          if ( v43 )
            v44 = strlen(v43);
          v45 = QT::QString::fromUtf8(v127, v44, v43, v42);
          QT::QString::fromUtf8(v126, 2, " [", v45);
          v46 = QT::QString::append((QT::QString *)v126, (const QT::QString *)v127);
          v47 = *(void **)v46;
          *(_QWORD *)v46 = 0;
          v128 = v47;
          v48 = *(_QWORD *)(v46 + 8);
          *(_QWORD *)(v46 + 8) = 0;
          v129 = v48;
          v49 = *(_QWORD *)(v46 + 16);
          *(_QWORD *)(v46 + 16) = 0;
          v130 = v49;
          v50 = QT::QString::append((QT::QString *)&v128, (const QT::QString *)v131);
          v51 = *(void **)v50;
          *(_QWORD *)v50 = 0;
          ptr = v51;
          v52 = *(_QWORD *)(v50 + 8);
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)&v133 = v52;
          v53 = *(_QWORD *)(v50 + 16);
          *(_QWORD *)(v50 + 16) = 0;
          *((_QWORD *)&v133 + 1) = v53;
          QT::QString::append((QT::QString *)v125, (const QT::QString *)&ptr);
          if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
            free(ptr);
          if ( v128 && !_InterlockedSub((volatile signed __int32 *)v128, 1u) )
            free(v128);
          if ( v126[0] && !_InterlockedSub((volatile signed __int32 *)v126[0], 1u) )
            free(v126[0]);
          if ( v127[0] && !_InterlockedSub((volatile signed __int32 *)v127[0], 1u) )
            free(v127[0]);
          if ( v131[0] && !_InterlockedSub((volatile signed __int32 *)v131[0], 1u) )
            free(v131[0]);
        }
      }
      v54 = *(QT::QListWidget **)(*(_QWORD *)(a1 + 64) + 16LL);
      v55 = QT::QListWidget::count(v54);
      QT::QListWidget::insertItem(v54, v55, (const QT::QString *)v125);
      if ( v125[0] && !_InterlockedSub((volatile signed __int32 *)v125[0], 1u) )
        free(v125[0]);
      if ( ++v32 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_68;
    }
  }
  v117 = -1;
LABEL_68:
  v66 = (__int64 *)sub_2E41D0(*(_QWORD *)(a1 + 72));
  if ( !getinf_buf(1, s, 16) )
    s[0] = 0;
  v67 = 0;
  ptr = nullptr;
  v133 = 0;
  v68 = strlen(s);
  ptr = (void *)qvector_reserve(&ptr, 0, v68 + 1, 1);
  *(_QWORD *)&v133 = v68 + 1;
  memmove(ptr, s, v68);
  v69 = &s1;
  *((_BYTE *)ptr + v68) = 0;
  if ( (_QWORD)v133 )
    v69 = (const char *)ptr;
  v72 = sub_2E3EC0(v66, v69, v131);
  if ( ptr )
  {
    *(_QWORD *)&v133 = 0;
    *(double *)v67.m128_u64 = qfree(ptr, v69);
  }
  if ( (v72 || sub_2E3F60(v66, v131)) && v131[0] < (void *)v66[1] )
    sub_2E4320(*(QT::QAbstractItemView **)(a1 + 72));
  if ( v117 == -1 )
  {
    if ( *(_QWORD *)(a4 + 8) > 1u
      && (v114 = *(const char **)a4,
          sub_169630(
            (int)"AUTOHIDE REGISTRY\nThe requested file type '%s' could not be found",
            *(_QWORD *)a4,
            v70,
            v71,
            v73,
            v74,
            v67,
            a6,
            a7,
            a8,
            v75,
            v76,
            a11,
            a12,
            v116),
          (v115 = *(const char **)a4) != nullptr) )
    {
      *(_QWORD *)(a4 + 8) = 0;
      *(double *)v67.m128_u64 = qfree(v115, v114);
      *(_QWORD *)a4 = 0;
      *(_QWORD *)(a4 + 16) = 0;
      v117 = 0;
    }
    else
    {
      v117 = 0;
    }
  }
  v131[0] = nullptr;
  v77 = sub_2F8E30(v15, v117, v131);
  v78 = (const char **)v131[0];
  v79 = v77;
  v80 = 0;
  if ( v131[0] && *((_QWORD *)v131[0] + 5) )
    v80 = strcmp(*((const char **)v131[0] + 4), "Dump file") == 0;
  if ( v79 != 5 && v79 != 2 )
  {
    v102 = v80 || v79 == 13;
    sub_2F6F70(a1, &v128, v102);
    if ( (_BYTE)v128 )
      goto LABEL_87;
    if ( !v102 )
    {
      v81 = 4;
      goto LABEL_86;
    }
LABEL_85:
    v81 = 8;
LABEL_86:
    v118 = *(QT::QLineEdit **)(a1 + 72);
    sub_48EFE0(&ptr, v118, 0, 0);
    v82 = QT::QTreeView::rowHeight(v118, &ptr);
    QT::QWidget::setMinimumHeight(*(QT::QWidget **)(a1 + 72), v82 * v81);
    goto LABEL_87;
  }
  sub_2F6F70(a1, &v128, 1);
  if ( !(_BYTE)v128 )
    goto LABEL_85;
LABEL_87:
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&ptr, (const QT::QFont *)(*(_QWORD *)(a1 + 32) + 56LL));
  v83 = 18 * QT::QFontMetrics::horizontalAdvance(&ptr, 48) + 10;
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&ptr);
  QT::QWidget::setSizePolicy(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 72LL), &stru_50000);
  QT::QWidget::setSizePolicy(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 80LL), &stru_50000);
  QT::QWidget::setFixedWidth(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 72LL), v83);
  QT::QWidget::setFixedWidth(*(QT::QWidget **)(*(_QWORD *)(a1 + 64) + 80LL), v83);
  getinf(12);
  v84 = qsnprintf(s, 40, "0x%08a", *(double *)v67.m128_u64);
  v119 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 64) + 72LL);
  v85 = strlen(s);
  v86 = QT::QString::fromUtf8(&ptr, v85, s, v84);
  QT::QLineEdit::setText(v119, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v87 = qsnprintf(s, 40, "0x%08a", v86);
  v88 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 64) + 80LL);
  v89 = strlen(s);
  QT::QString::fromUtf8(&ptr, v89, s, v87);
  QT::QLineEdit::setText(v88, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v90 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 104LL);
  v91 = getinf_flag(2, 1);
  QT::QAbstractButton::setChecked(v90, v91);
  v92 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 112LL);
  v93 = getinf_flag(44, 4);
  QT::QAbstractButton::setChecked(v92, v93);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 200LL), *(_WORD *)(a1 + 56) & 1);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 224LL),
    (*(_BYTE *)(a1 + 56) & 2) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 232LL),
    (*(_BYTE *)(a1 + 56) & 4) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 240LL),
    (*(_BYTE *)(a1 + 56) & 8) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 184LL),
    (*(_BYTE *)(a1 + 56) >> 4) & (v79 != 18));
  v94 = *(unsigned __int16 *)(a1 + 56);
  v95 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 216LL);
  v96 = sub_2F5560((__int64)v78);
  QT::QAbstractButton::setChecked(v95, ((!v96 ? 4096 : 32) & v94) != 0);
  QT::QAbstractButton::setChecked(
    *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 208LL),
    (*(_BYTE *)(a1 + 57) & 4) != 0);
  v97 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 64) + 192LL);
  v98 = 0;
  if ( v78 && v78[5] )
    v98 = strcmp(v78[4], "Dump file") == 0;
  v99 = 1;
  if ( v79 != 5 && v79 != 2 )
    v99 = v98 || v79 == 13;
  QT::QAbstractButton::setChecked(v97, v99);
  QT::QListWidget::setCurrentRow(*(QT::QListWidget **)(*(_QWORD *)(a1 + 64) + 16LL), v117);
  if ( v123[0] && !_InterlockedSub((volatile signed __int32 *)v123[0], 1u) )
    free(v123[0]);
  return v135 - __readfsqword(0x28u);
}
