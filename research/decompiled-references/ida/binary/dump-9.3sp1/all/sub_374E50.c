unsigned __int64 __fastcall sub_374E50(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // [rsp+88h] [rbp-40h]

  v6 = __readfsqword(0x28u);
  if ( (get_aflags() & 0x2000000) == 0 )
  {
    *(_QWORD *)(a1 + 120) = a2;
    if ( (unsigned __int8)get_tinfo_details() )
    {
      create_tinfo();
      set_tinfo();
      clear_tinfo_t();
    }
    else
    {
      set_tinfo();
    }
    *(_QWORD *)(a1 + 120) = -1;
    if ( a4 <= 2 || a4 == 3 )
      upd_abits();
    cleanup_argloc();
    clear_tinfo_t();
  }
  return v6 - __readfsqword(0x28u);
}
