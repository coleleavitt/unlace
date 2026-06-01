__int64 __fastcall decode_prev_insn(__int64 a1, unsigned int a2)
{
  unsigned int not_tail; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1407);
    BUG();
  }
  not_tail = prev_not_tail(a2);
  v3 = not_tail;
  if ( not_tail == -1
    || (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) != 0
    || !(unsigned int)decode_insn(a1, v3, v4, v5, v6, v7) )
  {
    return 0xFFFFFFFFLL;
  }
  else
  {
    return v3;
  }
}

