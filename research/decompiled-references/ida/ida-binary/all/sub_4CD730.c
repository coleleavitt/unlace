__int64 __fastcall sub_4CD730(QT::QWidget *a1, QT::QFocusEvent *a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  unsigned int v4; // eax

  result = sub_4CD420(a1, 1u);
  if ( result )
  {
    v3 = result;
    v4 = QT::QFocusEvent::reason(a2);
    return QT::QWidget::setFocus(v3, v4);
  }
  return result;
}
