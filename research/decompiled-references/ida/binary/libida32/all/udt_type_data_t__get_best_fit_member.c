__int64 __fastcall udt_type_data_t__get_best_fit_member(__int64 *a1, int a2)
{
  __int64 member; // rbx
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v6; // rax
  __int128 v7; // [rsp+40h] [rbp-78h] BYREF
  __int64 v8; // [rsp+60h] [rbp-58h]
  int v9; // [rsp+68h] [rbp-50h]
  __int64 v10; // [rsp+70h] [rbp-48h]
  char v11; // [rsp+78h] [rbp-40h]
  unsigned __int64 v12; // [rsp+88h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( a2 < 0 )
    return -1;
  v8 = 1;
  v9 = -1;
  v10 = 0;
  v11 = 0;
  v7 = 0;
  member = udt_type_data_t__find_member((int)a1);
  if ( member < 0 )
  {
    v6 = a1[1];
    if ( v6 && get_tinfo_property(*(_QWORD *)(*a1 + (v6 << 7) - 64), 287) )
    {
      member = a1[1] - 1;
      if ( (unsigned __int64)(unsigned int)(8 * a2) < *(_QWORD *)(*a1 + (member << 7)) )
        member = -1;
    }
    else if ( a1[3] )
    {
      member = udt_type_data_t__find_member((int)a1);
    }
  }
  else
  {
    v3 = *a1;
    v4 = *a1 + (member << 7);
    if ( v4 == *a1 )
    {
LABEL_19:
      member = 0;
    }
    else
    {
      while ( (*(_BYTE *)v4 & 7) != 0 )
      {
        if ( (get_tinfo_property(*(_QWORD *)(v4 + 64), 2) & 0xF) != 0xE )
        {
          if ( !under_debugger )
            interr(3031);
          BUG();
        }
        v3 = *a1;
        v4 -= 128;
        if ( v4 == *a1 )
          goto LABEL_19;
      }
      member = (v4 - v3) >> 7;
    }
  }
  clear_tinfo_t(&v7);
  return member;
}

