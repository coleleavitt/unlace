void __fastcall sub_46A380(_QWORD *a1, const char *a2)
{
  *(a1 - 5) = &disassembly_preview_t___vtable;
  *(a1 - 3) = disassembly_preview_t___vtable_at__16;
  *a1 = disassembly_preview_t___vtable_at__40;
  a1[8] = disassembly_preview_t___vtable_at__104;
  IDAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 5), a2);
  operator delete(a1 - 5, 0x410u);
}
