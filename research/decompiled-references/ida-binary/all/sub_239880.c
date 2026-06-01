double __fastcall srcdbg_step(__int64 a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi

  *(_QWORD *)a1 = &srcdbg_step;
  sub_2397C0(*(_DWORD *)(a1 + 120), a2, a3, a4, a5);
  v6 = *(_QWORD *)(a1 + 128);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 136) = 0;
    qfree(v6, a2);
  }
  return sub_236840(a1, a2);
}
