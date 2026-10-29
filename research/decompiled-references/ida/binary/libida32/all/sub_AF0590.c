__int64 __fastcall sub_AF0590(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    return dword_23BF560[(unsigned int)sub_F83A90(a1)];
  else
    return dword_23BF560[*(_BYTE *)(a1 + 34) >> 4];
}

