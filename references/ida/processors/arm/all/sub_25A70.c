void __fastcall sub_25A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // r15
  __int64 v7; // rax
  __int64 not_tail; // r12
  __int64 v9; // rax

  if ( a3 != -1 && (*(_BYTE *)(a1 + 184) & 0x10) == 0 && !(unsigned __int8)sub_55C30(a3) )
  {
    v6 = is_loaded();
    if ( v6 )
    {
      if ( *(_DWORD *)(a1 + 212) )
        v6 = (unsigned __int64)(get_sreg(a3, 20) - 1) <= 0xFFFFFFFFFFFFFFFDLL;
      v7 = get_flags_ex(a3, 4) & 0x600;
      if ( v7 != 1536 )
      {
        if ( v7 == 512 && (unsigned int)get_auto_state() != 25 )
        {
          not_tail = a3;
          if ( (get_flags_ex(a3, 4) & 0x600) == 0x200 )
            not_tail = prev_not_tail();
          if ( (unsigned __int8)is_problem_present() )
          {
            v9 = get_flags_ex(not_tail, 4) & 0x600;
            if ( v9 == 1024 || v9 == 1536 && a4 != v6 )
              del_items();
          }
        }
        goto LABEL_10;
      }
      if ( a4 == v6 )
      {
LABEL_10:
        split_sreg_range();
        return;
      }
    }
    remember_problem();
  }
}
