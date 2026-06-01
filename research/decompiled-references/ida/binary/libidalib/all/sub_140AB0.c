bool __fastcall sub_140AB0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx
  int v4; // eax

  if ( a3 )
  {
    LOBYTE(v4) = a2 == *(_QWORD *)(a1 + 176);
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 8);
    LOBYTE(v4) = 1;
    if ( (v3 & 1) != 0 )
    {
      if ( dword_25274C <= 0 || (LOBYTE(v4) = 0, (*(_BYTE *)(dbg + 32LL) & 0x40) == 0) )
      {
        LOBYTE(v4) = 1;
        if ( (v3 & 2) != 0 )
          return !sub_CC260();
      }
    }
  }
  return v4;
}

