__int64 __fastcall sub_3EE5A0(__int64 a1)
{
  int v2; // eax

  if ( *(_DWORD *)(*(_QWORD *)(a1 + 832) + 80LL) != 8 )
    return 0;
  if ( (getinf(57) & 0xF) != 1
    || *(_BYTE *)(a1 + 876)
    || (*(_QWORD *)(a1 + 64) & 0xFFFF00000000FF00LL) == 0x93000000000100LL
    || (*(_QWORD *)(a1 + 104) & 0xFFFF00000000FF00LL) == 0x93000000000100LL )
  {
    return 0;
  }
  v2 = *(unsigned __int16 *)(a1 + 48);
  if ( (((_WORD)v2 - 30) & 0xFFFD) == 0 )
    return sub_3EE540(a1, a1 + 104);
  if ( (unsigned int)(v2 - 474) > 1 )
    return 0;
  return sub_3EE540(a1, a1 + 144);
}
