__int64 __fastcall sub_13B290(int a1, unsigned int a2, const char *a3, int a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v10; // ebp
  int v11; // ebx
  int flags; // eax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // eax
  char v18; // r15
  __int64 v19; // rax
  unsigned int v20; // eax
  __int64 v21; // rax

  v10 = a2;
  v11 = a1;
  if ( a5 )
    *a5 = -1;
  flags = get_flags_ex();
  v13 = a4 & 0x600;
  if ( v13 != 1536 )
  {
    if ( v13 == 1024 )
    {
      v15 = a4 & 0xF0000000;
      if ( v15 != 2952790016LL )
      {
        v16 = flags & 0x600;
        if ( v16 != 1536 )
        {
          if ( v16 != 1024 )
          {
LABEL_13:
            v17 = get_item_end() - a1;
            if ( v17 > a2 )
              v17 = a2;
            v11 = v17 + a1;
            v10 = a2 - v17;
            get_eah();
            if ( ~v11 <= v10 )
              v10 = ~v11;
            if ( !v10 )
              return 1;
            v18 = 1;
            LOWORD(v19) = get_flags_ex();
LABEL_27:
            if ( (v19 & 0xC000) == 0x4000 )
              goto LABEL_29;
            goto LABEL_28;
          }
          v21 = flags & 0xF0000000;
          if ( v21 == 1342177280 )
          {
            if ( v15 == 1342177280 )
              goto LABEL_13;
          }
          else if ( v15 == 1610612736 || v21 != 1610612736 )
          {
            goto LABEL_13;
          }
        }
      }
    }
    get_eah();
    if ( ~a1 <= a2 )
      v10 = ~a1;
    if ( !v10 )
      return 1;
    v18 = 0;
    LOWORD(v19) = get_flags_ex();
    goto LABEL_27;
  }
  if ( (flags & 0x600) == 0x400 )
  {
    get_eah();
    if ( ~a1 <= a2 )
      v10 = ~a1;
    if ( !v10 )
      return 1;
    v18 = 0;
    v19 = get_flags_ex();
  }
  else
  {
    v20 = get_item_end() - a1;
    if ( v20 > a2 )
      v20 = a2;
    v11 = v20 + a1;
    v10 = a2 - v20;
    get_eah();
    if ( ~v11 <= v10 )
      v10 = ~v11;
    if ( !v10 )
      return 1;
    v18 = 1;
    v19 = get_flags_ex();
  }
LABEL_28:
  if ( (v19 & 0x400) == 0 && (unsigned __int8)can_define_item() )
    return 1;
LABEL_29:
  result = dword_2530E0[0];
  if ( dword_2530E0[0] == -1 )
    result = sub_924A0(1u, (__int64)"%s", a3);
  if ( (_DWORD)result == 1 )
  {
    forget_problem();
    if ( a5 )
    {
      *a5 = v11;
      *a6 = v10;
    }
    else
    {
      del_items();
      if ( v18 )
        set_name();
      while ( (unsigned int)next_that() != -1 )
        set_name();
    }
    return 1;
  }
  return result;
}

