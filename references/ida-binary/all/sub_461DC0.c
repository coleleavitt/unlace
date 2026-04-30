void __fastcall sub_461DC0(_QWORD *a1, const char *a2)
{
  *(a1 - 13) = &sampleview_t___vtable;
  *(a1 - 11) = sampleview_t___vtable_at__16;
  *(a1 - 8) = sampleview_t___vtable_at__40;
  *a1 = sampleview_t___vtable_at__104;
  CustomIDAMemo__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 13), a2);
  operator delete(a1 - 13, 0x400u);
}
