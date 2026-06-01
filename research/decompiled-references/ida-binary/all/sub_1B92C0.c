unsigned __int64 __fastcall sub_1B92C0(QT::QLabel ***a1, QT::QEvent *a2)
{
  unsigned __int64 result; // rax

  result = QT::QWidget::changeEvent((QT::QWidget *)a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_1B58D0(a1[32], (QT::QWidget *)a1);
  return result;
}
