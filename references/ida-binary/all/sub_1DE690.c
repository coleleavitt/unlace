unsigned __int64 __fastcall sub_1DE690(QT::QWidget *a1, QT::QEvent *a2)
{
  unsigned __int64 result; // rax

  result = QT::QWidget::changeEvent(a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_1DE4F0(*((_QWORD **)a1 + 6), a1);
  return result;
}
