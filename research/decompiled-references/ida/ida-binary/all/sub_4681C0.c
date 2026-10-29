void __fastcall sub_4681C0(_QWORD *a1)
{
  *(a1 - 2) = &IdaMenu___vtable;
  *a1 = IdaMenu___vtable_at__16;
  QT::QMenu::~QMenu((QT::QMenu *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
