__int64 __fastcall sub_13B890(
        __int64 a1,
        unsigned __int64 a2,
        const char *a3,
        int a4,
        _QWORD *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  int flags; // eax
  __int64 v11; // r14
  bool v12; // r15
  __int64 eah; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // ax

  v8 = a2;
  v9 = a1;
  if ( a5 )
    *a5 = -1;
  flags = get_flags_ex();
  v11 = a4 & 0x600;
  if ( v11 == 1536 )
  {
    v12 = 0;
    if ( (flags & 0x600) == 0x400 )
      goto LABEL_5;
  }
  else
  {
    v12 = 0;
    if ( v11 != 1024 )
      goto LABEL_5;
    v17 = a4 & 0xF0000000;
    if ( v17 == 2952790016LL )
      goto LABEL_5;
    v18 = flags & 0x600;
    if ( v18 == 1536 )
      goto LABEL_5;
    if ( v18 == 1024 )
    {
      v19 = flags & 0xF0000000;
      if ( v19 == 1342177280 )
      {
        if ( v17 != 1342177280 )
          goto LABEL_5;
      }
      else
      {
        v12 = v19 != 1610612736 || v17 == 1610612736;
        if ( !v12 )
          goto LABEL_5;
      }
    }
  }
  v12 = 1;
  v20 = get_item_end() - a1;
  if ( v20 > a2 )
    v20 = a2;
  v9 = v20 + a1;
  v8 = a2 - v20;
LABEL_5:
  eah = get_eah();
  v14 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v14 = -1;
  v15 = v14 - v9;
  if ( v15 <= v8 )
    v8 = v15;
  if ( !v8 )
    return 1;
  v21 = get_flags_ex();
  if ( (v11 == 1536 || (v21 & 0xC000) != 0x4000) && (v21 & 0x400) == 0 && (unsigned __int8)can_define_item() )
    return 1;
  result = dword_2542A0[0];
  if ( dword_2542A0[0] == -1 )
    result = sub_92580(1u, (__int64)"%s", a3);
  if ( (_DWORD)result == 1 )
  {
    forget_problem();
    if ( a5 )
    {
      *a5 = v9;
      *a6 = v8;
    }
    else
    {
      del_items();
      if ( v12 )
        set_name();
      while ( next_that() != -1 )
        set_name();
    }
    return 1;
  }
  return result;
}

