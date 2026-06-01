unsigned __int64 __fastcall sub_4C6E80(QT::QWidget *this, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r12
  __int64 (__fastcall *v4)(__int64, void **); // r14
  QT::QPushButton *v5; // r12
  double v6; // xmm0_8
  __int64 v7; // rax
  QT::QHBoxLayout *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[8]; // [rsp+8h] [rbp-50h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0;
  *(_QWORD *)((char *)this + 60) = 0;
  *(_QWORD *)this = &DockAreaDragTitle___vtable;
  *((_QWORD *)this + 2) = DockAreaDragTitle___vtable_at__16;
  QT::QWidget::setSizePolicy(this, 14483456);
  v2 = *((_QWORD *)this + 4);
  *((_BYTE *)this + 56) = 0;
  ptr[0] = (void *)((unsigned int)(*(_DWORD *)(v2 + 28) + 1 - *(_DWORD *)(v2 + 20)) | 0x500000000LL);
  QT::QWidget::resize(this, ptr);
  v3 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v4 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v3 + 120LL);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, off_8982E0, "Drag this title to dock somewhere else", 0);
  *((_QWORD *)this + 10) = v4(v3, ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = (QT::QPushButton *)operator new(0x28u);
  v6 = QT::QString::fromUtf8(ptr, 0, (const char *)&unk_5C2F25);
  v7 = QT::QWidget::style(this);
  (*(void (__fastcall **)(_BYTE *, __int64, __int64, _QWORD, _QWORD, double))(*(_QWORD *)v7 + 256LL))(
    v13,
    v7,
    3,
    0,
    0,
    v6);
  QT::QPushButton::QPushButton(v5, (const QT::QIcon *)v13, (const QT::QString *)ptr, this);
  *((_QWORD *)this + 9) = v5;
  QT::QIcon::~QIcon((QT::QIcon *)v13);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 104LL))(*((_QWORD *)this + 9), 0);
  QT::QObject::connect(ptr, *((_QWORD *)this + 9), "2clicked()", QT::QCoreApplication::self, "1leave_full_screen()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  v8 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v8);
  QT::QLayout::setContentsMargins(v8, 6, 0, 6, 0);
  QT::QBoxLayout::addWidget(v8, *((_QWORD *)this + 10), 0, 0);
  QT::QBoxLayout::insertStretch(v8, -1, 0);
  QT::QBoxLayout::addWidget(v8, *((_QWORD *)this + 9), 0, 0);
  QT::QWidget::setLayout(this, v8);
  QT::QWidget::setAutoFillBackground(this, 1);
  QT::QWidget::setAttribute(this, 93, 1, v9, v10, v11);
  return v15 - __readfsqword(0x28u);
}
