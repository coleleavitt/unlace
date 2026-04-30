void __fastcall thread_run_to(_QWORD *a1, const char *a2)
{
  *a1 = &thread_run_to;
  sub_236840((__int64)a1, a2);
  operator delete(a1, 0x80u);
}
