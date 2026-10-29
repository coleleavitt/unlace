void __fastcall sub_B8AF0(_QWORD *a1)
{
  *a1 = off_22F008;
  free_debug_event();
  *a1 = &off_235C80;
  qsem_free();
  operator delete(a1, 0x60u);
}

