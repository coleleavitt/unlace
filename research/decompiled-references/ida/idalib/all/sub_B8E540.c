unsigned __int64 __fastcall sub_B8E540(unsigned __int64 a1)
{
  __int64 v1; // rdi
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) != 4 || *(_BYTE *)(a1 + 9) >> 5 != 1 )
  {
    while ( 1 )
    {
      v1 = *(_QWORD *)(sub_B8C1B0(a1) + 16);
      if ( (v1 & 4) != 0 )
      {
        a1 = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v2 = *(_BYTE *)(a1 + 8) & 0x7F;
        if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
          return 0;
      }
      else
      {
        a1 = v1 & 0xFFFFFFFFFFFFFFF8LL;
        v2 = *(_BYTE *)(a1 + 8) & 0x7F;
        if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
          return 0;
      }
      if ( v2 == 4 && *(_BYTE *)(a1 + 9) >> 5 == 1 )
        return a1 - 40;
    }
  }
  return a1 - 40;
}
