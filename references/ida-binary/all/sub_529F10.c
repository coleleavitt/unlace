__int64 __fastcall text_area_dialog_t__::vfunc_6(QT::QDialog *this, QT::QObject *a2, QT::QEvent *a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  QT::QEvent *v6; // [rsp+0h] [rbp-28h]

  if ( *((QT::QObject **)this + 6) != a2 )
    return QT::QDialog::eventFilter(this, a2, a3);
  if ( *((_WORD *)a3 + 4) != 6 )
    return QT::QDialog::eventFilter(this, a2, a3);
  v6 = a3;
  LOBYTE(v4) = sub_51A390(a3);
  a3 = v6;
  v5 = v4;
  if ( !(_BYTE)v4 )
    return QT::QDialog::eventFilter(this, a2, a3);
  (*(void (__fastcall **)(QT::QDialog *, QT::QObject *, QT::QEvent *))(*(_QWORD *)this + 440LL))(this, a2, v6);
  return v5;
}
