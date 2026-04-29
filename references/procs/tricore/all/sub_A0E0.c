__int64 __fastcall sub_A0E0(__int64 a1, __int64 a2, double a3)
{
  unsigned int next_dword; // eax
  unsigned int v4; // edx

  next_dword = insn_get_next_dword(a2);
  v4 = next_dword;
  if ( (next_dword & 1) == 0 )
  {
    v4 = (unsigned __int16)next_dword;
    *(_WORD *)(a2 + 26) = 2;
  }
  return sub_A020(a1, a2, v4, a3);
}
