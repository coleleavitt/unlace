__int64 __fastcall navigator_t__::vfunc_5(QT::QWidget *a1, QT::QEvent *a2)
{
  if ( *((_WORD *)a2 + 4) != 3003 )
    return QT::QWidget::event(a1, a2);
  sub_3477F0(a1);
  return 1;
}
