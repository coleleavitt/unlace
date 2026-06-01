_BOOL8 __fastcall sub_4D42D0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 name_ea; // rax

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 == 3 )
      {
        if ( sub_63F6C0(a1, a2, a3) != -1 )
          return 1;
        goto LABEL_5;
      }
      if ( (unsigned __int8)sub_5B7FD0(a1, 0, a2, a3) )
        return 1;
      if ( a4 == 2 )
      {
LABEL_5:
        if ( sub_674F40(a1, a2, a5, a6, 0, a3) )
          return 1;
        goto LABEL_14;
      }
      if ( sub_63F6C0(a1, a2, a3) != -1 )
        return 1;
      if ( a4 == 1 )
        goto LABEL_14;
      if ( sub_674F40(a1, a2, a5, a6, 0, a3) )
        return 1;
      if ( a4 != 4 )
      {
LABEL_14:
        name_ea = get_name_ea(-1, a3);
        return (int)sub_5C9B30(a1, a2, name_ea) >= 0;
      }
    }
    return 0;
  }
  return 0;
}
