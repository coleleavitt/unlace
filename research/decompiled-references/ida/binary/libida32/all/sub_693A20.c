char __fastcall sub_693A20(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4, char a5, char a6)
{
  char v7; // cl

  v7 = 0;
  if ( (a5 & 0x20) == 0 && (v7 = 1, a6) )
  {
    if ( !sub_6939A0(a1, a2, a3, (unsigned __int8)(a5 - 4) > 1u) )
      return 0;
  }
  else if ( !sub_6939A0(a1, a2, a3, v7) )
  {
    return 0;
  }
  return sub_6939A0(a1, a2, a4, 0);
}

