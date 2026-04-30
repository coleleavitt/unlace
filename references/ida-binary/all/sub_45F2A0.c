void __fastcall sub_45F2A0(_QWORD *a1, const char *a2)
{
  *(a1 - 2) = &TEAViewer___vtable;
  *a1 = TEAViewer___vtable_at__16;
  a1[3] = TEAViewer___vtable_at__40;
  a1[11] = TEAViewer___vtable_at__104;
  EAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 2), a2);
  operator delete(a1 - 2, 0x410u);
}
