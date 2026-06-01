bool __fastcall sub_F58260(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  unsigned __int16 v3; // dx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
  {
    v3 = (*(_WORD *)(v1 + 18) >> 3) & 0x1FF;
    if ( ((v3 + 464) & 0x1FFu) > 0x37 )
    {
      result = 1;
      if ( (unsigned int)v3 - 108 > 0x142 && v3 != 431 )
        return v3 == 434;
    }
    else
    {
      return 1;
    }
  }
  return result;
}
