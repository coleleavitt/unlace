unsigned __int64 __fastcall sub_38C7E0(QT::QLabel ***a1, QT::QEvent *a2)
{
  unsigned __int64 result; // rax

  result = QT::QWidget::changeEvent((QT::QWidget *)a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_38C440(a1[9], (QT::QWidget *)a1);
  return result;
}
