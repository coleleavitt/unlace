void __fastcall sub_46A340(_QWORD *a1, const char *a2)
{
  *(a1 - 2) = &disassembly_preview_t___vtable;
  *a1 = disassembly_preview_t___vtable_at__16;
  a1[3] = disassembly_preview_t___vtable_at__40;
  a1[11] = disassembly_preview_t___vtable_at__104;
  IDAView__::vfunc_3((QT::QAbstractScrollArea *)(a1 - 2), a2);
  operator delete(a1 - 2, 0x410u);
}
