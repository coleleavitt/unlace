__int64 __fastcall DockArea::removeAllDocks(__int64 a1, QT::QWidget *a2)
{
  if ( !*((_DWORD *)a2 + 10) )
    QT::QWidget::setParent(a2, nullptr);
  return 0;
}
