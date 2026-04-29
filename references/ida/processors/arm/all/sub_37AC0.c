__int64 __fastcall sub_37AC0(__int64 a1, _DWORD *a2, __int64 a3, char a4)
{
  unsigned int v6; // ebp
  unsigned int v8; // eax

  if ( ((unsigned __int8)segtype() == 1 || (get_flags_ex(a3, 4) & 0x4000) != 0)
    && get_ea_name() > 0
    && (unsigned __int8)cleanup_name()
    && (v8 = sub_25750(&s1, a3, a4), (v6 = v8) != 0) )
  {
    if ( v8 == 1 )
    {
      if ( (unsigned __int8)sub_55C30(a3) )
      {
        if ( a2 )
          *a2 = 138;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 2;
    }
  }
  else
  {
    return 0;
  }
  return v6;
}
