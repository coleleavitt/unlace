__int64 __fastcall sub_4CD700(QT::QWidget *a1, unsigned int a2)
{
  __int64 result; // rax

  result = sub_4CD420(a1, 1u);
  if ( result )
    return QT::QWidget::setFocus(result, a2);
  return result;
}
