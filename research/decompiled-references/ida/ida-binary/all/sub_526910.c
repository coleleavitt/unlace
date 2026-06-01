__int64 __fastcall sub_526910(QT::QDialog *a1, QT::QObject *a2, QT::QEvent *a3)
{
  if ( *((_WORD *)a3 + 4) != 27 || *((QT::QObject **)a1 + 6) != a2 )
    return QT::QDialog::eventFilter(a1, a2, a3);
  (*(void (__fastcall **)(QT::QDialog *, _QWORD))(*(_QWORD *)a1 + 432LL))(a1, 0);
  return QT::QDialog::eventFilter(a1, a2, a3);
}
