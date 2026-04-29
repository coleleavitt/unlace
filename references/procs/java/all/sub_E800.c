void __fastcall sub_E800(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 first_dref_from; // rsi

  v2 = *(_QWORD *)(a2 + 24);
  v3 = v2 + *(unsigned __int16 *)(a2 + 32);
  if ( v2 < v3 )
  {
    v4 = 0;
    do
    {
      if ( (get_flags_ex(v2, 4) & 0x400) != 0 && get_first_dref_to(v2) == -1 )
      {
        ++v4;
        netnode_supdel(*(_QWORD *)(a1 + 33336), v2, 114);
        set_name(v2, &unk_228D8, 256);
        del_items(v2, 0, 1, 0);
        while ( 1 )
        {
          first_dref_from = get_first_dref_from(v2);
          if ( first_dref_from == -1 )
            break;
          del_dref(v2, first_dref_from);
        }
      }
      else
      {
        if ( v4 )
          create_data(v2 - v4, 2952791040LL, v4, -1);
        v4 = 0;
      }
      ++v2;
    }
    while ( v3 != v2 );
    if ( v4 )
      create_data(v3 - v4, 2952791040LL, v4, -1);
  }
}
