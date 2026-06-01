unsigned __int64 __fastcall sub_357220(__int64 a1)
{
  QT::QAbstractButton *v1; // rbp
  int v2; // eax
  QT::QLineEdit *v3; // r12
  QT::QLineEdit *v4; // r12
  QT::QLineEdit *v5; // r12
  QT::QLineEdit *v6; // rbx
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1400LL);
  v2 = reg_int_op("UseGraphView", 0, 1, 0);
  QT::QAbstractButton::setChecked(v1, v2 != 0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1408LL), byte_8CCA9E);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1416LL), byte_8CCA9D);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1424LL), byte_8CCA9C);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1432LL), byte_8CCA9B);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1440LL), byte_8CCA9A);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1448LL), byte_8CCA99);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1456LL), byte_8CCA98);
  v3 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1472LL);
  QT::QString::number((QT::QString *)ptr, dword_8CCA94, 10);
  QT::QLineEdit::setText(v3, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1504LL), byte_8CF0E0);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1512LL), byte_8CF0DF);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1520LL), byte_8CF0DE);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1528LL), byte_8CF0DD);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1536LL), byte_8CF0DC);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 1552LL), byte_8CF0DE != 1);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 1576LL), byte_8CF0DE != 1);
  v4 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1544LL);
  QT::QString::number((QT::QString *)ptr, dword_8CF0D8, 10);
  QT::QLineEdit::setText(v4, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v5 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1552LL);
  QT::QString::number((QT::QString *)ptr, dword_8CF0D4, 10);
  QT::QLineEdit::setText(v5, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1560LL);
  QT::QString::number((QT::QString *)ptr, dword_8CF0D0, 10);
  QT::QLineEdit::setText(v6, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v9 - __readfsqword(0x28u);
}
