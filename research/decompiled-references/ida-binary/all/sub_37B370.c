unsigned __int64 __fastcall sub_37B370(QT::QWidget *a1, QT::QEvent *a2)
{
  unsigned __int64 result; // rax

  result = QT::QWidget::changeEvent(a1, a2);
  if ( *((_WORD *)a2 + 4) == 89 )
    return sub_37B090(*((_QWORD **)a1 + 6), a1);
  return result;
}
