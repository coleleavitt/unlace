__int64 __fastcall sub_3FD510(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int8 (__fastcall *a4)(_QWORD, __int64),
        __int64 a5)
{
  unsigned __int64 addr; // rax
  __int64 v11; // rax
  unsigned __int8 v12; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  while ( 1 )
  {
    sub_3FC650((__int64)a1, 0, a3, (__int64)a4);
    addr = rangeset_t_prev_addr(a1 + 102, a2);
    a2 = addr;
    if ( addr == -1 || addr < a3 || (unsigned __int8)sub_676C20(a5, addr) )
      break;
    if ( a4 )
    {
      sub_3BEB30(a1, &v12, a2);
      if ( a4(v12 | 0x100u, a5) )
        return a2;
    }
    else
    {
      v11 = sub_505D70(a1 + 203, a2);
      if ( !v11 )
        return -1;
      if ( (*(_BYTE *)(v11 + 42) & 4) != 0 )
        return a2;
      a2 = *(_QWORD *)v11;
    }
  }
  return -1;
}
