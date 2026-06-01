__int64 __fastcall sub_5A11B0(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 custom_argloc; // rax

  if ( (unsigned __int64)(int)a3 > 0x10 )
  {
    if ( !under_debugger )
      interr(598);
    BUG();
  }
  if ( *(_DWORD *)a2 != 6 )
  {
    if ( *(int *)a2 > 6 )
    {
      custom_argloc = retrieve_custom_argloc();
      if ( custom_argloc )
        return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD *))(custom_argloc + 80))(a1, a2, a3, a4);
    }
    return 0;
  }
  if ( a3 != get_bytes(a1, (int)a3, *(_QWORD *)(a2 + 8), 0, 0) )
    return 0;
  if ( (unsigned __int8)getinf_flag(3, 32) && (get_tinfo_property(*a4, 2) & 0xF) != 9 )
    swap_value(a1, a1, a3);
  return 1;
}
