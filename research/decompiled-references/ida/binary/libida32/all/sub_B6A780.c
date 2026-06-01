bool __fastcall sub_B6A780(unsigned __int64 a1)
{
  int v1; // eax
  __int64 v2; // rdi

  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 4 )
    return *(_BYTE *)(a1 + 9) >> 5 == 1;
  do
  {
    v2 = *(_QWORD *)(sub_B68470(a1) + 16);
    if ( (v2 & 4) != 0 )
    {
      a1 = *(_QWORD *)((v2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      v1 = *(_BYTE *)(a1 + 8) & 0x7F;
      if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
        return 0;
    }
    else
    {
      a1 = v2 & 0xFFFFFFFFFFFFFFF8LL;
      v1 = *(_BYTE *)(a1 + 8) & 0x7F;
      if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
        return 0;
    }
  }
  while ( v1 != 4 );
  return *(_BYTE *)(a1 + 9) >> 5 == 1;
}

