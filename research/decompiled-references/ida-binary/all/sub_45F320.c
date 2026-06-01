void __fastcall sub_45F320(_QWORD *a1, const char *a2)
{
  *(a1 - 13) = &TEAViewer___vtable;
  *(a1 - 11) = TEAViewer___vtable_at__16;
  *(a1 - 8) = TEAViewer___vtable_at__40;
  *a1 = TEAViewer___vtable_at__104;
  EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 13), a2);
  operator delete(a1 - 13, 0x410u);
}
