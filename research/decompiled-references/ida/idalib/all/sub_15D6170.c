__int64 __fastcall sub_15D6170(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 34) & 0xF0) == 0xF0 )
    return sub_FA77D0(a2);
  else
    return *(_BYTE *)(a2 + 34) >> 4;
}
