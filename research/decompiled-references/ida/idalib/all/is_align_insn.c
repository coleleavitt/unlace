__int64 __fastcall is_align_insn(__int64 a1)
{
  unsigned int auto_state; // eax
  unsigned int v3; // ebp
  unsigned int v4; // ebx

  auto_state = get_auto_state();
  if ( !auto_state )
    return (unsigned int)sub_3792E0(0x2Bu, a1);
  v3 = auto_state;
  if ( (get_aflags(a1) & 0x10000000) == 0 )
    return (unsigned int)sub_3792E0(0x2Bu, a1);
  set_auto_state(0);
  v4 = sub_3792E0(0x2Bu, a1);
  set_auto_state(v3);
  return v4;
}
