bool __fastcall sub_F582D0(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al
  unsigned __int16 v3; // ax

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( *(_BYTE *)(v1 + 16) == 13 )
  {
    v3 = (*(_WORD *)(v1 + 18) >> 3) & 0x1FF;
    return ((v3 + 464) & 0x1FFu) <= 0x37 || (unsigned int)v3 - 108 <= 0x142;
  }
  return result;
}
