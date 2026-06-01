unsigned __int64 __fastcall sub_3127B0(QT::QWidget **this, __int64 a2)
{
  double v2; // xmm0_8
  QT::QObject *v3; // rax
  QT::QObject **v4; // rax
  QT::QVBoxLayout *v5; // rbp
  void *ptr[3]; // [rsp+0h] [rbp+0h] BYREF
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  QT::QWidget::QWidget(this, a2, 0);
  *this = (QT::QWidget *)&ConsoleWidget___vtable;
  *(this + 2) = (QT::QWidget *)ConsoleWidget___vtable_at__16;
  v2 = QT::QString::fromUtf8(ptr, 6, "Output");
  QT::QWidget::setWindowTitle((QT::QWidget *)this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v3 = (QT::QObject *)operator new(0xA0u);
  sub_512270(v3, ptr[0]);
  *(this + 5) = (QT::QWidget *)ptr;
  ptr[0] = &MainMsgList___vtable;
  ptr[2] = MainMsgList___vtable_at__16;
  v4 = (QT::QObject **)operator new(0x48u);
  sub_1B1E00(v4, (__int64)this);
  *(this + 6) = (QT::QWidget *)ptr;
  v5 = (QT::QVBoxLayout *)operator new(0x20u);
  QT::QVBoxLayout::QVBoxLayout(v5);
  QT::QBoxLayout::addWidget(ptr, *(this + 5), 0, 0);
  QT::QBoxLayout::addWidget(ptr, *(this + 6), 0, 0);
  QT::QLayout::setContentsMargins((QT::QLayout *)ptr, 0, 0, 0, 0);
  (*((void (__fastcall **)(void **, _QWORD, double))ptr[0] + 13))(ptr, 0, v2);
  QT::QWidget::setLayout((QT::QWidget *)this, (QT::QLayout *)ptr);
  QT::QWidget::setFocusProxy((QT::QWidget *)this, *(this + 6));
  return vars18 - __readfsqword(0x28u);
}
