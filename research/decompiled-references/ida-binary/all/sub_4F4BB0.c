unsigned __int64 __fastcall sub_4F4BB0(__m128i *a1, QT::QObject *a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v7; // r15
  __m128i *v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int *v15; // rax
  __m128i *v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  int *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v27; // r13
  __m128i *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  int *v35; // rax
  __int64 v36; // r13
  __m128i *v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // r9
  int *v44; // rax
  __int64 v45; // r13
  __m128i *v46; // rax
  __m128i v47; // xmm0
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int *v51; // rax
  __int64 v52; // r13
  __m128i *v53; // rax
  __m128i v54; // xmm0
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  int *v58; // rax
  __int64 v59; // rax
  __m128i *v60; // rax
  __m128i v61; // xmm0
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r8
  __int64 v66; // r9
  int *v67; // rax
  __m128i *v68; // rax
  __m128i v69; // xmm0
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r9
  int *v75; // rax
  __int64 v76; // r13
  __m128i *v77; // rax
  __m128i v78; // xmm0
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  int *v82; // rax
  __int64 v83; // rax
  __int64 v84; // r13
  __m128i *v85; // rax
  __m128i v86; // xmm0
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  int *v90; // rax
  __int64 Child_helper; // rax
  __m128i *v92; // rax
  __m128i v93; // xmm0
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // r8
  __int64 v98; // r9
  int *v99; // rax
  __m128i *v100; // rax
  __m128i v101; // xmm0
  __int64 v102; // rcx
  __int64 v103; // r8
  __int64 v104; // r9
  int *v105; // rax
  QT::QObject *v106; // [rsp+10h] [rbp-88h]
  QT::QObject *v107; // [rsp+10h] [rbp-88h]
  QT::QObject *v108; // [rsp+10h] [rbp-88h]
  __m128i *v109; // [rsp+18h] [rbp-80h]
  __int64 v110; // [rsp+18h] [rbp-80h]
  __int64 v111; // [rsp+28h] [rbp-70h] BYREF
  __m128i v112; // [rsp+30h] [rbp-68h] BYREF
  _QWORD (**v113)(QT::QAbstractButton *__hidden, bool); // [rsp+40h] [rbp-58h] BYREF
  __int64 v114; // [rsp+48h] [rbp-50h]
  unsigned __int64 v115; // [rsp+58h] [rbp-40h]

  v4 = *(_DWORD *)(a3 + 8);
  v115 = __readfsqword(0x28u);
  switch ( v4 )
  {
    case 3:
    case 4:
    case 5:
      v27 = sub_4F1FE0(a2, a3);
      if ( v27 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F3330;
        v114 = 0;
        v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))&QT::QLineEdit::textChanged;
        v28 = (__m128i *)operator new(0x20u);
        v29 = _mm_load_si128(&v112);
        v28->m128i_i32[0] = 1;
        v28->m128i_i64[1] = (__int64)sub_4F20E0;
        v28[1] = v29;
        QT::QObject::connectImpl(&v111, v27, &v113, a1, &v112, v28, 0, 0, &QT::QLineEdit::staticMetaObject);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v30, v31, v32);
        v35 = (int *)a1[1].m128i_i64[0];
        if ( v35 && *v35 <= 1 )
          goto LABEL_9;
        goto LABEL_50;
      }
      break;
    case 6:
    case 7:
      v36 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject, a2);
      if ( v36 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F2540;
        v114 = 0;
        v113 = &QT::QAbstractButton::toggled;
        v37 = (__m128i *)operator new(0x20u);
        v38 = _mm_load_si128(&v112);
        v37->m128i_i32[0] = 1;
        v37->m128i_i64[1] = (__int64)&loc_4F1F60;
        v37[1] = v38;
        QT::QObject::connectImpl(&v111, v36, &v113, a1, &v112, v37, 0, 0, &QT::QAbstractButton::staticMetaObject);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v39, v40, v41);
        v44 = (int *)a1[1].m128i_i64[0];
        if ( v44 && *v44 <= 1 )
          goto LABEL_9;
        goto LABEL_30;
      }
      break;
    case 8:
      v45 = QT::QMetaObject::cast((QT::QMetaObject *)&off_8974E0, a2);
      if ( v45 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)&loc_4F2C10;
        v114 = 0;
        v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))sub_547F50;
        v46 = (__m128i *)operator new(0x20u);
        v47 = _mm_load_si128(&v112);
        v46->m128i_i32[0] = 1;
        v46->m128i_i64[1] = (__int64)&loc_4F1F60;
        v46[1] = v47;
        QT::QObject::connectImpl(&v111, v45, &v113, a1, &v112, v46, 0, 0, &off_8974E0);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v48, v49, v50);
        v51 = (int *)a1[1].m128i_i64[0];
        if ( v51 && *v51 <= 1 )
          goto LABEL_9;
        goto LABEL_50;
      }
      break;
    case 9:
      v59 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D540, a2);
      if ( v59 )
      {
        if ( !*(_BYTE *)(v59 + 64) )
        {
          v107 = *(QT::QObject **)(v59 + 56);
          if ( v107 )
          {
            v112.m128i_i64[1] = 0;
            v112.m128i_i64[0] = (__int64)sub_4F2D20;
            v114 = 0;
            v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))sub_546800;
            v60 = (__m128i *)operator new(0x20u);
            v60->m128i_i32[0] = 1;
            v61 = _mm_load_si128(&v112);
            v60->m128i_i64[1] = (__int64)sub_4F2060;
            v60[1] = v61;
            QT::QObject::connectImpl(&v111, v107, &v113, a1, &v112, v60, 0, 0, &off_895EA0);
            v109 = a1 + 1;
            sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v62, v63, v64);
            v67 = (int *)a1[1].m128i_i64[0];
            if ( !v67 || *v67 > 1 )
              sub_4F4020(v109, 0, 0, 0, v65, v66);
            QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v111);
            v112.m128i_i64[1] = 0;
            v112.m128i_i64[0] = (__int64)sub_4F2D20;
            v114 = 0;
            v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))sub_546850;
            v68 = (__m128i *)operator new(0x20u);
            v69 = _mm_load_si128(&v112);
            v68->m128i_i32[0] = 1;
            v68->m128i_i64[1] = (__int64)sub_4F2060;
            v68[1] = v69;
            QT::QObject::connectImpl(&v111, v107, &v113, a1, &v112, v68, 0, 0, &off_895EA0);
            sub_4F4600(v109, a1[2].m128i_i64[0], &v111, v70, v71, v72);
            v75 = (int *)a1[1].m128i_i64[0];
            if ( !v75 || *v75 > 1 )
              sub_4F4020(v109, 0, 0, 0, v73, v74);
            QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v111);
            if ( (*(_BYTE *)(a3 + 120) & 1) != 0 )
              QT::QObject::installEventFilter(v107, (QT::QObject *)a1);
          }
        }
      }
      break;
    case 10:
      v76 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QPushButton::staticMetaObject, a2);
      if ( v76 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F24E0;
        v114 = 0;
        v113 = &QT::QAbstractButton::clicked;
        v77 = (__m128i *)operator new(0x20u);
        v78 = _mm_load_si128(&v112);
        v77->m128i_i32[0] = 1;
        v77->m128i_i64[1] = (__int64)&loc_4F1F60;
        v77[1] = v78;
        QT::QObject::connectImpl(&v111, v76, &v113, a1, &v112, v77, 0, 0, &QT::QAbstractButton::staticMetaObject);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v79, v80, v81);
        v82 = (int *)a1[1].m128i_i64[0];
        if ( v82 && *v82 <= 1 )
          goto LABEL_9;
        goto LABEL_30;
      }
      break;
    case 12:
      v83 = QT::QMetaObject::cast((QT::QMetaObject *)&off_897980, a2);
      if ( v83 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F2C60;
        v84 = *(_QWORD *)(v83 + 40);
        v114 = 0;
        v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))sub_548AA0;
        v85 = (__m128i *)operator new(0x20u);
        v86 = _mm_load_si128(&v112);
        v85->m128i_i32[0] = 1;
        v85->m128i_i64[1] = (__int64)sub_4F2160;
        v85[1] = v86;
        QT::QObject::connectImpl(&v111, v84, &v113, a1, &v112, v85, 0, 0, &off_8979C0);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v87, v88, v89);
        v90 = (int *)a1[1].m128i_i64[0];
        if ( !v90 || *v90 > 1 )
