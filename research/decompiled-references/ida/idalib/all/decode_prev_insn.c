__int64 __fastcall decode_prev_insn(__int64 a1, __int64 a2, double a3)
{
  __int64 not_tail; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !a1 )
  {
    if ( !under_debugger )
      interr(1407);
    BUG();
  }
  not_tail = prev_not_tail(a2);
  v4 = not_tail;
  if ( not_tail == -1
    || (~((unsigned __int16)get_flags_ex(not_tail, 4) >> 8) & 6) != 0
    || !(unsigned int)decode_insn(a1, v4, v5, v6, v7, v8, a3) )
  {
    return -1;
  }
  else
  {
    return v4;
  }
}
