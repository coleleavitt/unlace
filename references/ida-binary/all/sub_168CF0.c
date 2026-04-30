__int64 __fastcall exp_file_sink_t__::vfunc_2(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 0;
  qfputs(a2, *(_QWORD *)(a1 + 8));
  if ( !ferror(*(FILE **)(a1 + 8)) )
    return 0;
  set_qerrno(2021);
  return 1;
}
