__int64 __fastcall sub_444260(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char merge_state; // al
  __int64 v5; // rdi
  bool v6; // cc
  char v7; // al

  result = errorexit;
  if ( !errorexit )
  {
    if ( (unsigned __int8)(*(_BYTE *)(a1 + 304) - 4) > 1u )
    {
      merge_state = get_merge_state(a1, a2);
      v5 = 4;
      if ( (merge_state & 3) == 0 )
        v5 = get_merge_state(4, a2) & 4;
      result = set_merge_state(v5);
      if ( *(_BYTE *)(a1 + 307) )
      {
        v6 = *(_QWORD *)(a1 + 168) <= 1u;
        *(_BYTE *)(a1 + 307) = 0;
        if ( !v6 )
          result = save_database(*(_QWORD *)(a1 + 160), 0, 0, 0);
        if ( !*(_BYTE *)(a1 + 309) )
          return set_database_flag(1, 1);
      }
    }
    else if ( (get_merge_state(a1, a2) & 3) != 0 )
    {
      return set_merge_state(4);
    }
    else
    {
      v7 = get_merge_state(4, a2);
      return set_merge_state(v7 & 4);
    }
  }
  return result;
}

