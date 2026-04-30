__int64 __fastcall sub_49ECC0(__int64 a1, QT::QFocusEvent *a2)
{
  __int64 result; // rax
  __int64 v3; // rdi

  result = QT::QWidget::focusInEvent((QT::QWidget *)a1, a2);
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    v3 = *(_QWORD *)(a1 + 2384);
  else
    v3 = *(_QWORD *)(a1 + 2472);
  if ( v3 )
    return QT::QWidget::setFocus(v3, 7);
  return result;
}
