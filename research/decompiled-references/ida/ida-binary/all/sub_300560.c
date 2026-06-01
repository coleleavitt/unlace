__int64 __fastcall ida_logger_t__::vfunc_0(_QWORD *a1, const char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rdi

  *a1 = algn_894BD0;
  if ( a1 != (_QWORD *)qword_8D2358 )
  {
    if ( !under_debugger )
      interr(2552, a2, a3, a4, a5);
    BUG();
  }
  v6 = a1[6];
  qword_8D2358 = 0;
  if ( v6 )
  {
    a1[7] = 0;
    qfree(v6, a2);
  }
  return file_outstream_t__::vfunc_0(a1 + 1);
}
