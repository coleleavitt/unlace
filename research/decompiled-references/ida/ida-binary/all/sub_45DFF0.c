void __fastcall sub_45DFF0(_QWORD *a1, const char *a2)
{
  *(a1 - 5) = &TCustomViewer___vtable;
  *(a1 - 3) = TCustomViewer___vtable_at__16;
  *a1 = TCustomViewer___vtable_at__40;
  a1[8] = TCustomViewer___vtable_at__104;
  CustomIDAMemo__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 5), a2);
  operator delete(a1 - 5, 0x3E8u);
}
