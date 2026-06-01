unsigned __int64 __fastcall sub_520610(QT::QWidget *a1, char *a2, unsigned int a3, __int64 a4, QT::QWidget *a5)
{
  __int64 v7; // rax
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  size_t v12; // r15
  size_t v13; // r15
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  _QWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // r8
  QT::QObject *v29; // rdi
  __int64 v30; // r15
  __m128i *v31; // rax
  __m128i si128; // xmm0
  __m128i *v33; // rax
  __m128i v34; // xmm0
  QT::QStatusBar *v35; // r15
  double v36; // xmm0_8
  __int64 v37; // rdx
  __int64 v38; // rcx
  const char *v39; // r8
  __m128i *v40; // rax
  __m128i v41; // xmm0
  QT::QPushButton *v42; // r15
  double v43; // xmm0_8
  __int64 v44; // rdx
  __int64 v45; // rcx
  const char *v46; // r8
  QT::QHeaderView *v47; // rax
  QT::QObject *v48; // rax
  QT::QHeaderView *v49; // rax
  __int64 v50; // rax
  void *v52; // rax
  const void *v53; // rsi
  void *v54; // rax
  const void *v55; // rsi
  size_t v56; // r14
  void *v57; // rax
  const void *v58; // rsi
  char *v59; // [rsp+10h] [rbp-A0h]
  char *v60; // [rsp+18h] [rbp-98h]
  QT::QIcon *v61; // [rsp+28h] [rbp-88h]
  _QWORD v62[2]; // [rsp+30h] [rbp-80h] BYREF
  _QWORD v63[2]; // [rsp+40h] [rbp-70h] BYREF
  _QWORD v64[2]; // [rsp+50h] [rbp-60h] BYREF
  _BYTE v65[24]; // [rsp+60h] [rbp-50h] BYREF
  unsigned __int64 v66; // [rsp+78h] [rbp-38h]

  v66 = __readfsqword(0x28u);
  sub_492C70(a1, a2, a3, a5);
  v7 = QT::QMetaObject::className((QT::QMetaObject *)&off_89D580);
  sub_525E40((char *)a1 + 240, off_86DB20, 4, v7);
  sub_4E6460((__int64)a1 + 304, (__int64)a1);
  *((_QWORD *)a1 + 273) = 0;
  *((_OWORD *)a1 + 137) = 0;
  *(_QWORD *)a1 = &standalone_dirtree_widget_t___vtable;
  *((_QWORD *)a1 + 2) = standalone_dirtree_widget_t___vtable_at__16;
  *((_QWORD *)a1 + 38) = standalone_dirtree_widget_t___vtable_at__304;
  v8 = *(_QWORD *)(a4 + 8);
  *((_QWORD *)a1 + 30) = standalone_dirtree_widget_t___vtable_at__240;
  if ( v8 )
  {
    v56 = v8;
    v57 = (void *)qalloc_or_throw(v8);
    *((_QWORD *)a1 + 273) = v57;
    v58 = *(const void **)a4;
    *((_QWORD *)a1 + 275) = v56;
    memcpy(v57, v58, v56);
    *((_QWORD *)a1 + 274) = v56;
  }
  v9 = *(_QWORD *)(a4 + 24);
  v10 = 2;
  v11 = a4 + 32;
  *((_QWORD *)a1 + 276) = v9;
  v61 = (QT::QWidget *)((char *)a1 + 2216);
  do
  {
    *(_QWORD *)v61 = 0;
    *(_OWORD *)((char *)v61 + 8) = 0;
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 )
    {
      v54 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 8));
      v55 = *(const void **)v11;
      *(_QWORD *)v61 = v54;
      *((_QWORD *)v61 + 2) = v12;
      memcpy(v54, v55, v12);
      *((_QWORD *)v61 + 1) = v12;
    }
    *((_QWORD *)v61 + 3) = 0;
    *((_OWORD *)v61 + 2) = 0;
    v13 = *(_QWORD *)(v11 + 32);
    if ( v13 )
    {
      v52 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 32));
      v53 = *(const void **)(v11 + 24);
      *((_QWORD *)v61 + 3) = v52;
      *((_QWORD *)v61 + 5) = v13;
      memcpy(v52, v53, v13);
      *((_QWORD *)v61 + 4) = v13;
    }
    v14 = *(_DWORD *)(v11 + 48);
    --v10;
    v11 += 56;
    *((_DWORD *)v61 + 12) = v14;
    v61 = (QT::QIcon *)((char *)v61 + 56);
  }
  while ( v10 != -1 );
  v59 = (char *)a1 + 2384;
  QT::QObject::QObject((QT::QWidget *)((char *)a1 + 2384), nullptr);
  *((_QWORD *)a1 + 300) = 0;
  *((_QWORD *)a1 + 298) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 2384, 0, 0.0, v15, v16, v17);
  v60 = (char *)a1 + 2416;
  QT::QObject::QObject((QT::QWidget *)((char *)a1 + 2416), nullptr);
  *((_QWORD *)a1 + 304) = 0;
  *((_QWORD *)a1 + 302) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 2416, 0, 0.0, v18, v19, v20);
  v21 = xmmword_8D2508;
  *(_QWORD *)v65 = a1;
  v22 = qword_8D2500;
  if ( *((_QWORD *)&xmmword_8D2508 + 1) < (unsigned __int64)(xmmword_8D2508 + 1) )
  {
    qword_8D2500 = qvector_reserve(&qword_8D2500, qword_8D2500, xmmword_8D2508 + 1, 8);
    v22 = qword_8D2500;
    v21 = xmmword_8D2508;
  }
  *(_QWORD *)(v22 + 8 * v21) = a1;
  *(_QWORD *)&xmmword_8D2508 = xmmword_8D2508 + 1;
  QT::QWidget::setStyle(a1, (QT::QStyle *)&qword_8D1E10);
  v23 = QT::QCoreApplication::self;
  v24 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v25 = (*(__int64 (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v24 + 48LL))(v24, a1);
  sub_4DFDA0((__int64)a1 + 304, v25, v26, v27, v28, 0.0);
  v29 = nullptr;
  if ( !*((_BYTE *)a1 + 1424) )
    v29 = *((QT::QObject **)a1 + 177);
  QT::QObject::installEventFilter(v29, a1);
  sub_4E0AD0((__int64)a1 + 304, 0);
  *(_QWORD *)&v65[8] = 0;
  *(_QWORD *)v65 = sub_51F480;
  v30 = QT::QTreeView::header(a1);
  v62[1] = 0;
  v62[0] = &QT::QHeaderView::sectionClicked;
  v31 = (__m128i *)operator new(0x20u);
  si128 = _mm_load_si128((const __m128i *)v65);
  v31->m128i_i32[0] = 1;
  v31[1] = si128;
  v31->m128i_i64[1] = (__int64)sub_51F5C0;
  QT::QObject::connectImpl(v64, v30, v62, a1, v65, v31, 0, 0, &QT::QHeaderView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v64);
  *(_QWORD *)&v65[8] = 0;
  *(_QWORD *)v65 = sub_524920;
  v63[1] = 0;
  v63[0] = &QT::QAbstractItemView::doubleClicked;
  v33 = (__m128i *)operator new(0x20u);
  v34 = _mm_load_si128((const __m128i *)v65);
  v33->m128i_i32[0] = 1;
  v33[1] = v34;
  v33->m128i_i64[1] = (__int64)sub_51F640;
  QT::QObject::connectImpl(v64, a1, v63, a1, v65, v33, 0, 0, &QT::QAbstractItemView::staticMetaObject);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v64);
  if ( (*((_BYTE *)a1 + 2208) & 0x10) != 0 )
  {
    v35 = (QT::QStatusBar *)operator new(0x28u);
    QT::QStatusBar::QStatusBar(v35, a1);
    QT::QStatusBar::setSizeGripEnabled(v35, 0);
    v36 = (*(double (__fastcall **)(QT::QStatusBar *, __int64))(*(_QWORD *)v35 + 104LL))(v35, 1);
    sub_478D00(v59, (__int64)v35, v36, v37, v38, v39);
    *(_OWORD *)v65 = 0x421u;
    v64[0] = sub_546800;
    v64[1] = 0;
    v40 = (__m128i *)operator new(0x20u);
    v41 = _mm_load_si128((const __m128i *)v65);
    v40->m128i_i32[0] = 1;
    v40->m128i_i64[1] = (__int64)sub_51F310;
    v40[1] = v41;
    QT::QObject::connectImpl(v63, a1, v64, a1, v65, v40, 0, 0, &off_895EA0);
    QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v63);
  }
  v42 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v42, nullptr);
  QT::QWidget::setVisible(v42, 0);
  v43 = 0.0;
  memset(v65, 0, sizeof(v65));
  *(_QWORD *)v65 = qvector_reserve(v65, 0, 12, 1);
  *(_QWORD *)&v65[8] = 12;
  strcpy(*(char **)v65, "refresh.svg");
  sub_479BE0((QT::QIcon *)v64, v23, (__int64)v65);
  QT::QAbstractButton::setIcon(v42, (const QT::QIcon *)v64);
  QT::QIcon::~QIcon((QT::QIcon *)v64);
  if ( *(_QWORD *)v65 )
  {
    *(_QWORD *)&v65[8] = 0;
    v43 = qfree(*(_QWORD *)v65, (const char *)v64);
  }
  QT::QObject::connect(v65, v42, "2clicked()", a1, "1on_refresh_outdated_clicked()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v65);
  sub_478D00(v60, (__int64)v42, v43, v44, v45, v46);
  v47 = (QT::QHeaderView *)QT::QTreeView::header(a1);
  QT::QHeaderView::setStretchLastSection(v47, 1);
  v48 = (QT::QObject *)QT::QTreeView::header(a1);
  QT::QObject::installEventFilter(v48, a1);
  v49 = (QT::QHeaderView *)QT::QTreeView::header(a1);
  QT::QHeaderView::setSectionsClickable(v49, 1);
  sub_4DF9C0((__int64)a1 + 304, 1);
  *(_QWORD *)&v65[8] = 0;
  *(_QWORD *)v65 = sub_545A60;
  v50 = operator new(0x18u);
  *(_DWORD *)v50 = 1;
  *(_QWORD *)(v50 + 8) = sub_51F720;
  *(_QWORD *)(v50 + 16) = a1;
  QT::QObject::connectImpl(v64, v23, v65, a1, 0, v50, 0, 0, &off_8955C0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)v64);
  return v66 - __readfsqword(0x28u);
}
