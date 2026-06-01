__int64 __fastcall sub_32F3B0(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 *a5, unsigned __int64 *a6)
{
  unsigned __int64 v8; // rbp
  __int64 v9; // rbx
  int flags; // eax
  __int64 v11; // rdx
  __int64 v12; // r14
  bool v13; // r15
  __int64 eah; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int16 v21; // ax
  unsigned __int64 v22; // rbp
  __int64 that; // rax

  v8 = a2;
  v9 = a1;
  if ( a5 )
    *a5 = -1;
  flags = get_flags_ex(a1, 4);
  v12 = a4 & 0x600;
  if ( v12 == 1536 )
  {
    v13 = 0;
    if ( (flags & 0x600) == 0x400 )
      goto LABEL_5;
  }
  else
  {
    v13 = 0;
    if ( v12 != 1024 )
      goto LABEL_5;
    v11 = a4 & 0xF0000000;
    if ( v11 == 2952790016LL )
      goto LABEL_5;
    v18 = flags & 0x600;
    if ( v18 == 1536 )
      goto LABEL_5;
    if ( v18 == 1024 )
    {
      v19 = flags & 0xF0000000;
      if ( v19 == 1342177280 )
      {
        if ( v11 != 1342177280 )
          goto LABEL_5;
      }
      else
      {
        v13 = v19 != 1610612736 || v11 == 1610612736;
        if ( !v13 )
          goto LABEL_5;
      }
    }
  }
  v13 = 1;
  v20 = get_item_end(a1) - a1;
  if ( v20 > a2 )
    v20 = a2;
  v9 = v20 + a1;
  v8 = a2 - v20;
LABEL_5:
  eah = get_eah(a1, 4, v11);
  v15 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v15 = -1;
  v16 = v15 - v9;
  if ( v16 <= v8 )
    v8 = v16;
  if ( !v8 )
    return 1;
  v21 = get_flags_ex(v9, 4);
  if ( (v12 == 1536 || (v21 & 0xC000) != 0x4000) && (v21 & 0x400) == 0 && (unsigned __int8)can_define_item(v9, v8, 0) )
    return 1;
  result = (unsigned int)dword_8BA8E0;
  if ( dword_8BA8E0 == -1 )
    result = sub_1698A0(1, (int)"%s", a3);
  if ( (_DWORD)result == 1 )
  {
    forget_problem(13, v9);
    if ( a5 )
    {
      *a5 = v9;
      *a6 = v8;
    }
    else
    {
      del_items(v9, 2, v8, 0);
      if ( v13 )
        set_name(v9, &unk_5C2F25, 0);
      v22 = v9 + v8;
      while ( 1 )
      {
        that = next_that(v9, v22, sub_32E360, 0);
        v9 = that;
        if ( that == -1 )
          break;
        set_name(that, &unk_5C2F25, 0);
      }
    }
    return 1;
  }
  return result;
}
