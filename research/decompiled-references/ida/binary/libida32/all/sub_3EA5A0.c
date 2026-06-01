__int64 __fastcall sub_3EA5A0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 (__fastcall *a4)(_QWORD, __int64),
        __int64 a5)
{
  unsigned int addr; // eax
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  while ( 1 )
  {
    sub_3E9710(a1, 0);
    addr = rangeset_t_prev_addr(a1 + 808, a2);
    a2 = addr;
    if ( addr == -1 || addr < a3 || (unsigned __int8)sub_658CB0(a5, addr) )
      break;
    if ( a4 )
    {
      sub_3B9CB0(a1, &v12, a2);
      if ( a4(v12 | 0x100u, a5) )
        return a2;
    }
    else
    {
      v11 = sub_4EE820(a1 + 1552, a2);
      if ( !v11 )
        return 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(v11 + 22) & 4) != 0 )
        return a2;
      a2 = *(_DWORD *)v11;
    }
  }
  return 0xFFFFFFFFLL;
}

