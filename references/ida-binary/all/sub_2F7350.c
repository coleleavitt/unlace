__int64 __fastcall LoadFileDialog__::vfunc_5(QT::QWidget *a1, QT::QEvent *a2)
{
  if ( *((_WORD *)a2 + 4) != 17 || (*((_BYTE *)a1 + 112) & 1) != 0 )
    return QT::QWidget::event(a1, a2);
  sub_2F7270((__int64)a1);
  *((_DWORD *)a1 + 28) |= 1u;
  return QT::QWidget::event(a1, a2);
}
