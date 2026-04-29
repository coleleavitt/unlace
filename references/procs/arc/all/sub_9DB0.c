__int64 __fastcall sub_9DB0(__int64 a1, __int64 a2)
{
  unsigned int next_dword; // edx

  if ( (*(_BYTE *)(a2 + 16) & 3) != 0 )
    return 0;
  *(_BYTE *)(a2 + 45) = 2;
  *(_BYTE *)(a2 + 85) = 2;
  *(_BYTE *)(a2 + 125) = 2;
  next_dword = insn_get_next_dword(a2);
  *(_WORD *)(a2 + 24) = 0;
  if ( (next_dword >> 27) - 4 <= 2 )
    sub_9D20(a1, a2, next_dword);
  else
    sub_9310(a1, a2, next_dword);
  return *(unsigned __int16 *)(a2 + 26);
}
