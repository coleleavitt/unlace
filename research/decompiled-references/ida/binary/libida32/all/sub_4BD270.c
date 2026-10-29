_BOOL8 __fastcall sub_4BD270(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int name_ea; // eax

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 == 3 )
      {
        if ( (unsigned int)sub_6224C0(a1, a2, a3) != -1 )
          return 1;
        goto LABEL_5;
      }
      if ( (unsigned __int8)sub_59DD90(a1, 0, a2, a3) )
        return 1;
      if ( a4 == 2 )
      {
LABEL_5:
        if ( sub_6570B0(a1, a2, a5, a6, 0, a3) )
          return 1;
        goto LABEL_14;
      }
      if ( (unsigned int)sub_6224C0(a1, a2, a3) != -1 )
        return 1;
      if ( a4 == 1 )
        goto LABEL_14;
      if ( sub_6570B0(a1, a2, a5, a6, 0, a3) )
        return 1;
      if ( a4 != 4 )
      {
LABEL_14:
        name_ea = get_name_ea(0xFFFFFFFFLL, a3);
        return (int)sub_5AEEA0(a1, a2, name_ea) >= 0;
      }
    }
    return 0;
  }
  return 0;
}

