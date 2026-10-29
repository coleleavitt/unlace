__int64 __fastcall sub_3B8820(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ebp
  unsigned int addr; // eax
  unsigned int v5; // edx

  if ( !(unsigned __int8)sub_3E9640(a1) )
    return rangeset_t_prev_addr(a1 + 1032, a2);
  v3 = sub_3E9F20(a1, a2);
  if ( a2 - 1 != v3 )
  {
    addr = rangeset_t_prev_addr(a1 + 1032, a2);
    if ( v3 == -1 )
    {
      return addr;
    }
    else
    {
      v5 = addr;
      if ( v3 >= addr )
        v5 = v3;
      if ( addr != -1 )
        return v5;
    }
  }
  return v3;
}

