unsigned __int64 __fastcall sub_3BD3C0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 addr; // rax

  if ( (unsigned __int8)sub_3FC580(a1) )
  {
    v2 = sub_3FCE10(a1, a2);
    if ( a2 + 1 == v2 )
      return v2;
  }
  else
  {
    v2 = -1;
  }
  addr = rangeset_t_next_addr(a1 + 1040, a2);
  if ( v2 > addr )
    return addr;
  return v2;
}
