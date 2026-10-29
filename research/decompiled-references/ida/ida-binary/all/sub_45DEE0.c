void __fastcall sub_45DEE0(__int64 a1, const char *a2)
{
  QT::QAbstractScrollArea *v2; // rdi

  v2 = (QT::QAbstractScrollArea *)(a1 - 16);
  *(_QWORD *)v2 = &TCustomViewer___vtable;
  *((_QWORD *)v2 + 2) = TCustomViewer___vtable_at__16;
  *((_QWORD *)v2 + 5) = TCustomViewer___vtable_at__40;
  *((_QWORD *)v2 + 13) = TCustomViewer___vtable_at__104;
  CustomIDAMemo__::vfunc_3(v2, a2);
}
