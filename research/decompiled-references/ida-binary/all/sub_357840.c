unsigned __int64 __fastcall sub_357840(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char isChecked; // r13
  char v4; // al
  char v5; // bp
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 56);
  v8 = __readfsqword(0x28u);
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(v2 + 1656));
  QT::QLineEdit::text((QT::QLineEdit *)ptr);
  v4 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1696LL));
  if ( !*(_QWORD *)(a2 + 16) || (v5 = 1, v4) )
    v5 = (isChecked | (ptr[2] == nullptr)) ^ 1;
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 1728LL), v5);
  QT::QWidget::setEnabled(*(QT::QWidget **)(*(_QWORD *)(a1 + 56) + 1744LL), v5);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v8 - __readfsqword(0x28u);
}
