void __fastcall TEAViewer__::vfunc_4(QT::QAbstractScrollArea *a1, const char *a2)
{
  *(_QWORD *)a1 = &TEAViewer___vtable;
  *((_QWORD *)a1 + 2) = TEAViewer___vtable_at__16;
  *((_QWORD *)a1 + 5) = TEAViewer___vtable_at__40;
  *((_QWORD *)a1 + 13) = TEAViewer___vtable_at__104;
  EAView__::vfunc_3(a1, a2);
  operator delete(a1, 0x410u);
}
