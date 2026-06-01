__int64 __fastcall sub_6A8ED0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  if ( a2 >= a1[1] )
  {
    set_error_data(0, a2, a3, a4, a5, a6);
    return 4294967289LL;
  }
  else
  {
    copy_tinfo_t(*a1 + 80 * a2 + 64);
    return 0;
  }
}
