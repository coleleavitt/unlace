void __fastcall sub_46A270(__int64 a1, const char *a2)
{
  QT::QAbstractScrollArea *v2; // rdi

  v2 = (QT::QAbstractScrollArea *)(a1 - 16);
  *(_QWORD *)v2 = &disassembly_preview_t___vtable;
  *((_QWORD *)v2 + 2) = disassembly_preview_t___vtable_at__16;
  *((_QWORD *)v2 + 5) = disassembly_preview_t___vtable_at__40;
  *((_QWORD *)v2 + 13) = disassembly_preview_t___vtable_at__104;
  IDAView__::vfunc_3(v2, a2);
}
