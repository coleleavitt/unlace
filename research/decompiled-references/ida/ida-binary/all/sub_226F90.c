void __fastcall handle_debug_event(_QWORD *a1)
{
  *a1 = &off_86FF78;
  qsem_free(a1[2]);
  operator delete(a1, 0x28u);
}
