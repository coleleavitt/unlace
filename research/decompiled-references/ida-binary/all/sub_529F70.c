__int64 __fastcall text_area_dialog_t__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r12d

  if ( *((_WORD *)a2 + 4) != 6 )
    return QT::QWidget::event(this, a2);
  LOBYTE(v3) = sub_51A390(a2);
  v4 = v3;
  if ( !(_BYTE)v3 )
    return QT::QWidget::event(this, a2);
  (*(void (__fastcall **)(QT::QWidget *, QT::QEvent *))(*(_QWORD *)this + 440LL))(this, a2);
  return v4;
}
