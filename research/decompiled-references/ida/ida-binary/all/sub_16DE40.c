unsigned __int64 __fastcall sub_16DE40(QT::QGroupBox ***a1, QT::QEvent *a2)
{
  unsigned __int64 result; // rax

  result = QT::QWidget::changeEvent((QT::QWidget *)a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_16DAF0(a1[6], (QT::QWidget *)a1);
  return result;
}
