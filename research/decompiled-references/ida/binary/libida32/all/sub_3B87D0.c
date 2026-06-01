__int64 __fastcall sub_3B87D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebp
  unsigned int addr; // eax

  if ( (unsigned __int8)sub_3E9640(a1) )
  {
    v2 = sub_3E9EF0(a1, a2);
    if ( a2 + 1 == v2 )
      return v2;
  }
  else
  {
    v2 = -1;
  }
  addr = rangeset_t_next_addr(a1 + 1032, a2);
  if ( v2 > addr )
    return addr;
  return v2;
}

