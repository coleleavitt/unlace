__int64 __fastcall sub_B9040(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // r13d
  unsigned int v5; // r12d
  int tinfo_size; // ebx

  v4 = 0;
  v5 = a2 + a3;
  tinfo_size = get_tinfo_size();
  if ( (unsigned int)next_that() == -1 )
  {
    sub_139D20(v5, v5 + tinfo_size);
    del_debug_names();
    del_items();
    if ( (unsigned __int8)get_tinfo_details() )
      return (unsigned int)sub_B7840(v5, (unsigned int)(tinfo_size + a2), a4);
    else
      return 0;
  }
  return v4;
}

