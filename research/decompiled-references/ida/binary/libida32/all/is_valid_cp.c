bool __fastcall is_valid_cp(unsigned int a1, int a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 i; // rbx
  __int64 v11; // rdi

  v4 = qword_2CA1698;
  if ( a2 == 1 )
  {
    v8 = sub_58FD10(qword_2CA1698, 1);
    v9 = v8;
    if ( *(_QWORD *)(v8 + 56) && rangeset_t_find_range(v8 + 48, a1) )
      return 1;
    if ( *(_BYTE *)(v9 + 88) )
    {
      if ( !a3 )
        goto LABEL_8;
      for ( i = 0; i < a3[1]; ++i )
      {
        v11 = *(_QWORD *)(*a3 + 8 * i);
        if ( !*(_QWORD *)(v11 + 8) )
        {
          while ( ++i < a3[1] )
          {
            v11 = *(_QWORD *)(*a3 + 8 * i);
            if ( *(_QWORD *)(v11 + 8) )
              goto LABEL_22;
          }
          return 0;
        }
LABEL_22:
        if ( rangeset_t_find_range(v11, a1) )
          return 1;
      }
    }
  }
  else
  {
    v5 = sub_58FD10(qword_2CA1698, 2);
    if ( a2 == 2 )
    {
      if ( a1 )
      {
        if ( !*(_QWORD *)(v5 + 56) )
          return 1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( a2 != 6 )
      {
        if ( !under_debugger )
          interr(1466);
        BUG();
      }
      if ( a1 )
      {
        if ( !*(_QWORD *)(v5 + 56) || rangeset_t_find_range(v5 + 48, a1) )
          return 1;
        v5 = sub_58FD10(v4, 4);
        if ( !*(_QWORD *)(v5 + 56) )
          goto LABEL_8;
LABEL_26:
        if ( !rangeset_t_find_range(v5 + 48, a1) )
        {
LABEL_8:
          if ( *(_QWORD *)(v4 + 192) )
            return rangeset_t_find_range(v4 + 184, a1) != 0;
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}

