__int64 __fastcall sub_582310(unsigned int a1, int a2, unsigned int a3, char a4)
{
  int v4; // ebp
  unsigned int v8; // r14d
  unsigned int v9; // eax
  unsigned int that; // eax

  if ( (a2 & 0x1D000) != 0 )
    return 0;
  v4 = sub_4DC440(*(_QWORD *)(qword_2CA1698 + 1480), a1) & 4;
  if ( v4 )
    return 0;
  v8 = a1;
  while ( (get_flags_ex(v8, 4) & 0xD400) == 0 )
  {
    if ( a4 )
    {
      v9 = is_align_insn(v8);
    }
    else
    {
      if ( (unsigned __int8)is_loaded(v8) && get_wide_byte(v8) )
        break;
      that = next_that(v8, a3, sub_57F2C0, 0);
      if ( a3 <= that )
        that = a3;
      v9 = that - v8;
    }
    if ( v9 )
    {
      v8 += v9;
      v4 += v9;
      if ( v8 < a3 && v4 <= 4096 )
        continue;
    }
    break;
  }
  if ( v8 != a3 && v4 > 4095
    || !v4
    || (unsigned __int8)get_fixups(0, a1, (unsigned int)v4)
    || !(unsigned __int8)create_align(a1) )
  {
    return 0;
  }
  return (unsigned int)v4;
}

