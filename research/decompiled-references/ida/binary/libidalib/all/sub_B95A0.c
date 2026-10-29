__int64 __fastcall sub_B95A0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 hidden_range; // rax

  v3 = 0;
  v4 = a2 + a3;
  v5 = a2 + a3 + get_tinfo_size();
  if ( next_that() == -1 )
  {
    sub_13A2B0(v4, v5);
    del_debug_names();
    del_items();
    if ( (unsigned __int8)get_tinfo_details() )
    {
      qsnprintf();
      qsnprintf();
      qsnprintf();
      v3 = add_hidden_range();
      if ( (_BYTE)v3 )
      {
        hidden_range = get_hidden_range();
        if ( hidden_range )
        {
          *(_BYTE *)(hidden_range + 40) = 1;
          update_hidden_range();
        }
      }
    }
    else
    {
      return 0;
    }
  }
  return v3;
}

