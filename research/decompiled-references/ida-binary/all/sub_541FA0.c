unsigned __int64 __fastcall sub_541FA0(QT::QDialog *a1, QT::QKeyEvent *a2)
{
  if ( *((_DWORD *)a2 + 16) == 0x1000000 )
    return sub_541DF0();
  else
    return QT::QDialog::keyPressEvent(a1, a2);
}
