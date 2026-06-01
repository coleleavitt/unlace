void __fastcall srcdbg_run_to(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  *(_QWORD *)a1 = srcdbg_run_to;
  sub_2397C0(a1[30], a2, a3, a4, a5);
  sub_236840((__int64)a1, a2);
  operator delete(a1, 0x80u);
}
