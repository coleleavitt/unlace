QT::QWidget **__fastcall sub_17F3E0(QT::QAction *a1)
{
  QT::QWidget **result; // rax

  QT::QAction::setMenuRole(a1, 0);
  result = &qword_8CD748;
  if ( qword_8CD748 )
    return (QT::QWidget **)QT::QWidget::addAction(qword_8CD748, a1);
  return result;
}
