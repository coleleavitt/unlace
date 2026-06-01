__int64 __fastcall sub_D2680(__int64 a1)
{
  if ( *(_DWORD *)a1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) == 0 )
    {
      sub_D2300(a1);
      if ( !(unsigned int)decode_insn() )
        *(_QWORD *)(a1 + 32) = -1;
      *(_DWORD *)(a1 + 4) |= 2u;
    }
    return a1 + 16;
  }
  else
  {
    *(_QWORD *)(a1 + 32) = -1;
    return a1 + 16;
  }
}

