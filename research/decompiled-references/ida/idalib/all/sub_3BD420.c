__int64 __fastcall sub_3BD420(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 addr; // rax
  unsigned __int64 v7; // rdx

  v2 = -1;
  v3 = a2;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 24LL) != 8 )
    v2 = 0x100000000LL;
  if ( a2 == v2 )
    v3 = -1;
  if ( !(unsigned __int8)sub_3FC580(a1) )
    return rangeset_t_prev_addr(a1 + 1040, v3);
  v5 = sub_3FCE40(a1, v3);
  if ( v3 - 1 != v5 )
  {
    addr = rangeset_t_prev_addr(a1 + 1040, v3);
    if ( v5 == -1 )
    {
      return addr;
    }
    else
    {
      v7 = addr;
      if ( v5 >= addr )
        v7 = v5;
      if ( addr != -1 )
        return v7;
    }
  }
  return v5;
}