LABEL_50:
          sub_4F4020(a1 + 1, 0, 0, 0, v33, v34);
        goto LABEL_9;
      }
      break;
    case 13:
      Child_helper = QT::qt_qFindChild_helper(a2, 0, 0, &QT::QPushButton::staticMetaObject, 1);
      if ( Child_helper )
      {
        v108 = (QT::QObject *)Child_helper;
        v112.m128i_i64[0] = (__int64)sub_4F3940;
        v112.m128i_i64[1] = 0;
        v113 = &QT::QAbstractButton::clicked;
        v114 = 0;
        v92 = (__m128i *)operator new(0x20u);
        v92->m128i_i32[0] = 1;
        v93 = _mm_load_si128(&v112);
        v92->m128i_i64[1] = (__int64)&loc_4F1F60;
        v92[1] = v93;
        QT::QObject::connectImpl(&v111, v108, &v113, a1, &v112, v92, 0, 0, &QT::QAbstractButton::staticMetaObject);
        v106 = (QT::QObject *)&a1[1];
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v94, v95, v96);
        v99 = (int *)a1[1].m128i_i64[0];
        if ( !v99 || *v99 > 1 )
          sub_4F4020((__m128i *)v106, 0, 0, 0, v97, v98);
        QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v111);
        v110 = QT::qt_qFindChild_helper(a2, 0, 0, &QT::QLineEdit::staticMetaObject, 1);
        if ( v110 )
        {
          v112.m128i_i64[1] = 0;
          v112.m128i_i64[0] = (__int64)sub_4F3190;
          v114 = 0;
          v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))&QT::QLineEdit::textChanged;
          v100 = (__m128i *)operator new(0x20u);
          v101 = _mm_load_si128(&v112);
          v100->m128i_i32[0] = 1;
          v100->m128i_i64[1] = (__int64)sub_4F20E0;
          v100[1] = v101;
          QT::QObject::connectImpl(&v111, v110, &v113, a1, &v112, v100, 0, 0, &QT::QLineEdit::staticMetaObject);
          sub_4F4600((__m128i *)v106, a1[2].m128i_i64[0], &v111, v102, v103, v104);
          v105 = (int *)a1[1].m128i_i64[0];
          if ( v105 && *v105 <= 1 )
            goto LABEL_9;
          goto LABEL_8;
        }
      }
      break;
    case 14:
      v52 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QPushButton::staticMetaObject, a2);
      if ( v52 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F2E80;
        v114 = 0;
        v113 = &QT::QAbstractButton::clicked;
        v53 = (__m128i *)operator new(0x20u);
        v54 = _mm_load_si128(&v112);
        v53->m128i_i32[0] = 1;
        v53->m128i_i64[1] = (__int64)&loc_4F1F60;
        v53[1] = v54;
        QT::QObject::connectImpl(&v111, v52, &v113, a1, &v112, v53, 0, 0, &QT::QAbstractButton::staticMetaObject);
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v55, v56, v57);
        v58 = (int *)a1[1].m128i_i64[0];
        if ( !v58 || *v58 > 1 )
