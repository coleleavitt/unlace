__int64 __fastcall sub_4F0240(__int64 a1, __int64 a2)
{
  unsigned int addr; // ebx
  unsigned int v3; // ebp
  unsigned int *v4; // rax
  unsigned int v5; // eax
  __int64 result; // rax

  addr = a2;
  v3 = sub_4EC9F0(a1, a2);
  if ( v3 != -1
    || (addr = prev_addr((unsigned int)a2), result = 0xFFFFFFFFLL, addr != -1)
    && (v3 = sub_4EC9F0(a1, addr), result = addr, v3 != -1) )
  {
    v4 = sub_4EE890(a1, v3);
    do
    {
      v5 = *v4;
      if ( !v5 )
        break;
      addr = v5 - 1;
      if ( (unsigned __int8)is_mapped(v5 - 1) )
      {
        if ( (--v3 & 0x80000000) != 0 )
          return addr;
      }
      else
      {
        addr = prev_addr(addr);
        if ( (--v3 & 0x80000000) != 0 )
          return addr;
      }
      v4 = sub_4EE890(a1, v3);
    }
    while ( v4[1] - 1 == addr );
    return addr;
  }
  return result;
}

