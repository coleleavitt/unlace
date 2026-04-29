__int64 __fastcall sub_2736C0(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  int v6; // r12d
  int v7; // eax
  int tinfo_size; // ebp
  int v9; // eax

  v3 = *a1;
  v4 = *a2;
  if ( !(_BYTE)v3 )
    return (unsigned int)-((_BYTE)v4 != 0);
  if ( !(_BYTE)v4 )
    return 1;
  if ( (get_tinfo_property(v3, 2) & 0x3F) != 1 && (get_tinfo_property(*a2, 2) & 0x3F) != 1 )
  {
    v6 = sub_329080(a1);
    v7 = sub_329080(a2);
    if ( v6 == v7 )
    {
      if ( (unsigned __int8)((get_tinfo_property(*a1, 2) & 0xF) - 10) <= 2u
        && (unsigned __int8)((get_tinfo_property(*a2, 2) & 0xF) - 10) > 2u )
      {
        return 1;
      }
      if ( (unsigned __int8)((get_tinfo_property(*a1, 2) & 0xF) - 10) <= 2u
        || (unsigned __int8)((get_tinfo_property(*a2, 2) & 0xF) - 10) > 2u )
      {
        tinfo_size = get_tinfo_size(0, *a1, 0);
        v9 = get_tinfo_size(0, *a2, 0);
        if ( tinfo_size >= v9 )
          return tinfo_size > v9;
      }
    }
    else if ( v6 <= v7 )
    {
      return 1;
    }
    return 0xFFFFFFFFLL;
  }
  if ( (get_tinfo_property(*a1, 2) & 0x3F) != 1 )
    return 1;
  return (unsigned int)-((get_tinfo_property(*a2, 2) & 0x3F) != 1);
}
