void __fastcall TCustomViewer__::vfunc_4(QT::QAbstractScrollArea *a1, const char *a2)
{
  *(_QWORD *)a1 = &TCustomViewer___vtable;
  *((_QWORD *)a1 + 2) = TCustomViewer___vtable_at__16;
  *((_QWORD *)a1 + 5) = TCustomViewer___vtable_at__40;
  *((_QWORD *)a1 + 13) = TCustomViewer___vtable_at__104;
  CustomIDAMemo__::vfunc_3(a1, a2);
  operator delete(a1, 0x3E8u);
}
