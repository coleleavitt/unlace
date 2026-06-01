void __fastcall disassembly_preview_t__::vfunc_4(QT::QAbstractScrollArea *a1, const char *a2)
{
  *(_QWORD *)a1 = &disassembly_preview_t___vtable;
  *((_QWORD *)a1 + 2) = disassembly_preview_t___vtable_at__16;
  *((_QWORD *)a1 + 5) = disassembly_preview_t___vtable_at__40;
  *((_QWORD *)a1 + 13) = disassembly_preview_t___vtable_at__104;
  IDAView__::vfunc_3(a1, a2);
  operator delete(a1, 0x410u);
}
