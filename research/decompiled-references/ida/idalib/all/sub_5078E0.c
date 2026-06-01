__int64 __fastcall sub_5078E0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  unsigned __int64 *v3; // rax
  __int64 addr; // rbp
  unsigned __int64 v6; // rax

  v2 = sub_503EE0(a1, a2);
  if ( v2 != -1 || (v6 = next_addr(a2), addr = v6, v6 != -1) && (v2 = sub_503EE0(a1, v6), v2 != -1) )
  {
    v3 = sub_505DE0(a1, v2);
    do
    {
      addr = v3[1];
      if ( (unsigned __int8)is_mapped(addr) )
      {
        if ( ++v2 >= (unsigned int)sub_503DD0(a1) )
          return addr;
      }
      else
      {
        ++v2;
        addr = next_addr(addr);
        if ( v2 >= (unsigned int)sub_503DD0(a1) )
          return addr;
      }
      v3 = sub_505DE0(a1, v2);
    }
    while ( *v3 == addr );
  }
  return addr;
}
