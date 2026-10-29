unsigned __int64 __fastcall sub_1B1E00(QT::QObject **a1, __int64 a2)
{
  QT::QHBoxLayout *v2; // rbp
  QT::QGroupBox *v3; // r12
  int v4; // eax
  QT::QPushButton *v5; // r13
  QT::QObject *v6; // rax
  int v7; // eax
  QT::QLineEdit *v8; // r13
  QT::QHBoxLayout *v9; // r13
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  QT::QWidget::QWidget(a1, a2, 0);
  a1[8] = nullptr;
  *a1 = (QT::QObject *)&CLIWidget___vtable;
  a1[2] = (QT::QObject *)CLIWidget___vtable_at__16;
  v2 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v2);
  a1[7] = v2;
  QT::QLayout::setContentsMargins(v2, 0, 0, 0, 0);
  (*(void (__fastcall **)(QT::QObject *, _QWORD))(*(_QWORD *)a1[7] + 104LL))(a1[7], 0);
  v3 = (QT::QGroupBox *)operator new(0x28u);
  QT::QGroupBox::QGroupBox(v3, (QT::QWidget *)a1);
  QT::QString::fromUtf8(ptr, 26, "QGroupBox { border: 1px } ");
  QT::QWidget::setStyleSheet(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = QT::QWidget::sizePolicy(v3);
  QT::QWidget::setSizePolicy(v3, v4 & 0x20000000 | 0x450000u);
  QT::QBoxLayout::addWidget(a1[7], v3, 0, 0);
  v5 = (QT::QPushButton *)operator new(0x28u);
  QT::QPushButton::QPushButton(v5, v3);
  v6 = a1[4];
  a1[5] = v5;
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v16, (QT::QObject *)((char *)v6 + 56));
  QT::QString::fromUtf8(ptr, 8, "XXXXXXXX");
  v7 = QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)v16, (const QT::QString *)ptr, -1);
  QT::QWidget::setFixedWidth(v5, v7);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v16);
  QT::QWidget::setFocusPolicy(a1[5], 2);
  v8 = (QT::QLineEdit *)operator new(0x28u);
  QT::QLineEdit::QLineEdit(v8, v3);
  a1[6] = v8;
  *(_QWORD *)v8 = &CLILineEdit___vtable;
  *((_QWORD *)v8 + 2) = CLILineEdit___vtable_at__16;
  QT::QWidget::setContextMenuPolicy(v8, 3);
  QT::QObject::connect(
    ptr,
    a1[6],
    "2customContextMenuRequested(const QPoint &)",
    a1,
    "1custom_context_menu_requested(const QPoint &)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::installEventFilter(a1[6], (QT::QObject *)a1);
  v9 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v9, v3);
  QT::QBoxLayout::addWidget(v9, a1[5], 0, 0);
  QT::QBoxLayout::addWidget(v9, a1[6], 0, 0);
  QT::QLayout::setContentsMargins(v9, 1, 1, 1, 1);
  (*(void (__fastcall **)(QT::QHBoxLayout *, __int64))(*(_QWORD *)v9 + 104LL))(v9, 3);
  QT::QWidget::setLayout((QT::QWidget *)a1, a1[7]);
  QT::QWidget::setFocusProxy((QT::QWidget *)a1, a1[6]);
  ptr[0] = a1;
  sub_1B1B20((int **)&qword_8CAD80, (int *)qword_8CAD90, (__int64 *)ptr, v10, v11, v12);
  if ( !qword_8CAD80 || *(int *)qword_8CAD80 > 1 )
    sub_1B15F0((__int64)&qword_8CAD80, 0, 0, 0, v13, v14);
  QT::QObject::connect(ptr, a1[6], "2returnPressed()", a1, "1execute_click()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  QT::QObject::connect(ptr, a1[5], "2clicked()", a1, "1button_click()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  sub_1AF0E0(a1, 0);
  return v18 - __readfsqword(0x28u);
}
