void __fastcall sub_45F2E0(_QWORD *a1, const char *a2)
{
  *(a1 - 5) = &TEAViewer___vtable;
  *(a1 - 3) = TEAViewer___vtable_at__16;
  *a1 = TEAViewer___vtable_at__40;
  a1[8] = TEAViewer___vtable_at__104;
  EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 5), a2);
  operator delete(a1 - 5, 0x410u);
}
