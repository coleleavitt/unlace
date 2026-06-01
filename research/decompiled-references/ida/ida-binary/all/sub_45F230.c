void __fastcall sub_45F230(__int64 a1, const char *a2)
{
  QT::QAbstractScrollArea *v2; // rdi

  v2 = (QT::QAbstractScrollArea *)(a1 - 104);
  *(_QWORD *)v2 = &TEAViewer___vtable;
  *((_QWORD *)v2 + 2) = TEAViewer___vtable_at__16;
  *((_QWORD *)v2 + 5) = TEAViewer___vtable_at__40;
  *((_QWORD *)v2 + 13) = TEAViewer___vtable_at__104;
  EAView__::vfunc_3(v2, a2);
}
