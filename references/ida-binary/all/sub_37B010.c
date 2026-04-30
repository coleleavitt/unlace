QT::QVariant *__fastcall sub_37B010(QT::QVariant *this, __int64 a2, int a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD _0[9]; // [rsp+0h] [rbp+0h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  _0[5] = __readfsqword(0x28u);
  v4 = QT::QTableWidget::item(*(QT::QTableWidget **)(v3 + 32), a3, 0);
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*(_QWORD *)v4 + 24LL))(_0, v4, 0);
  QT::QVariant::toString(this);
  QT::QVariant::~QVariant((QT::QVariant *)_0);
  return this;
}
