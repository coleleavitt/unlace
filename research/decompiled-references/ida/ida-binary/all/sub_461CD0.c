void __fastcall sub_461CD0(__int64 a1, const char *a2)
{
  QT::QAbstractScrollArea *v2; // rdi

  v2 = (QT::QAbstractScrollArea *)(a1 - 104);
  *(_QWORD *)v2 = &sampleview_t___vtable;
  *((_QWORD *)v2 + 2) = sampleview_t___vtable_at__16;
  *((_QWORD *)v2 + 5) = sampleview_t___vtable_at__40;
  *((_QWORD *)v2 + 13) = sampleview_t___vtable_at__104;
  CustomIDAMemo__::vfunc_3(v2, a2);
}
