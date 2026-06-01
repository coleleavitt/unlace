__int64 __fastcall sub_356200(QT::QWidget *a1, QT::QEvent *a2)
{
  __int64 result; // rax

  result = QT::QWidget::changeEvent(a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_350090(*((_QWORD *)a1 + 7), a1);
  return result;
}
