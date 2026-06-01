void __fastcall srcdbg_step(_DWORD *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi

  *(_QWORD *)a1 = &srcdbg_step;
  sub_2397C0(a1[30], a2, a3, a4, a5);
  v6 = *((_QWORD *)a1 + 16);
  if ( v6 )
  {
    *((_QWORD *)a1 + 17) = 0;
    qfree(v6, a2);
  }
  sub_236840((__int64)a1, a2);
  operator delete(a1, 0xA8u);
}
