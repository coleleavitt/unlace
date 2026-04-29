__int64 __fastcall sub_34670(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v7; // r13
  int auto_state; // eax
  char v10; // r15
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rax
  int flags; // eax
  __int64 dword; // [rsp+10h] [rbp-88h]
  __int64 qword; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+28h] [rbp-70h]

  get_flags_ex(*(_QWORD *)(a2 + 16), 0);
  get_flags_ex(a4, 4);
  v7 = *(_BYTE *)(a3 + 5) == 7 || *(_BYTE *)(a3 + 5) == 2;
  if ( v7 )
  {
    if ( !(unsigned __int8)is_defarg() )
    {
      if ( *(_BYTE *)(a3 + 5) == 2 )
        dword = (unsigned int)get_dword(a4);
      else
        dword = get_qword();
      auto_state = get_auto_state();
      if ( auto_state == 45 )
      {
        if ( (unsigned __int8)sub_341F0(a1, *(_QWORD *)(a2 + 16), dword, 1) )
        {
          get_default_reftype();
          op_offset();
          get_flags_ex(a4, 0);
        }
      }
      else if ( auto_state == 40 )
      {
        auto_mark_range();
      }
    }
    v10 = is_off();
    if ( v10 )
    {
      if ( *(_BYTE *)(a3 + 5) == 2 )
        qword = (unsigned int)get_dword(a4);
      else
        qword = get_qword();
      if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
      {
        if ( !(unsigned __int8)is_defarg() )
        {
          get_default_reftype();
          op_offset();
        }
        v12 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        if ( qword != v12 && qword != -1 )
        {
          v13 = 16LL * *(_QWORD *)a2;
          if ( (v13 & v12) != v20 )
          {
            v14 = v13 + qword;
            v15 = v13 + qword;
            if ( v12 != v13 + qword )
            {
              v16 = v14 & v12;
              if ( v14 != -1 )
                v15 = v16;
            }
            del_dref();
            flags = get_flags_ex(v15, 4);
            if ( (flags & 0x600) == 0x400 && (flags & 0xF0000000) == 0x50000000 && (flags & 0x1000) == 0 )
            {
              del_items();
              auto_mark_range();
            }
          }
        }
        get_name_base_ea();
        v7 = 0;
        add_dref();
        netnode_supdel();
        netnode_supdel();
      }
      else
      {
        v7 = v10;
      }
    }
    if ( (unsigned __int8)netnode_charval() != 0xFF && v7 )
    {
      if ( netnode_altval() != 2 )
        netnode_supset();
      if ( (*(_BYTE *)(a1 + 184) & 2) == 0 && *(_BYTE *)(a3 + 1) == 2 )
      {
        v11 = *(_WORD *)(a2 + 24);
        if ( v11 == 480
          || (unsigned __int16)(v11 - 30) <= 1u
          || (unsigned __int16)(v11 - 113) <= 1u
          || (LOBYTE(v11) = v11 & 0x7F, v11 == 344) )
        {
          netnode_supset();
        }
      }
    }
  }
  return 1;
}
