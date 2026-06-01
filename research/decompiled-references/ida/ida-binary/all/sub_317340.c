unsigned __int64 __fastcall sub_317340(QT::QObject *a1)
{
  QT::QWidget **v1; // rbp
  QT::QWidget *v2; // rbp
  __int64 v3; // rbp
  QT::QWidget *v4; // rbp
  const char *v5; // r12
  size_t v6; // rax
  double v7; // xmm0_8
  int v8; // r14d
  QT::QWidget *v9; // rbp
  __int64 v10; // rax
  int *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // r9
  int *v17; // rax
  QT::QStatusBar *v18; // rax
  int v19; // r14d
  QT::QWidget *v20; // rbp
  __int64 v21; // rax
  int *v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  int *v28; // rax
  QT::QStatusBar *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  double v32; // xmm0_8
  QT::QWidget *v33; // rbp
  __int64 v34; // rdx
  __int64 v35; // rcx
  QT::QWidget *v36; // rbp
  QT::QDockWidget *v37; // rbp
  double v38; // xmm0_8
  int v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+0h] [rbp-78h]
  int v42[2]; // [rsp+10h] [rbp-68h] BYREF
  int v43; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  int v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  sub_53D890(a1);
  *((_QWORD *)a1 + 2) = IDAMainWindow___vtable_at__16;
  *(_QWORD *)a1 = &IDAMainWindow___vtable;
  QT::QObject::QObject((QT::QObject *)((char *)a1 + 288), nullptr);
  *((_OWORD *)a1 + 19) = 0;
  *((_QWORD *)a1 + 36) = &uicontext_t___vtable;
  v1 = (QT::QWidget **)operator new(0x38u);
  sub_3127B0(v1, (__int64)a1);
  *((_QWORD *)a1 + 40) = v1;
  *((_BYTE *)a1 + 360) = 0;
  *((_QWORD *)a1 + 41) = 0;
  *((_QWORD *)a1 + 42) = 0;
  *((_QWORD *)a1 + 43) = 0;
  *((_QWORD *)a1 + 49) = 0;
  *(_OWORD *)((char *)a1 + 376) = 0;
  qword_8CD748 = a1;
  v2 = (QT::QWidget *)operator new(0x2E8u);
  sub_3479D0((int)v2);
  qword_8CF010 = v2;
  v3 = operator new(0xB8u);
  sub_313BB0(v3, a1);
  *((_QWORD *)a1 + 44) = v3;
  v4 = (QT::QWidget *)QT::QMainWindow::statusBar(a1);
  v5 = (const char *)sub_47A3E0(QT::QCoreApplication::self);
  v6 = 0;
  if ( v5 )
    v6 = strlen(v5);
  v7 = QT::QString::fromUtf8(&ptr, v6, v5);
  QT::QFont::QFont((QT::QFont *)v42, (const QT::QString *)&ptr, -1, -1, 0);
  QT::QWidget::setFont(v4, (const QT::QFont *)v42);
  QT::QFont::~QFont((QT::QFont *)v42);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v8 = 3;
  do
  {
    v9 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v9, 0);
    v10 = QT::QWidget::sizePolicy(v9);
    QT::QWidget::setSizePolicy(v9, v10 & 0xF00000);
    QT::QWidget::setMinimumWidth(v9, 70);
    QT::QWidget::setContentsMargins(v9, 0, 0, 0, 0);
    v11 = *((int **)a1 + 43);
    *(_QWORD *)v42 = v9;
    sub_317060((int **)a1 + 41, v11, (__int64 *)v42, v12, v13, v14);
    v17 = *((int **)a1 + 41);
    if ( !v17 || *v17 > 1 )
      sub_178660((__int64)a1 + 328, 0, 0, 0, v15, v16);
    v18 = (QT::QStatusBar *)QT::QMainWindow::statusBar(a1);
    QT::QStatusBar::addWidget(v18, v9, 0);
    --v8;
  }
  while ( v8 );
  v19 = 5;
  do
  {
    v20 = (QT::QWidget *)operator new(0x28u);
    sub_53B9D0(v20, 0);
    v21 = QT::QWidget::sizePolicy(v20);
    QT::QWidget::setSizePolicy(v20, v21 & 0xF00000);
    QT::QLabel::setAlignment(v20, 2);
    QT::QWidget::setMinimumWidth(v20, 70);
    QT::QWidget::setContentsMargins(v20, 10, 0, 0, 0);
    v22 = *((int **)a1 + 43);
    ptr = v20;
    sub_317060((int **)a1 + 41, v22, (__int64 *)&ptr, v23, v24, v25);
    v28 = *((int **)a1 + 41);
    if ( !v28 || *v28 > 1 )
      sub_178660((__int64)a1 + 328, 0, 0, 0, v26, v27);
    v29 = (QT::QStatusBar *)QT::QMainWindow::statusBar(a1);
    QT::QStatusBar::addPermanentWidget(v29, v20, 0);
    --v19;
  }
  while ( v19 );
  v30 = QT::QMainWindow::statusBar(a1);
  QT::QWidget::setContextMenuPolicy(v30, 3);
  v31 = QT::QMainWindow::statusBar(a1);
  QT::QObject::connect(&ptr, v31, "2customContextMenuRequested(QPoint)", a1, "1statusBarContextMenu(QPoint)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::connect(
    &ptr,
    *(_QWORD *)(*((_QWORD *)a1 + 44) + 152LL),
    "2timeout()",
    a1,
    "1viewSwitcherDisplayTimeout()",
    2);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  QT::QObject::connect(&ptr, *((_QWORD *)a1 + 40), "2destroyed(QObject*)", a1, "1console_widget_destroyed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  qword_8CD8B8 = *(QT::QWidget **)(*((_QWORD *)a1 + 44) + 24LL);
  sub_47A6B0(QT::QCoreApplication::self, v7);
  unk_8D1D88 = sub_3132C0;
  QT::QMainWindow::setCentralWidget(a1, *(QT::QWidget **)(*((_QWORD *)a1 + 44) + 8LL));
  sub_315F10(a1);
  (*(void (__fastcall **)(void **, _QWORD *, __int64))(*QT::QCoreApplication::self + 160LL))(
    &ptr,
    QT::QCoreApplication::self,
    1);
  QT::QWidget::setWindowIcon(a1, (const QT::QIcon *)&ptr);
  QT::QIcon::~QIcon((QT::QIcon *)&ptr);
  v32 = QT::QString::fromUtf8(&ptr, 34, "IDA - The interactive disassembler");
  QT::QWidget::setWindowTitle(a1, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QWidget::setAcceptDrops(a1, 1);
  v33 = *(QT::QWidget **)(*((_QWORD *)a1 + 44) + 24LL);
  sub_2DDD60(*((QT::QWidget **)a1 + 40), 0, v34, v35, v32);
  sub_4CAF50(v33, v40, (_DWORD)a1 + 288, v42[0], v43, (int)ptr, v45, v46);
  v36 = (QT::QWidget *)operator new(0xB8u);
  sub_2A6C10(v36);
  sub_4B8B20(v36, 1073741888);
  sub_478D00((char *)&qword_8CC980, v41);
  QT::QObject::connect(&ptr, v36, "2availabilityUpdated(bool)", a1, "1miniview_availability_updated(bool)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&ptr);
  v37 = (QT::QDockWidget *)operator new(0x30u);
  QT::QMetaObject::tr((QT::QMetaObject *)&ptr, (const char *)&off_88BBA0, "Navigator", 0);
  sub_1DD6B0(v37, (__int64)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  *((_BYTE *)v37 + 44) = 1;
  QT::QObject::setObjectName(v37, "Navigator", 9);
  v38 = QT::QString::fromUtf8(&ptr, 15, "Navigation dock");
  QT::QWidget::setAccessibleName(v37, (const QT::QString *)&ptr);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  QT::QDockWidget::setWidget(v37, qword_8CF010);
  QT::QDockWidget::setAllowedAreas(v37, 15, v38);
  QT::QMainWindow::addDockWidget(a1, 4, v37);
  sub_346390(qword_8CF010, v37);
  sub_310C50((__int64)a1);
  return v47 - __readfsqword(0x28u);
}
