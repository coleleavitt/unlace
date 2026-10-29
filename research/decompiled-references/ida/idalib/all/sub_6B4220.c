char __fastcall sub_6B4220(__int64 **a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4, char a5, char a6)
{
  unsigned __int8 v7; // cl

  v7 = 0;
  if ( (a5 & 0x20) == 0 && (v7 = 1, a6) )
  {
    if ( !sub_6B4170(a1, a2, a3, (unsigned __int8)(a5 - 4) > 1u) )
      return 0;
  }
  else if ( !sub_6B4170(a1, a2, a3, v7) )
  {
    return 0;
  }
  return sub_6B4170(a1, a2, a4, 0);
}
