void __fastcall sub_B9060(_QWORD *a1)
{
  *a1 = off_230088;
  free_debug_event();
  *a1 = &off_236C80;
  qsem_free();
  operator delete(a1, 0x68u);
}

