__int64 __fastcall sub_3FD400(
        _QWORD *a1,
        unsigned __int64 addr,
        unsigned __int64 a3,
        unsigned __int8 (__fastcall *a4)(_QWORD, __int64),
        __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // rax
  unsigned __int8 v13; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  if ( a4 )
  {
    while ( addr < a3 )
    {
      sub_3BEB30(a1, &v13, addr);
      if ( a4(v13 | 0x100u, a5) )
        return addr;
      sub_3FC650((__int64)a1, 0, v9, v10);
      addr = rangeset_t_next_addr(a1 + 102, addr);
      if ( (unsigned __int8)sub_676C20(a5, addr) )
        return -1;
    }
  }
  else
  {
    do
    {
      if ( addr >= a3 )
        break;
      v12 = sub_505D70(a1 + 203, addr);
      if ( !v12 )
        break;
      if ( (*(_BYTE *)(v12 + 42) & 4) != 0 )
        return addr;
      addr = *(_QWORD *)(v12 + 8);
    }
    while ( !(unsigned __int8)sub_676C20(a5, addr) );
  }
  return -1;
}
