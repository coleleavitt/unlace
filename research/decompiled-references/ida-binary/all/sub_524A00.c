__int64 __fastcall sub_524A00(__int64 a1, QT::QFocusEvent *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = QT::QWidget::focusInEvent((QT::QWidget *)a1, a2);
  if ( !*(_BYTE *)(a1 + 64) )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( v3 )
      return QT::QWidget::setFocus(v3, 7);
  }
  return result;
}
