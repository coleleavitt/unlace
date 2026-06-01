_BOOL8 __fastcall sub_3C2A10(unsigned int a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  char v5; // dl
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(qword_2CA1698 + 1480);
  if ( !(unsigned __int8)sub_3EA400(v1, a1) && !rangeset_t_find_range(v1 + 1032, a1) )
    return 0;
  if ( (sub_3B9AA0(v1, a1, 4) & 0x600) == 0x200 )
    return 0;
  v2 = sub_4EE820(v1 + 1552, a1);
  if ( v2 )
  {
    if ( (getinf(45) & 0x80u) == 0LL && (*(_BYTE *)(v2 + 24) & 4) != 0 && *(_DWORD *)v2 != a1 )
      return 0;
    if ( (getinf(45) & 0x40) == 0 )
    {
      v3 = sub_4EE820(v1 + 1624, a1);
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 8) & 0x40) != 0 && *(_DWORD *)v3 != a1 )
          return 0;
      }
    }
    v4 = sub_4EE820(v1 + 1360, a1);
    if ( v4 )
    {
      if ( !*(_BYTE *)(v4 + 32) )
        return 0;
    }
  }
  v5 = getinf(45);
  result = 1;
  if ( (v5 & 0x20) == 0 )
    return (get_aflags(a1) & 0x10) == 0;
  return result;
}

