void __fastcall sampleview_t__::vfunc_4(QT::QAbstractScrollArea *a1, const char *a2)
{
  *(_QWORD *)a1 = &sampleview_t___vtable;
  *((_QWORD *)a1 + 2) = sampleview_t___vtable_at__16;
  *((_QWORD *)a1 + 5) = sampleview_t___vtable_at__40;
  *((_QWORD *)a1 + 13) = sampleview_t___vtable_at__104;
  CustomIDAMemo__::vfunc_3(a1, a2);
  operator delete(a1, 0x400u);
}
