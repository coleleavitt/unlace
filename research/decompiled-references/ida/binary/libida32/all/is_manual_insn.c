__int64 __fastcall is_manual_insn(__int64 a1)
{
  return ((unsigned int)get_aflags(a1) >> 5) & 1;
}

