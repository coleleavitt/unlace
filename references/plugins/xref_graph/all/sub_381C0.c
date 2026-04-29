__int64 __fastcall sub_381C0(__int64 a1, __int64 a2)
{
  QT::QWidget *v2; // rax

  if ( (*(_BYTE *)(a2 + 35) & 6) == 0 && (*(_BYTE *)(a2 + 68) & 1) != 0 )
    *(_BYTE *)(a1 + 105) = 0;
  if ( (unsigned __int8)QT::QWidget::hasFocus(*(QT::QWidget **)(a1 + 88)) )
    QT::QWidget::setFocus(a1, 7);
  QT::QGraphicsView::mouseMoveEvent(a1, a2);
  v2 = (QT::QWidget *)QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 88));
  return QT::QWidget::update(v2);
}
