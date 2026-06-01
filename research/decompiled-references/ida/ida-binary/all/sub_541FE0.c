unsigned __int64 __fastcall sub_541FE0(QT::QWidget *this, __int64 a2)
{
  double v2; // xmm0_8
  int v3; // r15d
  _QWORD *v4; // r12
  volatile signed __int32 *v5; // rax
  QT::QPushButton *v6; // r12
  volatile signed __int32 *v7; // rax
  QT::QVBoxLayout *v8; // r12
  _BYTE v10[8]; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  sub_53A8A0(this, 0, 0);
  *((_BYTE *)this + 72) = 0;
  *(_QWORD *)this = &WaitDialog___vtable;
  *((_QWORD *)this + 2) = WaitDialog___vtable_at__16;
  *((_QWORD *)this + 6) = a2;
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, (const char *)&off_89EFA0, "Please wait...", 0);
  QT::QWidget::setWindowTitle(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  (*(void (__fastcall **)(void **, _QWORD, __int64))(**((_QWORD **)this + 6) + 160LL))(ptr, *((_QWORD *)this + 6), 1);
  QT::QWidget::setWindowIcon(this, (const QT::QIcon *)ptr);
  QT::QIcon::~QIcon((QT::QIcon *)ptr);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v10, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v2 = QT::QString::fromUtf8(ptr, 14, "Please wait...");
  v3 = QT::QFontMetrics::horizontalAdvance((QT::QFontMetrics *)v10, (const QT::QString *)ptr, -1) + 80;
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v10);
  QT::QWidget::setMinimumWidth(this, v3);
  v4 = (_QWORD *)operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, (const char *)&off_89EFA0, "Please wait...", 0);
  sub_53BA20(v4, (__int64)ptr, 0);
  v5 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)this + 7) = v4;
  if ( v5 && !_InterlockedSub(v5, 1u) )
    free(ptr[0]);
  v6 = (QT::QPushButton *)operator new(0x28u);
  QT::QMetaObject::tr((QT::QMetaObject *)ptr, (const char *)&off_89EFA0, "Cancel", 0);
  QT::QPushButton::QPushButton(v6, (const QT::QString *)ptr, nullptr);
  v7 = (volatile signed __int32 *)ptr[0];
  *((_QWORD *)this + 8) = v6;
  if ( v7 )
  {
    if ( !_InterlockedSub(v7, 1u) )
      free(ptr[0]);
    v6 = *((QT::QPushButton **)this + 8);
  }
  QT::QWidget::setSizePolicy(v6, 0x40000);
  v8 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v8);
  QT::QBoxLayout::addWidget(v8, *((_QWORD *)this + 7), 0, 0);
  QT::QLayout::setAlignment(v8, *((_QWORD *)this + 7), 132, v2);
  QT::QBoxLayout::addWidget(v8, *((_QWORD *)this + 8), 0, 0);
  QT::QLayout::setAlignment(v8, *((_QWORD *)this + 8), 132, v2);
  (*(void (__fastcall **)(QT::QVBoxLayout *, __int64))(*(_QWORD *)v8 + 104LL))(v8, 20);
  QT::QLayout::setContentsMargins(v8, 40, 15, 40, 15);
  QT::QWidget::setLayout(this, v8);
  QT::QObject::connect(ptr, *((_QWORD *)this + 8), "2clicked(bool)", this, "1do_cancel()", 1);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v12 - __readfsqword(0x28u);
}
