__int64 __fastcall sub_4F02F0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // rax
  unsigned int addr; // ebp
  unsigned int v6; // eax

  v2 = sub_4EC9F0(a1, a2);
  if ( v2 != -1 || (v6 = next_addr((unsigned int)a2), addr = v6, v6 != -1) && (v2 = sub_4EC9F0(a1, v6), v2 != -1) )
  {
    v3 = sub_4EE890(a1, v2);
    do
    {
      addr = v3[1];
      if ( (unsigned __int8)is_mapped(addr) )
      {
        if ( ++v2 >= (unsigned int)sub_4EC8E0(a1) )
          return addr;
      }
      else
      {
        ++v2;
        addr = next_addr(addr);
        if ( v2 >= (unsigned int)sub_4EC8E0(a1) )
          return addr;
      }
      v3 = sub_4EE890(a1, v2);
    }
    while ( *v3 == addr );
  }
  return addr;
}

