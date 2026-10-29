__int64 __fastcall sub_3EA490(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int8 (__fastcall *a4)(_QWORD, __int64),
        __int64 a5)
{
  __int64 addr; // rbx
  __int64 v10; // rax
  unsigned __int8 v11; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-40h]

  LODWORD(addr) = a2;
  v12 = __readfsqword(0x28u);
  if ( a4 )
  {
    while ( (unsigned int)addr < a3 )
    {
      sub_3B9CB0(a1, &v11, addr);
      if ( a4(v11 | 0x100u, a5) )
        return (unsigned int)addr;
      sub_3E9710(a1, 0);
      addr = (unsigned int)rangeset_t_next_addr(a1 + 808, (unsigned int)addr);
      if ( (unsigned __int8)sub_658CB0(a5, addr) )
        return 0xFFFFFFFFLL;
    }
  }
  else
  {
    do
    {
      if ( (unsigned int)addr >= a3 )
        break;
      v10 = sub_4EE820(a1 + 1552, (unsigned int)addr);
      if ( !v10 )
        break;
      if ( (*(_BYTE *)(v10 + 22) & 4) != 0 )
        return (unsigned int)addr;
      LODWORD(addr) = *(_DWORD *)(v10 + 4);
    }
    while ( !(unsigned __int8)sub_658CB0(a5, (unsigned int)addr) );
  }
  return 0xFFFFFFFFLL;
}

