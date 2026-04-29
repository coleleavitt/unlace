void __fastcall sub_2C300(_QWORD *a1)
{
  *(a1 - 2) = &minimap_t___vtable;
  *a1 = minimap_t___vtable_at__16;
  QT::QGraphicsView::~QGraphicsView((QT::QGraphicsView *)(a1 - 2));
  operator delete(a1 - 2, 0x30u);
}
