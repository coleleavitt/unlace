__int64 __fastcall sub_11A120(int a1, unsigned int a2)
{
  int v2; // ebp
  int not_tail; // ebx
  __int64 result; // rax
  int v5; // ebp

  v2 = a2;
  not_tail = a1;
  if ( a2 == 1 )
  {
    if ( (get_flags_ex() & 0x600) == 0x200 )
      not_tail = prev_not_tail();
    result = get_eah();
    if ( not_tail != -1 )
      goto LABEL_5;
  }
  else
  {
    get_eah();
    result = (unsigned int)~a1;
    if ( a2 > (unsigned int)result )
      v2 = ~a1;
    if ( v2 > 0 )
    {
LABEL_5:
      v5 = not_tail + v2;
      while ( 1 )
      {
        ++not_tail;
        result = get_flags_ex();
        if ( (~(_WORD)result & 0x600) == 0 )
          break;
        if ( (result & 0x400) != 0 )
        {
          result = auto_mark_range();
          if ( v5 == not_tail )
            return result;
        }
        else
        {
LABEL_6:
          if ( v5 == not_tail )
            return result;
        }
      }
      del_items();
      result = auto_mark_range();
      goto LABEL_6;
    }
  }
  return result;
}

