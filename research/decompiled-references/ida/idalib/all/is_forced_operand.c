char __fastcall is_forced_operand(__int64 a1, unsigned int a2)
{
  __int64 flags; // rax
  char result; // al

  flags = get_flags_ex(a1, 0);
  result = is_manual(flags, a2);
  if ( result )
    return get_forced_operand(0, a1, a2) > 0;
  return result;
}