LABEL_30:
          sub_4F4020(a1 + 1, 0, 0, 0, v42, v43);
        goto LABEL_9;
      }
      break;
    case 15:
      v7 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QCalendarWidget::staticMetaObject, a2);
      if ( v7 )
      {
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F25C0;
        v114 = 0;
        v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))&QT::QCalendarWidget::selectionChanged;
        v8 = (__m128i *)operator new(0x20u);
        v8->m128i_i32[0] = 1;
        v9 = _mm_load_si128(&v112);
        v8->m128i_i64[1] = (__int64)sub_4F2060;
        v8[1] = v9;
        QT::QObject::connectImpl(&v111, v7, &v113, a1, &v112, v8, 0, 0, &QT::QCalendarWidget::staticMetaObject);
        v106 = (QT::QObject *)&a1[1];
        sub_4F4600(a1 + 1, a1[2].m128i_i64[0], &v111, v10, v11, v12);
        v15 = (int *)a1[1].m128i_i64[0];
        if ( !v15 || *v15 > 1 )
          sub_4F4020((__m128i *)v106, 0, 0, 0, v13, v14);
        QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v111);
        v112.m128i_i64[1] = 0;
        v112.m128i_i64[0] = (__int64)sub_4F2460;
        v114 = 0;
        v113 = (_QWORD (**)(QT::QAbstractButton *__hidden, bool))&QT::QCalendarWidget::activated;
        v16 = (__m128i *)operator new(0x20u);
        v17 = _mm_load_si128(&v112);
        v16->m128i_i32[0] = 1;
        v16->m128i_i64[1] = (__int64)sub_4F21E0;
        v16[1] = v17;
        QT::QObject::connectImpl(&v111, v7, &v113, a1, &v112, v16, 0, 0, &QT::QCalendarWidget::staticMetaObject);
        sub_4F4600((__m128i *)v106, a1[2].m128i_i64[0], &v111, v18, v19, v20);
        v23 = (int *)a1[1].m128i_i64[0];
        if ( !v23 || *v23 > 1 )
LABEL_8:
          sub_4F4020((__m128i *)v106, 0, 0, 0, v21, v22);
LABEL_9:
        QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v111);
      }
      break;
    default:
      break;
  }
  v24 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject, a2);
  if ( v24 )
  {
    v25 = v24;
    QT::QAbstractButton::shortcut((QT::QAbstractButton *)&v113);
    if ( !(unsigned __int8)QT::QKeySequence::isEmpty((QT::QKeySequence *)&v113) )
      *(_DWORD *)(a4 + 40) = sub_5192C0(&v113, v25) & 0x1FFFFFF;
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v113);
  }
  return v115 - __readfsqword(0x28u);
}
