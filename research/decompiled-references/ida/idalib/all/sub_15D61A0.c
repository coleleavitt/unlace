__int64 __fastcall sub_15D61A0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 34) & 0xF0) == 0xF0 )
    return dword_261CA20[(unsigned int)sub_FA77D0(a2)];
  else
    return dword_261CA20[*(_BYTE *)(a2 + 34) >> 4];
}
