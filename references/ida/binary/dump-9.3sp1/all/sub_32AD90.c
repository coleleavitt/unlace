unsigned __int64 __fastcall sub_32AD90(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // eax
  char *v4[2]; // [rsp+0h] [rbp-58h] BYREF
  char *s1; // [rsp+10h] [rbp-48h]
  __int128 v6; // [rsp+18h] [rbp-40h]
  unsigned __int64 v7; // [rsp+28h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 112);
  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)getinf_flag() )
    goto LABEL_6;
  v2 = *(_DWORD *)(v1 + 16);
  switch ( v2 )
  {
    case 72:
      goto LABEL_6;
    case 15:
      if ( (getinf() & 0xF) == 6 && !(unsigned __int8)getinf_flag() )
        goto LABEL_15;
LABEL_6:
      if ( (unsigned int)verify_tinfo()
        || (get_tinfo_property() & 0xF) != 0xA && *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) != get_tinfo_size() )
      {
        s1 = nullptr;
        get_stock_tinfo();
        save_tinfo();
        copy_tinfo_t();
        if ( (unsigned int)verify_tinfo() )
        {
          if ( !under_debugger )
            sub_383060(50072);
          BUG();
        }
        clear_tinfo_t();
      }
      return v7 - __readfsqword(0x28u);
    case 12:
      s1 = nullptr;
      v6 = 0;
      if ( (getinf() & 0xF) == 6
        && !(unsigned __int8)getinf_flag()
        && get_abi_name()
        && (_QWORD)v6
        && !strcmp(s1, "eabi32") )
      {
        goto LABEL_15;
      }
      goto LABEL_6;
  }
  if ( (getinf() & 0xF) != 6 || !(unsigned __int8)getinf_flag() )
    goto LABEL_6;
LABEL_15:
  if ( (get_tinfo_property() & 0xF) != 0xB || (unsigned int)verify_tinfo() || !get_tinfo_size() )
  {
    sub_32ACB0(v4, (__int64)"__va_list_tag");
    lower_type();
    if ( (unsigned int)verify_tinfo() || !get_tinfo_size() )
    {
      v4[1] = nullptr;
      s1 = nullptr;
      *(_QWORD *)&v6 = 0x100000000LL;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      save_tinfo();
      clear_tinfo_t();
    }
    if ( (get_tinfo_property() & 0xF) != 0xB )
    {
      copy_tinfo_t();
      s1 = nullptr;
      *(_QWORD *)&v6 = 0x100000000LL;
      copy_tinfo_t();
      create_tinfo();
      clear_tinfo_t();
      save_tinfo();
    }
    clear_tinfo_t();
  }
  return v7 - __readfsqword(0x28u);
}
