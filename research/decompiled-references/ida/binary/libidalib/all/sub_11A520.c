unsigned __int64 __fastcall sub_11A520(__int64 not_tail, int a2)
{
  int v2; // ebp
  __int64 eah; // rdx
  __int64 v5; // rax
  unsigned __int64 result; // rax
  __int64 v7; // r12

  v2 = a2;
  if ( a2 == 1 && (get_flags_ex() & 0x600) == 0x200 )
    not_tail = prev_not_tail();
  eah = get_eah();
  v5 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v5 = -1;
  result = v5 - not_tail;
  if ( result < a2 )
    v2 = result;
  v7 = not_tail + v2;
  if ( v2 > 0 )
  {
    while ( 1 )
    {
      ++not_tail;
      result = get_flags_ex();
      if ( (~(_WORD)result & 0x600) == 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        result = auto_mark_range();
        if ( v7 == not_tail )
          return result;
      }
      else
      {
LABEL_8:
        if ( v7 == not_tail )
          return result;
      }
    }
    del_items();
    result = auto_mark_range();
    goto LABEL_8;
  }
  return result;
}

