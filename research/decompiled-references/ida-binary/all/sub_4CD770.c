QT::QWidget *__fastcall sub_4CD770(QT::QWidget *a1)
{
  QT::QWidget *result; // rax

  result = (QT::QWidget *)sub_4CD420(a1, 1u);
  if ( result )
    return (QT::QWidget *)QT::QWidget::show(result);
  return result;
}
