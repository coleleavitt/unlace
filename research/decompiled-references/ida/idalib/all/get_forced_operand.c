__int64 __fastcall get_forced_operand(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 flags; // rax
  __int64 v5; // rax

  flags = get_flags_ex(a2, 0);
  if ( !(unsigned __int8)is_manual(flags, a3) || (a3 & 8) != 0 )
    return -1;
  v5 = ea2node(a2);
  return netnode_qsupstr(v5, a1, qword_23AD820[a3 & 0xF], 83);
}
