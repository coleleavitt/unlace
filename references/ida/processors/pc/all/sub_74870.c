__int64 __fastcall sub_74870(__int128 a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  __int64 func; // rax
  __int64 v6; // rbp
  __int16 v8; // ax
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax

  v4 = *((_QWORD *)&a1 + 1);
  func = get_func();
  if ( !func )
    return 0;
  v6 = func;
  if ( *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) == 92 && *(_BYTE *)(*((_QWORD *)&a1 + 1) + 41LL) == 1 )
  {
    v8 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 46LL);
    if ( v8 == 5 )
    {
      if ( (*(_BYTE *)(v6 + 16) & 0x10) != 0 )
        return 0;
    }
    else if ( v8 == 4 )
    {
      return 0;
    }
  }
  if ( *(_BYTE *)(a2 + 1) == 3 && (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 28LL) & 0x18) == 0
    || !(unsigned __int8)sub_25F10(*((__int64 *)&a1 + 1), a2, 5) )
  {
    return 0;
  }
  if ( (*(_BYTE *)(v6 + 16) & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 28LL) & 8) != 0
      && (getinf() & 0xF) == 6
      && (unsigned __int8)sub_236C0(*((_QWORD *)&a1 + 1), a2) )
    {
      return 0;
    }
  }
  else if ( !(unsigned __int8)sub_236C0(*((_QWORD *)&a1 + 1), a2) )
  {
    return 0;
  }
  if ( *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL) == 134 )
  {
    v9 = *(_DWORD *)(*((_QWORD *)&a1 + 1) + 28LL) & 0x1018;
    if ( v9 != 4096
      && v9 != 8
      && *(_WORD *)(*((_QWORD *)&a1 + 1) + 46LL) == 4
      && (unsigned __int8)(*(_BYTE *)(*((_QWORD *)&a1 + 1) + 41LL) - 3) <= 1u )
    {
      set_abits();
      if ( (*(_BYTE *)(v6 + 17) & 4) == 0 )
      {
        if ( (unsigned __int8)getinf_flag() )
        {
          if ( (unsigned int)get_auto_state() == 40 )
          {
            v10 = get_func();
            v11 = v10;
            if ( v10 )
            {
              *((_QWORD *)&a1 + 1) = v10;
              v12 = sub_741C0(a1, v4, a3);
              if ( v12 )
                sub_68E80(v11, v4, v12);
              if ( *(_WORD *)(v4 + 24) == 7 && *(_BYTE *)(v4 + 41) == 1 && *(_WORD *)(v4 + 46) == 4 )
              {
                *(_QWORD *)(v11 + 16) |= 0x800uLL;
                update_func();
              }
            }
          }
        }
      }
    }
  }
  if ( !(unsigned __int8)insn_create_stkvar() )
    return 0;
  return op_stkvar();
}
