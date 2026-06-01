_BOOL8 __fastcall sub_3C7B70(unsigned __int64 a1)
{
  _QWORD *v1; // rbp
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  char v5; // dl
  _BOOL8 result; // rax

  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  if ( !(unsigned __int8)sub_3FD360(v1, a1) && !rangeset_t_find_range(v1 + 130, a1) )
    return 0;
  if ( (sub_3BE900(v1, a1, 4) & 0x600) == 0x200 )
    return 0;
  v2 = sub_505D70(v1 + 203, a1);
  if ( v2 )
  {
    if ( (getinf(45) & 0x80u) == 0LL && (*(_BYTE *)(v2 + 44) & 4) != 0 && *(_QWORD *)v2 != a1 )
      return 0;
    if ( (getinf(45) & 0x40) == 0 )
    {
      v3 = sub_505D70(v1 + 213, a1);
      if ( v3 )
      {
        if ( (*(_BYTE *)(v3 + 16) & 0x40) != 0 && *(_QWORD *)v3 != a1 )
          return 0;
      }
    }
    v4 = sub_505D70(v1 + 175, a1);
    if ( v4 )
    {
      if ( !*(_BYTE *)(v4 + 40) )
        return 0;
    }
  }
  v5 = getinf(45);
  result = 1;
  if ( (v5 & 0x20) == 0 )
    return (get_aflags(a1) & 0x10) == 0;
  return result;
}
