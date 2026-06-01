__int64 __fastcall offsets_margin_t__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  int v2; // eax

  v2 = *((unsigned __int16 *)a2 + 4);
  if ( (unsigned int)(v2 - 17) <= 1 )
    sub_54EDF0(this, v2 == 17);
  return QT::QWidget::event(this, a2);
}
