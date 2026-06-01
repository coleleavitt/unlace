__int64 __fastcall sub_B16590(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    return dword_23E36A0[(unsigned int)sub_FA77D0(a1)];
  else
    return dword_23E36A0[*(_BYTE *)(a1 + 34) >> 4];
}
